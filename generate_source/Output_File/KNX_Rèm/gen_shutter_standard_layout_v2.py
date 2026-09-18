#!/usr/bin/env python3
"""Generate the Shutter/Curtain XML with the standard parameter layout v2.`r`n`r`nThe script embeds the complete base XML, applies the standard layout rules,`r`nand writes the full v2 XML without reading another XML file.`r`n"""

from __future__ import annotations

from collections import Counter
from html import escape
from pathlib import Path
import re


BASE_XML = r"""<?xml version="1.0" encoding="utf-8" ?>
<KNX xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xmlns:xsd="http://www.w3.org/2001/XMLSchema" CreatedBy="KNX MT" ToolVersion="5.6.0.0" xmlns="http://knx.org/xml/project/14">
  <ManufacturerData>
    <Manufacturer RefId="M-035A">
      <Catalog>
        <CatalogSection Id="M-035A_CS-1" Name="Lumi Devices" Number="1" DefaultLanguage="en-US">
          <CatalogItem Id="M-035A_H-1234_HP-1234-56-00001_CI-LM1CK16RE" Name="Lumi Shutter/Curtain actuator, 4 relay 16A SE" Number="1" ProductRefId="M-035A_H-1234_P-LM1CK16RE" Hardware2ProgramRefId="M-035A_H-1234_HP-1234-56-00001" DefaultLanguage="en-US" />
        </CatalogSection>
      </Catalog>
      <Hardware>
        <Hardware Id="M-035A_H-1234" Name="Lumi Shutter/Curtain actuator, 4 relay 16A SE" SerialNumber="SH-4RL-2026" VersionNumber="1" BusCurrent="10" HasIndividualAddress="true" HasApplicationProgram="true">
          <Products>
            <Product Id="M-035A_H-1234_P-LM1CK16RE" Text="Lumi Shutter/Curtain actuator, 4 relay 16A SE" OrderNumber="LM1CK16RE" IsRailMounted="true" DefaultLanguage="en-US" />
          </Products>
          <Hardware2Programs>
            <Hardware2Program Id="M-035A_H-1234_HP-1234-56-00001" MediumTypes="MT-0">
              <ApplicationProgramRef RefId="M-035A_A-1234-56-00001" />
            </Hardware2Program>
          </Hardware2Programs>
        </Hardware>
      </Hardware>
      <ApplicationPrograms>
        <ApplicationProgram Id="M-035A_A-1234-56-00001" ApplicationNumber="1" ApplicationVersion="1" ProgramType="ApplicationProgram" MaskVersion="MV-07B0" Name="Shutter/Curtain actuator 4-relay 16A" LoadProcedureStyle="MergedProcedure" PeiType="0" DefaultLanguage="en-US" DynamicTableManagement="false" Linkable="false" MinEtsVersion="4.0" IsSecureEnabled="true" MaxUserEntries="1" MaxSecurityProxyGroupKeyTableEntries="0" MaxSecurityIndividualAddressEntries="500" MaxTunnelingUserEntries="0" MaxSecurityP2PKeyTableEntries="0" MaxSecurityGroupKeyTableEntries="512">
          <Static>
            <Code>
              <RelativeSegment Id="M-035A_A-1234-56-00001_RS-04-00001" Name="Parameters" Size="30" LoadStateMachine="4" Offset="0" />
            </Code>
            <Options SupportsExtendedMemoryServices="true" SupportsExtendedPropertyServices="true" />
            <ParameterTypes>
              <ParameterType Id="M-035A_A-1234-56-00001_PT-1" Name="Shutter/Curtain type">
                <TypeRestriction Base="Value" SizeInBit="8">
                  <Enumeration Text="Standard 3-wire Motor (HOZ_DZ3W)" Value="1" Id="M-035A_A-1234-56-00001_PT-1_EN-1" />
                  <Enumeration Text="Standard 4-wire Motor (HOZ_DZ4W)" Value="2" Id="M-035A_A-1234-56-00001_PT-1_EN-2" />
                  <Enumeration Text="AutoHome Intelligent (HOZ_DT99)" Value="3" Id="M-035A_A-1234-56-00001_PT-1_EN-3" />
                  <Enumeration Text="Pulse-driven 3-wire (HOZ_DZ3WP)" Value="4" Id="M-035A_A-1234-56-00001_PT-1_EN-4" />
                  <Enumeration Text="Direct 220V Roll-up (VER_220)" Value="5" Id="M-035A_A-1234-56-00001_PT-1_EN-5" />
                </TypeRestriction>
              </ParameterType>

              <ParameterType Id="M-035A_A-1234-56-00001_PT-3" Name="TimeSec_PT">
                <TypeNumber Type="unsignedInt" SizeInBit="16" minInclusive="1" maxInclusive="300" />
              </ParameterType>
              <ParameterType Id="M-035A_A-1234-56-00001_PT-6" Name="StartupBehaviour_PT">
                <TypeRestriction Base="Value" SizeInBit="8">
                  <Enumeration Text="Maintain state (No movement)" Value="0" Id="M-035A_A-1234-56-00001_PT-6_EN-0" />
                  <Enumeration Text="Move to Full Open" Value="1" Id="M-035A_A-1234-56-00001_PT-6_EN-1" />
                  <Enumeration Text="Move to Full Close" Value="2" Id="M-035A_A-1234-56-00001_PT-6_EN-2" />
                  <Enumeration Text="Restore last known position" Value="3" Id="M-035A_A-1234-56-00001_PT-6_EN-3" />
                </TypeRestriction>
              </ParameterType>
              <ParameterType Id="M-035A_A-1234-56-00001_PT-7" Name="Enable_PT">
                <TypeRestriction Base="Value" SizeInBit="1">
                  <Enumeration Text="No" Value="0" Id="M-035A_A-1234-56-00001_PT-7_EN-0" />
                  <Enumeration Text="Yes" Value="1" Id="M-035A_A-1234-56-00001_PT-7_EN-1" />
                </TypeRestriction>
              </ParameterType>

              <ParameterType Id="M-035A_A-1234-56-00001_PT-9" Name="SceneNumber_PT">
                <TypeRestriction Base="Value" SizeInBit="8">
                  <Enumeration Text="not active" Value="0" Id="M-035A_A-1234-56-00001_PT-9_EN-NA" />
                  <Enumeration Text="Scene No. 1" Value="1" Id="M-035A_A-1234-56-00001_PT-9_EN-1" />
                  <Enumeration Text="Scene No. 2" Value="2" Id="M-035A_A-1234-56-00001_PT-9_EN-2" />
                  <Enumeration Text="Scene No. 3" Value="3" Id="M-035A_A-1234-56-00001_PT-9_EN-3" />
                  <Enumeration Text="Scene No. 4" Value="4" Id="M-035A_A-1234-56-00001_PT-9_EN-4" />
                  <Enumeration Text="Scene No. 5" Value="5" Id="M-035A_A-1234-56-00001_PT-9_EN-5" />
                  <Enumeration Text="Scene No. 6" Value="6" Id="M-035A_A-1234-56-00001_PT-9_EN-6" />
                  <Enumeration Text="Scene No. 7" Value="7" Id="M-035A_A-1234-56-00001_PT-9_EN-7" />
                  <Enumeration Text="Scene No. 8" Value="8" Id="M-035A_A-1234-56-00001_PT-9_EN-8" />
                  <Enumeration Text="Scene No. 9" Value="9" Id="M-035A_A-1234-56-00001_PT-9_EN-9" />
                  <Enumeration Text="Scene No. 10" Value="10" Id="M-035A_A-1234-56-00001_PT-9_EN-10" />
                  <Enumeration Text="Scene No. 11" Value="11" Id="M-035A_A-1234-56-00001_PT-9_EN-11" />
                  <Enumeration Text="Scene No. 12" Value="12" Id="M-035A_A-1234-56-00001_PT-9_EN-12" />
                  <Enumeration Text="Scene No. 13" Value="13" Id="M-035A_A-1234-56-00001_PT-9_EN-13" />
                  <Enumeration Text="Scene No. 14" Value="14" Id="M-035A_A-1234-56-00001_PT-9_EN-14" />
                  <Enumeration Text="Scene No. 15" Value="15" Id="M-035A_A-1234-56-00001_PT-9_EN-15" />
                  <Enumeration Text="Scene No. 16" Value="16" Id="M-035A_A-1234-56-00001_PT-9_EN-16" />
                  <Enumeration Text="Scene No. 17" Value="17" Id="M-035A_A-1234-56-00001_PT-9_EN-17" />
                  <Enumeration Text="Scene No. 18" Value="18" Id="M-035A_A-1234-56-00001_PT-9_EN-18" />
                  <Enumeration Text="Scene No. 19" Value="19" Id="M-035A_A-1234-56-00001_PT-9_EN-19" />
                  <Enumeration Text="Scene No. 20" Value="20" Id="M-035A_A-1234-56-00001_PT-9_EN-20" />
                  <Enumeration Text="Scene No. 21" Value="21" Id="M-035A_A-1234-56-00001_PT-9_EN-21" />
                  <Enumeration Text="Scene No. 22" Value="22" Id="M-035A_A-1234-56-00001_PT-9_EN-22" />
                  <Enumeration Text="Scene No. 23" Value="23" Id="M-035A_A-1234-56-00001_PT-9_EN-23" />
                  <Enumeration Text="Scene No. 24" Value="24" Id="M-035A_A-1234-56-00001_PT-9_EN-24" />
                  <Enumeration Text="Scene No. 25" Value="25" Id="M-035A_A-1234-56-00001_PT-9_EN-25" />
                  <Enumeration Text="Scene No. 26" Value="26" Id="M-035A_A-1234-56-00001_PT-9_EN-26" />
                  <Enumeration Text="Scene No. 27" Value="27" Id="M-035A_A-1234-56-00001_PT-9_EN-27" />
                  <Enumeration Text="Scene No. 28" Value="28" Id="M-035A_A-1234-56-00001_PT-9_EN-28" />
                  <Enumeration Text="Scene No. 29" Value="29" Id="M-035A_A-1234-56-00001_PT-9_EN-29" />
                  <Enumeration Text="Scene No. 30" Value="30" Id="M-035A_A-1234-56-00001_PT-9_EN-30" />
                  <Enumeration Text="Scene No. 31" Value="31" Id="M-035A_A-1234-56-00001_PT-9_EN-31" />
                  <Enumeration Text="Scene No. 32" Value="32" Id="M-035A_A-1234-56-00001_PT-9_EN-32" />
                  <Enumeration Text="Scene No. 33" Value="33" Id="M-035A_A-1234-56-00001_PT-9_EN-33" />
                  <Enumeration Text="Scene No. 34" Value="34" Id="M-035A_A-1234-56-00001_PT-9_EN-34" />
                  <Enumeration Text="Scene No. 35" Value="35" Id="M-035A_A-1234-56-00001_PT-9_EN-35" />
                  <Enumeration Text="Scene No. 36" Value="36" Id="M-035A_A-1234-56-00001_PT-9_EN-36" />
                  <Enumeration Text="Scene No. 37" Value="37" Id="M-035A_A-1234-56-00001_PT-9_EN-37" />
                  <Enumeration Text="Scene No. 38" Value="38" Id="M-035A_A-1234-56-00001_PT-9_EN-38" />
                  <Enumeration Text="Scene No. 39" Value="39" Id="M-035A_A-1234-56-00001_PT-9_EN-39" />
                  <Enumeration Text="Scene No. 40" Value="40" Id="M-035A_A-1234-56-00001_PT-9_EN-40" />
                  <Enumeration Text="Scene No. 41" Value="41" Id="M-035A_A-1234-56-00001_PT-9_EN-41" />
                  <Enumeration Text="Scene No. 42" Value="42" Id="M-035A_A-1234-56-00001_PT-9_EN-42" />
                  <Enumeration Text="Scene No. 43" Value="43" Id="M-035A_A-1234-56-00001_PT-9_EN-43" />
                  <Enumeration Text="Scene No. 44" Value="44" Id="M-035A_A-1234-56-00001_PT-9_EN-44" />
                  <Enumeration Text="Scene No. 45" Value="45" Id="M-035A_A-1234-56-00001_PT-9_EN-45" />
                  <Enumeration Text="Scene No. 46" Value="46" Id="M-035A_A-1234-56-00001_PT-9_EN-46" />
                  <Enumeration Text="Scene No. 47" Value="47" Id="M-035A_A-1234-56-00001_PT-9_EN-47" />
                  <Enumeration Text="Scene No. 48" Value="48" Id="M-035A_A-1234-56-00001_PT-9_EN-48" />
                  <Enumeration Text="Scene No. 49" Value="49" Id="M-035A_A-1234-56-00001_PT-9_EN-49" />
                  <Enumeration Text="Scene No. 50" Value="50" Id="M-035A_A-1234-56-00001_PT-9_EN-50" />
                  <Enumeration Text="Scene No. 51" Value="51" Id="M-035A_A-1234-56-00001_PT-9_EN-51" />
                  <Enumeration Text="Scene No. 52" Value="52" Id="M-035A_A-1234-56-00001_PT-9_EN-52" />
                  <Enumeration Text="Scene No. 53" Value="53" Id="M-035A_A-1234-56-00001_PT-9_EN-53" />
                  <Enumeration Text="Scene No. 54" Value="54" Id="M-035A_A-1234-56-00001_PT-9_EN-54" />
                  <Enumeration Text="Scene No. 55" Value="55" Id="M-035A_A-1234-56-00001_PT-9_EN-55" />
                  <Enumeration Text="Scene No. 56" Value="56" Id="M-035A_A-1234-56-00001_PT-9_EN-56" />
                  <Enumeration Text="Scene No. 57" Value="57" Id="M-035A_A-1234-56-00001_PT-9_EN-57" />
                  <Enumeration Text="Scene No. 58" Value="58" Id="M-035A_A-1234-56-00001_PT-9_EN-58" />
                  <Enumeration Text="Scene No. 59" Value="59" Id="M-035A_A-1234-56-00001_PT-9_EN-59" />
                  <Enumeration Text="Scene No. 60" Value="60" Id="M-035A_A-1234-56-00001_PT-9_EN-60" />
                  <Enumeration Text="Scene No. 61" Value="61" Id="M-035A_A-1234-56-00001_PT-9_EN-61" />
                  <Enumeration Text="Scene No. 62" Value="62" Id="M-035A_A-1234-56-00001_PT-9_EN-62" />
                  <Enumeration Text="Scene No. 63" Value="63" Id="M-035A_A-1234-56-00001_PT-9_EN-63" />
                  <Enumeration Text="Scene No. 64" Value="64" Id="M-035A_A-1234-56-00001_PT-9_EN-64" />
                </TypeRestriction>
              </ParameterType>
              <ParameterType Id="M-035A_A-1234-56-00001_PT-10" Name="Percent8_PT">
                <TypeNumber Type="unsignedInt" SizeInBit="8" minInclusive="0" maxInclusive="100" />
              </ParameterType>
              <ParameterType Id="M-035A_A-1234-56-00001_PT-11" Name="0..255_PT">
                <TypeNumber SizeInBit="8" Type="unsignedInt" minInclusive="0" maxInclusive="255" />
              </ParameterType>
            </ParameterTypes>
            <Parameters>
              <Parameter Id="M-035A_A-1234-56-00001_P-1" Name="MotorType" ParameterType="M-035A_A-1234-56-00001_PT-1" Text="Motor Type" Value="2"><Memory CodeSegment="M-035A_A-1234-56-00001_RS-04-00001" Offset="0" BitOffset="0" /></Parameter>
              <Parameter Id="M-035A_A-1234-56-00001_P-3" Name="TravelTime" ParameterType="M-035A_A-1234-56-00001_PT-3" Text="Time for Shutter/Curtain Up/Down(1-300 sec) (reference for 0-100% position)" SuffixText=" s" Value="20"><Memory CodeSegment="M-035A_A-1234-56-00001_RS-04-00001" Offset="2" BitOffset="0" /></Parameter>
              <Parameter Id="M-035A_A-1234-56-00001_P-12" Name="EnableScene" ParameterType="M-035A_A-1234-56-00001_PT-7" Text="Enable Scene Function" Value="0"><Memory CodeSegment="M-035A_A-1234-56-00001_RS-04-00001" Offset="6" BitOffset="2" /></Parameter>
              <Parameter Id="M-035A_A-1234-56-00001_P-13" Name="EnableSceneStore" ParameterType="M-035A_A-1234-56-00001_PT-7" Text="Enable Scene Store" Value="0"><Memory CodeSegment="M-035A_A-1234-56-00001_RS-04-00001" Offset="7" BitOffset="0" /></Parameter>


              <!-- Scene 1-10 Parameters -->
              <Parameter Id="M-035A_A-1234-56-00001_P-15" Name="SceneA_Num" ParameterType="M-035A_A-1234-56-00001_PT-9" Text="Scene A Number" Value="0"><Memory CodeSegment="M-035A_A-1234-56-00001_RS-04-00001" Offset="8" BitOffset="0" /></Parameter>
              <Parameter Id="M-035A_A-1234-56-00001_P-16" Name="SceneA_Pos" ParameterType="M-035A_A-1234-56-00001_PT-10" Text="Scene A Position" SuffixText=" %" Value="0"><Memory CodeSegment="M-035A_A-1234-56-00001_RS-04-00001" Offset="9" BitOffset="0" /></Parameter>

              <Parameter Id="M-035A_A-1234-56-00001_P-18" Name="SceneB_Num" ParameterType="M-035A_A-1234-56-00001_PT-9" Text="Scene B Number" Value="0"><Memory CodeSegment="M-035A_A-1234-56-00001_RS-04-00001" Offset="10" BitOffset="0" /></Parameter>
              <Parameter Id="M-035A_A-1234-56-00001_P-19" Name="SceneB_Pos" ParameterType="M-035A_A-1234-56-00001_PT-10" Text="Scene B Position" SuffixText=" %" Value="0"><Memory CodeSegment="M-035A_A-1234-56-00001_RS-04-00001" Offset="11" BitOffset="0" /></Parameter>

              <Parameter Id="M-035A_A-1234-56-00001_P-21" Name="SceneC_Num" ParameterType="M-035A_A-1234-56-00001_PT-9" Text="Scene C Number" Value="0"><Memory CodeSegment="M-035A_A-1234-56-00001_RS-04-00001" Offset="12" BitOffset="0" /></Parameter>
              <Parameter Id="M-035A_A-1234-56-00001_P-22" Name="SceneC_Pos" ParameterType="M-035A_A-1234-56-00001_PT-10" Text="Scene C Position" SuffixText=" %" Value="0"><Memory CodeSegment="M-035A_A-1234-56-00001_RS-04-00001" Offset="13" BitOffset="0" /></Parameter>

              <Parameter Id="M-035A_A-1234-56-00001_P-24" Name="SceneD_Num" ParameterType="M-035A_A-1234-56-00001_PT-9" Text="Scene D Number" Value="0"><Memory CodeSegment="M-035A_A-1234-56-00001_RS-04-00001" Offset="14" BitOffset="0" /></Parameter>
              <Parameter Id="M-035A_A-1234-56-00001_P-25" Name="SceneD_Pos" ParameterType="M-035A_A-1234-56-00001_PT-10" Text="Scene D Position" SuffixText=" %" Value="0"><Memory CodeSegment="M-035A_A-1234-56-00001_RS-04-00001" Offset="15" BitOffset="0" /></Parameter>

              <Parameter Id="M-035A_A-1234-56-00001_P-27" Name="SceneE_Num" ParameterType="M-035A_A-1234-56-00001_PT-9" Text="Scene E Number" Value="0"><Memory CodeSegment="M-035A_A-1234-56-00001_RS-04-00001" Offset="16" BitOffset="0" /></Parameter>
              <Parameter Id="M-035A_A-1234-56-00001_P-28" Name="SceneE_Pos" ParameterType="M-035A_A-1234-56-00001_PT-10" Text="Scene E Position" SuffixText=" %" Value="0"><Memory CodeSegment="M-035A_A-1234-56-00001_RS-04-00001" Offset="17" BitOffset="0" /></Parameter>

              <Parameter Id="M-035A_A-1234-56-00001_P-30" Name="SceneF_Num" ParameterType="M-035A_A-1234-56-00001_PT-9" Text="Scene F Number" Value="0"><Memory CodeSegment="M-035A_A-1234-56-00001_RS-04-00001" Offset="18" BitOffset="0" /></Parameter>
              <Parameter Id="M-035A_A-1234-56-00001_P-31" Name="SceneF_Pos" ParameterType="M-035A_A-1234-56-00001_PT-10" Text="Scene F Position" SuffixText=" %" Value="0"><Memory CodeSegment="M-035A_A-1234-56-00001_RS-04-00001" Offset="19" BitOffset="0" /></Parameter>

              <Parameter Id="M-035A_A-1234-56-00001_P-33" Name="SceneG_Num" ParameterType="M-035A_A-1234-56-00001_PT-9" Text="Scene G Number" Value="0"><Memory CodeSegment="M-035A_A-1234-56-00001_RS-04-00001" Offset="20" BitOffset="0" /></Parameter>
              <Parameter Id="M-035A_A-1234-56-00001_P-34" Name="SceneG_Pos" ParameterType="M-035A_A-1234-56-00001_PT-10" Text="Scene G Position" SuffixText=" %" Value="0"><Memory CodeSegment="M-035A_A-1234-56-00001_RS-04-00001" Offset="21" BitOffset="0" /></Parameter>

              <Parameter Id="M-035A_A-1234-56-00001_P-36" Name="SceneH_Num" ParameterType="M-035A_A-1234-56-00001_PT-9" Text="Scene H Number" Value="0"><Memory CodeSegment="M-035A_A-1234-56-00001_RS-04-00001" Offset="22" BitOffset="0" /></Parameter>
              <Parameter Id="M-035A_A-1234-56-00001_P-37" Name="SceneH_Pos" ParameterType="M-035A_A-1234-56-00001_PT-10" Text="Scene H Position" SuffixText=" %" Value="0"><Memory CodeSegment="M-035A_A-1234-56-00001_RS-04-00001" Offset="23" BitOffset="0" /></Parameter>

              <Parameter Id="M-035A_A-1234-56-00001_P-39" Name="SceneI_Num" ParameterType="M-035A_A-1234-56-00001_PT-9" Text="Scene I Number" Value="0"><Memory CodeSegment="M-035A_A-1234-56-00001_RS-04-00001" Offset="24" BitOffset="0" /></Parameter>
              <Parameter Id="M-035A_A-1234-56-00001_P-40" Name="SceneI_Pos" ParameterType="M-035A_A-1234-56-00001_PT-10" Text="Scene I Position" SuffixText=" %" Value="0"><Memory CodeSegment="M-035A_A-1234-56-00001_RS-04-00001" Offset="25" BitOffset="0" /></Parameter>

              <Parameter Id="M-035A_A-1234-56-00001_P-42" Name="SceneJ_Num" ParameterType="M-035A_A-1234-56-00001_PT-9" Text="Scene J Number" Value="0"><Memory CodeSegment="M-035A_A-1234-56-00001_RS-04-00001" Offset="26" BitOffset="0" /></Parameter>
              <Parameter Id="M-035A_A-1234-56-00001_P-43" Name="SceneJ_Pos" ParameterType="M-035A_A-1234-56-00001_PT-10" Text="Scene J Position" SuffixText=" %" Value="0"><Memory CodeSegment="M-035A_A-1234-56-00001_RS-04-00001" Offset="27" BitOffset="0" /></Parameter>
              <Parameter Id="M-035A_A-1234-56-00001_P-100" Name="Fixed_Value_DD" ParameterType="M-035A_A-1234-56-00001_PT-11" Value="221"><Memory CodeSegment="M-035A_A-1234-56-00001_RS-04-00001" Offset="28" BitOffset="0" /></Parameter>
            </Parameters>
            <ParameterRefs>
              <ParameterRef Id="M-035A_A-1234-56-00001_P-1_R-1" RefId="M-035A_A-1234-56-00001_P-1" />
              <ParameterRef Id="M-035A_A-1234-56-00001_P-3_R-3" RefId="M-035A_A-1234-56-00001_P-3" />
              <ParameterRef Id="M-035A_A-1234-56-00001_P-12_R-12" RefId="M-035A_A-1234-56-00001_P-12" />
              <ParameterRef Id="M-035A_A-1234-56-00001_P-13_R-13" RefId="M-035A_A-1234-56-00001_P-13" />

              <ParameterRef Id="M-035A_A-1234-56-00001_P-15_R-15" RefId="M-035A_A-1234-56-00001_P-15" />
              <ParameterRef Id="M-035A_A-1234-56-00001_P-16_R-16" RefId="M-035A_A-1234-56-00001_P-16" />
              <ParameterRef Id="M-035A_A-1234-56-00001_P-18_R-18" RefId="M-035A_A-1234-56-00001_P-18" />
              <ParameterRef Id="M-035A_A-1234-56-00001_P-19_R-19" RefId="M-035A_A-1234-56-00001_P-19" />
              <ParameterRef Id="M-035A_A-1234-56-00001_P-21_R-21" RefId="M-035A_A-1234-56-00001_P-21" />
              <ParameterRef Id="M-035A_A-1234-56-00001_P-22_R-22" RefId="M-035A_A-1234-56-00001_P-22" />
              <ParameterRef Id="M-035A_A-1234-56-00001_P-24_R-24" RefId="M-035A_A-1234-56-00001_P-24" />
              <ParameterRef Id="M-035A_A-1234-56-00001_P-25_R-25" RefId="M-035A_A-1234-56-00001_P-25" />
              <ParameterRef Id="M-035A_A-1234-56-00001_P-27_R-27" RefId="M-035A_A-1234-56-00001_P-27" />
              <ParameterRef Id="M-035A_A-1234-56-00001_P-28_R-28" RefId="M-035A_A-1234-56-00001_P-28" />
              <ParameterRef Id="M-035A_A-1234-56-00001_P-30_R-30" RefId="M-035A_A-1234-56-00001_P-30" />
              <ParameterRef Id="M-035A_A-1234-56-00001_P-31_R-31" RefId="M-035A_A-1234-56-00001_P-31" />
              <ParameterRef Id="M-035A_A-1234-56-00001_P-33_R-33" RefId="M-035A_A-1234-56-00001_P-33" />
              <ParameterRef Id="M-035A_A-1234-56-00001_P-34_R-34" RefId="M-035A_A-1234-56-00001_P-34" />
              <ParameterRef Id="M-035A_A-1234-56-00001_P-36_R-36" RefId="M-035A_A-1234-56-00001_P-36" />
              <ParameterRef Id="M-035A_A-1234-56-00001_P-37_R-37" RefId="M-035A_A-1234-56-00001_P-37" />
              <ParameterRef Id="M-035A_A-1234-56-00001_P-39_R-39" RefId="M-035A_A-1234-56-00001_P-39" />
              <ParameterRef Id="M-035A_A-1234-56-00001_P-40_R-40" RefId="M-035A_A-1234-56-00001_P-40" />
              <ParameterRef Id="M-035A_A-1234-56-00001_P-42_R-42" RefId="M-035A_A-1234-56-00001_P-42" />
              <ParameterRef Id="M-035A_A-1234-56-00001_P-43_R-43" RefId="M-035A_A-1234-56-00001_P-43" />
              <ParameterRef Id="M-035A_A-1234-56-00001_P-100_R-100" RefId="M-035A_A-1234-56-00001_P-100" />
            </ParameterRefs>
            <ComObjectTable>
              <ComObject Id="M-035A_A-1234-56-00001_O-1" Name="Move" Text="Channel A" Number="1" FunctionText="Shutter/Curtain up/down" ObjectSize="1 Bit" ReadFlag="Disabled" WriteFlag="Enabled" CommunicationFlag="Enabled" TransmitFlag="Disabled" UpdateFlag="Disabled" DatapointType="DPST-1-8" />
              <ComObject Id="M-035A_A-1234-56-00001_O-2" Name="Stop" Text="Channel A" Number="2" FunctionText="Stop" ObjectSize="1 Bit" ReadFlag="Disabled" WriteFlag="Enabled" CommunicationFlag="Enabled" TransmitFlag="Disabled" UpdateFlag="Disabled" DatapointType="DPST-1-1" />
              <ComObject Id="M-035A_A-1234-56-00001_O-3" Name="Position" Text="Channel A" Number="3" FunctionText="Absolute position" ObjectSize="1 Byte" ReadFlag="Disabled" WriteFlag="Enabled" CommunicationFlag="Enabled" TransmitFlag="Disabled" UpdateFlag="Disabled" DatapointType="DPST-5-1" />
              <ComObject Id="M-035A_A-1234-56-00001_O-4" Name="PosStatus" Text="Channel A" Number="4" FunctionText="Status current position" ObjectSize="1 Byte" ReadFlag="Enabled" WriteFlag="Disabled" CommunicationFlag="Enabled" TransmitFlag="Enabled" UpdateFlag="Disabled" DatapointType="DPST-5-1" />
              <ComObject Id="M-035A_A-1234-56-00001_O-5" Name="MoveStatus" Text="Channel A" Number="5" FunctionText="Status current direction" ObjectSize="1 Bit" ReadFlag="Enabled" WriteFlag="Disabled" CommunicationFlag="Enabled" TransmitFlag="Enabled" UpdateFlag="Disabled" DatapointType="DPST-1-8" />
              <ComObject Id="M-035A_A-1234-56-00001_O-6" Name="Scene" Text="Channel A" Number="6" FunctionText="Scene" ObjectSize="1 Byte" ReadFlag="Disabled" WriteFlag="Enabled" CommunicationFlag="Enabled" TransmitFlag="Disabled" UpdateFlag="Disabled" DatapointType="DPST-18-1" />
            </ComObjectTable>
            <ComObjectRefs>
              <ComObjectRef Id="M-035A_A-1234-56-00001_O-1_R-1" RefId="M-035A_A-1234-56-00001_O-1" />
              <ComObjectRef Id="M-035A_A-1234-56-00001_O-2_R-2" RefId="M-035A_A-1234-56-00001_O-2" />
              <ComObjectRef Id="M-035A_A-1234-56-00001_O-3_R-3" RefId="M-035A_A-1234-56-00001_O-3" />
              <ComObjectRef Id="M-035A_A-1234-56-00001_O-4_R-4" RefId="M-035A_A-1234-56-00001_O-4" />
              <ComObjectRef Id="M-035A_A-1234-56-00001_O-5_R-5" RefId="M-035A_A-1234-56-00001_O-5" />
              <ComObjectRef Id="M-035A_A-1234-56-00001_O-6_R-6" RefId="M-035A_A-1234-56-00001_O-6" />
            </ComObjectRefs>
            <AddressTable MaxEntries="255" />
            <AssociationTable MaxEntries="255" />
            <LoadProcedures>
              <LoadProcedure MergeId="2">
                <LdCtrlRelSegment AppliesTo="full" LsmIdx="4" Size="29" Mode="0" Fill="0" />
              </LoadProcedure>
              <LoadProcedure MergeId="4">
                <LdCtrlWriteRelMem ObjIdx="4" Offset="0" Size="29" Verify="true" />
              </LoadProcedure>
            </LoadProcedures>
          </Static>
          <Dynamic>
            <Channel Id="M-035A_A-1234-56-00001_CH-1" Number="1" Text="Lumi Shutter/Curtain Channel A">
              <ParameterBlock Id="M-035A_A-1234-56-00001_PB-1" Name="S1_Config" Text="General Settings">
                <ParameterRefRef RefId="M-035A_A-1234-56-00001_P-1_R-1" />
                <ParameterRefRef RefId="M-035A_A-1234-56-00001_P-3_R-3" />
                <ParameterRefRef RefId="M-035A_A-1234-56-00001_P-12_R-12" />

                <ComObjectRefRef RefId="M-035A_A-1234-56-00001_O-1_R-1" />
                <ComObjectRefRef RefId="M-035A_A-1234-56-00001_O-2_R-2" />
                <ComObjectRefRef RefId="M-035A_A-1234-56-00001_O-3_R-3" />
                <ComObjectRefRef RefId="M-035A_A-1234-56-00001_O-4_R-4" />
                <ComObjectRefRef RefId="M-035A_A-1234-56-00001_O-5_R-5" />
                <choose ParamRefId="M-035A_A-1234-56-00001_P-12_R-12">
                  <when test="1">
                    <ComObjectRefRef RefId="M-035A_A-1234-56-00001_O-6_R-6" />
                  </when>
                </choose>
              </ParameterBlock>
                <choose ParamRefId="M-035A_A-1234-56-00001_P-12_R-12">
                  <when test="1">
                    <ParameterBlock Id="M-035A_A-1234-56-00001_PB-2" Name="SceneAssignments" Text="Scene Settings">
                      <ParameterSeparator Id="M-035A_A-1234-56-00001_PS-0" Text="Scene Settings" />
                      <ParameterRefRef RefId="M-035A_A-1234-56-00001_P-13_R-13" />

                      <ParameterRefRef RefId="M-035A_A-1234-56-00001_P-15_R-15" />
                      <choose ParamRefId="M-035A_A-1234-56-00001_P-15_R-15">
                        <when test=">0"><ParameterRefRef RefId="M-035A_A-1234-56-00001_P-16_R-16" /></when>
                      </choose>

                      <ParameterRefRef RefId="M-035A_A-1234-56-00001_P-18_R-18" />
                      <choose ParamRefId="M-035A_A-1234-56-00001_P-18_R-18">
                        <when test=">0"><ParameterRefRef RefId="M-035A_A-1234-56-00001_P-19_R-19" /></when>
                      </choose>

                      <ParameterRefRef RefId="M-035A_A-1234-56-00001_P-21_R-21" />
                      <choose ParamRefId="M-035A_A-1234-56-00001_P-21_R-21">
                        <when test=">0"><ParameterRefRef RefId="M-035A_A-1234-56-00001_P-22_R-22" /></when>
                      </choose>

                      <ParameterRefRef RefId="M-035A_A-1234-56-00001_P-24_R-24" />
                      <choose ParamRefId="M-035A_A-1234-56-00001_P-24_R-24">
                        <when test=">0"><ParameterRefRef RefId="M-035A_A-1234-56-00001_P-25_R-25" /></when>
                      </choose>

                      <ParameterRefRef RefId="M-035A_A-1234-56-00001_P-27_R-27" />
                      <choose ParamRefId="M-035A_A-1234-56-00001_P-27_R-27">
                        <when test=">0"><ParameterRefRef RefId="M-035A_A-1234-56-00001_P-28_R-28" /></when>
                      </choose>

                      <ParameterRefRef RefId="M-035A_A-1234-56-00001_P-30_R-30" />
                      <choose ParamRefId="M-035A_A-1234-56-00001_P-30_R-30">
                        <when test=">0"><ParameterRefRef RefId="M-035A_A-1234-56-00001_P-31_R-31" /></when>
                      </choose>

                      <ParameterRefRef RefId="M-035A_A-1234-56-00001_P-33_R-33" />
                      <choose ParamRefId="M-035A_A-1234-56-00001_P-33_R-33">
                        <when test=">0"><ParameterRefRef RefId="M-035A_A-1234-56-00001_P-34_R-34" /></when>
                      </choose>

                      <ParameterRefRef RefId="M-035A_A-1234-56-00001_P-36_R-36" />
                      <choose ParamRefId="M-035A_A-1234-56-00001_P-36_R-36">
                        <when test=">0"><ParameterRefRef RefId="M-035A_A-1234-56-00001_P-37_R-37" /></when>
                      </choose>

                      <ParameterRefRef RefId="M-035A_A-1234-56-00001_P-39_R-39" />
                      <choose ParamRefId="M-035A_A-1234-56-00001_P-39_R-39">
                        <when test=">0"><ParameterRefRef RefId="M-035A_A-1234-56-00001_P-40_R-40" /></when>
                      </choose>

                      <ParameterRefRef RefId="M-035A_A-1234-56-00001_P-42_R-42" />
                      <choose ParamRefId="M-035A_A-1234-56-00001_P-42_R-42">
                        <when test=">0"><ParameterRefRef RefId="M-035A_A-1234-56-00001_P-43_R-43" /></when>
                      </choose>
                    </ParameterBlock>
                  </when>
                </choose>
            </Channel>
          </Dynamic>
        </ApplicationProgram>
      </ApplicationPrograms>
    </Manufacturer>
  </ManufacturerData>
</KNX>
"""
OUTPUT_XML = Path(__file__).with_name("knx_shutter_m035a_standard_layout_v2.xml")
PREFIX = "M-035A_A-1234-56-00001"


