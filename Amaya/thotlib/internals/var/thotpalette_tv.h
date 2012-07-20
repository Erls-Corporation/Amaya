/*
 *
 *  (c) COPYRIGHT INRIA, 1996.
 *  Please first read the full copyright statement in file COPYRIGHT.
 *
 */
 
/*
 * thotpalette.var : contains the C structure declaration for
 *      the Thot color palette values and the associated names.
 *
 *   This is definitely a C data definition file and should be
 *   included only once per binaries.
 */

#ifndef THOT_PALETTE_VAR
#define THOT_PALETTE_VAR

RGBstruct RGB_colors[] = {
{255, 255, 255},
{  0,   0,   0},
{250, 250, 250},
{225, 225, 225},
{190, 190, 190},
{158, 158, 158},
{118, 118, 118},
{ 80,  80,  80},
{255, 237, 237},
{255, 193, 193},
{255, 149, 149},
{255, 105, 105},
{255,   0,   0},
{229,   0,   0},
{178,   0,   0},
{127,   0,   0},
{255, 244, 237},
{255, 216, 193},
{255, 188, 149},
{255, 160, 105},
{255,  95,   0},
{229,  85,   0},
{178,  66,   0},
{127,  47,   0},
{255, 248, 237},
{255, 233, 193},
{255, 218, 149},
{255, 203, 105},
{255, 170,   0},
{229, 153,   0},
{178, 119,   0},
{127,  85,   0},
{255, 251, 237},
{255, 246, 193},
{255, 241, 149},
{255, 236, 105},
{255, 229,   0},
{229, 206,   0},
{178, 161,   0},
{127, 116,   0},
{255, 255, 237},
{255, 255, 193},
{255, 255, 149},
{255, 255, 105},
{255, 255,   0},
{229, 229,   0},
{178, 178,   0},
{127, 127,   0},
{250, 255, 237},
{248, 255, 193},
{246, 255, 149},
{244, 255, 105},
{241, 255,   0},
{217, 229,   0},
{169, 178,   0},
{121, 127,   0},
{249, 255, 237},
{239, 255, 193},
{229, 255, 149},
{219, 255, 105},
{199, 255,   0},
{179, 229,   0},
{140, 178,   0},
{101, 127,   0},
{244, 255, 237},
{222, 255, 193},
{200, 255, 149},
{178, 255, 105},
{128, 255,   0},
{115, 229,   0},
{ 90, 178,   0},
{ 65, 127,   0},
{237, 255, 237},
{193, 255, 193},
{149, 255, 149},
{105, 255, 105},
{  0, 255,   0},
{  0, 229,   0},
{  0, 178,   0},
{  0, 127,   0},
{237, 255, 248},
{193, 255, 233},
{149, 255, 218},
{105, 255, 203},
{  0, 255, 170},
{  0, 229, 153},
{  0, 178, 119},
{  0, 127,  85},
{237, 255, 255},
{193, 255, 255},
{149, 255, 255},
{105, 255, 255},
{  0, 255, 255},
{  0, 229, 229},
{  0, 178, 178},
{  0, 127, 127},
{237, 248, 255},
{193, 238, 255},
{149, 228, 255},
{105, 218, 255},
{  0, 198, 255},
{  0, 178, 229},
{  0, 139, 178},
{  0, 100, 127},
{237, 243, 255},
{193, 219, 255},
{149, 195, 255},
{105, 171, 255},
{  0, 113, 255},
{  0, 102, 229},
{  0,  80, 178},
{  0,  58, 127},
{237, 237, 255},
{193, 193, 255},
{149, 149, 255},
{105, 105, 255},
{  0,   0, 255},
{  0,   0, 229},
{  0,   0, 178},
{  0,   0, 127},
{243, 237, 255},
{213, 193, 255},
{183, 149, 255},
{153, 105, 255},
{ 85,   0, 255},
{ 76,   0, 229},
{ 59,   0, 178},
{ 42,   0, 127},
{247, 237, 255},
{235, 193, 255},
{223, 149, 255},
{211, 105, 255},
{187,   0, 255},
{168,   0, 229},
{131,   0, 178},
{ 94,   0, 127},
{255, 237, 255},
{255, 193, 255},
{255, 149, 255},
{255, 105, 255},
{255,   0, 255},
{229,   0, 229},
{178,   0, 178},
{127,   0, 127},
{255, 237, 244},
{255, 193, 222},
{255, 149, 200},
{255, 105, 178},
{255,   0, 128},
{229,   0, 115},
{178,   0,  90},
{127,   0,  65}
};

