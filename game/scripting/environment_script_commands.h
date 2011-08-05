// Copyright 2002-2004 Frozenbyte Ltd.

// from 800

#define GS_CMD_BASE 800

GS_CMD(0, GS_CMD_ADDENVIRONMENTALEFFECT, "addEnvironmentalEffect", STRING)
GS_CMD(1, GS_CMD_REMOVEENVIRONMENTALEFFECT, "removeEnvironmentalEffect", STRING)
GS_CMD(2, GS_CMD_REMOVEALLENVIRONMENTALEFFECTS, "removeAllEnvironmentalEffects", NONE)

GS_CMD(3, GS_CMD_SETWINDSPEED, "setWindSpeed", INT)
GS_CMD(4, GS_CMD_SETWINDSPEEDTOVALUE, "setWindSpeedToValue", NONE)
GS_CMD(5, GS_CMD_ADDWINDSPEED, "addWindSpeed", INT)

GS_CMD(6, GS_CMD_SETWINDANGLE, "setWindAngle", INT)
GS_CMD(7, GS_CMD_SETWINDANGLETOVALUE, "setWindAngleToValue", NONE)
GS_CMD(8, GS_CMD_ADDWINDANGLE, "addWindAngle", INT)

GS_CMD(9, GS_CMD_ADDWINDVORTEXTOPOSITION, "addWindVortexToPosition", STRING)
GS_CMD(10, GS_CMD_REMOVEWINDVORTEXNEARPOSITION, "removeWindVortexNearPosition", NONE)
GS_CMD(11, GS_CMD_SETWINDVORTEXSTRENGTHNEARPOSITION, "setWindVortexStrengthNearPosition", FLOAT)
GS_CMD(12, GS_CMD_SETWINDVORTEXATTENUATIONNEARPOSITION, "setWindVortexAttenuationNearPosition", FLOAT)

GS_CMD(13, GS_CMD_ADDWINDSOURCETOPOSITION, "addWindSourceToPosition", STRING)
GS_CMD(14, GS_CMD_REMOVEWINDSOURCENEARPOSITION, "removeWindSourceNearPosition", NONE)
GS_CMD(15, GS_CMD_SETWINDSOURCESTRENGTHNEARPOSITION, "setWindSourceStrengthNearPosition", FLOAT)
GS_CMD(16, GS_CMD_SETWINDSOURCEATTENUATIONNEARPOSITION, "setWindSourceAttenuationNearPosition", FLOAT)

GS_CMD(17, GS_CMD_ADDWINDSINKTOPOSITION, "addWindSinkToPosition", STRING)
GS_CMD(18, GS_CMD_REMOVEWINDSINKNEARPOSITION, "removeWindSinkNearPosition", NONE)
GS_CMD(19, GS_CMD_SETWINDSINKSTRENGTHNEARPOSITION, "setWindSinkStrengthNearPosition", FLOAT)
GS_CMD(20, GS_CMD_SETWINDSINKATTENUATIONNEARPOSITION, "setWindSinkAttenuationNearPosition", FLOAT)

GS_CMD(21, GS_CMD_REMOVEALLWINDVORTICES, "removeAllWindVortices", NONE)
GS_CMD(22, GS_CMD_REMOVEALLWINDSOURCES, "removeAllWindSources", NONE)
GS_CMD(23, GS_CMD_REMOVEALLWINDSINKS, "removeAllWindSinks", NONE)

GS_CMD(24, GS_CMD_SETSUNLIGHTDIRECTION, "setSunlightDirection", VECTOR_XYZ)
GS_CMD(25, GS_CMD_SETSUNLIGHTCOLOR, "setSunlightColor", COLOR_RGB)
GS_CMD(26, GS_CMD_ENABLESUNLIGHT, "enableSunlight", NONE)
GS_CMD(27, GS_CMD_DISABLESUNLIGHT, "disableSunlight", NONE)
GS_CMD(28, GS_CMD_UPDATESUNLIGHTFOCUS, "updateSunlightFocus", NONE)

GS_CMD(29, GS_CMD_GETTERRAINSUNLIGHTAMOUNT, "getTerrainSunlightAmount", NONE)
GS_CMD(30, GS_CMD_SETFOGID, "setFogId", STRING)
GS_CMD(31, GS_CMD_SETFOGINTERPOLATE, "setFogInterpolate", INT)

GS_CMD_SIMPLE(32, setEnvironmentEffectGroup, STRING)
GS_CMD_SIMPLE(33, fadeEnvironmentEffectGroup, STRING)

GS_CMD_SIMPLE(34, enableParticleInsideCheck, INT)

GS_CMD_SIMPLE(35, fadeOutAllEnvironmentEffects, INT)
GS_CMD_SIMPLE(36, fadeInAllEnvironmentEffects, INT)

#undef GS_CMD_BASE

// up to 899