def p_ref(num: int) -> str:
    return f"{PREFIX}_P-{num}_R-{num}"


def o_ref(num: int) -> str:
    return f"{PREFIX}_O-{num}_R-{num}"


def pb(num: int) -> str:
    return f"{PREFIX}_PB-{num}"


def ps(num: int) -> str:
    return f"{PREFIX}_PS-{num}"


def _dynamic_match(xml: str) -> re.Match[str]:
    match = re.search(r"(?ms)^(\s*)<Dynamic>\s*$.*?^\1</Dynamic>\s*$", xml)
    if not match:
        raise ValueError("Cannot find a standalone <Dynamic> block")
    return match


def _without_dynamic(xml: str) -> str:
    match = _dynamic_match(xml)
    return xml[: match.start()] + xml[match.end() :]


def _refs(xml: str, tag: str) -> Counter[str]:
    dynamic = _dynamic_match(xml).group(0)
    return Counter(re.findall(fr"<{tag}\s+RefId=\"([^\"]+)\"", dynamic))


def _plain_separators(dynamic: str) -> str:
    return dynamic.replace(' UIHint="Headline"', "")



def _sentence_case_display(value: str) -> str:
    if not value.strip():
        return value

    leading = value[: len(value) - len(value.lstrip(" "))]
    text = value.lstrip(" ")
    parts = re.split(r"(\([^)]*\))", text)
    lowered = "".join(part if part.startswith("(") else part.lower() for part in parts)
    chars = list(lowered)
    for index, char in enumerate(chars):
        if char.isalpha():
            chars[index] = char.upper()
            break
    result = leading + "".join(chars)
    result = re.sub(
        r"\b(channel|output|scene) ([abcd])\b",
        lambda match: f"{match.group(1)} {match.group(2).upper()}",
        result,
        flags=re.IGNORECASE,
    )
    for acronym in ("knx", "led", "cct", "hvac", "dpt", "ets"):
        result = re.sub(rf"\b{acronym}\b", acronym.upper(), result, flags=re.IGNORECASE)
    result = re.sub(r"\bscene no\.", "Scene No.", result, flags=re.IGNORECASE)
    result = re.sub(r"\bshutter/curtain\b", "Shutter/Curtain", result, flags=re.IGNORECASE)
    result = result.replace("°c", "°C")
    return result