const char *Name_colors[] ={
"White",
"Black",
"LightGrey2",
"LightGrey1",
"Grey",
"DarkGrey1",
"DarkGrey2",
"DarkGrey3",
"LightRed4",
"LightRed3",
"LightRed2",
"LightRed1",
"Red",
"DarkRed1",
"DarkRed2",
"DarkRed3",
"LightCoral4",
"LightCoral3",
"LightCoral2",
"LightCoral1",
"Coral",
"DarkCoral1",
"DarkCoral2",
"DarkCoral3",
"LightOrange4",
"LightOrange3",
"LightOrange2",
"LightOrange1",
"Orange",
"DarkOrange1",
"DarkOrange2",
"DarkOrange3",
"LightGold4",
"LightGold3",
"LightGold2",
"LightGold1",
"Gold",
"DarkGold1",
"DarkGold2",
"DarkGold3", 
"LightYellow4",
"LightYellow3",
"LightYellow2",
"LightYellow1" ,
"Yellow",
"DarkYellow1",
"DarkYellow2",
"DarkYellow3",
"LightLime4",
"LightLime3" ,
"LightLime2",
"LightLime1",
"Lime" ,
"DarkLime1",
"DarkLime2" ,
"DarkLime3" ,
"LightYellowGreen4" ,
"LightYellowGreen3",
"LightYellowGreen2" ,
"LightYellowGreen1",
"YellowGreen",
"DarkYellowGreen1",
"DarkYellowGreen2",
"DarkYellowGreen3",
"LightLawnGreen4",
"LightLawnGreen3",
"LightLawnGreen2",
"LightLawnGreen1",
"LawnGreen",
"DarkLawnGreen1",
"DarkLawnGreen2",
"DarkLawnGreen3",
"LightGreen4" ,
"LightGreen3",
"LightGreen2",
"LightGreen1",
"Green",
"DarkGreen1",
"DarkGreen2",
"DarkGreen3",
"LightTurquoise4",
"LightTurquoise3",
"LightTurquoise2",
"LightTurquoise1",
"Turquoise" ,
"DarkTurquoise1",
"DarkTurquoise2",
"DarkTurquoise3",
"LightCyan4",
"LightCyan3",
"LightCyan2",
"LightCyan1" ,
"Cyan" ,
"DarkCyan1",
"DarkCyan2",
"DarkCyan3",
"LightSkyBlue4",
"LightSkyBlue3",
"LightSkyBlue2",
"LightSkyBlue1",
"SkyBlue",
"DarkSkyBlue1",
"DarkSkyBlue2" ,
"DarkSkyBlue3",
"LightBlue4",
"LightBlue3",
"LightBlue2",
"LightBlue1",
"Blue" ,
"DarkBlue1",
"DarkBlue2",
"DarkBlue3",
"LightIndigo4",
"LightIndigo3",
"LightIndigo2",
"LightIndigo1" ,
"Indigo",
"DarkIndigo1",
"DarkIndigo2" ,
"DarkIndigo3",
"LightViolet4",
"LightViolet3",
"LightViolet2",
"LightViolet1",
"Violet",
"DarkViolet1",
"DarkViolet2",
"DarkViolet3",
"LightPurple4",
"LightPurple3" ,
"LightPurple2" ,
"LightPurple1",
"Purple",
"DarkPurple1",
"DarkPurple2",
"DarkPurple3",
"LightMagenta4",
"LightMagenta3",
"LightMagenta2",
"LightMagenta1",
"Magenta",
"DarkMagenta1",
"DarkMagenta2",
"DarkMagenta3",
"LightRuby4",
"LightRuby3",
"LightRuby2",
"LightRuby1",
"Ruby",
"DarkRuby1",
"DarkRuby2",
"DarkRuby3"
}
;

#endif /* THOT_PALETTE_VAR */