def _normalize_tag_display_case(tag: str) -> str:
    match = re.match(r"<(\w+)\b", tag)
    attrs_by_tag = {
        "Parameter": ("Text",),
        "ParameterBlock": ("Text",),
        "ParameterSeparator": ("Text",),
        "Enumeration": ("Text",),
        "ComObject": ("Name", "Text", "FunctionText"),
    }
    attrs = attrs_by_tag.get(match.group(1) if match else "", ())
    for attr in attrs:
        attr_match = re.search(fr'\b{attr}="([^"]*)"', tag)
        if attr_match:
            value = escape(_sentence_case_display(attr_match.group(1)), quote=True)
            tag = re.sub(fr'\b{attr}="[^"]*"', f'{attr}="{value}"', tag)
    return tag


def normalize_display_case(xml: str) -> str:
    return re.sub(
        r"<(?:Parameter|ParameterBlock|ParameterSeparator|Enumeration|ComObject)\b[^>]*>",
        lambda match: _normalize_tag_display_case(match.group(0)),
        xml,
    )
def _child_parameter_ref_ids(dynamic: str) -> set[str]:
    refs: set[str] = set()
    in_block = False
    after_separator = False
    for line in dynamic.splitlines():
        if "<ParameterBlock " in line:
            in_block = True
            after_separator = False
        if "</ParameterBlock>" in line:
            in_block = False
            after_separator = False
        if in_block and "<ParameterSeparator " in line and 'Text=""' not in line:
            after_separator = True
        if in_block and after_separator:
            match = re.search(r'<ParameterRefRef\s+RefId="([^"]+)"', line)
            if match:
                refs.add(match.group(1))
    return refs


def _parameter_text_by_ref_id(xml: str) -> dict[str, str]:
    param_text = {
        match.group("id"): match.group("text")
        for match in re.finditer(
            r'<Parameter\b(?=[^>]*\bId="(?P<id>[^"]+)")(?=[^>]*\bText="(?P<text>[^"]*)")[^>]*>',
            xml,
        )
    }
    return {
        match.group("ref_id"): param_text.get(match.group("param_id"), "")
        for match in re.finditer(
            r'<ParameterRef\b(?=[^>]*\bId="(?P<ref_id>[^"]+)")(?=[^>]*\bRefId="(?P<param_id>[^"]+)")[^>]*/>',
            xml,
        )
    }


def apply_child_indent_overrides(xml: str, dynamic: str) -> str:
    child_refs = _child_parameter_ref_ids(dynamic)
    ref_to_param = {
        match.group("ref_id"): match.group("param_id")
        for match in re.finditer(
            r'<ParameterRef\b(?=[^>]*\bId="(?P<ref_id>[^"]+)")(?=[^>]*\bRefId="(?P<param_id>[^"]+)")[^>]*/>',
            xml,
        )
    }
    child_params = {ref_to_param[ref_id] for ref_id in child_refs if ref_id in ref_to_param}

    def repl(match: re.Match[str]) -> str:
        tag = match.group(0)
        id_match = re.search(r'\bId="([^"]+)"', tag)
        text_match = re.search(r'\bText="([^"]*)"', tag)
        if not id_match or id_match.group(1) not in child_params or not text_match:
            return tag
        text = text_match.group(1)
        if text.startswith("  "):
            return tag
        return re.sub(r'\bText="[^"]*"', f'Text="{escape("  " + text, quote=True)}"', tag)

    return re.sub(r'<Parameter\b[^>]*>', repl, xml)


def _without_dynamic_and_ref_text(xml: str) -> str:
    stripped = re.sub(r'\s+Text="[^"]*"', "", _without_dynamic(xml))
    stripped = re.sub(r'\s+(Name|FunctionText)="[^"]*"', "", stripped)
    stripped = re.sub(rf'(?ms)^\s*<ComObject\b[^>]*\bId="{PREFIX}_O-5"[^>]*/>\s*', "", stripped)
    stripped = re.sub(rf'(?ms)^\s*<ComObjectRef\b[^>]*\bRefId="{PREFIX}_O-5"[^>]*/>\s*', "", stripped)
    return stripped


def _set_attr(tag: str, attr: str, value: str) -> str:
    if re.search(fr'\b{attr}="[^"]*"', tag):
        return re.sub(fr'\b{attr}="[^"]*"', f'{attr}="{value}"', tag)
    return tag[:-3] + f' {attr}="{value}" />'


def apply_com_object_policy(xml: str) -> str:
    function_labels = {
        f"{PREFIX}_O-1": "Up/down",
        f"{PREFIX}_O-2": "Stop",
        f"{PREFIX}_O-3": "Position",
        f"{PREFIX}_O-4": "Position status",
        f"{PREFIX}_O-6": "Scene",
    }

    def repl(match: re.Match[str]) -> str:
        tag = match.group(0)
        id_match = re.search(r'\bId="([^"]+)"', tag)
        if not id_match:
            return tag
        object_id = id_match.group(1)
        if object_id == f"{PREFIX}_O-5":
            return ""
        if object_id in function_labels:
            tag = _set_attr(tag, "Name", "Channel A")
            tag = _set_attr(tag, "Text", "Channel A")
            tag = _set_attr(tag, "FunctionText", function_labels[object_id])
        return tag

    xml = re.sub(r'<ComObject\b[^>]*/>\s*', repl, xml)
    xml = re.sub(rf'(?m)^\s*<ComObjectRef\b[^>]*\bRefId="{PREFIX}_O-5"[^>]*/>\s*', "", xml)
    return xml


def apply_scene_label_policy(xml: str) -> str:
    scene_params = [
        (15, "Scene 1 number"),
        (16, "Scene 1 position"),
        (18, "Scene 2 number"),
        (19, "Scene 2 position"),
        (21, "Scene 3 number"),
        (22, "Scene 3 position"),
        (24, "Scene 4 number"),
        (25, "Scene 4 position"),
        (27, "Scene 5 number"),
        (28, "Scene 5 position"),
        (30, "Scene 6 number"),
        (31, "Scene 6 position"),
        (33, "Scene 7 number"),
        (34, "Scene 7 position"),
        (36, "Scene 8 number"),
        (37, "Scene 8 position"),
        (39, "Scene 9 number"),
        (40, "Scene 9 position"),
        (42, "Scene 10 number"),
        (43, "Scene 10 position"),
    ]

    for param_num, label in scene_params:
        pattern = rf'(<Parameter\b(?=[^>]*\bId="{PREFIX}_P-{param_num}")[^>]*\bText=")[^"]*(")'
        xml = re.sub(pattern, rf"\1{label}\2", xml)
    return xml


def build_dynamic() -> str:
    scene_pairs = [
        ("Scene 1", 15, 16),
        ("Scene 2", 18, 19),
        ("Scene 3", 21, 22),
        ("Scene 4", 24, 25),
        ("Scene 5", 27, 28),
        ("Scene 6", 30, 31),
        ("Scene 7", 33, 34),
        ("Scene 8", 36, 37),
        ("Scene 9", 39, 40),
        ("Scene 10", 42, 43),
    ]

    lines = [
        "          <Dynamic>",
        "            <ChannelIndependentBlock>",
        f'              <ParameterBlock Id="{pb(1)}" Name="General settings" Text="General settings">',
        f'                <ParameterSeparator Id="{ps(1)}" Text="Device settings" UIHint="Headline" />',
        f'                <ParameterRefRef RefId="{p_ref(1)}" />',
        f'                <ParameterRefRef RefId="{p_ref(3)}" />',
        f'                <ParameterRefRef RefId="{p_ref(12)}" />',
    ]
    for obj in range(1, 5):
        lines.append(f'                <ComObjectRefRef RefId="{o_ref(obj)}" />')
    lines += [
        f'                <choose ParamRefId="{p_ref(12)}">',
        '                  <when test="1">',
        f'                    <ComObjectRefRef RefId="{o_ref(6)}" />',
        "                  </when>",
        "                </choose>",
        "              </ParameterBlock>",
        "",
        f'              <choose ParamRefId="{p_ref(12)}">',
        '                <when test="1">',
        f'                  <ParameterBlock Id="{pb(2)}" Name="Scene settings" Text="Scene settings">',
        f'                    <ParameterSeparator Id="{ps(4)}" Text="Scene settings" UIHint="Headline" />',
        f'                    <ParameterRefRef RefId="{p_ref(13)}" />',
    ]

    for index, (label, scene_num, scene_pos) in enumerate(scene_pairs, start=1):
        lines += [
            f'                    <ParameterSeparator Id="{ps(10 + index)}" Text="{label}" UIHint="Headline" />',
            f'                    <ParameterRefRef RefId="{p_ref(scene_num)}" />',
            f'                    <choose ParamRefId="{p_ref(scene_num)}">',
            '                      <when test=">0">',
            f'                        <ParameterRefRef RefId="{p_ref(scene_pos)}" />',
            "                      </when>",
            "                    </choose>",
            f'                    <ParameterSeparator Id="{ps(30 + index)}" Text="" />',
        ]

    lines += [
        "                  </ParameterBlock>",
        "                </when>",
        "              </choose>",
        "            </ChannelIndependentBlock>",
        "          </Dynamic>",
    ]
    return _plain_separators("\n".join(lines))


def main() -> None:
    xml = BASE_XML
    dynamic = build_dynamic()
    match = _dynamic_match(xml)
    out_xml = xml[: match.start()] + dynamic + xml[match.end() :]
    out_xml = apply_child_indent_overrides(out_xml, dynamic)
    out_xml = apply_com_object_policy(out_xml)
    out_xml = apply_scene_label_policy(out_xml)
    out_xml = normalize_display_case(out_xml)

    if _refs(xml, "ParameterRefRef") != _refs(out_xml, "ParameterRefRef"):
        raise AssertionError("ParameterRefRef references changed")
    expected_object_refs = _refs(xml, "ComObjectRefRef")
    expected_object_refs.pop(f"{PREFIX}_O-5_R-5", None)
    if expected_object_refs != _refs(out_xml, "ComObjectRefRef"):
        raise AssertionError("ComObjectRefRef references changed unexpectedly")

    OUTPUT_XML.write_text(out_xml, encoding="utf-8", newline="\n")
    print(f"Wrote {OUTPUT_XML}")


if __name__ == "__main__":
    main()
