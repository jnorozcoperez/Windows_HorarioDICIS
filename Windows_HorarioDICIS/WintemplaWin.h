﻿#pragma once

/**************************************************************************
   THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
   ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO
   THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
   PARTICULAR PURPOSE.  I ACCEPT NO LIABILITY FOR ANY DAMAGE OR LOSS
   OF BUSINESS THAT THIS SOFTWARE MAY CAUSE.

   WintemplaWin.h
 
   © Copyright 2000 - 2018 Sergio Ledesma.  All Rights Reserved.

   THIS CODE IS PROTECTED BY COPYRIGHT LAW AND INTERNATIONAL TREATIES.
	UNAUTHORIZED REPRODUCTION OR DISTRIBUTION OF THIS CODE, OR ANY PORTION
	OF IT, MAY RESULT IN SEVERE CIVIL AND CRIMINAL PENALTIES, AND WILL BE
	PROSECUTED TO THE MAXIMUM EXTENT POSSIBLE UNDER THE LAW.

	ESTE CODIGO ESTA PROTEGIDO POR LAS LEYES Y TRATADOS DE DERECHO AUTOR
	INTERNACIONALES.  LA REPRODUCCION SIN AUTORIZACION O LA DISTRIBUCION
	DE ESTE CODIGO, O CUALQUIER PARTE DE ESTE, RESULTARA EN SEVERA
	PENALIDAD CIVIL Y CRIMINAL, Y SERA PERSEGUIDA HASTA SU MAXIMA 
	EXTENSION BAJO LO QUE PERMITA LA LEY.
***************************************************************************/

#include "Wintempla.h"
//_____________________________________________________________________Definitions
#define WINTEMPLA_WIN 1
//#define WINTEMPLA_TEXTBOX_NEXTVERSION 1
#define WIN_MAX_FILTER 512 //For FileDlg
#define WIN_FILEDLG_MAXPATH 1024
#define MAX_FIND_LEN 512 //For FindReplaceDlg
#define WIN_COLORDISPLAY_FONTFAMILYLENGTH 32
//#define DPD_MAX_NAME 255 //For PrintDoc and PageDlg
#define WPPD_PRINT 1000  //For PrintPreviewDlg
#define WPPD_PAGESETUP 1001  //For PrintPreviewDlg
#define WPPD_CLOSE 1002  //For PrintPreviewDlg
#define WPPD_UPDOWN 1003  //For PrintPreviewDlg
#define WPPD_PRINTPREVIEW 1004  //For PrintPreviewDlg
#define WPPD_PREV 1005  //For PrintPreviewDlg
#define WPPD_NEXT 1006  //For PrintPreviewDlg
#define WPPD_MSWORD 1007  //For PrintPreviewDlg
#define WPPD_MSEXCEL 1008  //For PrintPreviewDlg
#define WIN_CONTROL_ZOOM 1.18920711500272 // (pow(2.0, 0.025))
#define WIN_VIEWER3D_MAX_DIV 5
#define WINFONT_MAXRES 4000
#define WIN_PIECHART_SZ 64
#define WIN_MONITOR_CONTROL_MAX 256
#define WIN_LEVELCONTROL_MAX 512
#define MM_DAC_NUM_BUFFER 8
#define MM_ADC_NUM_BUFFER 8
#define WINCOM_MAX_ADVISETOKEN 128
#define WIN_LEVELSTATE_WIDTH 33
#define WIN_LEVEL_STATE_STATES 32
#define WIN_IMAGE_GDIPLUS 0
#define WIN_IMAGE_ICON 1
#define WIN_IMAGE_BITMAP 2
#define WIN_IMAGE_EMF 3
//__________________________________ EVENTS
#define WIN_CLICK 1
#define WIN_RCLICK 2
#define WIN_DBLCLICK 3
#define WIN_PAINT 4
#define WIN_STARTED 5
#define WIN_STOPPED 6
#define WIN_DATADONE 7
#define WIN_DAC_DATA 8
#define WIN_ADC_DATA 9
#define WIN_HSCROLL 10
#define WIN_VSCROLL 11
#define WIN_SETFOCUS 12
#define WIN_KILLFOCUS 13
#define WIN_SELECTION_CHANGED 14
#define WIN_SELECTION_CHANGING 15
#define WIN_DATACHANGED 16
#define WIN_SETUP_CHANGED 17
#define WIN_KEYDOWN 18
#define WIN_SELECTION_UP 19
#define WIN_SELECTION_DOWN 20
#define WIN_SELECTION_LEFT 21
#define WIN_SELECTION_RIGHT 22
#define WIN_SELECTION_CLEAR 23
#define WIN_REQUESTINFO 24
#define WNT_PAINTCELLSBEGIN 25
#define WNT_PAINTCELL 26
#define WNT_PAINTCELLSEND 27
#define WIN_ALL_EVENTS 28
#define WIN_GETFILENAME 29
#define WIN_MODIFYSAMPLES 30
#define WIN_RX 31
#define WIN_TX 32
#define WIN_BREAKDETECT 33
#define WIN_FRAMINGERROR 34
#define WIN_HARDWAREOVERRUN 35
#define WIN_PARITYERROR 36
#define WIN_SOFTWAREOVERRUN 37
#define WIN_CTS 38
#define WIN_DSR 39
#define WIN_CD 40
#define WIN_RI 41
#define WIN_OLEOBJECT_DOVERB 42
#define WIN_OLECLIENTSITE_PROCESS_PAINT 43
#define WIN_LOOK_IT_UP_DICTIONARY 44
//__________________________________ ALIGNMENT
#define WIN_ALIGNMENT_LEFT 0
#define WIN_ALIGNMENT_RIGHT 1
#define WIN_ALIGNMENT_CENTER 2
#define WIN_ALIGNMENT_JUSTIFIED 3
//__________________________ CONTROLS APPEARANCE
//#define WIN_SELECTION_COLOR RGB(190, 210, 255)
//#define WIN_SELECTION_COLOR RGB(255, 227, 115)
//#define WIN_SELECTION_COLOR RGB(190, 250, 170)
#define WIN_SELECTION_COLOR RGB(150, 255, 130)
#define WIN_LINE_COLOR RGB(90, 90, 90)
#define WIN_SUBLINE_COLOR RGB(30, 30, 30)
#define WIN_BACK_COLOR RGB(0, 0, 0)
#define WIN_TEXT_COLOR RGB(0, 200, 180)
#define WIN_BACK_DISABLED ::GetSysColor(COLOR_BTNFACE)
#define WIN_TEXT_DISABLED RGB(200, 200, 200)
//
#define WIN_COLOR_MODE_NORMAL 0
#define WIN_COLOR_MODE_BLACKANDWHITE 1
#define WIN_COLOR_MODE_DARK 2
//___________________________________________________ GRAPH COMMANDS
#define WIN_CTRLCMD_SETUP 100
#define WIN_CTRLCMD_SAVE 101
#define WIN_CTRLCMD_BMP 102
#define WIN_CTRLCMD_PDF 103
#define WIN_CTRLCMD_COPY 104
#define WIN_CTRLCMD_PRINT 105
#define WIN_CTRLCMD_REFRESH 106
#define WIN_CTRLCMD_COPYMAP 107
#define WIN_CTRLCMD_AUTO_MINR 108
#define WIN_CTRLCMD_AUTO_MAXR 109
#define WIN_CTRLCMD_SET_MINR_ZERO 110
#define WIN_CTRLCMD_COLORNORMAL 111
#define WIN_CTRLCMD_COLORBW 112
#define WIN_CTRLCMD_COLORDARK 113
#define WIN_CTRLCMD_SHOWGRID 114
#define WIN_CTRLCMD_HIDEGRID 115
#define WIN_CTRLCMD_SHOWAXIS 116
#define WIN_CTRLCMD_HIDEAXIS 117
#define WIN_CTRLCMD_RESET_VIEW 118
#define WIN_CTRLCMD_BACK_COLOR 119
#define WIN_CTRLCMD_TEXT_COLOR 120
#define WIN_CTRLCMD_LINE_COLOR 121
#define WIN_CTRLCMD_GRID_COLOR 122
#define WIN_CTRLCMD_SHOWFRONTAXIS 123
#define WIN_CTRLCMD_HIDEFRONTAXIS 124
#define WIN_CTRLCMD_SUBGRID_COLOR 125
#define WIN_CTRLCMD_ELEVATION_10 126
#define WIN_CTRLCMD_ELEVATION_20 127
#define WIN_CTRLCMD_ELEVATION_30 128
#define WIN_CTRLCMD_ELEVATION_40 129
#define WIN_CTRLCMD_ANGLE_0 130
#define WIN_CTRLCMD_ANGLE_90 131
#define WIN_CTRLCMD_ANGLE_180 132
#define WIN_CTRLCMD_ANGLE_270 133
#define WIN_CTRLCMD_GRAPH1_COLOR 134
#define WIN_CTRLCMD_GRAPH2_COLOR 135
#define WIN_CTRLCMD_GRAPH3_COLOR 136
#define WIN_CTRLCMD_GRAPH4_COLOR 137
#define WIN_CTRLCMD_GRAPH5_COLOR 138
#define WIN_CTRLCMD_GRAPH6_COLOR 139
#define WIN_CTRLCMD_GRAPH7_COLOR 140
#define WIN_CTRLCMD_GRAPH8_COLOR 141
#define WIN_CTRLCMD_GRAPH9_COLOR 142
#define WIN_CTRLCMD_GRAPH10_COLOR 143
#define WIN_CTRLCMD_GRAPHCOLOR_FIRST WIN_CTRLCMD_GRAPH1_COLOR
#define WIN_CTRLCMD_GRAPHCOLOR_LAST WIN_CTRLCMD_GRAPH10_COLOR
//____________________________________________________________ Game::Element
#define GAME_ELEMENT_ARC 0
#define GAME_ELEMENT_BITMAP 1
#define GAME_ELEMENT_CHORD 2
#define GAME_ELEMENT_CIRCLE 3
#define GAME_ELEMENT_ELLIPSE 4
#define GAME_ELEMENT_ICON 5
#define GAME_ELEMENT_LINE 6
#define GAME_ELEMENT_METAFILE 7
#define GAME_ELEMENT_NONE 8
#define GAME_ELEMENT_PARAGRAPH 9
#define GAME_ELEMENT_PIE 10
#define GAME_ELEMENT_POLYBEZIER 11
#define GAME_ELEMENT_POLYGON 12
#define GAME_ELEMENT_POLYLINE 13
#define GAME_ELEMENT_RECTANGLE 14
#define GAME_ELEMENT_ROUNDRECT 15
#define GAME_ELEMENT_TEXT 16
//____________________________________________________________ Win::ColorTextBox
#define WIN_COLORTEXTBOX_CMD_COPY 100
#define WIN_COLORTEXTBOX_CMD_CUT 101
#define WIN_COLORTEXTBOX_CMD_DELETE 102
#define WIN_COLORTEXTBOX_CMD_LOOKUPDICT 103
#define WIN_COLORTEXTBOX_CMD_PASTE 104
#define WIN_COLORTEXTBOX_CMD_SELECTALL 105
#define WIN_COLORTEXTBOX_CMD_UNDO 106
#define WIN_COLORTEXTBOX_CMD_REDO 107
#define WIN_COLORTEXTBOX_CMD_INCFONT 108
#define WIN_COLORTEXTBOX_CMD_DECFONT 109
#define WIN_COLORTEXTBOX_CMD_FONT 110
#define WIN_COLORTEXTBOX_MAXFONT 255
#define WIN_COLORTEXTBOX_NOSELECTION 0
#define WIN_COLORTEXTBOX_FULLROWSELECTION 1
#define WIN_COLORTEXTBOX_BEGINSELECTION 2
#define WIN_COLORTEXTBOX_ENDSELECTION 3
#define WIN_COLORTEXTBOX_BEGINENDSELECTION 4
//
#ifndef RB_GETBARHEIGHT
#define RB_GETBARHEIGHT (WM_USER + 27)
#endif

#ifndef WM_USER1
#define WM_USER1 (WM_USER+1)
#endif
#ifndef WM_USER2
#define WM_USER2 (WM_USER+2)
#endif
#ifndef WM_USER3
#define WM_USER3 (WM_USER+3)
#endif
#ifndef WM_USER4
#define WM_USER4 (WM_USER+4)
#endif
#ifndef WM_USER5
#define WM_USER5 (WM_USER+5)
#endif
#ifndef WM_USER6
#define WM_USER6 (WM_USER+6)
#endif
#ifndef WM_USER7
#define WM_USER7 (WM_USER+7)
#endif
#ifndef WM_USER8
#define WM_USER8 (WM_USER+8)
#endif
#ifndef WM_USER9
#define WM_USER9 (WM_USER+9)
#endif
#ifndef WM_USER10
#define WM_USER10 (WM_USER+10)
#endif

//_____________________________________________________________ FUZZY LOGIC
#define FUZZY_SET_ERROR 0
#define FUZZY_SET_TRIANGULAR 1
#define FUZZY_SET_TRAPEZOIDAL 2
#define FUZZY_SET_LEFTTRAPEZOIDAL 3
#define FUZZY_SET_RIGHTTRAPEZOIDAL 4
#define FUZZY_SET_SIGMOIDAL 5
#define FUZZY_SET_LEFTSIGMOIDAL 6
#define FUZZY_SET_RIGHTSIGMOIDAL 7
#define FUZZY_SET_GAUSSIAN 8
#define FUZZY_SET_LEFTGAUSSIAN 9
#define FUZZY_SET_RIGHTGAUSSIAN 10
#define FUZZY_SET_HEAVYTAILED 11
#define FUZZY_SET_LEFTHEAVYTAILED 12
#define FUZZY_SET_RIGHTHEAVYTAILED 13
//
#define FUZZY_CORRELATION_MINIMUM_INFERENCE 0
#define FUZZY_CORRELATION_PRODUCT_INFERENCE 1
#define FUZZY_COMBINE_RULES_OR 0
#define FUZZY_COMBINE_RULES_SUM 1

//________ Com
#include <urlmon.h>
#pragma comment(lib, "urlmon.lib")


#include <commctrl.h>
#include <commdlg.h>
#pragma comment(lib, "comctl32.lib")
#pragma comment(lib, "Msimg32.lib")
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")

// Windows
namespace Win {
	typedef struct DLGTEMPLATEEX
	{
		WORD dlgVer;
		WORD signature;
		DWORD helpID;
		DWORD exStyle;
		DWORD style;
		WORD cDlgItems;
		short x;
		short y;
		short cx;
		short cy;
	} DLGTEMPLATEEX, *LPDLGTEMPLATEEX;
}

struct DLGWINTEMPLATE
{
	DLGTEMPLATE dlgTemplate;
	DWORD menu;
	DWORD dlgclass;
	DWORD title;
};


#include <poppack.h>

//_________________________ We define WIN_DAC_ADC_SUPPORT to include: <mmsystem.h>
#ifdef WIN_DIRECTX
	#define WIN_DAC_ADC_SUPPORT
	#include <d3d9.h>
	//#include <d3dx9.h> // Deprecated
	#include <DirectXMath.h>

	//_COM_SMARTPTR_TYPEDEF(IDirect3D9, __uuidof(IDirect3D9));
	//_COM_SMARTPTR_TYPEDEF(IDirect3DVertexBuffer9, __uuidof(IDirect3DVertexBuffer9));
	//_COM_SMARTPTR_TYPEDEF(IDirect3DDevice9, __uuidof(IDirect3DDevice9));

	#pragma comment(lib, "d3d9.lib")
	//#pragma comment(lib, "d3dx9.lib") // Deprecated
	#pragma comment(lib, "dxguid.lib")
#endif

//_________________________ We define WIN_DAC_ADC_SUPPORT to include: <mmsystem.h>
#ifdef WIN_OPENGL_SUPPORT
	#define WIN_DAC_ADC_SUPPORT
	#include <gl\Gl.h>			// Header File For The OpenGL32 Library
	#include <gl\Glu.h>			// Header File For The GLu32 Library
	//#include <gl\glaux.h>		// Header File For The Glaux Library
	#pragma comment(lib, "opengl32.lib")
	#pragma comment(lib, "glu32.lib")
#endif

//#pragma comment(lib, "ole32.lib") // For Moniker in Com::Container

#ifdef WIN_RICHEDIT_SUPPORT
	#include <richedit.h>
#endif

//#include <shlobj.h>
//#include <shlwapi.h>
//#pragma comment(lib, "shlwapi.lib")
//#include "shellapi.h" // for the tray
#ifdef WIN_DAC_ADC_SUPPORT
	#define WIN_MIX_CONTROLS 2
	#include <mmsystem.h>
	#pragma comment(lib, "Winmm.lib")
	#define MM_MIDI_ACOUSTIC_GRAND_PIANO 0
	#define MM_MIDI_BRIGHT_ACOUSTIC_PIANO 1
	#define MM_MIDI_ELECTRIC_GRAND_PIANO 2
	#define MM_MIDI_HONKY_TONK_PIANO 3
	#define MM_MIDI_RHODES_PIANO 4
	#define MM_MIDI_CHORUSED_PIANO 5
	#define MM_MIDI_HARPSICHORD 6
	#define MM_MIDI_CLAVINET 7
	#define MM_MIDI_CELESTA 8
	#define MM_MIDI_GLOCKENSPIEL 9
	#define MM_MIDI_MUSIC BOX 10
	#define MM_MIDI_VIBRAPHONE 11
	#define MM_MIDI_MARIMBA  12
	#define MM_MIDI_XYLOPHONE 13
	#define MM_MIDI_TUBULAR BELLS 14
	#define MM_MIDI_DULCIMER 15
	#define MM_MIDI_HAMMOND _ORGAN 16
	#define MM_MIDI_PERCUSSIVE_ORGAN 17
	#define MM_MIDI_ROCK_ORGAN 18
	#define MM_MIDI_CHURCH_ORGAN 19
	#define MM_MIDI_REED_ORGAN 20
	#define MM_MIDI_ACCORDIAN 21
	#define MM_MIDI_HARMONICA 22
	#define MM_MIDI_TANGO_ACCORDIAN 23
	#define MM_MIDI_ACOUSTIC_GUITAR_NYLON 24
	#define MM_MIDI_ACOUSTIC_GUITAR_STEEL  25
	#define MM_MIDI_ELECTRIC_GUITAR_JAZZ  26
	#define MM_MIDI_ELECTRIC_GUITAR_CLEAN 27
	#define MM_MIDI_ELECTRIC_GUITAR_MUTED 28
	#define MM_MIDI_OVERDRIVEN_GUITAR 29
	#define MM_MIDI_DISTORTION_GUITAR 30
	#define MM_MIDI_GUITAR_HARMONICS 31
	#define MM_MIDI_ACOUSTIC_BASS 32
	#define MM_MIDI_ELECTRIC_BASS_FINGER 33
	#define MM_MIDI_ELECTRIC_BASS_PICK 34
	#define MM_MIDI_FRETLESS_BASS 35
	#define MM_MIDI_SLAP_BASS_1 36
	#define MM_MIDI_SLAP_BASS_2 37
	#define MM_MIDI_SYNTH_BASS_1 38
	#define MM_MIDI_SYNTH_BASS_2 39
	#define MM_MIDI_VIOLIN 40
	#define MM_MIDI_VIOLA 41
	#define MM_MIDI_CELLO 42
	#define MM_MIDI_CONTRABASS 43
	#define MM_MIDI_TREMOLO_STRINGS 44
	#define MM_MIDI_PIZZICATO_STRINGS 45
	#define MM_MIDI_ORCHESTRAL_HARP 46
	#define MM_MIDI_TIMPANI 47
	#define MM_MIDI_STRING_ENSEMBLE_1 48
	#define MM_MIDI_STRING_ENSEMBLE_2 49
	#define MM_MIDI_SYNTH_STRINGS_1 50
	#define MM_MIDI_SYNTH STRINGS_2 51
	#define MM_MIDI_CHOIR_AAHS 52
	#define MM_MIDI_VOICE_OOHS 53
	#define MM_MIDI_SYNTH_VOICE 54
	#define MM_MIDI_ORCHESTRA_HIT 55
	#define MM_MIDI_TRUMPET 56
	#define MM_MIDI_TROMBONE 57
	#define MM_MIDI_TUBA 58
	#define MM_MIDI_MUTED_TRUMPET 59
	#define MM_MIDI_FRENCH_HORN 60
	#define MM_MIDI_BRASS_SECTION 61
	#define MM_MIDI_SYNTH_BRASS_1 62
	#define MM_MIDI_SYNTH_BRASS_2 63
	#define MM_MIDI_SOPRANO_SAX 64
	#define MM_MIDI_ALTO_SAX  65
	#define MM_MIDI_TENOR SAX 66
	#define MM_MIDI_BARITONE_SAX 67
	#define MM_MIDI_OBOE 68
	#define MM_MIDI_ENGLISH_HORN 69
	#define MM_MIDI_BASSOON 70
	#define MM_MIDI_CLARINET 71
	#define MM_MIDI_PICCOLO 72
	#define MM_MIDI_FLUTE 73
	#define MM_MIDI_RECORDER 74
	#define MM_MIDI_PAN_FLUTE 75
	#define MM_MIDI_BOTTLE_BLOW 76
	#define MM_MIDI_SHAKUHACHI 77
	#define MM_MIDI_WHISTLE 78
	#define MM_MIDI_OCARINA 79
	#define MM_MIDI_LEAD_1_SQUARE 80
	#define MM_MIDI_LEAD_2_SAWTOOTH 81
	#define MM_MIDI_LEAD_3_CALIOPE_LEAD  82
	#define MM_MIDI_LEAD_4_CHIFF_LEAD 83
	#define MM_MIDI_LEAD_5_CHARANG 84
	#define MM_MIDI_LEAD_6_VOICE  85
	#define MM_MIDI_LEAD_7_FIFTHS 86
	#define MM_MIDI_LEAD_8_BRASS_LEAD 87
	#define MM_MIDI_PAD_1_NEW_AGE 88
	#define MM_MIDI_PAD_2_WARM 89
	#define MM_MIDI_PAD_3_POLYSYNTH 90
	#define MM_MIDI_PAD_4_CHOIR 91
	#define MM_MIDI_PAD_5_BOWED 92
	#define MM_MIDI_PAD_6_METALLIC 93
	#define MM_MIDI_PAD_7_HALO 94
	#define MM_MIDI_PAD_8_SWEEP 95
	#define MM_MIDI_FX_1_RAIN 96
	#define MM_MIDI_FX_2_SOUNDTRACK 97
	#define MM_MIDI_FX_3_CRYSTAL 98
	#define MM_MIDI_FX_4_ATMOSPHERE 99
	#define MM_MIDI_FX_5_BRIGHTNESS 100
	#define MM_MIDI_FX_6_GOBLINS 101
	#define MM_MIDI_FX_7_ECHOES 102
	#define MM_MIDI_FX_8_SCI_FI 103
	#define MM_MIDI_SITAR 104
	#define MM_MIDI_BANJO 105
	#define MM_MIDI_SHAMISEN 106
	#define MM_MIDI_KOTO 107
	#define MM_MIDI_KALIMBA 108
	#define MM_MIDI_BAGPIPE 109
	#define MM_MIDI_FIDDLE 110
	#define MM_MIDI_SHANAI 111
	#define MM_MIDI_TINKLE_BELL 112
	#define MM_MIDI_AGOGO 113
	#define MM_MIDI_STEEL_DRUMS 114
	#define MM_MIDI_WOODBLOCK 115
	#define MM_MIDI_TAIKO DRUM 116
	#define MM_MIDI_MELODIC TOM 117
	#define MM_MIDI_SYNTH_DRUM 118
	#define MM_MIDI_REVERSE_CYMBAL 119
	#define MM_MIDI_GUITAR_FRET_NOISE 120
	#define MM_MIDI_BREATH_NOISE 121
	#define MM_MIDI_SEASHORE  122
	#define MM_MIDI_BIRD_TWEET 123
	#define MM_MIDI_TELEPHONE_RING 124
	#define MM_MIDI_HELICOPTER 125
	#define MM_MIDI_APPLAUSE  126
	#define MM_MIDI_GUNSHOT 127
	#define MIDI_ON 127
	#define MIDI_OFF 0
	#define C_MIDI 0
	#define CS_MIDI 1
	#define D_MIDI 2
	#define DS_MIDI 3
	#define E_MIDI 4
	#define F_MIDI 5
	#define FS_MIDI 6
	#define G_MIDI 7
	#define GS_MIDI 8
	#define A_MIDI 9
	#define AS_MIDI 10
	#define B_MIDI 11
	#define NONE_MIDI 12

	#define WHOLE_NOTE 64
	#define HALF_NOTE 32
	#define QUARTER_NOTE 16
	#define EIGHTH_NOTE 8
	#define SIXTEENTH_NOTE 4
	#define FUSA_NOTE 2
	#define SEMIFUSA_NOTE 1
#endif

#define NEURALNET_SIZE 32
#define WIN_TIEMPO_MAX 32
#define WIN_VIEWER3D_ANGLESTEPS 360
#define WIN_VIEWER3D_ZOOMRES 1000
#define DOCK_NONE 0
#define DOCK_BORDER 1
#define DOCK_CENTER 2

//Computer Graphics
namespace CG //________________________________________ namespace CG::Ini
{

#ifdef WIN_GDI_PLUS_ON
//_____________________________________________________________________ CG::GdiPlusOn
class GdiPlusOn
{
public:
	GdiPlusOn(void);
	virtual ~GdiPlusOn(void);
private:
	Gdiplus::GdiplusStartupInput m_si;
	ULONG_PTR m_token;
};
#endif

//____________________________________________________________________ CG::PaletteColor
class PaletteColor
{
public:
	PaletteColor();
	~PaletteColor();
	COLORREF color;
	unsigned char index;
	bool operator<(CG::PaletteColor& init) const;
};

//____________________________________________________________________ CG::Palette
class Palette
{
public:
	Palette();
	~Palette();
	bool Create(const vector<RGBQUAD>& input);
	bool Create(const vector<COLORREF>& input);
	void Delete();
	int GetNearestIndex(const RGBQUAD& color);
	int GetNearestIndex(const COLORREF& color);
	int GetNearestIndex(const RGBTRIPLE& color);
private:
	HPALETTE hPalette;
};

//____________________________________________________________________ CG::TextExtent
class TextExtent
{
public:
	TextExtent(HDC hdc);
	virtual ~TextExtent(void);
	double GetWidth(const wchar_t* text, int length);
	double GetWidth(const wchar_t* text);
	static LONG GetHeight(int font);
private:
	double widths[256];
	double height;
};

//____________________________________________________________________ CG::OutlineTextMetrics
class OutlineTextMetrics
{
public:
	OutlineTextMetrics();
	virtual ~OutlineTextMetrics();
	bool Create(HDC hdc);
	void Delete();
	OUTLINETEXTMETRIC* tm;
};

class Gdi;

//______________________________________________________________ CG::Font
class Font
{
public:
	Font(void);
	virtual ~Font(void);
	Font(const wstring& name, int size);
	Font(const wstring& name, const wstring& text, int width, int height);
	Font(const wstring& name, const wstring& text, RECT& rect);
	HFONT Create(LOGFONT& logFont);
	HFONT Create(HFONT hFont);
	HFONT Create(const wstring& name, int size, bool bold, bool italic, bool underline, bool strikeout);
	HFONT Create(int charCount, const wstring& name, int width, int height);
	HFONT Create(const wstring& name, const wstring& text, int width, int height);
	HFONT Create(const wstring& name, int size, bool bold, bool italic, int angle);
	HFONT Create(HDC hdc, const wstring& name, double heightPoints, bool bold, bool italic, bool deviceIndependent);
	HFONT CreateFromDialog(HWND hDlg, const wstring& name, int points, bool bold, bool italic);
	//
	Font(const wchar_t* name, int size);
	Font(const wchar_t* name, const wchar_t* text, int width, int height);
	Font(const wchar_t* name, wchar_t* text, RECT& rect);
	HFONT Create(const wchar_t* name, int size, bool bold, bool italic, bool underline, bool strikeout);
	HFONT Create(int charCount, const wchar_t* name, int width, int height);
	HFONT Create(const wchar_t* name, const wchar_t* text, int width, int height);
	HFONT Create(const wchar_t* name, int size, bool bold, bool italic, int deciDegrees);
	HFONT Create(HDC hdc, const wchar_t* name, double heightPoints, bool bold, bool italic, bool deviceIndependent);
	HFONT Create(const wchar_t* name, int size, BYTE pitchAndFamily);
	HFONT CreateFromDialog(HWND hDlg, const wchar_t* name, int points, bool bold, bool italic);
	// 
	int GetSize();
	wchar_t* GetName();
	void Delete();
	HFONT GetHFONT();
	const LOGFONT& GetLogFont() const;
	static int GetIdealFontSize(const wstring& text, double width, double height);
	static void InitializeLogfont(LOGFONT& logfont);
	//
	Font(const CG::Font& init); // Copy constructor
	CG::Font& operator =(const CG::Font& init);
private:
	void Copy(const Font& init);
	HFONT Create();
	void Constructor();
	LOGFONT logfont;
	HFONT hFont;
	CG::Gdi* m_pGdi;
	void Update(CG::Gdi* pGdi){ m_pGdi = pGdi; }
	friend class CG::Gdi;
};

//___________________________________________________________________ CG::Pen
class Pen
{
public:
	Pen();
	virtual ~Pen(void);
	Pen(int nPenStyle, int nWidth, COLORREF color);
	HPEN Create(int penStyle, int width, COLORREF color);
	void Delete();  // You don't need to call this explictly
	const LOGPEN& GetLogPen() const;
	HPEN GetHPEN();
private:
	void Update(CG::Gdi* pGdi){ pGdi = pGdi; }
	HPEN hPen;
	CG::Gdi* pGdi;
	LOGPEN logPen;
	void ResetLogPen();
	friend class CG::Gdi;
};

//________________________________________________________________ CG::Region
class Region
{
public:
	Region();
	virtual ~Region(void);
	HRGN GetHRGN() const;
	bool IsValid() const;
	void Delete();
	//
	// The regions is not destroyed
	void Set(HRGN hRgn);
	//
	// It creates a rectangular region #Win32+CreateRectRgn
	HRGN CreateRect(int left, int top, int right, int bottom);
	//
	// It creates a rectangular region #Win32+CreateRectRgnIndirect
	HRGN CreateRect(const RECT& rect);
	//
	// It creates an ellipical region #Win32+CreateEllipticRgn
	HRGN CreateElliptic(int left, int top, int right, int bottom);
	//
	// It creates an ellipical region #Win32+CreateEllipticRgnIndirect
	HRGN CreateElliptic(const RECT& rect);
	//
	// It creates a rectangular region #Win32+CreateRoundRectRgn
	HRGN CreateRoundRect(int left, int top, int right, int bottom, int widthEllipse, int heightEllipse);
	//
	// polyFillMode: ALTERNATE, WINDING
	// It creates a polygonal region #Win32+CreatePolygonRgn 
	HRGN CreatePolygon(const POINT* points, int numPoints, int polyFillMode);
	//
	// polyFillMode: ALTERNATE, WINDING
	// It creates a region consisting of a series of polygons. The polygons can overlap #Win32+CreatePolyPolygonRgn  
	HRGN CreatePolyPolygon(const POINT* points, const int* pointsPerPolygon, int numPolygons, int polyFillMode);
	//
	// It returns NULLREGION, SIMPLEREGION, COMPLEXREGION, ERROR
	// It moves a region by the specified offsets #Win32+OffsetRegion
	int Offset(int offsetX, int offsetY);
	//
	// It returns NULLREGION, SIMPLEREGION, COMPLEXREGION, ERROR
	// It retrieves the bounding rectangle of the specified region #Win32+GetRgnBox 
	int GetBox(RECT& out_rect);
	//
	// It determines whether the specified point is inside the region #Win32+PtInRegion
	bool IsPointInRegion(int x, int y);
	//
	// It determines whether any part of the specified rectangle is within the boundaries of a region #Win32+RectInRegion 
	bool IsRectangleInRegion(const RECT& rect);
	//
	bool operator==(const CG::Region& init) const;
	//
	// It returns NULLREGION, SIMPLEREGION, COMPLEXREGION, ERROR
	// mode: RGN_AND, RGN_COPY, RGN_DIFF, RGN_OR, RGN_XOR
	// The region is the combination of region1 and region2 #Win32+CombineRgn
	int Combine(CG::Region& region1, CG::Region& region2, int mode);

private:
	HRGN _hRgn;
	bool _destroy;
};

////________________________________________________________________ CG::ClippingRegion
//class ClippingRegion
//{
//public:
//	ClippingRegion();
//	virtual ~ClippingRegion(void);
//	HRGN GetHRGN() const;
//	bool IsValid() const;
//	void Delete();
//	//
//	// The regions is not destroyed
//	void Set(HRGN hRgn);
//	//
//	// It creates a rectangular region #Win32+CreateRectRgn
//	HRGN CreateRect(CG::Gdi& gdi, int left, int top, int right, int bottom);
//	//
//	// It creates a rectangular region #Win32+CreateRectRgnIndirect
//	HRGN CreateRect(CG::Gdi& gdi, const RECT& rect);
//	//
//	// It creates an ellipical region #Win32+CreateEllipticRgn
//	HRGN CreateElliptic(CG::Gdi& gdi, int left, int top, int right, int bottom);
//	//
//	// It creates an ellipical region #Win32+CreateEllipticRgnIndirect
//	HRGN CreateElliptic(CG::Gdi& gdi, const RECT& rect);
//	//
//	// It creates a rectangular region #Win32+CreateRoundRectRgn
//	HRGN CreateRoundRect(CG::Gdi& gdi, int left, int top, int right, int bottom, int widthEllipse, int heightEllipse);
//	//
//	// polyFillMode: ALTERNATE, WINDING
//	// It creates a polygonal region #Win32+CreatePolygonRgn 
//	HRGN CreatePolygon(CG::Gdi& gdi, const POINT* points, int numPoints, int polyFillMode);
//	//
//	// polyFillMode: ALTERNATE, WINDING
//	// It creates a region consisting of a series of polygons. The polygons can overlap #Win32+CreatePolyPolygonRgn  
//	HRGN CreatePolyPolygon(CG::Gdi& gdi, const POINT* points, const int* pointsPerPolygon, int numPolygons, int polyFillMode);
//	//
//	// It returns NULLREGION, SIMPLEREGION, COMPLEXREGION, ERROR
//	// It moves a region by the specified offsets #Win32+OffsetRegion
//	int Offset(CG::Gdi& gdi, int offsetX, int offsetY);
//	//
//	// It returns NULLREGION, SIMPLEREGION, COMPLEXREGION, ERROR
//	// It retrieves the bounding rectangle of the specified region #Win32+GetRgnBox 
//	int GetBox(CG::Gdi& gdi, RECT& out_rect);
//	//
//	// It determines whether the specified point is inside the region #Win32+PtInRegion
//	bool IsPointInRegion(CG::Gdi& gdi, int x, int y);
//	//
//	// It determines whether any part of the specified rectangle is within the boundaries of a region #Win32+RectInRegion 
//	bool IsRectangleInRegion(CG::Gdi& gdi, const RECT& rect);
//	//
//	bool operator==(const CG::ClippingRegion& init) const;
//	//
//	// It returns NULLREGION, SIMPLEREGION, COMPLEXREGION, ERROR
//	// mode: RGN_AND, RGN_COPY, RGN_DIFF, RGN_OR, RGN_XOR
//	// The region is the combination of region1 and region2 #Win32+CombineRgn
//	int Combine(CG::ClippingRegion& region1, CG::ClippingRegion& region2, int mode);
//
//private:
//	HRGN _hRgn;
//	bool _destroy;
//};

//________________________________________________________________ CG::Brush
class Brush
{
public:
	Brush();
	virtual ~Brush(void);
	Brush(COLORREF color);
	//
	//hatchStyle: HS_BDIAGONAL, HS_CROSS, HS_DIAGCROSS, HS_FDIAGONAL, HS_HORIZONTAL, HS_VERTICAL
	// It creates a hatch brush #Wind32+GDI+CreateHatchBrush
	HBRUSH CreateHatch(int hatchStyle, COLORREF color);

	// It creates a solid brush #Wind32+GDI+CreateSolidBrush
	HBRUSH CreateSolid(COLORREF color);

	// It creates a solid brush #Wind32+GDI+CreatePatternBrush
	HBRUSH CreatePattern(HINSTANCE hInstance, const wchar_t * pszBitmap);

	const LOGBRUSH& GetLogBrush() const;
	HBRUSH GetHBRUSH();
	//
	void Delete(); // You don't need to call this explictly
private:
	void Update(CG::Gdi* pGdi){ pGdi = pGdi; }
	HBRUSH hBrush;
	CG::Gdi* pGdi;
	LOGBRUSH logBrush;
	void ResetLogBrush();
	friend class CG::Gdi;
};

//____________________________________________________________ CG::PointF
class PointF
{
public:
	PointF(void)
	{
		x = 0;
		y = 0;
	}
	virtual ~PointF(void)
	{
	};
	double x;
	double y;
	void SetFromPoint(POINT& pt)
	{
		x = (double)(pt.x + 0.5);
		y = (double)(pt.y + 0.5);
	}
};

class DibSection;
class DDBitmap;
class DIBitmap;
//class DIBitmapP;
class Metafile;

//_____________________________________________________________________IGdi
// Provides a set of APIs to draw on a device (the screen, the printer, etc.) or Create a PDF
class IGdi
{
public:
	virtual int GetDeviceCAPS(int index) = 0;
	virtual int GetPhysicalScreenWidth_mm() = 0;
	virtual int GetPhysicalScreenHeight_mm() = 0;
	virtual int GetPhysicalScreenWidth_pixels() = 0;
	virtual int GetPhysicalScreenHeight_pixels() = 0;
	virtual double GetPixelsPerCentimeter() = 0;
	virtual double GetPixelsPerPoint() = 0;
	virtual int GetHorizontalDPI() = 0;
	virtual int GetVerticalDPI() = 0;
	virtual double GetPixelsPerMillimeterX() = 0;
	virtual double GetPixelsPerMillimeterY() = 0;
	virtual int GetPhysicalWidth() = 0;
	virtual int GetPhysicalHeight() = 0;
	virtual int GetPhysicalOffsetX() = 0;
	virtual int GetPhysicalOffsetY() = 0;
	virtual bool MoveToEx(int x, int y) = 0;
	virtual bool LineTo(int x, int y) = 0;
	virtual bool Line(int x1, int y1, int x2, int y2) = 0;
	virtual void RestoreDC(int state) = 0;
	virtual int SaveDC() = 0;
	virtual BOOL Rectangle(int xLeft, int yTop, int xRight, int yBottom) = 0;
	virtual BOOL Rectangle(const RECT& rect) = 0;
	virtual HFONT Select(CG::Font& font) = 0;
	virtual HFONT SelectFont__(HFONT hFont) = 0;
	virtual HPEN SelectWhitePen() = 0;
	virtual HPEN SelectBlackPen() = 0;
	virtual HPEN SelectNullPen() = 0;
	virtual HPEN Select(CG::Pen& pen) = 0;
	virtual HPEN SelectPen__(HPEN hPen) = 0;
	virtual HBRUSH Select(CG::Brush& brush) = 0;
	virtual HBRUSH SelectBrush__(HBRUSH hBrush) = 0;
	virtual HBRUSH SelectWhiteBrush() = 0;
	virtual HBRUSH SelectDarkGrayBrush() = 0;
	virtual HBRUSH SelectHollowBrush() = 0;
	virtual HBRUSH SelectLightGrayBrush() = 0;
	virtual HBRUSH SelectGrayBrush() = 0;
	virtual HBRUSH SelectBlackBrush() = 0;
	virtual HBRUSH SelectNullBrush() = 0;
	virtual int SetBkMode(bool bTransparent) = 0;
	virtual int GetBkMode() = 0;
	virtual COLORREF SetTextColor(COLORREF color) = 0;
	virtual COLORREF GetTextColor() = 0;
	virtual COLORREF SetBkColor(COLORREF color) = 0;
	virtual COLORREF GetBkColor() = 0;
	virtual bool DoRcPaintOverlap(RECT& rect) = 0;
	virtual const RECT& GetRcPaint() = 0;
	virtual int FillRect(const RECT& rect, HBRUSH hBrush) = 0;
	virtual int FillRect(const RECT& rect, CG::Brush& brush) = 0;
	virtual int FillRect(int xLeft, int yTop, int xRight, int yBottom, CG::Brush& brush) = 0;
	virtual bool GetTextExtentPoint32(const wchar_t * text, SIZE& out_size) = 0;
	virtual bool GetTextExtentPoint32(const wstring& text, SIZE& out_size) = 0;
	virtual int GetTextWidth(const wchar_t* text) = 0;
	virtual bool GetTextMetrics(TEXTMETRIC& out_textMetric) = 0;
	virtual unsigned int SetTextAlign(unsigned int textAlign) = 0;
	virtual unsigned int GetTextAlign() = 0;
	virtual bool TextOut(int x, int y, const wchar_t * text) = 0;
	virtual bool TextOut(int x, int y, const wstring& text) = 0;
	virtual bool TextOut(int x, int y, const wchar_t * text, int length) = 0;
	virtual void TextOut(const RECT& rect, const wchar_t * text) = 0;
	virtual void TextOut(const RECT& rect, const wstring& text) = 0;
	virtual void Arc(double centerX, double centerY, double radius, double startAngleDegrees, double endAngleDegrees) = 0;
	virtual void Chord(double centerX, double centerY, double radius, double startAngleDegrees, double endAngleDegrees) = 0;
	virtual void Pie(double centerX, double centerY, double radius, double startAngleDegrees, double endAngleDegrees) = 0;
	virtual bool Ellipse(int xLeft, int yTop, int xRight, int yBottom) = 0;
	virtual bool Circle(double centerX, double centerY, double radius) = 0;
	virtual bool Polyline(const POINT* arrayPoints, int numbPoints) = 0;
	virtual bool PolylineTo(const POINT* arrayPoints, DWORD numbPoints) = 0;
	virtual bool PolyPolyline(const POINT* arrayPoints, const DWORD* pointsPerPolyline, DWORD numbPolyline) = 0;
	virtual bool PolyBezier(const POINT* arrayPoints, DWORD numbPoints) = 0;
	virtual bool PolyBezierTo_(const POINT* arrayPoints, DWORD numbPoints) = 0;
	virtual bool Polygon(const POINT* arrayPoints, int numbPoints) = 0;
	virtual bool PolyPolygon(const POINT* arrayPoints, const int * pointsPerPolygon, int numbPolygons) = 0;
	virtual COLORREF SetPixel(int x, int y, COLORREF color) = 0;
	virtual bool SetViewportExtEx(int width, int height, SIZE* prevViewportExtent) = 0;
	virtual bool GetViewportExtEx(SIZE& out_viewportExtent) = 0;
	virtual bool SetWindowExtEx(int width, int height, SIZE* prevWindowExtent) = 0;
	virtual bool GetWindowExtEx(SIZE& out_windowExtent) = 0;
	virtual bool SetViewportOrgEx(int pixelsX, int pixelsY, POINT* prevViewportOrg) = 0;
	virtual bool GetViewportOrgEx(POINT& out_viewportOrg) = 0;
	virtual bool SetWindowOrgEx(int luX, int luY, POINT* prevWindowOrg) = 0;
	virtual bool GetWindowOrgEx(POINT& out_windowOrg) = 0;
	virtual int SelectClippingRegion(CG::Region& region) = 0;
	virtual void RemoveClippingRegion() = 0;
	virtual bool DPtoLP(POINT* in_out_points, int pointCount) = 0;
	virtual bool LPtoDP(POINT* in_out_points, int pointCount) = 0;
	virtual bool DPtoLP(RECT& in_out_rect) = 0;
	virtual bool LPtoDP(RECT& in_out_rect) = 0;
	virtual void DrawWindowCaption(const RECT& rect, UINT flags) = 0;
	virtual void DrawFrameControl(const RECT& rect, UINT type, UINT style) = 0;
	virtual void DrawCaptionFrame(const RECT& rect, UINT style) = 0;
	virtual void DrawMenuFrame(const RECT& rect, UINT style) = 0;
	virtual void DrawScrollFrame(const RECT& rect, UINT style) = 0;
	virtual bool GradientFillRectH(TRIVERTEX* vertex, unsigned int numVertex, GRADIENT_RECT* rectangles, unsigned int numRectangles) = 0;
	virtual bool GradientFillRectH(const RECT& rect, COLORREF colorLeft, COLORREF colorRight) = 0;
	virtual bool GradientFillRectV(TRIVERTEX* vertex, unsigned int numVertex, GRADIENT_RECT* rectangles, unsigned int numRectangles) = 0;
	virtual bool GradientFillRectV(const RECT& rect, COLORREF colorTop, COLORREF colorBottom) = 0;
	virtual bool GradientFillTriangle(TRIVERTEX* vertex, unsigned int numVertex, GRADIENT_TRIANGLE* triangles, unsigned int numTriangles) = 0;
	virtual bool DrawIcon(HIMAGELIST imageList, int index, int x, int y, int dx, int dy, COLORREF backColor,
		COLORREF foregroundColor, UINT style) = 0;
	virtual bool DrawIcon(HIMAGELIST imageList, int index, int x, int y) = 0;
	virtual bool DrawIcon(int x, int y, HICON hIcon) = 0;
	virtual bool DrawIcon(int x, int y, Sys::Icon& icon, int width, int height, unsigned int stepIfAnyCur, HBRUSH brushBackground, unsigned int flags) = 0;
	virtual bool DrawIcon(int x, int y, Sys::Icon& icon, int width, int height, CG::Brush& brushBackground) = 0;
	virtual bool DrawIcon(int x, int y, HICON hIcon, int width, int height, unsigned int stepIfAnyCur, HBRUSH brushBackground, unsigned int flags) = 0;
	virtual bool DrawIcon(int x, int y, Sys::Icon& icon) = 0;
	virtual bool DrawIcon(int x, int y, Sys::Icon& icon, CG::Brush& brushBackground) = 0;
	virtual void DrawGraphics(Sys::Graphics& graphics, int x, int y) = 0;
	virtual void DrawGraphics(Sys::Graphics& graphics, int x, int y, int width, int height) = 0;

};

//_____________________________________________________________________ TextLine
class TextLine
{
public:
	TextLine();
	~TextLine();
	wstring text;
	POINT position;
	int textJustification_breakExtra;
	int textJustification_breakCount;
};

//_____________________________________________________________________Gdi
// Provides a set of APIs to draw on a device  (the screen, the printer, etc.) using GDI and GDI+
class Gdi: public CG::IGdi
{
public:
	Gdi(PAINTSTRUCT& ps, bool createGdiplusObject);
	Gdi(CG::DDBitmap& ddbitmap, RECT rcPaint, bool createGdiplusObject);
	Gdi(CG::DibSection& dibSection, bool createGdiplusObject);
	Gdi(Sys::Graphics& graphics, bool createGdiplusObject);
	Gdi(CG::Metafile& metafile, bool createGdiplusObject);
	Gdi(HWND hWnd, bool bOnPaint, bool createGdiplusObject);
	//
	// dcx_flags: DCX_WINDOW, DCX_CACHE, DCX_NORESETATTRS, DCX_CLIPCHILDREN, DCX_CLIPSIBLINGS
	// DCX_PARENTCLIP, DCX_EXCLUDERGN, DCX_INTERSECTRGN, DCX_EXCLUDEUPDATE, DCX_INTERSECTUPDATE
	// DCX_LOCKWINDOWUPDATE, DCX_VALIDATE
	Gdi(HWND hWnd, CG::Region& clippingRegion, int dcx_flags, bool createGdiplusObject);
	//
	// dcx_flags: DCX_WINDOW, DCX_CACHE, DCX_NORESETATTRS, DCX_CLIPCHILDREN, DCX_CLIPSIBLINGS
	// DCX_PARENTCLIP, DCX_EXCLUDERGN, DCX_INTERSECTRGN, DCX_EXCLUDEUPDATE, DCX_INTERSECTUPDATE
	// DCX_LOCKWINDOWUPDATE, DCX_VALIDATE
	Gdi(HWND hWnd, HRGN hRgn, int dcx_flags, bool createGdiplusObject);
	virtual ~Gdi(void);

	//_____________________________________________________________________IGdi
	// It retrieves device-specific information, index: DRIVERVERSION, TECHNOLOGY, HORZSIZE, VERTSIZE, HORZRES, VERTRES, LOGPIXELSX, 
	// LOGPIXELSY, BITSPIXEL, PLANES, NUMBRUSHES, NUMPENS, NUMFONTS, NUMCOLORS, ASPECTX, ASPECTY, ASPECTXY, PDEVICESIZE, 
	// CLIPCAPS, SIZEPALETTE, NUMRESERVED, COLORRES, PHYSICALWIDTH, PHYSICALHEIGHT, PHYSICALOFFSETX, PHYSICALOFFSETY
	//VREFRESH, SCALINGFACTORX, SCALINGFACTORY, BLTALIGNMENT, SHADEBLENDCAPS, RASTERCAPS, CURVECAPS, LINECAPS
	// POLYGONALCAPS, TEXTCAPS, COLORMGMTCAPS #GetDeviceCaps+Win32+GDI
	int GetDeviceCAPS(int index);

	// Width, in millimeters, of the physical screen #HORZSIZE+GetDeviceCaps+Win32+GDI
	int GetPhysicalScreenWidth_mm();

	// Height, in millimeters, of the physical screen #VERTSIZE+GetDeviceCaps+Win32+GDI
	int GetPhysicalScreenHeight_mm();

	// Width, in pixels, of the screen; or for printers, the width, in pixels, of the printable area of the page #HORZRES+GetDeviceCaps+Win32+GDI
	int GetPhysicalScreenWidth_pixels();

	// Height, in raster lines, of the screen; or for printers, the height, in pixels, of the printable area of the page.#VERTRES+GetDeviceCaps+Win32+GDI
	int GetPhysicalScreenHeight_pixels();

	// Number of pixels per centimeter
	double GetPixelsPerCentimeter();

	// Number of pixels per point (72 points is 1 inch)
	double GetPixelsPerPoint();

	// Number of pixels per logical inch along the screen width #LOGPIXELSX+GetDeviceCaps+Win32+GDI
	int GetHorizontalDPI();

	// Number of pixels per logical inch along the screen height #LOGPIXELSY+GetDeviceCaps+Win32+GDI
	int GetVerticalDPI();

	// It retrieves the number of pixels per millimeter in X #GetDeviceCaps+Win32+GDI
	double GetPixelsPerMillimeterX();

	// It retrieves the number of pixels per millimeter in Y #GetDeviceCaps+Win32+GDI
	double GetPixelsPerMillimeterY();

	// It returns the width of the pritable area and the page. For example, a printer set to print at 600 dpi on 8.5-x11-inch paper has a 
	// physical width value of 5100 device units. Note that the physical page is almost always greater than the printable area 
	// of the page, and never smaller. #PHYSICALWIDTH+GetDeviceCaps+Win32+GDI 
	int GetPhysicalWidth();

	// It returns the height of the pritable area and the page. For example, a printer set to print at 600 dpi on 8.5-x11-inch paper has a 
	// physical height value of 6600 device units. Note that the physical page is almost always greater than the printable area 
	// of the page, and never smaller. #PHYSICALHEIGHT+GetDeviceCaps+Win32+GDI 
	int GetPhysicalHeight();

	// It returns the horizontal offset from the printable area and the page #PHYSICALOFFSETX+GetDeviceCaps+Win32+GDI 
	int GetPhysicalOffsetX();

	// It returns the horizontal offset from the printable area and the page #PHYSICALOFFSETY+GetDeviceCaps+Win32+GDI 
	int GetPhysicalOffsetY();
	
	// It returns true when the input rectangle overlaps with the paint rectangle #IntersectRect+Win32+GDI 
	bool DoRcPaintOverlap(RECT& rect);

	// It  displays bitmaps that have transparent or semitransparent pixels #AlphaBlend+Win32+GDI 
	bool AlphaBlend(int xoriginDest, int yoriginDest, int wDest, int hDest,
		HDC hdcSrc, int xoriginSrc, int yoriginSrc, int wSrc, int hSrc, BLENDFUNCTION ftn);

	// It  displays bitmaps that have transparent or semitransparent pixels #AlphaBlend+Win32+GDI 
	bool AlphaBlend(int xoriginDest, int yoriginDest, int wDest, int hDest,
		CG::Gdi& source, int xoriginSrc, int yoriginSrc, int wSrc, int hSrc, BLENDFUNCTION ftn);

	// rop: BLACKNESS, CAPTUREBLT, DSTINVERT, MERGECOPY, MERGEPAINT, NOMIRRORBITMAP
	//NOTSRCCOPY, NOTSRCERASE, PATCOPY, PATINVERT, PATPAINT, SRCAND, SRCCOPY
	//SRCERASE, SRCINVERT, SRCPAINT, WHITENESS
	// It performs a bit-block transfer of the color data corresponding to a rectangle of pixels from the specified source 
	// device context into a destination device context #Win32+Gdi+BitBlt
	bool BitBlt(int xDest, int yDest, int width, int height, HDC hdcSrc, int xSrc, int ySrc, DWORD rop);

	// It copies the color data for a rectangle of pixels in a DIB, JPEG, or PNG image to the specified destination rectangle. 
	// If the destination rectangle is larger than the source rectangle, this function stretches the rows and columns of color data
	// to fit the destination rectangle. If the destination rectangle is smaller than the source rectangle, this function compresses 
	// the rows and columns by using the specified raster operation 
	// colorUse: DIB_PAL_COLORS (The color table consists of an array of 16-bit indexes into the currently selected logical palette)
	// colorUse: DIB_RGB_COLORS (The color table contains literal RGB values) 
	// rop: SRCCOPY, SRCAND, #Win32+Gdi+StretchDIBits
	int StretchDIBits(int xDest, int yDest, int widthDest, int heightDest, int xSource, int ySource, int widthSource, int heightSource,
		const VOID *bits, const BITMAPINFO* bitmapInfo, UINT colorUse, DWORD rop);


	// It sets the pixels in the specified rectangle on the device that is associated with the destination device context using 
	// color data from a DIB, JPEG, or PNG image. The function returns the number of scan lines set or GDI_ERROR
	// colorUse: DIB_PAL_COLORS (The color table consists of an array of 16-bit indexes into the currently selected logical palette)
	// colorUse: DIB_RGB_COLORS (The color table contains literal RGB values) #Win32+Gdi+SetDIBitsToDevice
	int SetDIBitsToDevice(int xDest, int yDest, DWORD widthDest, DWORD heightDest,
		 int xSource, int ySource, UINT startScan, UINT scanLines, 
		const VOID *bits, const BITMAPINFO* bitmapInfo, UINT colorUse);


	// It sets the pixels in the specified rectangle on the device that is associated with the destination device context using 
	// color data from a DIB, JPEG, or PNG image. The function returns the number of scan lines set or GDI_ERROR
	// colorUse is set to DIB_RGB_COLORS #Win32+Gdi+SetDIBitsToDevice
	int SetDIBitsToDevice(int xDest, int yDest, DWORD widthDest, DWORD heightDest, 
		int heightSource, const VOID *bits, const BITMAPINFO* bitmapInfo);

	// rop: BLACKNESS, CAPTUREBLT, DSTINVERT, MERGECOPY, MERGEPAINT, NOMIRRORBITMAP
	//NOTSRCCOPY, NOTSRCERASE, PATCOPY, PATINVERT, PATPAINT, SRCAND, SRCCOPY
	//SRCERASE, SRCINVERT, SRCPAINT, WHITENESS
	// It performs a bit-block transfer of the color data corresponding to a rectangle of pixels from the specified source 
	// device context into a destination device context #Win32+Gdi+BitBlt
	bool BitBlt(int xDest, int yDest, int width, int height, CG::Gdi& source, int xSrc, int ySrc, DWORD rop);

	// It combines the color data for the source and destination bitmaps using the specified mask and 
	// raster operation #Win32+Gdi+MaskBlt
	bool MaskBlt(int xDest, int yDest, int width, int height, HDC hdcSrc, int xSrc, int ySrc, HBITMAP hbmMask, int xMask, int yMask, DWORD dwRop);

	// It combines the color data for the source and destination bitmaps using the specified mask and 
	// raster operation #Win32+Gdi+MaskBlt
	bool MaskBlt(int xDest, int yDest, int width, int height, CG::Gdi& source, int xSrc, int ySrc, CG::DDBitmap& mask, int xMask, int yMask, DWORD dwRop);
	
	void Delete();
	void DrawDoubleBuffer(CG::DDBitmap& ddbitmap);
	void DrawCompatibleBitmap(CG::DDBitmap& ddbitmap, int x, int y);
	void DrawCompatibleBitmap(CG::DDBitmap& ddbitmap, int x, int y, int targetWidth, int targetHeight);
	//
	void DrawBitmap(CG::DDBitmap& ddbitmap, int x, int y);
	void DrawBitmap(CG::DDBitmap& ddbitmap, int x, int y, COLORREF transparentColor);
	//
	void DrawBitmap(CG::DDBitmap& ddbitmap, int x, int y, int width, int height, bool isColor, bool maintainAspectRatio);
	void DrawBitmap(CG::DDBitmap& ddbitmap, int x, int y, int width, int height, bool maintainAspectRatio, COLORREF transparentColor);
	//
	void DrawBitmap(CG::DDBitmap& ddbitmap, const RECT& rect, bool isColor);
	void DrawBitmap(CG::DDBitmap& ddbitmap, const RECT& rect, COLORREF transparentColor);
	bool DrawBitmap(CG::DDBitmap& ddbitmap, int x, int y, int width, int height, CG::DDBitmap& monochromeMask);
	bool DrawBitmap(CG::DDBitmap& ddbitmap, const RECT& rect, CG::DDBitmap& monochromeMask);

	// alphaTransparency from 0 to 255
	bool DrawBitmap(CG::DDBitmap& ddbitmap, int x, int y, int width, int height, int alpha);

	// alphaTransparency from 0 to 255
	bool DrawBitmap(CG::DDBitmap& ddbitmap, int x, int y, int alpha);

	bool DrawDibSection(CG::DibSection& dibsection, int x, int y, int width, int height);
	bool DrawDibSection(CG::DibSection& dibsection, int x, int y);

	void DrawBitmap(CG::DIBitmap& dibitmap, int x, int y);
	void DrawBitmap(CG::DIBitmap& dibitmap, int x, int y, int width, int height, bool isColor);
	//void DrawBitmap(CG::DIBitmapP&, int x, int y);

	void DrawMetafile(CG::Metafile& metafile, const RECT& rect);
	void DrawMetafile(CG::Metafile& metafile, int x, int y);
	void DrawMetafile(CG::Metafile& metafile, int x, int y, int width);
	void DrawMetafile(CG::Metafile& metafile, const RECT& rect, bool centered);

	void DrawGraphics(Sys::Graphics& graphics, int x, int y);
	void DrawGraphics(Sys::Graphics& graphics, int x, int y, int width, int height);
	//
	// It draws a scale in the X axis for graph. It returns the height of the painted area
	int DrawGraphScaleX(int posX, int posY, int width, double minX, double maxX, int numTicks, int tickSize, const wchar_t* caption);
	//
	// It draws a scale in the Y axis for graph. It returns the width of the painted area
	int DrawGraphScaleY(int posX, int posY, int height, double minY, double maxY, int numTicks, int tickSize, const wchar_t* caption);
	//
	// It draws a scale in the Y axis for graph. It returns the width of the painted area
	int DrawGraphScaleYLeft(int posX, int posY, int height, double minY, double maxY, int numTicks, int tickSize, const wchar_t* caption);
	//
	// vertex includes an arrays of points with their respective colors
	// rectangles is an array of indexes that contains which indexes in vertex are used for each rectangle
	// It fills an array of rectangles using a smooth color transition.  #GradientFill+Win32+GDI
	bool GradientFillRectH(TRIVERTEX* vertex, unsigned int numVertex, GRADIENT_RECT* rectangles, unsigned int numRectangles);
	bool GradientFillRectH(const RECT& rect, COLORREF colorLeft, COLORREF colorRight);
	//
	// vertex includes an arrays of points with their respective colors
	// rectangles is an array of indexes that contains which indexes in vertex are used for each rectangle
	// It fills an array of rectangles using a smooth color transition.  #GradientFill+Win32+GDI
	bool GradientFillRectV(TRIVERTEX* vertex, unsigned int numVertex, GRADIENT_RECT* rectangles, unsigned int numRectangles);
	bool GradientFillRectV(const RECT& rect, COLORREF colorTop, COLORREF colorBottom);
	//
	// vertex includes an arrays of points with their respective colors
	// triangles is an array of indexes that contains which indexes in vertex are used for each triangle
	// It fills an array of triangles using a smooth color transition.  #GradientFill+Win32+GDI
	bool GradientFillTriangle(TRIVERTEX* vertex, unsigned int numVertex, GRADIENT_TRIANGLE* triangles, unsigned int numTriangles);
	//
	// numColors = 0 for Black and White a maximum of seven colors can be used
	// If tickSize is negative, the ticks are not drawn
	// It returns the width of the painted area
	int DrawGraphGradientScale(int posX, int posY, int height, double minimum, double maximum, int numTicks, int tickSize, int numColors, bool invertColors); // numColors = 0 for Black and White
	//
	// direction: WIN_DRAWARROW_NORTH, WIN_DRAWARROW_EAST, 
	// WIN_DRAWARROW_SOUTH, WIN_DRAWARROW_WEST
	void DrawArrow(const RECT& rect, CG::Brush& brush, int direction); // WIN_DRAWARROW_NORTH, ...
	void DrawTriangle(LONG x1, LONG y1, LONG x2, LONG y2, LONG x3, LONG y3, CG::Brush& brush);
	//
	// POINT vertices[4];
	// vertices[0].x = 10; vertices[0].y = 10;
	// vertices[1].x = 100; vertices[1].y = 10;
	// vertices[2].x = 10; vertices[2].y = 100;
	void DrawTriangle(POINT* vertices, CG::Brush& brush);
	void FillPolyBezier(const POINT* arrayPoints, DWORD count, CG::Brush& brush);
	void FillPolyBezier(const Sys::PointArray& arrayPoint, CG::Brush& brush);

	// It selects a region as the current clipping region
	// It returns: NULLREGION, SIMPLEREGION, COMPLEXREGION, ERROR
	// To remove a device-context's clipping region, specify a NULL region handle #SelectClipRgn+Win32+GDI
	int SelectClippingRegion(HRGN hRgn);
	
	// It selects a region as the current clipping region. IMPORTANT:  the region must be created using device coordinates.
	// You MUST ust LPtoDP to create the region
	// It returns: NULLREGION, SIMPLEREGION, COMPLEXREGION, ERROR
	// To remove a device-context's clipping region, specify a NULL region handle #SelectClipRgn+Win32+GDI
	int SelectClippingRegion(CG::Region& region);

	void RemoveClippingRegion();

	// It returns the size (width and height) of the specified text #GetTextExtentPoint32+Win32+GDI
	bool GetTextExtentPoint32(const wchar_t * text, SIZE& out_size);

	// It returns the size (width and height) of some text #GetTextExtentPoint32+Win32+GDI
	bool GetTextExtentPoint32(const wstring& text, SIZE& out_size);

	// It returns the width of the specified text #GetTextExtentPoint32+Win32+GDI
	int GetTextWidth(const wchar_t* text);

	//It returns metrics about the font such as average char width, etc.#GetTextMetrics+Win32+GDI
	bool GetTextMetrics(TEXTMETRIC& out_textMetric);

	//It returns advanced metrics about the font such as average char width, etc.#GetOutlineTextMetrics+Win32+GDI
	bool GetOutlineTextMetrics(CG::OutlineTextMetrics& out_textMetric);

	// TA_CENTER, TA_LEFT, TA_RIGHT, TA_BASELINE, TA_BOTTOM, TA_TOP, TA_UPDATE_CP #SetTextAlign+Win32+GDI
	unsigned int SetTextAlign(unsigned int textAlignment);

	// It specifies the amount of space the system should add to the break characters in a string of text. The space is added when an 
	// application calls the TextOut or ExtTextOut functions #SetTextJustification+Win32+GDI
	bool SetTextJustification(int breakExtra, int breakCount);

	// The GetTextAlign function retrieves the text-alignment setting for the specified device context.
	// It returns a OR combination of: TA_CENTER, TA_LEFT, TA_RIGHT, TA_BASELINE, TA_BOTTOM, TA_TOP, TA_UPDATE_CP
	// If the function fails, the return value is GDI_ERROR. #GetTextAlign+Win32+GDI
	unsigned int GetTextAlign();

	// It draws text #TextOut+Win32+GDI
	bool TextOut(int x, int y, const wchar_t * text);

	// It draws text #TextOut+Win32+GDI
	bool TextOut(int x, int y, const wstring& text);

	// It draws text #TextOut+Win32+GDI
	bool TextOut(int x, int y, const wchar_t * text, int text_length);

	// It draws text using the currently selected font, background color, and text color. You can optionally 
	// provide dimensions to be used for clipping, opaquing, or both, 
	// uOptions: ETO_CLIPPED, ETO_GLYPH_INDEX, ETO_IGNORELANGUAGE, ETO_NUMERICSLATIN, ETO_NUMERICSLOCAL
	// ETO_OPAQUE, ETO_PDY, ETO_RTLREADING #ExtTextOut+Win32+GDI
	bool ExtTextOut(int x, int y, UINT uOptions, RECT& rect, const wchar_t * pszText, int nCount, const int* pxDistance);

	bool TextOutTruncate(int x, int y, const wchar_t* text, int width, bool ellipses, bool centerX);
	bool TextOutTruncate(int x, int y, const wstring& text, int width, bool ellipses, bool centerX);

	void TextOut(const RECT& rect, const wchar_t * text);
	void TextOut(const RECT& rect, const wstring& text);

	// It draws an icon from an Image List.  dx is the width of the portion of the image to draw relative to the upper-left corner of the image. 
	// If dx and dy are zero, the function draws the entire image. dx is the height of the portion of the image to draw, 
	// relative to the upper-left corner of the image. backColor and foregroundColor can be: CLR_NONE or CLR_DEFAULT
	// style: ILD_BLEND, ILD_BLEND25, ILD_BLEND50, ILD_FOCUS, ILD_IMAGE, ILD_MASK, ILD_NORMAL
	// ILD_SELECTED, ILD_TRANSPARENT #ImageList_DrawEx+Win32
	bool DrawIcon(HIMAGELIST imageList, int index, int x, int y, int dx, int dy, COLORREF backColor,
		COLORREF foregroundColor, UINT style);

	// It draws an icon from an Image List.  #ImageList_DrawEx+Win32
	bool DrawIcon(HIMAGELIST imageList, int index, int x, int y);

	// It draws an icon #DrawIcon+Win32+GDI
	bool DrawIcon(int x, int y, HICON hIcon);

	// It draws an icon.  The width and height provided here may produce the icon to scale.
	// flags: DI_DEFAULTSIZE, DI_IMAGE, DI_MASK, DI_NOMIRROR, DI_NORMAL
	// #DrawIconEx+Win32+GDI
	bool DrawIcon(int x, int y, Sys::Icon& icon, int width, int height, unsigned int stepIfAnyCur, HBRUSH brushBackground, unsigned int flags);

	// It draws an icon.  The width and height provided here may produce the icon to scale.
	// #DrawIconEx+Win32+GDI
	bool DrawIcon(int x, int y, Sys::Icon& icon, int width, int height, CG::Brush& brushBackground);

	bool DrawIcon(int x, int y, HICON hIcon, int width, int height, unsigned int stepIfAnyCur, HBRUSH brushBackground, unsigned int flags);

	// It draws an icon. The width and height are the same as those provided when loading the icon.
	// If the width and height of the icon were not provided when loading the icon, the default size for the DPI will be used #DrawIconEx+Win32+GDI
	bool DrawIcon(int x, int y, Sys::Icon& icon);

	// It draws an icon. The width and height are the same as those provided when loading the icon.
	// If the width and height of the icon were not provided when loading the icon, the default size for the DPI will be used #DrawIconEx+Win32+GDI
	bool DrawIcon(int x, int y, Sys::Icon& icon, CG::Brush& brushBackground);

	// It selects a GDI Object #SelectObject+Win32+GDI
	HGDIOBJ SelectObject(HGDIOBJ hgdiobj);

	// It draws text of several colors
	void ColorTextOut(int x, int y, const list<Sys::ColorText>& input, SIZE& output_actualSizeOccupied);

	// It draws text of several colors
	void ColorTextOut(int x, int y, const list<Sys::ColorText>& input, int width, SIZE& output_actualSizeOccupied);

	void SetRcPaint(const RECT& rcPaint);

	// MM_TEXT, MM_LOMETRIC, MM_HIMETRIC, MM_LOENGLISH, MM_HIENGLISH, MM_TWIPS, MM_ISOTROPIC, MM_ANISOTROPIC#SetMapMode+Win32+GDI
	int SetMapMode(int nMode);

	// It returns the mapping mode #GetMapMode+Win32+GDI
	int GetMapMode();

	// It converts device units into logical units #DPtoLP+Win32+GDI
	bool DPtoLP(POINT* in_out_points, int pointCount);

	// It converts logical units into device units #LPtoDP+Win32+GDI
	bool LPtoDP(POINT* in_out_points, int pointCount);

	// It converts device units into logical units #DPtoLP+Win32+GDI
	bool DPtoLP(RECT& in_out_rect);

	// It converts logical units into device units #LPtoDP+Win32+GDI
	bool LPtoDP(RECT& in_out_rect);

	// It sets the horizontal and vertical extents of the viewport  #SetViewportExtEx+Win32+GDI
	bool SetViewportExtEx(int width, int height, SIZE* prevViewportExtent);

	// It retrieves the x-extent and y-extent of the current viewport #GetViewportExtEx+Win32+GDI
	bool GetViewportExtEx(SIZE& out_viewportExt);

	// It sets the horizontal and vertical extents of the window #SetWindowExtEx+Win32+GDI
	bool SetWindowExtEx(int width, int height, SIZE* prevWindowExtent);

	// It retrieves the x-extent and y-extent of the window #GetWindowExtEx+Win32+GDI
	bool GetWindowExtEx(SIZE& out_windowExt);

	// It specifies which device point maps to the window origin (0,0) #SetViewportOrgEx+Win32+GDI
	bool SetViewportOrgEx(int pixelsX, int pixelsY, POINT* prevViewportOrg);

	// It retrieves the x-coordinates and y-coordinates of the viewport origin (pixels) #GetViewportOrgEx+Win32+GDI
	bool GetViewportOrgEx(POINT& out_viewportOrg);

	// It specifies which window point maps to the viewport origin (0,0) #SetWindowOrgEx+Win32+GDI
	bool SetWindowOrgEx(int luX, int luY, POINT* prevWindowOrg);

	// It retrieves the x-coordinates and y-coordinates of the window origin (logical units) #GetWindowOrgEx+Win32+GDI
	bool GetWindowOrgEx(POINT& out_windowOrg);

	// It fills a rectangle by using the specified brush. This function includes the left and top borders, but excludes the right and bottom borders of the rectangle. #FillRect+Win32+GDI
	int FillRect(const RECT& rect, HBRUSH hBrush);

	// It fills a rectangle by using the specified brush. This function includes the left and top borders, but excludes the right and bottom borders of the rectangle. #FillRect+Win32+GDI
	int FillRect(const RECT& rect, CG::Brush& brush);

	// It fills a rectangle by using the specified brush. This function includes the left and top borders, but excludes the right and bottom borders of the rectangle. #FillRect+Win32+GDI
	int FillRect(int xLeft, int yTop, int xRight, int yBottom, CG::Brush& brush);

	// It draws a border around the specified rectangle by using the specified brush. The width and height of the border are always one logical unit. #FrameRect+Win32+GDI
	int FrameRect(const RECT* rect, HBRUSH hBrush)
	{
		return ::FrameRect(m_hdc, rect, hBrush);
	}

	// It draws a border around the specified rectangle by using the specified brush. The width and height of the border are always one logical unit. #FrameRect+Win32+GDI
	int FrameRect(const RECT* rect, Brush& brush)
	{
		return ::FrameRect(m_hdc, rect, brush.GetHBRUSH());
	}

	// It  inverts a rectangle in a window by performing a logical NOT operation on the color values for each pixel in the rectangle's interior. #InvertRect+Win32+GDI
	BOOL InvertRect(const RECT* rect)
	{
		return ::InvertRect(m_hdc, rect);
	}

	// It draws a border around the specified region by using the specified brush. #Win32+GDI+FrameRgn
	bool DrawFrameRegion(CG::Region& region, CG::Brush& brush, int width, int height);

	// It draws a border around the specified region by using the specified brush. #Win32+GDI+FrameRgn
	bool DrawFrameRegion(HRGN hRgn, HBRUSH hBrush, int xFrame, int yFrame);

	// It draws a border around the specified region by using the specified brush. #Win32+GDI+FrameRgn
	bool DrawFrameRegion(HRGN hRgn, Brush& brush, int xFrame, int yFrame);

	// It fills a region by using the specified brush #FillRgn+Win32+GDI
	bool FillRegion(CG::Region& region, CG::Brush& brush);

	// It fills a region by using the specified brush #FillRgn+Win32+GDI
	bool FillRegion(HRGN hRgn, HBRUSH hBrush);

	// It fills a region by using the specified brush #FillRgn+Win32+GDI
	bool FillRegion(HRGN hRgn, Brush& brush);

	// It inverts the colors in the specified region #InvertRgn+Win32+GDI
	bool InvertRegion(CG::Region& region);

	// It inverts the colors in the specified region #InvertRgn+Win32+GDI
	bool InvertRegion(HRGN hRgn);

	// It paints the specified region by using the brush currently selected #PaintRgn+Win32+GDI
	bool PaintRegion(CG::Region& region);

	// It paints the specified region by using the brush currently selected #PaintRgn+Win32+GDI
	bool PaintRegion(HRGN hRgn);

	// It sets the polygon fill mode for functions that fill polygons #SetPolyFillMode+Win32+GDI
	int SetPolyFillMode(bool bWinding)
	{
		return ::SetPolyFillMode(m_hdc, bWinding ? WINDING : ALTERNATE);
	}

	// flags: DC_ACTIVE, DC_BUTTONS, DC_GRADIENT, DC_ICON, DC_INBUTTON, DC_SMALLCAP, DC_TEXT 
	// It draws a window caption #DrawCaption+Win32+GDI
	void DrawWindowCaption(const RECT& rect, UINT flags);

	// It draws a frame control of the specified type and style #DrawFrameControl+Win32+GDI
	// type: DFC_BUTTON, DFC_CAPTION, DFC_MENU, DFC_POPUPMENU, DFC_SCROLL
	// style: DFCS_BUTTON3STATE, DFCS_BUTTONCHECK, DFCS_BUTTONPUSH,DFCS_BUTTONRADIO 
	//DFCS_BUTTONRADIOIMAGE, DFCS_BUTTONRADIOMASK, DFCS_CAPTIONCLOSE
	//DFCS_CAPTIONHELP, DFCS_CAPTIONMAX, DFCS_CAPTIONMIN, DFCS_CAPTIONRESTORE
	void DrawFrameControl(const RECT& rect, UINT type, UINT style);

	// style: DFCS_CAPTIONCLOSE, DFCS_CAPTIONMIN, DFCS_CAPTIONMAX, DFCS_CAPTIONRESTORE DFCS_CAPTIONHELP
	// OR: DFCS_CHECKED, DFCS_FLAT, DFCS_HOT, DFCS_INACTIVE, DFCS_MONO, DFCS_PUSHED, DFCS_TRANSPARENT #DrawFrameControl+Win32+GDI
	void DrawCaptionFrame(const RECT& rect, UINT style);

	// style: DFCS_MENUARROW, DFCS_MENUCHECK, DFCS_MENUBULLET, DFCS_MENUARROWRIGHT
	// OR: DFCS_CHECKED, DFCS_FLAT, DFCS_HOT, DFCS_INACTIVE, DFCS_MONO, DFCS_PUSHED, DFCS_TRANSPARENT #DrawFrameControl+Win32+GDI
	void DrawMenuFrame(const RECT& rect, UINT style);

	// style: DFCS_SCROLLUP, DFCS_SCROLLDOWN, DFCS_SCROLLLEFT, DFCS_SCROLLRIGHT
	// DFCS_SCROLLCOMBOBOX, DFCS_SCROLLSIZEGRIP, DFCS_SCROLLSIZEGRIPRIGHT
	// OR: DFCS_CHECKED, DFCS_FLAT, DFCS_HOT, DFCS_INACTIVE, DFCS_MONO, DFCS_PUSHED, DFCS_TRANSPARENT #DrawFrameControl+Win32+GDI
	void DrawScrollFrame(const RECT& rect, UINT style);

	// style: DFCS_BUTTONCHECK, DFCS_BUTTONRADIOIMAGE, DFCS_BUTTONRADIOMASK, DFCS_BUTTONRADIO
	// DFCS_BUTTON3STATE, DFCS_BUTTONPUSH
	// OR: DFCS_CHECKED, DFCS_FLAT, DFCS_HOT, DFCS_INACTIVE, DFCS_MONO, DFCS_PUSHED, DFCS_TRANSPARENT #DrawFrameControl+Win32+GDI
	void DrawButtonFrame(const RECT& rect, UINT style);

	// It opens a path bracket #BeginPath+Win32+GDI
	BOOL BeginPath()
	{
		return ::BeginPath(m_hdc);
	}

	// It closes a path bracket and selects the path defined #EndPath+Win32+GDI
	BOOL EndPath()
	{
		return ::EndPath(m_hdc);
	}

	// It transforms any curves in the path that is selected, turning each curve into a sequence of lines #FlattenPath+Win32+GDI
	BOOL FlattenPath()
	{
		return ::FlattenPath(m_hdc);
	}

	// It closes any open figures in the current path and fills the path's interior by using the current brush and polygon-filling mode #FillPath+Win32+GDI
	BOOL FillPath()
	{
		return ::FillPath(m_hdc);
	}

	// It renders the specified path by using the current pen #StrokePath+Win32+GDI
	BOOL StrokePath()
	{
		return ::StrokePath(m_hdc);
	}

	// It closes any open figures in a path, strokes the outline of the path by using the current pen, and fills its interior by using the current brush #StrokeAndFillPath+Win32+GDI
	BOOL StrokeAndFillPath()
	{
		return ::StrokeAndFillPath(m_hdc);
	}

	// It restores a device context (DC) to the specified state. The DC is restored by popping state 
	//information off a stack created by earlier calls to the SaveDC function. To restore the most recently save state use n = -1 #RestoreDC+Win32+GDI
	void RestoreDC(int n);
	
	// It saves the current state of the specified device context (DC) by copying data describing selected objects 
	// and graphic modes (such as the bitmap, brush, palette, font, pen, region, drawing mode, and mapping mode)
	// to a context stack. It returns a number than can be used to restore this state by usisng RestoreDC #SaveDC+Win32+GDI
	int SaveDC();
	
	// It draws a rectangle. The rectangle is outlined by using the current pen and filled by using the current brush #Rectangle+Win32+GDI
	BOOL Rectangle(int xLeft, int yTop, int xRight, int yBottom);
	
	// It draws a rectangle. The rectangle is outlined by using the current pen and filled by using the current brush #Rectangle+Win32+GDI
	BOOL Rectangle(const RECT& rect);
	
	// It sets the background mix mode #SetBkMode+Win32+GDI
	int SetBkMode(bool isTransparent);

	// It returns the background mix mode: TRANSPARENT or OPAQUE #GetBkMode+Win32+GDI
	int GetBkMode();

	// It sets text color #SetTextColor+Win32+GDI
	COLORREF SetTextColor(COLORREF color);

	// It returns the text color #GetTextColor+Win32+GDI
	COLORREF GetTextColor();

	// It sets the current background color to the specified color value, or to the nearest physical color #SetBkColor+Win32+GDI
	COLORREF SetBkColor(COLORREF color);

	// It returns the current background color #GetBkColor+Win32+GDI
	COLORREF GetBkColor();

	// It sets the current foreground mix mode. GDI uses the foreground mix mode to combine pens and interiors of 
	// filled objects with the colors already on the screen. The foreground mix mode defines how colors from the 
	// brush or pen and the colors in the existing image are to be combined. 
	// R2_COPYPEN is the default, R2_NOTCOPYPEN to invert, R2_WHITE, R2_BLACK, R2_XORPEN for temporary displaying #SetROP2+Win32+GDI
	int SetROP2(int nMode)
	{
		return ::SetROP2(m_hdc, nMode);
	}

	// It retrieves the foreground mix mode of the specified device context. The mix mode specifies how the pen or interior color and the 
	// color already on the screen are combined to yield a new color. #GetROP2+Win32+GDI
	int GetROP2()
	{
		return ::GetROP2(m_hdc);
	}

	// It sets the intercharacter spacing. Intercharacter spacing is added to each character, including break characters, 
	// when the system writes a line of text. #SetTextCharacterExtra_+Win32+GDI
	int SetTextCharacterExtra_(int nExtra)
	{
		return ::SetTextCharacterExtra(m_hdc, nExtra);
	}

	// It draws a series of line segments by connecting the points in the specified array #Polyline+Win32+GDI
	bool Polyline(const POINT* arrayPoints, int numbPoints);

	// It draws a series of line segments by connecting the points in the specified array #Polyline+Win32+GDI
	bool Polyline(const Sys::PointArray& pointArray);

	// It draws one or more straight lines 
	// PolylineTo moves the current position to the ending point of the last line.
	// If the line segments drawn by this function form a closed figure, the figure is not filled. #PolylineTo+Win32+GDI
	bool PolylineTo(const POINT* arrayPoints, DWORD numbPoints);

	// It draws multiple series of connected line segments, pointsPerPolygon is an array with the 
	// number of points in each polygon #PolyPolyline+Win32+GDI
	bool PolyPolyline(const POINT* arrayPoints, const DWORD* pointsPerPolyline, DWORD numbPolyline);

	// It draws one or more Bezier curves, Start, Control1, Control2, End #PolyBezier+Win32+GDI
	bool PolyBezier(const POINT* arrayPoints, DWORD numbPoints);

	// It draws one or more Bezier curves, Start, Control1, Control2, End #PolyBezier+Win32+GDI
	bool PolyBezier(const Sys::PointArray& pointArray);

	// It draws one or more Bezier curves, Start, Control1, Control2, End #PolyBezierTo+Win32+GDI
	bool PolyBezierTo_(const POINT* arrayPoints, DWORD numbPoints);

	// It draws a polygon consisting of two or more vertices connected by straight lines. 
	// The polygon is outlined by using the current pen and filled by using the current 
	// brush and polygon fill mode. #Polygon+Win32+GDI
	bool Polygon(const POINT* arrayPoints, int numbPoints);

	// It draws a polygon consisting of two or more vertices connected by straight lines. 
	// The polygon is outlined by using the current pen and filled by using the current 
	// brush and polygon fill mode. #Polygon+Win32+GDI
	bool Polygon(const Sys::PointArray& pointArray);

	// It draws a series of closed polygons. Each polygon is outlined by using the current pen and 
	// filled by using the current brush and polygon fill mode. The polygons drawn by this function can overlap.
	// pointsPerPolygon is an array with the number of points in each polygon #PolyPolygon+Win32+GDI
	bool PolyPolygon(const POINT* arrayPoints, const int * pointsPerPolygon, int numbPolygons);

	// It sets the pixel at the specified coordinates to the specified color #SetPixel+Win32+GDI
	COLORREF SetPixel(int x, int y, COLORREF color)
	{
		return ::SetPixel(m_hdc, x, y, color);
	}

	// It retrieves the red, green, blue (RGB) color value of the pixel at the specified coordinates #GetPixel+Win32+GDI
	COLORREF GetPixel_(int x, int y)
	{
		return ::GetPixel(m_hdc, x, y);
	}

	// It returns the internal handle to the device context (hdc) #HDC+Win32+GDI
	HDC GetHDC()
	{
		return m_hdc;
	}
	//
	// It updates the current position to the specified point and optionally returns the previous position #MoveToEx+Win32+GDI
	bool MoveToEx(int nPosX, int nPosY);
	//
	// It draws a line from the current position up to, but not including, the specified point #LineTo+Win32+GDI
	bool LineTo(int nPosX, int nPosY);
	//
	// It draws a line from the point x1, y1 up to, but not including, the point x2, y2 #LineTo+Win32+GDI
	bool Line(int x1, int y1, int x2, int y2);

	// It draws an ellipse. The center of the ellipse is the center of the specified bounding rectangle. The ellipse 
	// is outlined by using the current pen and is filled by using the current brush. #Ellipse+Win32+GDI
	bool Ellipse(int xLeft, int yTop, int xRight, int yBottom);

	bool Circle(double centerX, double centerY, double radius);

	// It retrieves the typeface name of the font that is selected
	// If the function succeeds, the return value is the number of characters copied to the buffer.
	// If the function fails, the return value is zero. #GetTextFace+Win32+GDI
	int GetTextFace(int nCount, wchar_t* pszFontName);

	static double GetMaxScale(const CG::PointF * pfInterior, const CG::PointF * sizeExterior);
	
	// It sets a two-dimensional linear transformation between world space and page space for the specified device context. 
	// This function requires GDI advanced mode gdi.SetGraphicsMode(GM_ADVANCED);
	// This transformation can be used to rotate or translate graphics output. #SetWorldTransform +Win32+GDI
	bool SetWorldTransformation(double angle, double translationX, double translationY);

	// It sets a two-dimensional linear transformation between world space and page space for the specified device context. 
	// This function requires GDI advanced mode gdi.SetGraphicsMode(GM_ADVANCED);
	// This transformation can be used to scale, rotate, shear, or translate graphics output. #SetWorldTransform +Win32+GDI
	bool SetWorldTransformation(const XFORM& transformationMatrix);

	// It sets the graphics mode #SetGraphicsMode+Win32+GDI
	int SetAdvancedMode(bool advanced);

	//It sets the graphics mode for the specified device context: GM_COMPATIBLE or GM_ADVANCED (allows world transformations). 
	// If the function succeeds, the return value is the old graphics mode. If the function fails, the return value is zero. #SetGraphicsMode+Win32+GDI
	int SetGraphicsMode(int graphicsMode);

	// It draws a rectangle with rounded corners. The rectangle is outlined by using the current pen 
	// and filled by using the current brush. #RoundRect+Win32+GDI
	BOOL RoundRect(int xLeft, int yTop, int xRight, int yBottom, int xCornerEllipse, int yCornerEllipse);

	// It draws a rectangle with rounded corners. The rectangle is outlined by using the current pen 
	// and filled by using the current brush. #RoundRect+Win32+GDI
	BOOL RoundRect(RECT& rect, int xCornerEllipse, int yCornerEllipse);

	// It draws an elliptical arc #Arc+Win32+GDI
	BOOL Arc(int xLeft, int yTop, int xRight, int yBottom, int xStart, int yStart, int xEnd, int yEnd);

	// It draws a circular arc
	void Arc(double centerX, double centerY, double radius, double startAngleDegrees, double endAngleDegrees);

	// It draws a chord (a region bounded by the intersection of an ellipse and a line segment, called a secant). 
	// The chord is outlined by using the current pen and filled by using the current brush. #Chord+Win32+GDI
	BOOL Chord(int xLeft, int yTop, int xRight, int yBottom, int xStart, int yStart, int xEnd, int yEnd);

	// It draws a chord (a region bounded by the intersection of a circle and a line segment, called a secant). 
	// The chord is outlined by using the current pen and filled by using the current brush. #Chord+Win32+GDI
	void Chord(double centerX, double centerY, double radius, double startAngleDegrees, double endAngleDegrees);

	// It draws a pie-shaped wedge bounded by the intersection of an ellipse and two radials. 
	// The pie is outlined by using the current pen and filled by using the current brush. #Pie+Win32+GDI
	BOOL Pie(int xLeft, int yTop, int xRight, int yBottom, int xStart, int yStart, int xEnd, int yEnd);

	// It draws a pie-shaped wedge bounded by the intersection of a circle and two radials. 
	// The pie is outlined by using the current pen and filled by using the current brush. #Pie+Win32+GDI
	void Pie(double centerX, double centerY, double radius, double startAngleDegrees, double endAngleDegrees);

	// It writes a character string at a specified location, expanding tabs to the values specified in an array of tab-stop positions. 
	// Text is written in the currently selected font, background color, and text color.#TabbedTextOut+Win32+GDI
	BOOL TabbedTextOut(int x, int y, const wchar_t * pszString, int nCount, int nTabPositions, int* pcInt, int nTabOrigin);

	// It prints all lines in a paragraph.  It returns the number of lines requiered to display the text in the specified width
	// alignment: WIN_ALIGNMENT_LEFT, WIN_ALIGNMENT_RIGHT, WIN_ALIGNMENT_CENTER, WIN_ALIGNMENT_JUSTIFIED
	int DrawParagraph(const wchar_t* text, int paragraph_width, int x, int y, int alignment);

	// It converts a text paragraph into a vector of lines with their positions
	// alignment: WIN_ALIGNMENT_LEFT, WIN_ALIGNMENT_RIGHT, WIN_ALIGNMENT_CENTER, WIN_ALIGNMENT_JUSTIFIED
	// It returns the number of lines requiered to display the text in the specified width
	int ParagraphToLines(const wchar_t* text, int paragraph_width, int x, int y, int alignment, vector<CG::TextLine>& out_lines);

	// It draws formatted text in the specified rectangle expanding tabs, justifying characters, breaking lines, and so forth
	// uFormat = DT_LEFT | DT_TOP | DT_WORDBREAK | DT_END_ELLIPSIS | DT_MODIFYSTRING | DT_EDITCONTROL
	//DT_BOTTOM, DT_CALCRECT, DT_CENTER, DT_EDITCONTROL, DT_END_ELLIPSIS, DT_EXPANDTABS, 
	//DT_EXTERNALLEADING, DT_HIDEPREFIX, DT_INTERNAL, DT_LEFT, DT_MODIFYSTRING,  DT_NOCLIP, 
	//DT_NOFULLWIDTHCHARBREAK, DT_NOPREFIX, DT_PATH_ELLIPSIS, DT_PREFIXONLY, DT_RIGHT, DT_RTLREADING, 
	//DT_SINGLELINE, DT_TABSTOP, DT_TOP, DT_VCENTER, DT_WORDBREAK, DT_WORD_ELLIPSIS you can use SetTextAlign() #DrawText+Win32+GDI
	int DrawText(wchar_t* text, RECT &rect, UINT uFormat);

	// It draws formatted text in the specified rectangle expanding tabs, justifying characters, breaking lines, and so forth
	// uFormat = DT_LEFT | DT_TOP | DT_WORDBREAK | DT_END_ELLIPSIS | DT_MODIFYSTRING | DT_EDITCONTROL
	//DT_BOTTOM, DT_CALCRECT, DT_CENTER, DT_EDITCONTROL, DT_END_ELLIPSIS, DT_EXPANDTABS, 
	//DT_EXTERNALLEADING, DT_HIDEPREFIX, DT_INTERNAL, DT_LEFT, DT_MODIFYSTRING,  DT_NOCLIP, 
	//DT_NOFULLWIDTHCHARBREAK, DT_NOPREFIX, DT_PATH_ELLIPSIS, DT_PREFIXONLY, DT_RIGHT, DT_RTLREADING, 
	//DT_SINGLELINE, DT_TABSTOP, DT_TOP, DT_VCENTER, DT_WORDBREAK, DT_WORD_ELLIPSIS you can use SetTextAlign() #DrawText+Win32+GDI
	int DrawText(wstring& text, RECT &rect, UINT uFormat);

	// It draws formatted text in the specified rectangle. 
	//The text alignment mode for the device context must include the TA_LEFT, TA_TOP, and TA_NOUPDATECP flags 
	//DT_BOTTOM, DT_CALCRECT,DT_CENTER,DT_EDITCONTROL, DT_END_ELLIPSIS, DT_EXPANDTABS, DT_EXTERNALLEADING 
	//DT_HIDEPREFIX, DT_INTERNAL, DT_LEFT, DT_MODIFYSTRING, DT_NOCLIP, DT_NOFULLWIDTHCHARBREAK, 
	//DT_NOPREFIX, DT_PATH_ELLIPSIS, DT_PREFIXONLY, DT_RIGHT, DT_SINGLELINE, DT_TABSTOP 
	//DT_TOP, DT_VCENTER, DT_WORDBREAK, DT_WORD_ELLIPSIS #DrawTextEx+Win32+GDI 
	BOOL DrawTextEx(wchar_t* text, RECT& rect, UINT uFormat, LPDRAWTEXTPARAMS pDrawTextParams);

	// It draws the specified edges of a rectangle to create a raised or sunken effect
	// flags BF_RECT BF_LEFT BF_RIGHT BF_TOP BF_BOTTOM i.e. flags = BF_LEFT | BF_RIGHT
	// If drawGrayBorder is true, edgeWidth must be greater than 2 (i.e., 3, 4, 5, ...)
	// If drawBorder is false, edgeWidth must be greater than 1 (i.e., 2, 3, 4, ...)
	void DrawEdge(const RECT& rect, bool drawGrayBorder, int edgeWidth, COLORREF color, bool raised, unsigned int flags);

	// It draws the specified edges of a rectangle to create a raised or sunken effect
	//edge: BDR_RAISEDOUTER BDR_SUNKENOUTER BDR_RAISEDINNER BDR_SUNKENINNER 
	//BDR_OUTER BDR_INNER BDR_RAISED BDR_SUNKEN, 
	//grfFlags: BF_RECT BF_FLAT BF_LEFT BF_MONO BF_RIGHT BF_SOFT 
	//BF_TOP BF_TOPLEFT BF_TOPRIGHT BF_BOTTOMRIGHT BF_ADJUST #DrawEdge+Win32+GDI 
	BOOL DrawEdge(RECT& rect, UINT edge, UINT grfFlags);

	// it draws a button using the specified color
	// If drawGrayBorder is true, edgeWidth must be greater than 2 (i.e., 3, 4, 5, ...)
	// If drawBorder is false, edgeWidth must be greater than 1 (i.e., 2, 3, 4, ...)
	void DrawButton(const RECT& rect, bool isUp, bool defaultButton, bool drawGrayBorder, int edgeWidth, COLORREF color);

	// It draws a rectangle in the style used to indicate that the rectangle has the focus #DrawFocusRect+Win32+GDI
	BOOL DrawFocusRect(RECT& rect);

	// It returns true if the rectangles overlapped #IntersectRect+Win32+GDI 
	static bool DoRectOverlap(RECT& rectA, RECT& rectB);
	static bool Inflate(RECT& rectResult, RECT& rectOriginal, int nAmount);

	void Cilinder(int x, int y, double radius, double height, bool topEllipse, bool bottomEllipse); 
	void SolidCilinder(int x, int y, double radius, double height, COLORREF color); 
	//bool OnPaintLoopX_(RECT& rcTotalLoopArea, int* array, int arrayLength, int& index1, int& index2, int& nTop, int& nBottom);
	//bool OnPaintLoopY_(RECT& rcTotalLoopArea, int* array, int arrayLength,  int& index1, int& index2, int& nLeft, int& nRight);
	//bool OnPaintLoopX(int deltaX, RECT& rcTotalLoopArea, RECT& rcRequiredLoopArea);
	//bool OnPaintLoopY(int deltaY, RECT& rcTotalLoopArea, RECT& rcRequiredLoopArea);
	//bool OnPaintLoopX(double inDeltaX, RECT& inRectBox, int& outTop, int& outBottom, int& outIndex1, int& outIndex2);
	//bool OnPaintLoopY(double inDeltaY, RECT& inRectBox, int& outLeft, int& outRight, int& outIndex1, int& outIndex2);

	operator HDC() 
		{return m_hdc;}
	operator HDC &() 
		{return m_hdc;}
	operator RECT()
		{return m_ps.rcPaint;}
	PAINTSTRUCT& GetPaintStruct()
		{return m_ps;}

	// It returns the area that needs to be painted
	const RECT& GetRcPaint();

	// It selects a font #SelectObject+Win32+GDI 
	HFONT Select(CG::Font& font);

	// It selects a font #SelectObject+Win32+GDI 
	HFONT SelectFont__(HFONT hFont);
	
	// It selects the white pen #WHITE_PEN+Win32+GDI 
	HPEN SelectWhitePen();
	
	// It selects the black pen #BLACK_PEN+Win32+GDI 
	HPEN SelectBlackPen();
	
	// It selects the null pen to paint objects without borders #NULL_PEN+Win32+GDI 
	HPEN SelectNullPen();
	
	// It selects a pen #SelectObject+Win32+GDI 
	HPEN Select(CG::Pen& pen);
	
	// It selects a pen #SelectObject+Win32+GDI 
	HPEN SelectPen__(HPEN hPen);
	
	// It selects a brush #SelectObject+Win32+GDI 
	HBRUSH Select(CG::Brush& brush);
	
	// It selects a brush #SelectObject+Win32+GDI
	HBRUSH SelectBrush__(HBRUSH hBrush);
	
	// It selects the white brush #WHITE_BRUSH+Win32+GDI
	HBRUSH SelectWhiteBrush();
	
	// It selects the dark gray brush #DKGRAY_BRUSH+Win32+GDI
	HBRUSH SelectDarkGrayBrush();

	// It selects the hollow brush #HOLLOW_BRUSH+Win32+GDI
	HBRUSH SelectHollowBrush();

	// It selects the light gray brush #LTGRAY_BRUSH+Win32+GDI
	HBRUSH SelectLightGrayBrush();

	// It selects the gray brush #GRAY_BRUSH+Win32+GDI
	HBRUSH SelectGrayBrush();

	// It selects the black brush #BLACK_BRUSH+Win32+GDI
	HBRUSH SelectBlackBrush();

	// It selects the null brush to paint objects whithout altering the backgroun #NULL_BRUSH+Win32+GDI
	HBRUSH SelectNullBrush();

#ifdef WIN_GDI_PLUS_ON 
	Gdiplus::Graphics& GetGdiPlus();
	__declspec( property( get=GetGdiPlus ) ) Gdiplus::Graphics& Plus;
#endif
private:
#ifdef WIN_GDI_PLUS_ON 
	Gdiplus::Graphics* pGdiPlus;
#endif
	CG::Brush * m_pBrush;
	CG::Pen* m_pPen;
	CG::Font* m_pFont;
	HFONT UpdateFont(Font* pFont, HFONT hFont);
	HPEN UpdatePen(Pen* pPen, HPEN hPen);
	HBRUSH UpdateBrush(Brush* pBrush, HBRUSH hBrush);
	void UpdateFontExt(Font* pFont);
	void UpdatePenExt(Pen* pPen);
	void UpdateBrushExt(Brush* pBrush);
	void Constructor();
	//_______________________________________________ Initial State
	HBRUSH _hBrushInitial;
	HPEN _hPenInitial;
	HFONT _hFontInitial;
	COLORREF _backColorInitial;
	COLORREF _textColorInitial;
	unsigned int _textAlignInitial;
	int _modeBkInitial;
	__int32 _initialState;
	int _mapModeDcState;
	int _graphicsMode;
	//
	enum Type{FromPainstruct, CaptureReleaseDc, BeginEndPaint};
	HDC m_hdc;
	PAINTSTRUCT m_ps;
	HWND m_hWnd;
	CG::Gdi::Type m_type;
	friend class CG::Font;
	friend class CG::Pen;
	friend class CG::Brush;
protected:
	Gdi();
};

//_____________________________________________________________________ CG::PdfGdi
class PdfGdi : public CG::IGdi
{
public:
	PdfGdi();
	~PdfGdi();
	void PageSetup(int paperSize, bool isPortrait);
	double cmMarginLeft;
	double cmMarginTop;
	double cmMarginRight;
	double cmMarginBottom;
	//____________________________________________________________ DotsPerInch
	void SetDotsPerInch(double dpi);
	double GetDotsPerInch();
	__declspec(property(get=GetDotsPerInch, put=SetDotsPerInch)) double DotsPerInch;
	
	// It retrieves device-specific information, index: DRIVERVERSION, TECHNOLOGY, HORZSIZE, VERTSIZE, HORZRES, VERTRES, LOGPIXELSX, 
	// LOGPIXELSY, BITSPIXEL, PLANES, NUMBRUSHES, NUMPENS, NUMFONTS, NUMCOLORS, ASPECTX, ASPECTY, ASPECTXY, PDEVICESIZE, 
	// CLIPCAPS, SIZEPALETTE, NUMRESERVED, COLORRES, PHYSICALWIDTH, PHYSICALHEIGHT, PHYSICALOFFSETX, PHYSICALOFFSETY
	//VREFRESH, SCALINGFACTORX, SCALINGFACTORY, BLTALIGNMENT, SHADEBLENDCAPS, RASTERCAPS, CURVECAPS, LINECAPS
	// POLYGONALCAPS, TEXTCAPS, COLORMGMTCAPS #GetDeviceCaps+Win32+GDI
	int GetDeviceCAPS(int index);
	// Width, in millimeters, of the physical screen #HORZSIZE+GetDeviceCaps+Win32+GDI
	int GetPhysicalScreenWidth_mm();

	// Height, in millimeters, of the physical screen #VERTSIZE+GetDeviceCaps+Win32+GDI
	int GetPhysicalScreenHeight_mm();

	// Width, in pixels, of the screen; or for printers, the width, in pixels, of the printable area of the page #HORZRES+GetDeviceCaps+Win32+GDI
	int GetPhysicalScreenWidth_pixels();

	// Height, in raster lines, of the screen; or for printers, the height, in pixels, of the printable area of the page.#VERTRES+GetDeviceCaps+Win32+GDI
	int GetPhysicalScreenHeight_pixels();

	// Number of pixels per centimeter
	double GetPixelsPerCentimeter();

	// Number of pixels per point (72 points is 1 inch)
	double GetPixelsPerPoint();

	// Number of pixels per logical inch along the screen width #LOGPIXELSX+GetDeviceCaps+Win32+GDI
	int GetHorizontalDPI();

	// Number of pixels per logical inch along the screen height #LOGPIXELSY+GetDeviceCaps+Win32+GDI
	int GetVerticalDPI();

	// It retrieves the number of pixels per millimeter in X #GetDeviceCaps+Win32+GDI
	double GetPixelsPerMillimeterX();

	// It retrieves the number of pixels per millimeter in Y #GetDeviceCaps+Win32+GDI
	double GetPixelsPerMillimeterY();

	// It returns the width of the pritable area and the page. For example, a printer set to print at 600 dpi on 8.5-x11-inch paper has a 
	// physical width value of 5100 device units. Note that the physical page is almost always greater than the printable area 
	// of the page, and never smaller. #PHYSICALWIDTH+GetDeviceCaps+Win32+GDI 
	int GetPhysicalWidth();

	// It returns the height of the pritable area and the page. For example, a printer set to print at 600 dpi on 8.5-x11-inch paper has a 
	// physical height value of 6600 device units. Note that the physical page is almost always greater than the printable area 
	// of the page, and never smaller. #PHYSICALHEIGHT+GetDeviceCaps+Win32+GDI 
	int GetPhysicalHeight();

	// It returns the horizontal offset from the printable area and the page #PHYSICALOFFSETX+GetDeviceCaps+Win32+GDI 
	int GetPhysicalOffsetX();

	// It returns the horizontal offset from the printable area and the page #PHYSICALOFFSETY+GetDeviceCaps+Win32+GDI 
	int GetPhysicalOffsetY();
	
	// It updates the current position to the specified point
	bool MoveToEx(int x, int y);
	
	// It draws a line from the current position up to the specified point
	bool LineTo(int x, int y);
	
	// It draws a line from the current position up tothe specified point
	bool Line(int x1, int y1, int x2, int y2);
	
	// It restores a device context (DC) to the last call to SaveDC, the state value is ignored
	void RestoreDC(int state);
	
	// It saves the current state of the specified device context (DC)
	int SaveDC();
	
	// It draws a rectangle. The rectangle is outlined by using the current pen and filled by using the current brush
	BOOL Rectangle(int xLeft, int yTop, int xRight, int yBottom);
	
	// It draws a rectangle. The rectangle is outlined by using the current pen and filled by using the current brush
	BOOL Rectangle(const RECT& rect);

	// It selects a font #SelectObject+Win32+GDI 
	HFONT Select(CG::Font& font);

	// It selects a font #SelectObject+Win32+GDI 
	HFONT SelectFont__(HFONT hFont);

	// It selects the white pen #WHITE_PEN+Win32+GDI 
	HPEN SelectWhitePen();

	// It selects the black pen #BLACK_PEN+Win32+GDI 
	HPEN SelectBlackPen();

	// It selects the null pen to paint objects without borders #NULL_PEN+Win32+GDI 
	HPEN SelectNullPen();

	// It selects a pen #SelectObject+Win32+GDI 
	HPEN Select(CG::Pen& pen);

	// It selects a pen #SelectObject+Win32+GDI 
	HPEN SelectPen__(HPEN hPen);

	// It selects a brush #SelectObject+Win32+GDI 
	HBRUSH Select(CG::Brush& brush);

	// It selects a brush #SelectObject+Win32+GDI
	HBRUSH SelectBrush__(HBRUSH hBrush);

	// It selects the white brush #WHITE_BRUSH+Win32+GDI
	HBRUSH SelectWhiteBrush();

	// It selects the dark gray brush #DKGRAY_BRUSH+Win32+GDI
	HBRUSH SelectDarkGrayBrush();

	// It selects the hollow brush #HOLLOW_BRUSH+Win32+GDI
	HBRUSH SelectHollowBrush();

	// It selects the light gray brush #LTGRAY_BRUSH+Win32+GDI
	HBRUSH SelectLightGrayBrush();

	// It selects the gray brush #GRAY_BRUSH+Win32+GDI
	HBRUSH SelectGrayBrush();

	// It selects the black brush #BLACK_BRUSH+Win32+GDI
	HBRUSH SelectBlackBrush();

	// It selects the null brush to paint objects whithout altering the backgroun #NULL_BRUSH+Win32+GDI
	HBRUSH SelectNullBrush();

	// It sets the background mix mode
	int SetBkMode(bool isTransparent);

	// It returns the background mix mode: TRANSPARENT or OPAQUE
	int GetBkMode();

	// It sets text color
	COLORREF SetTextColor(COLORREF color);

	// It returns the text color
	COLORREF GetTextColor();

	// It sets the current background color
	COLORREF SetBkColor(COLORREF color);

	// It returns the current background color
	COLORREF GetBkColor();

	bool DoRcPaintOverlap(RECT& rect);

	// It returns the area that needs to be painted
	const RECT& GetRcPaint();

	// It fills a rectangle by using the specified brush. This function includes the left and top borders, but excludes the right and bottom borders of the rectangle.
	int FillRect(const RECT& rect, HBRUSH hBrush);

	// It fills a rectangle by using the specified brush. This function includes the left and top borders, but excludes the right and bottom borders of the rectangle.
	int FillRect(const RECT& rect, CG::Brush& brush);

	// It fills a rectangle by using the specified brush. This function includes the left and top borders, but excludes the right and bottom borders of the rectangle.
	int FillRect(int xLeft, int yTop, int xRight, int yBottom, CG::Brush& brush);

	// It returns the size (width and height) of the specified text
	bool GetTextExtentPoint32(const wchar_t * text, SIZE& size);

	// It returns the size (width and height) of the specified text
	bool GetTextExtentPoint32(const wstring& text, SIZE& size);

	// It returns the width of the specified text
	int GetTextWidth(const wchar_t* text);

	//It returns metrics about the font such as average char width, etc.
	bool GetTextMetrics(TEXTMETRIC& out_TextMetric);

	//textAlign is a combination of TA_CENTER, TA_LEFT, TA_RIGHT, TA_BASELINE, TA_BOTTOM, TA_TOP
	unsigned int SetTextAlign(unsigned int textAlign);

	// The GetTextAlign function retrieves the text-alignment setting for the specified device context.
	// It returns a OR combination of: TA_CENTER, TA_LEFT, TA_RIGHT, TA_BASELINE, TA_BOTTOM, TA_TOP
	unsigned int GetTextAlign();

	// It draws text
	bool TextOut(int x, int y, const wchar_t * text);

	// It draws text
	bool TextOut(int x, int y, const wstring& text);

	// It draws text
	bool TextOut(int x, int y, const wchar_t * text, int text_length);

	// It draws text centered inside a rectangle
	void TextOut(const RECT& rect, const wchar_t * text);

	// It draws text centered inside a rectangle
	void TextOut(const RECT& rect, const wstring& text);

	// It draws a circular arc
	void Arc(double centerX, double centerY, double radius, double startAngleDegrees, double endAngleDegrees);

	// It draws a chord (a region bounded by the intersection of a circle and a line segment, called a secant). 
	// The chord is outlined by using the current pen and filled by using the current brush. #Chord+Win32+GDI
	void Chord(double centerX, double centerY, double radius, double startAngleDegrees, double endAngleDegrees);

	// It draws a pie-shaped wedge bounded by the intersection of a circle and two radials. 
	// The pie is outlined by using the current pen and filled by using the current brush.
	void Pie(double centerX, double centerY, double radius, double startAngleDegrees, double endAngleDegrees);

	// It draws an ellipse. The center of the ellipse is the center of the specified bounding rectangle. The ellipse 
	// is outlined by using the current pen and is filled by using the current brush. #Ellipse+Win32+GDI
	bool Ellipse(int xLeft, int yTop, int xRight, int yBottom);

	bool Circle(double centerX, double centerY, double radius);

	// It draws a series of line segments by connecting the points in the specified array #Polyline+Win32+GDI
	bool Polyline(const POINT* arrayPoints, int nCount);

	// It draws one or more straight lines 
	// PolylineTo moves the current position to the ending point of the last line.
	// If the line segments drawn by this function form a closed figure, the figure is not filled.
	bool PolylineTo(const POINT* arrayPoints, DWORD nCount);

	// It draws multiple series of connected line segments, pointsPerPolygon is an array with the 
	// number of points in each polygon #PolyPolyline+Win32+GDI
	bool PolyPolyline(const POINT* arrayPoints, const DWORD* pointsPerPolygon, DWORD nCount);

	// It draws one or more Bezier curves, Start, Control1, Control2, End #PolyBezier+Win32+GDI
	bool PolyBezier(const POINT* arrayPoints, DWORD numbPoints);

	// It draws one or more Bezier curves, Start, Control1, Control2, End #PolyBezierTo+Win32+GDI
	bool PolyBezierTo_(const POINT* arrayPoints, DWORD numbPoints);

	// It draws a polygon consisting of two or more vertices connected by straight lines. 
	// The polygon is outlined by using the current pen and filled by using the current 
	// brush and polygon fill mode. #Polygon+Win32+GDI
	bool Polygon(const POINT* arrayPoints, int numbPoints);

	// It draws a series of closed polygons. Each polygon is outlined by using the current pen and 
	// filled by using the current brush and polygon fill mode. The polygons drawn by this function can overlap.
	// pointsPerPolygon is an array with the number of points in each polygon #PolyPolygon+Win32+GDI
	bool PolyPolygon(const POINT* arrayPoints, const int * pointsPerPolygon, int numbPolygons);

	// It sets the pixel at the specified coordinates to the specified color #SetPixel+Win32+GDI
	COLORREF SetPixel(int x, int y, COLORREF color);

	// It sets the horizontal and vertical extents of the viewport
	bool SetViewportExtEx(int width, int height, SIZE* prevViewportExtent);

	// It retrieves the x-extent and y-extent of the current viewport
	bool GetViewportExtEx(SIZE& out_viewportExt);

	// It sets the horizontal and vertical extents of the window
	bool SetWindowExtEx(int width, int height, SIZE* prevWindowExtent);

	// It retrieves the x-extent and y-extent of the window
	bool GetWindowExtEx(SIZE& out_windowExtent);

	// It specifies which device point maps to the window origin (0,0)
	bool SetViewportOrgEx(int pixelsX, int pixelsY, POINT* prevViewportOrg);

	// It retrieves the x-coordinates and y-coordinates of the viewport origin (pixels)
	bool GetViewportOrgEx(POINT& out_viewportOrg);

	// It specifies which window point maps to the viewport origin (0,0)
	bool SetWindowOrgEx(int luX, int luY, POINT* prevWindowOrg);

	// It retrieves the x-coordinates and y-coordinates of the window origin (logical units)
	bool GetWindowOrgEx(POINT& out_windowOrg);

	// It selects a region as the current clipping region
	// It returns: NULLREGION, SIMPLEREGION, COMPLEXREGION, ERROR
	// To remove a device-context's clipping region, specify a NULL region handle #SelectClipRgn+Win32+GDI
	int SelectClippingRegion(CG::Region& region);

	// It converts device units into logical units
	bool DPtoLP(POINT* in_out_points, int pointCount);

	// It converts logical units into device units
	bool LPtoDP(POINT* in_out_points, int pointCount);

	// It converts device units into logical units
	bool DPtoLP(RECT& in_out_rect);

	// It converts logical units into device units
	bool LPtoDP(RECT& in_out_rect);

	// flags: DC_ACTIVE, DC_BUTTONS, DC_GRADIENT, DC_ICON, DC_INBUTTON, DC_SMALLCAP, DC_TEXT 
	// It draws a window caption
	void DrawWindowCaption(const RECT& rect, UINT flags);

	// It draws a frame control of the specified type and style
	// type: DFC_BUTTON, DFC_CAPTION, DFC_MENU, DFC_POPUPMENU, DFC_SCROLL
	// style: DFCS_BUTTON3STATE, DFCS_BUTTONCHECK, DFCS_BUTTONPUSH,DFCS_BUTTONRADIO 
	//DFCS_BUTTONRADIOIMAGE, DFCS_BUTTONRADIOMASK, DFCS_CAPTIONCLOSE
	//DFCS_CAPTIONHELP, DFCS_CAPTIONMAX, DFCS_CAPTIONMIN, DFCS_CAPTIONRESTORE
	void DrawFrameControl(const RECT& rect, UINT type, UINT style);

	// style: DFCS_CAPTIONCLOSE, DFCS_CAPTIONMIN, DFCS_CAPTIONMAX, DFCS_CAPTIONRESTORE DFCS_CAPTIONHELP
	// OR: DFCS_CHECKED, DFCS_FLAT, DFCS_HOT, DFCS_INACTIVE, DFCS_MONO, DFCS_PUSHED, DFCS_TRANSPARENT
	void DrawCaptionFrame(const RECT& rect, UINT style);

	// style: DFCS_MENUARROW, DFCS_MENUCHECK, DFCS_MENUBULLET, DFCS_MENUARROWRIGHT
	// OR: DFCS_CHECKED, DFCS_FLAT, DFCS_HOT, DFCS_INACTIVE, DFCS_MONO, DFCS_PUSHED, DFCS_TRANSPARENT
	void DrawMenuFrame(const RECT& rect, UINT style);

	// style: DFCS_SCROLLUP, DFCS_SCROLLDOWN, DFCS_SCROLLLEFT, DFCS_SCROLLRIGHT
	// DFCS_SCROLLCOMBOBOX, DFCS_SCROLLSIZEGRIP, DFCS_SCROLLSIZEGRIPRIGHT
	// OR: DFCS_CHECKED, DFCS_FLAT, DFCS_HOT, DFCS_INACTIVE, DFCS_MONO, DFCS_PUSHED, DFCS_TRANSPARENT
	void DrawScrollFrame(const RECT& rect, UINT style);

	// vertex includes an arrays of points with their respective colors
	// rectangles is an array of indexes that contains which indexes in vertex are used for each rectangle
	// It fills an array of rectangles using a smooth color transition.
	bool GradientFillRectH(TRIVERTEX* vertex, unsigned int numVertex, GRADIENT_RECT* rectangles, unsigned int numRectangles);
	bool GradientFillRectH(const RECT& rect, COLORREF colorLeft, COLORREF colorRight);
	
	// vertex includes an arrays of points with their respective colors
	// rectangles is an array of indexes that contains which indexes in vertex are used for each rectangle
	// It fills an array of rectangles using a smooth color transition.
	bool GradientFillRectV(TRIVERTEX* vertex, unsigned int numVertex, GRADIENT_RECT* rectangles, unsigned int numRectangles);
	bool GradientFillRectV(const RECT& rect, COLORREF colorTop, COLORREF colorBottom);
	
	// vertex includes an arrays of points with their respective colors
	// triangles is an array of indexes that contains which indexes in vertex are used for each triangle
	// It fills an array of triangles using a smooth color transition.
	bool GradientFillTriangle(TRIVERTEX* vertex, unsigned int numVertex, GRADIENT_TRIANGLE* triangles, unsigned int numTriangles);

	// It draws an icon from an Image List.  dx is the width of the portion of the image to draw relative to the upper-left corner of the image. 
	// If dx and dy are zero, the function draws the entire image. dx is the height of the portion of the image to draw, 
	// relative to the upper-left corner of the image. backColor and foregroundColor can be: CLR_NONE or CLR_DEFAULT
	// style: ILD_BLEND, ILD_BLEND25, ILD_BLEND50, ILD_FOCUS, ILD_IMAGE, ILD_MASK, ILD_NORMAL
	// ILD_SELECTED, ILD_TRANSPARENT
	bool DrawIcon(HIMAGELIST imageList, int index, int x, int y, int dx, int dy, COLORREF backColor,
		COLORREF foregroundColor, UINT style);

	// It draws an icon from an Image List
	bool DrawIcon(HIMAGELIST imageList, int index, int x, int y);

	// It draws an icon
	bool DrawIcon(int x, int y, HICON hIcon);

	// It draws an icon.  The width and height provided here may produce the icon to scale.
	// flags: DI_DEFAULTSIZE, DI_IMAGE, DI_MASK, DI_NOMIRROR, DI_NORMAL
	bool DrawIcon(int x, int y, Sys::Icon& icon, int width, int height, unsigned int stepIfAnyCur, HBRUSH brushBackground, unsigned int flags);

	// It draws an icon.  The width and height provided here may produce the icon to scale.
	bool DrawIcon(int x, int y, Sys::Icon& icon, int width, int height, CG::Brush& brushBackground);

	bool DrawIcon(int x, int y, HICON hIcon, int width, int height, unsigned int stepIfAnyCur, HBRUSH brushBackground, unsigned int flags);

	// It draws an icon. The width and height are the same as those provided when loading the icon.
	// If the width and height of the icon were not provided when loading the icon, the default size for the DPI will be used
	bool DrawIcon(int x, int y, Sys::Icon& icon);

	// It draws an icon. The width and height are the same as those provided when loading the icon.
	// If the width and height of the icon were not provided when loading the icon, the default size for the DPI will be used
	bool DrawIcon(int x, int y, Sys::Icon& icon, CG::Brush& brushBackground);

	void DrawGraphics(Sys::Graphics& graphics, int x, int y);
	void DrawGraphics(Sys::Graphics& graphics, int x, int y, int width, int height);
	void RemoveClippingRegion();
	//
	Pdf::Page& GetPage();
private:
	Pdf::Page page;
	void UpdatePageSetup();
	void StrokeAndFill();
	Pdf::Document _pdfDocument; // This variable is only used to get font information
	//double TransformX(int x);
	double TransformX(double x);
	//double TransformY(int y);
	double TransformY(double y);
	
	double _dpi;
	double _scale;
	//______________________ Select
	LOGPEN _logPen; //logpnStyle: PS_SOLID, PS_DASH, PS_DOT, PS_DASHDOT, PS_DASHDOTDOT, PS_NULL
	LOGBRUSH _logBrush; //lbStyle: BS_NULL, BS_SOLID, BS_HOLLOW
	LOGFONT _logFont;
	//
	HPEN _hPen;
	HBRUSH _hBrush;
	HFONT _hFont;
	//
	COLORREF _backColor;
	COLORREF _textColor;
	bool _isTransparent;
	unsigned int _textAlign;
	//
	RECT _rcPaint;
	//
	double GetLeftMargin_cm();
	double GetRightMargin_cm();
	double GetTopMargin_cm();
	double GetBottomMargin_cm();
	//
	POINT _windowOrigin;
	SIZE _windowExtent;
	//
	POINT _viewportOrigin;
	SIZE _viewportExtent;
};

//_____________________________________________________________________ CG::Metafile
// It provides support to handle metafiles (native vector graphics)
class Metafile
{
public:
	Metafile(void);
	virtual ~Metafile(void);
	//
	Metafile(const CG::Metafile& init);
	CG::Metafile& operator=(const CG::Metafile& init);
	HDC Create();
	bool CreateFromResource(HINSTANCE hInstance, int emf_id);
	bool Create(HENHMETAFILE hEMF);

	// filename L"C:\\\\Users\\my_image.emf"
	// description L"Wintempla\0Control\0\0"
	HDC CreateToFile(HDC hdcRef, RECT* rect, const wchar_t* filename, const wchar_t* description);
	HDC CreateToFile(HWND hWnd, const wchar_t* filename, int width, int height);
	//
	// It loads a *.emf or *.wmf file
	bool Load(const wchar_t* filename);
	SIZE GetSizeInDeviceUnits(void);
	SIZE GetSizeIn0_01mm(void);
	HENHMETAFILE Close();
	void Delete();
	UINT GetHeader(ENHMETAHEADER& header);
	BOOL Enumerate(HDC hdc, const RECT* pRect);
	static int CALLBACK EmfProc(HDC hdc, HANDLETABLE* phTable, const ENHMETARECORD* pEmfRecord, int nHandles, LPARAM lData);
	HENHMETAFILE GetHandle();
	HDC GetHDC();
private:
	void Copy(const CG::Metafile& init);
	HENHMETAFILE hEMF;
	HMETAFILE hMF;
	HDC hdcEMF;
};

//_____________________________________________________________________ CG::DibSection
class DibSection
{
public:
	DibSection();
	~DibSection();
	void Delete();
	bool CreateCompatible(HDC hdc, int width, int height);
	bool CreateCompatibleWithScreen(int width, int height);
	int GetWidth();
	int GetHeight();
	HDC GetBitmapDC();
	void SetTransparency(COLORREF colorTransparency, int alpha);
private:
	HBITMAP hBitmap;
	HDC hMemDC;
	HBITMAP hBitmapOld;
	int width;
	int height;
	BYTE *pBits;
	friend class Gdi;
};

//_____________________________________________________________________ CG::DibInfo
// This class is used to convert a DDBitmap to a DIBitmap
class DibInfo
{
public:
	DibInfo();
	~DibInfo();
	BITMAPINFOHEADER bitmapInfoHeader;
	RGBQUAD color[256+3];
};

//_____________________________________________________________________ CG::GifHeader
struct GifHeader
{
	char signature[6];
	unsigned __int16 width;
	unsigned __int16 height;
	unsigned char fields;
	unsigned char backgroundColorIndex;
	unsigned char pixelAspectRatio;
};

//_____________________________________________________________________ CG::GifCtrlExtBlock
struct GifCtrlExtBlock
{
	//unsigned char graphicControlLabel;
	unsigned char blockSize;
	unsigned char fields;
	unsigned __int16 delayTime;
	unsigned char transparentColorIndex;
	unsigned char blockTerminator;
};

//_____________________________________________________________________ CG::GifID
struct GifID
{
	unsigned __int16 xPos;
	unsigned __int16 yPos;
	unsigned __int16 width;
	unsigned __int16 height;
	unsigned char fields;
	// 0-2: Size of Local Color Table
	// 3-4: (Reserved)
	// 5: Sort Flag
	// 6: Interlace Flag
	// 7: Local Color Table Flag
};

//_____________________________________________________________________ CG::DIBitmap
// It loads a BMP file that can be displayed using CG::Gdi::DrawBitmap (Device Independent Bitmap)
class DIBitmap
{
public:
	DIBitmap();
	virtual ~DIBitmap();
	DIBitmap(const CG::DIBitmap& init);

	bool Create(size_t bitsPerPixel, size_t numColorsInTableColor, size_t width, size_t height);
	const CG::DIBitmap& operator=(const CG::DIBitmap& init);

	const wchar_t* Load(const wchar_t* filename);
	const wchar_t* Save(const wchar_t* filename);
	const wchar_t* ImportGif(const wchar_t* gif_filename);


	//It imports a PPM Image (only P6 is supported)
	// brightness from 0 to 1
	const wchar_t* ImportPortablePixMap(const wchar_t* ppm_filename, double brightness);

	BITMAPINFO& GetBitmapInfo();
	int GetWidth() const;
	int GetHeight() const;
	void Delete();
	unsigned char* GetBits();
	int GetBitsPerPixel() const;
	int GetColorCountInColorTable() const;
	bool SetColorTableColor(int index, const RGBQUAD& color);
	bool SetColorTable(const valarray<RGBQUAD>& colorTable);

	bool CopyToClipboard(HWND hWnd);
	bool PasteFromClipboard(HWND hWnd);

	// BI_RGB An uncompressed format. 
	// BI_RLE8 A run-length encoded (RLE) format for bitmaps with 8 bpp.
	//	BI_RLE4 An RLE format for bitmaps with 4 bpp.
	//	BI_BITFIELDS Specifies that the bitmap is not compressed and that the color table consists of three DWORD color masks that specify the red, green, and blue components
	//	BI_JPEG
	//	BI_PNG #Win32+GDI+BITMAPINFOHEADER
	int GetCompression() const;

	size_t GetBytesRowSize();

	void SetPixel(const size_t& row, const size_t& col, const unsigned char& colorIndex);
	void GetPixel(const size_t& row, const size_t& col, unsigned char& out_colorIndex);

	void SetPixel(const size_t& row, const size_t& col, const RGBTRIPLE& color);
	void GetPixel(const size_t& row, const size_t& col, RGBTRIPLE& out_color);

	const wchar_t* Filter(int m11, int m12, int m13, int m21, int m22, int m23, int m31, int m32, int m33, int denominator, int add, CG::DIBitmap& output) const;

	// From an uncompress 24 bits/pixel image, it creates a new CG::DIBitmap with a different number of colors
	// If outputNumColors is 0, the number of colors is automatically set to 16, 256 or 16777216
	// If outputNumColors is 1, the number of colors is automatically set to 16 or 256
	// If outputNumColors is 16, the output bitmap will have 16 colors
	// If outputNumColors is 256, the output bitmap will have 256 colors
	const wchar_t* CompressBitmap(int outputNumColors, CG::DIBitmap& output);

	// It crops the empty space around the image
	// The function works only an uncompress 24 bits/pixels image
	const wchar_t* CropEmptySpace(CG::DIBitmap& output);
private:
	static int LessThan(void* data, const void* value1, const void* value2);
	int GetColorCountInColorTable(const BITMAPINFOHEADER& bitmapInfoHeader) const;
	size_t GetHeaderSize(const BITMAPINFOHEADER& bitmapInfoHeader) const;
	friend class Gdi;
	void Copy(const CG::DIBitmap& init);
	bool LzwDecoder (unsigned char * input, unsigned char * output, unsigned __int8 lzw_CodeSize, int AlignedWidth, int width, int height, bool isInterlaced);
	//____________________________________ data
	size_t byte_bitsCount;
	size_t byte_rowSize;
	unsigned char* bits;
	unsigned char* bitmapInfo;
	//____________________________________ Used to import Portable PixMap
	unsigned char* q;
	unsigned char* qend;
	bool ReadInteger(int& result);
};

//_____________________________________________________________________ CG::DDBitmap
// A device dependent bitmap
class DDBitmap
{
public:
	DDBitmap(void);
	virtual ~DDBitmap(void);
	bool CreateFromResource(HINSTANCE hInstance, int bitmap_id);

	// It loads a Device Dependent Bitmap or a Device Independent Bitmap
	bool CreateFromFile(const wchar_t * filename);
	bool CreateMonochrome(int width, int height);
	bool SaveBMP(const wchar_t* filename);

	//Add the following line to stdafx.h -> #define OEMRESOURCE before the line #include <windows.h>
	//OBM_UPARROW, OBM_DNARROW, OBM_RGARROW, OBM_LFARROW, OBM_REDUCE, OBM_ZOOM, 
	//OBM_RESTORE, OBM_MNARROW, OBM_BTSIZE, OBM_SIZE, OBM_BTNCORNERS, OBM_CLOSE,
	//Flat:  OBM_UPARROWD, OBM_DNARROWD, OBM_RGARROWD, OBM_LFARROWD
	//OBM_REDUCED, OBM_ZOOMD, OBM_RESTORED, OBM_COMBO, OBM_CHECK, OBM_CHECKBOXES,
	// Disabled:  OBM_UPARROWI, OBM_DNARROWI, OBM_RGARROWI, OBM_LFARROWI
	HBITMAP CreateWinPredefined(UINT idOBM);

	HBITMAP CreateFromBits(int width, int height, int nPlanes, int nBitCount, DWORD* bits);

	HBITMAP CreateFromDesktop();
	//
	//It creates a bitmap from a window
	//If the function succeeds, the return value is a handle to the compatible bitmap (DDB).
	//If the function fails, the return value is NULL
	bool CreateFromWindow(HWND hWnd, bool clientEdge);
	//
	//It creates a bitmap from a rectangular area of a window
	//If the function succeeds, the return value is a handle to the compatible bitmap (DDB).
	//If the function fails, the return value is NULL
	HBITMAP CreateFromWindow(HWND hWnd, int x, int y, int width, int height);
	//
	//If the function succeeds, the return value is a handle to the compatible bitmap (DDB).
	//If the function fails, the return value is NULL
	HBITMAP CreateFromWindowClientArea(HWND hWnd, bool clientEdge);
	//
	HBITMAP CreateFromDIB(HDC hdc, CG::DIBitmap& dib);
	HBITMAP CreateFromDIB(HWND hWnd, CG::DIBitmap& dib);
	//HBITMAP CreateFromDIB(HDC hdc, CG::DIBitmap& dib);
	//HBITMAP CreateFromDIB(HWND hWnd, CG::DIBitmap& dib);
	void Create(HBITMAP hBitmap);
	HDC CreateCompatible(HDC hdc, int width, int height);
	HDC CreateCompatible(HWND hWnd, int width, int height);
	HDC CreateCompatibleFromBits(HDC hdc, int width, int height, DWORD* bits);
	HDC CreateCompatibleFromBits(HWND hWnd, int width, int height, DWORD* bits);
	int GetWidth();
	int GetHeight();
	HBITMAP GetHBITMAP();
	bool IsValid();
	HBITMAP Strech(int scaleX, int scaleY);
	DDBitmap(const DDBitmap& init); // Copy constructor
	DDBitmap& operator =(const DDBitmap&init);
	HDC GetBitmapDC();
	void DeleteMemDC();
	bool ExtractPixels(vector<valarray<COLORREF> >& output);
	bool ExtractGrayPixels(MATRIX& output);
	bool ExtractColorPixels(MATRIX& outRed, MATRIX& outGreen, MATRIX& outBlue);

#ifdef WIN_DIRECTX
	const wchar_t* CreateTexture(IDirect3DDevice9Ptr& device, IDirect3DTexture9Ptr& out_texture);
#endif
//	int GetDIBits(
//  _In_     HDC hdc, //A handle to the device context.
//  _In_     HBITMAP hbmp, //A handle to the bitmap. This must be a compatible bitmap (DDB).
//  _In_     UINT uStartScan, //The first scan line to retrieve.
//  _In_     UINT cScanLines, // The number of scan lines to retrieve
//  _Out_    LPVOID lpvBits, //A pointer to a buffer to receive the bitmap data. If this parameter is NULL, the function passes the dimensions and format of the bitmap to the BITMAPINFO structure pointed to by the lpbi parameter.
//  _Inout_  LPBITMAPINFO lpbi, //A pointer to a BITMAPINFO structure that specifies the desired format for the DIB data.
//  _In_     UINT uUsage // DIB_RGB_COLORS The color table should consist of literal red, green, blue (RGB) values.
//);

//	Remarks
//If the requested format for the DIB matches its internal format, the RGB values for the bitmap are copied. If the requested format doesn't match the internal format, a color table is synthesized. The following table describes the color table synthesized for each format.
//Value	Meaning
//1_BPP	The color table consists of a black and a white entry.
//4_BPP	The color table consists of a mix of colors identical to the standard VGA palette.
//8_BPP	The color table consists of a general mix of 256 colors defined by GDI. (Included in these 256 colors are the 20 colors found in the default logical palette.)
//24_BPP	No color table is returned.
// 
//If the lpvBits parameter is a valid pointer, the first six members of the BITMAPINFOHEADER structure must be initialized to specify the size and format of the DIB. The scan lines must be aligned on a DWORD except for RLE compressed bitmaps.
//A bottom-up DIB is specified by setting the height to a positive number, while a top-down DIB is specified by setting the height to a negative number. The bitmap color table will be appended to the BITMAPINFO structure.
//If lpvBits is NULL, GetDIBits examines the first member of the first structure pointed to by lpbi. This member must specify the size, in bytes, of a BITMAPCOREHEADER or a BITMAPINFOHEADER structure. The function uses the specified size to determine how the remaining members should be initialized.
//If lpvBits is NULL and the bit count member of BITMAPINFO is initialized to zero, GetDIBits fills in a BITMAPINFOHEADER structure or BITMAPCOREHEADER without the color table. This technique can be used to query bitmap attributes.
//The bitmap identified by the hbmp parameter must not be selected into a device context when the application calls this function.
//The origin for a bottom-up DIB is the lower-left corner of the bitmap; the origin for a top-down DIB is the upper-left corner.
	void Delete();
private:
	HBITMAP hBitmap;
	HBITMAP hPreviousBitmap;
	
	BITMAP bitmap;
	HDC hdcMem;
	void Copy(const DDBitmap& init);
	friend class Gdi;
};

class Octree;
//_____________________________________________________________________ CG::OctreeNode
// It stores information for the Octree algorithm
class OctreeNode
{
public:
	OctreeNode(bool endNode, Octree* octree);
	~OctreeNode();
	size_t pixelCount;
	size_t sumRed;
	size_t sumGreen;
	size_t sumBlue;
	bool endNode;
	OctreeNode* child[8];
	void Delete();
	void BuildPalette(size_t maxColors, vector<RGBQUAD>& out_palette);
	OctreeNode& operator+=(const OctreeNode& input);
	void Reduce(size_t minNumPixels);
private:
	Octree* octree;
};

//_____________________________________________________________________ CG::Octree
// It generates a color palette from an image
class Octree
{
public:
	Octree();
	~Octree();

	// Call this function for each color in the image
	void AddColor(const BYTE& red, const BYTE& green, const BYTE& blue);

	// Call this function at the end to generate the palette
	void GeneratePalette(size_t maxColors, vector<RGBQUAD>& out_palette);
	OctreeNode* rootNode;
	size_t totalNodeCount;
	size_t endNodeCount;
};

//_____________________________________________________________________ CG::OctreeSearchNode
// It stores information to find the nearest color 
class OctreeSearchNode
{
public:
	OctreeSearchNode(bool endNode);
	~OctreeSearchNode();
	int paletteIndex;
	OctreeSearchNode* child[8];
	void Delete();
	bool endNode;
	int GetPaletteIndex(const vector<RGBQUAD>& palette, const BYTE& red, const BYTE& green, const BYTE& blue, unsigned int& minDistance);
};

//_____________________________________________________________________ CG::OctreeSearch
// It is used to find the nearest color palette index 
class OctreeSearch
{
public:
	OctreeSearch();
	~OctreeSearch();

	void Create(const vector<RGBQUAD>& palette);

	// It returns the palette index of the nearest color to the specified color by the values of: red, green and blue
	int GetNearestColorIndex(const vector<RGBQUAD>& palette, const BYTE& red, const BYTE& green, const BYTE& blue);

	OctreeSearchNode* rootNode;
};

} //____________________________________________________ namespace Graphic::End

// Windows
namespace Win //________________________________________ namespace Win::Ini
{

//_____________________________________________________________________ Win::IModelessDlg
class IModelessDlg
{
public:
	virtual bool IsModelessDlgMessage(MSG& msg) = 0;
};

class Gdi
{
private:
	Gdi();
	~Gdi();
public:
	//_______________________________________________________ Win::Gdi::Font
	class Font
	{
	public:
		Font(void);
		~Font(void);
		Font(const Win::Gdi::Font& init);
		Win::Gdi::Font& operator=(const Win::Gdi::Font& init);
		HFONT Create(const wchar_t* name, int pixelsHeight, bool bold, bool italic, bool underline, bool strikeout);
		HFONT CreateX(const wchar_t* name, double cmHeight, bool bold, bool italic, bool underline, bool strikeout);
		HFONT Create(const LOGFONT& logfont);
		HFONT GetHFONT();
		bool GetLogFont(LOGFONT& out_logfont);
		void Delete();
		//____________________________________________________ FaceName
		void GetFaceName(wstring& out_faceName);
		//____________________________________________________ Size
		int GetSize();
		void SetSize(int size);
		__declspec( property( get=GetSize, put=SetSize ) ) int Size;
		//
		// It changes the font of the size.  If amount is positive, it increases the font size
		// If amount is negative, it reduces the font size
		void ChangeSize(int amount);
		void IncreaseSize();
		void DecreaseSize();
		//____________________________________________________ CharSet
		BYTE GetCharSet();
		void SetCharSet(BYTE charSet);
		__declspec( property( get=GetCharSet, put=SetCharSet ) ) BYTE CharSet;
	private:
		void Copy(const Win::Gdi::Font& init);
		HFONT _hFont;
	};

};

//_____________________________________________________________________ IParent
class IParent
{
public:
	virtual HWND GetHWND()=0;
	virtual void UpdateValue()=0;
	virtual void DoDock(int initialWidth, int initialHeight, int newWidth, int newHeight)=0;
	virtual void GetInitialRect(RECT& initialRect) = 0;
};

struct Event
{
	HWND hWnd;
	UINT uMsg;
	WPARAM wParam;
	LPARAM lParam;
	LRESULT returnValue;
};

//_____________________________________________________________________IExportable and Exporter
// It provides a simplified way to copy a Window to the clipboard or to save a Window to a file
// A control that implements IExportableEx is capable of storing as: EMF, BMP and PDF
class IExportableEx
{
public:
	virtual void SetControlSize(int width, int height) = 0;
	virtual void GetControlSize(int& width, int& height)=0;
	//
	virtual void SetLineWidth(int lineWidth) = 0;
	virtual int GetLineWidth() = 0;
	//
	virtual void SetFont(HFONT hfont) = 0;
	virtual HFONT GetFont() = 0;
	//
	virtual void OnPaintControl(CG::IGdi& gdi) = 0;
	virtual void OnPaintControl(CG::Gdi& gdi) = 0;
};

class Exporter
{
public:
	~Exporter(void);

	// It creates a EMF file from any object that implements Win::IExportable
	// scale = 1.0
	static bool SaveEMF(const wchar_t* filename, Win::IExportableEx& ixp, double scale);

	// It copies to the clipboard an screenshot of any object that implements Win::IExportable
	static bool CopyToClipboard(Win::IExportableEx& ixp);

	// It exports to a BMP an screenshot of any object that implements Win::IExportable
	static bool CopyToBitmap(Win::IExportableEx& ixp, int width, int height, bool clientEdge, CG::DDBitmap& result);

	// It creates a PDF file from any object that implements Win::IExportable
	static bool SavePDF(const wchar_t* filename, bool isPortrait, double margin, Win::IExportableEx& ixp);
private:
	Exporter(void);
};

//_____________________________________________________________________ PrintElementInfo
class PrintElementInfo
{
public:
	PrintElementInfo();
	~PrintElementInfo();
	int width_millicm; // 1000 milli centimeters = 1 cm
	int height_millicm; // 1000 milli centimeters = 1 cm
	int pageIndex; // 0, 1, 2, ...
	int elementIndex; // 0, 1, 2, ...
	double dots_per_cm;
	bool isFirstElement;
	bool isLastElement;
	bool isFirstElementOnPage;
	bool isLastElementOnPage;
};

//_____________________________________________________________________ PrintDocInfo
class PrintDocInfo
{
public:
	PrintDocInfo();
	~PrintDocInfo();
	int pageIndex; // 0, 1, 2, ...
	SIZE printArea_millicm;// 1000 milli centimeters = 1 cm
	SIZE paperSize;  // 1000 milli centimeters = 1 cm
	double dots_per_cm;
	int pageOffsetX;
	int pageOffsetY;
	bool paperOrientationPortrait;
};

//_____________________________________________________________________ IPrintElement
// A class that implements the IPrint interface can be used in a document that can be sent to the printer
class IPrintElement
{
public:
	virtual int GetElementCount(const Win::PrintDocInfo& pdi, int element_width_millicm, int element_height_millicm) = 0;
	virtual void OnPrintPartBegin(CG::Gdi& gdi, const Win::PrintDocInfo& pdi, int element_width_millicm, int element_height_millicm) = 0;
	virtual void OnPrintElement(CG::Gdi& gdi, const Win::PrintDocInfo& pdi, const Win::PrintElementInfo& pei) = 0;
	virtual void OnPrintPartEnd(CG::Gdi& gdi, const Win::PrintDocInfo& pdi) = 0;
};

//_____________________________________________________________________ IPrintDoc
// A class that implements the IPrintDoc interface can be sent pages to the printer
class IPrintDoc
{
public:
	// 1000 milli centimeters = 1 centimeter
	virtual int GetPageCount(const Win::PrintDocInfo& pdi) = 0;
	virtual void OnPrintDocBegin(CG::Gdi& gdi, const Win::PrintDocInfo& pdi) = 0;
	virtual bool OnPrintPage(CG::Gdi& gdi, const Win::PrintDocInfo& pdi) = 0;
	virtual void OnPrintDocEnd(CG::Gdi& gdi) = 0;
};

//______________________________________________________________________________ Caret
class Caret
{
public:
	Caret();
	~Caret();
	// It creates a black caret #CreateCaret+Win32+GDI
	bool CreateBlack(HWND hWnd, int logitUnitsCaretHeight);
	//
	// It creates a gray caret #CreateCaret+Win32+GDI
	bool CreateGray(HWND hWnd, int logitUnitsCaretHeight);
	//
	// It creates a caret #CreateCaret+Win32+GDI
	bool Create(HWND hWnd, HBITMAP hBitmap, int logitUnitsCaretWidth, int logitUnitsCaretHeight);
	//
	// It destroys the caret #DestroyCaret+Win32+GDI
	void Destroy();
	//
	// It sets the position of the caret #SetCaretPos+Win32+GDI
	bool SetPosition(int x, int y);
	//
	// It returns the position of the caret #SetCaretPos+Win32+GDI
	void GetPosition(int& out_x, int& out_y);
	//____________________________________________________ X
	int GetX();
	void SetX(int x);
	__declspec( property( get=GetX, put=SetX ) ) int X;
	//____________________________________________________ Y
	int GetY();
	void SetY(int y);
	__declspec( property( get=GetY, put=SetY ) ) int Y;
	//
	// It shows the caret #ShowCaret+Win32+GDI
	bool Show();
	//
	// It hides the caret #HideCaret+Win32+GDI
	bool Hide();
protected:
	HWND _hWnd;
	//int _logitUnitsCaretHeight;
	int _x;
	int _y;
};

class Module;

//_____________________________________________________________________________Timer
class Timer
{
public:
	Timer();
	~Timer();
	/* The event WM_TIMER will call Window_Timer */
	void Set(UINT_PTR timer_id, UINT duration);
	void Kill(UINT_PTR timer_id);
private:
	void SetParent(Win::IParent* iparent);
	Win::IParent* iparent;
	friend class Win::Module;
};


//_____________________________________________________________________Module
// It represents the most basic graphic user interface component
class Module : public Win::IParent // Not to be used to build an object
{
public:
	virtual ~Module(void);
	virtual HWND Create(DWORD dwExStyle, const wchar_t* text, DWORD dwStyle, int pixelsX, int pixelsY, int pixelsWidth, int pixelsHeight, HWND hParent, int id);
	virtual HWND CreateX(DWORD dwExStyle, const wchar_t* text, DWORD dwStyle, double cmX, double cmY, double cmWidth, double cmHeight, HWND hParent, int id);
	virtual bool IsEvent(Win::Event& e, int notification);
	HWND SetFocus();
	int GetID();
	virtual void UpdateValue();
	operator HWND();

	// type is the OR of a button constant: MB_OK, MB_OKCANCEL, MB_ABORTRETRYIGNORE, MB_YESNOCANCEL, MB_YESNO
	// MB_RETRYCANCEL, MB_CANCELTRYCONTINUE 
	// and an icon constant: MB_ICONHAND, MB_ICONQUESTION , MB_ICONEXCLAMATION, MB_ICONASTERISK, MB_ICONHAND
	//MB_ICONQUESTION, MB_ICONEXCLAMATION, MB_ICONASTERISK
	// It returns: IDOK, IDCANCEL, IDABORT, IDRETRY, IDIGNORE, IDYES, IDNO, IDCLOSE, IDHELP, IDTRYAGAIN, IDCONTINUE
	int MessageBox(const wchar_t * text, const wchar_t * caption, UINT type);

	// type is the OR of a button constant: MB_OK, MB_OKCANCEL, MB_ABORTRETRYIGNORE, MB_YESNOCANCEL, MB_YESNO
	// MB_RETRYCANCEL, MB_CANCELTRYCONTINUE 
	// and an icon constant: MB_ICONHAND, MB_ICONQUESTION , MB_ICONEXCLAMATION, MB_ICONASTERISK, MB_ICONHAND
	//MB_ICONQUESTION, MB_ICONEXCLAMATION, MB_ICONASTERISK
	// It returns: IDOK, IDCANCEL, IDABORT, IDRETRY, IDIGNORE, IDYES, IDNO, IDCLOSE, IDHELP, IDTRYAGAIN, IDCONTINUE
	int MessageBox(const wstring& text, const wstring& caption, UINT type);
	static HINSTANCE GetInstance();
	DWORD SetCursorPos(int x, int y);
	HWND GetDialogItem(HWND parent, int id);
	bool CopyWindowToClipboard(bool clientEdge);
	//____________________________________________________________ Text
	virtual void SetWindowText(const wchar_t* text);
	//Copies the text of the specified window's title bar (if it has one) into a buffer. If the specified window 
	// is a control, the text of the control is copied. However, GetWindowText cannot retrieve the text of a 
	// control in another application. If the function succeeds, the return value is the length, in characters, of 
	// the copied string, not including the terminating null character #Win32+GetWindowText
	virtual int GetWindowText(wchar_t* text, int size);
	virtual int GetWindowText(wstring& out_text);
	virtual wstring& GetText();
	virtual void SetText(const wstring& text);
	__declspec( property( get=GetText, put=SetText) ) wstring Text;
	//____________________________________________________________ Visible
	virtual void SetVisible(bool visible);
	virtual bool IsVisible();
	__declspec( property( get=IsVisible, put=SetVisible) ) bool Visible;
	//____________________________________________________________ Enabled
	virtual void SetEnabled(bool enabled);
	virtual bool IsEnabled();
	__declspec( property( get=IsEnabled, put=SetEnabled) ) bool Enabled;
	//____________________________________________________________ Font
	virtual void SetFont(HFONT hfont);
	virtual void SetFont(Win::Gdi::Font& font);
	__declspec( property( put=SetFont) ) Win::Gdi::Font& Font;
	//
	// It retrieves the font with which the control is currently drawing its text. 
	// The return value is a handle to the font used by the control, or NULL if the control is using the system font. #Win32+WM_GETFONT
	virtual HFONT GetFont();
	//
	// It computes the width and height of the specified string of text.#Win32+GetTextExtentPoint32
	void GetTextExtent(const wchar_t* text, SIZE& output);
	//____________________________________________________________ PositionX
	void SetPositionX(int x);
	int GetPositionX();
	__declspec( property( get=GetPositionX, put=SetPositionX ) ) int PositionX;
	//____________________________________________________________ PositionY
	void SetPositionY(int y);
	int GetPositionY();
	__declspec( property( get=GetPositionY, put=SetPositionY ) ) int PositionY;
	//____________________________________________________________ Width
	void SetWidth(int width);
	int GetWidth();
	__declspec( property( get=GetWidth, put=SetWidth ) ) int Width;
	//____________________________________________________________ Height
	void SetHeight(int height);
	int GetHeight();
	__declspec( property( get=GetHeight, put=SetHeight ) ) int Height;
	//
	void GetWindowRect(RECT& rc);
	void GetRect(RECT& rc);
	void SetRect(RECT& rc);
	//
	void SetPosition(int x, int y);

	// It changes the size, position, and Z order of a child, pop-up, or top-level window. These windows are ordered according to 
	// their appearance on the screen. The topmost window receives the highest rank and is the first window in the Z order
	//insertAfter: HWND_BOTTOM (places the window at the bottom of the Z order), HWND_NOTOPMOST, 
	// HWND_TOP (places the window at the top of the Z order), HWND_TOPMOST #SetWindowPosition+Win32
	// flags: SWP_ASYNCWINDOWPOS, SWP_DEFERERASE, SWP_DRAWFRAME, SWP_FRAMECHANGED, SWP_HIDEWINDOW
	// SWP_NOACTIVATE, SWP_NOCOPYBITS, SWP_NOMOVE, SWP_NOOWNERZORDER, SWP_NOREDRAW, SWP_NOSIZE,
	// SWP_NOZORDER, SWP_SHOWWINDOW
	void SetWindowPosition(int x, int y, int width, int height, HWND insertAfter, unsigned int flags); 
	//
	// It Sends the specified message to the window. The SendMessage function calls the window procedure for the 
	// window and does not return until the window procedure has processed the message. #SendMessage+Win32
	LRESULT SendMessage(UINT message, WPARAM wParam, LPARAM lParam);
	//
	// It places (posts) a message in the message queue associated with the thread that created window and returns 
	// without waiting for the thread to process the message.. #PostMessage+Win32
	LRESULT PostMessage(UINT message, WPARAM wParam, LPARAM lParam);
	//
	WNDPROC SetProc(WNDPROC wndProc);
	//
	// An application sends the WM_SETREDRAW message to a window to allow changes in that window to 
	// be redrawn or to prevent changes in that window from being redrawn.  
	// Use: SetRedraw(false), ... SetRedraw(true), Redraw() #WM_SETREDRAW+Win32
	LRESULT SetRedraw(bool redraw);
	//
	// It updates the specified rectangle or region in a windows client area #RedrawWindow+Win32
	void Redraw(const RECT *rcUpdate, HRGN hrgnUpdate, UINT flags);
	//
	// It updates the specified rectangle or region in a windows client area #RedrawWindow+Win32
	void Redraw();
	//
	// The LockWindowUpdate function disables or enables drawing in the specified window. The purpose of 
	// the LockWindowUpdate function is to permit drag/drop feedback to be drawn over a window without interference
	// from the window itself.The intent is that the window is locked when feedback is drawn and unlocked when 
	// feedback is complete.LockWindowUpdate is not intended for general-purpose suppression of window redraw.
	// Only one window can be locked at a time. #LockUpdate+Win32
	void LockUpdate(bool locked);
	//
	bool Move(int x, int y, int width, int height, bool repaint);
	bool Move(int x, int y, bool repaint);
	bool Move(RECT& rect, bool repaint);
	bool MoveToFill(Win::Event& e);

	int Scroll(int deltaX, int deltaY);
	int Scroll(int deltaX, int deltaY, LPRECT prcUpdate);

	int SetScrollInfoH(SCROLLINFO& si);
	int SetScrollInfoH(int minimum, int maximum, int position);
	
	int SetScrollInfoV(SCROLLINFO& si);
	int SetScrollInfoV(int minimum, int maximum, int position);
	int SetScrollInfoV(int minimum, int maximum, int position, int page);
	
	//____________________________________________________________ ScrollPositionH
	int SetScrollPositionH(int position);
	int GetScrollPositionH();
	__declspec(property(get=GetScrollPositionH, put=SetScrollPositionH)) int ScrollPositionH;

	//____________________________________________________________ ScrollPositionV
	int SetScrollPositionV(int position);
	int GetScrollPositionV();
	__declspec(property(get=GetScrollPositionV, put=SetScrollPositionV)) int ScrollPositionV;

	int SetScrollRangeH(int minimum, int maximum);
	bool GetScrollRangeH(int& out_minimum, int& out_maximum);

	int SetScrollRangeV(int minimum, int maximum);
	bool GetScrollRangeV(int& out_minimum, int& out_maximum);
	
	// Call this function during Window_HScroll, the functions returns the scroll shift and scroll information
	int GetScrollShiftH(Win::Event& wm_HscrollEvent, SCROLLINFO& out_si);

	// Call this function during Window_VScroll, the functions returns the scroll shift and scroll information
	int GetScrollShiftV(Win::Event& wm_VscrollEvent, SCROLLINFO& out_si);


	//SW_HIDE SW_SHOWNORMAL SW_NORMAL SW_SHOWMINIMIZED SW_SHOWMAXIMIZED
	//SW_MAXIMIZE SW_SHOWNOACTIVATE SW_SHOW SW_MINIMIZE SW_SHOWMINNOACTIVE
	//SW_SHOWNA SW_RESTORE SW_SHOWDEFAULT SW_FORCEMINIMIZE SW_MAX
	void Show(int cmdShow);
	void Minimize();
	void Maximize();
	void Destroy();
	void Update();
	void Close();
	void RefreshMenu();	
	BOOL SetMenu(HMENU hMenu);
	HMENU GetMenu();
	void ScreenToClient(POINT& pt);
	void ClientToScreen(POINT& pt);
	//void GetRect(RECT& rc);
	void GetRelativeRect(HWND parent, RECT& rc);
	void GetClientRect(RECT& rc);
	//
	// It retrieves the name of the class to which the specified window belongs
	// If the function succeeds, the return value is the number of characters copied to the buffer, not including the terminating null character.
	// If the function fails, the return value is zero #GetClassName+Win32
	int GetRegisteredClassName(wchar_t* buffer, int buffer_size);
	//
	virtual int GetTextLength();
	void Repaint(RECT* rc, bool erase);
	//int GetID();
	BOOL SetForeground();
	HWND GetParent();
	LONG_PTR GetLongPtr(int flags);

	void SetIcon(HINSTANCE hInstance, int icon_id);
	void AlwaysOnTop(bool onTop);
	void SetClassCursor(HCURSOR hcursor);
	void SetClassIcon(HICON hicon);
	void SetClassIcon(int id_icon);
	void SetClassBackground(HBRUSH hbrush);
	HICON GetClassIcon(bool smallIcon);
	//
	// It returns the size of the text string in the Window Device using the specified font
	bool GetTextExtent(const wchar_t* text, CG::Font& font, SIZE& out_size);
	//
	HDC GetWindowDC();
	HDC GetDC();
	void ReleaseDC(HDC hdc);
	void EnableCloseButton(bool enabled);
	void EnableMoveButton(bool enabled);
	void EnableSizeButton(bool enabled);
	//
	// It returns the position of the caret (typing cursor) #GetCaretPos#Win32
	void GetCaretPosition(POINT& out_position);
	Win::Timer timer;
	//
	// It sets the mouse capture to the window during a dragging operation #SetCapture#Win32
	// It returns a handle to the window that had previously captured the mouse. If there is no such window, the return value is NULL.
	HWND SetMouseCapture();
	//
	// It releases the mouse capture from a window in the current thread and restores normal mouse 
	// input processing. A window that has captured the mouse receives all mouse input, regardless 
	// of the position of the cursor, except when a mouse button is clicked while the cursor hot spot 
	// is in the window of another thread.   #ReleaseCapture#Win32
	bool ReleaseMouseCapture();
	//
	void SetDock(int left, int top, int right, int bottom);
	void GetDock(int& left, int& top, int& right, int& bottom);

	//____________________________________________ IParent
	HWND GetHWND();
	void DoDock(int initialWidth, int initialHeight, int newWidth, int newHeight);
	void GetInitialRect(RECT& initialRect);

	void SetHWND(HWND hWnd); // Use this to attach to an existing textbox

	// You can call this function from Window_DropFiles or from the Clipboard with CF_HDROP
	static bool GetDropFileList(HDROP hDrop, vector<wstring>& out_filelist);
	
#ifdef WIN_DAC_ADC_SUPPORT
	bool PlayWaveSound(const wchar_t* filename);
	bool PlayWaveSound(HINSTANCE hInstance, int resource_id);
#endif
protected:
	//_________________________ Gdi Plus Activation
#ifdef WIN_GDI_PLUS_ON
	static Gdiplus::GdiplusStartupInput _gdiPlusStartupInput;
	static ULONG_PTR _gdiPlusToken;
	static bool _isGdiPlusOn;
#endif
	Module();
	int width;
	int height;
	RECT _dock;
	RECT _initialRect;
	LONG_PTR id;
	HWND hWnd;
	wstring _text;
	bool used_text;
	//HFONT _hfont;
	virtual const wchar_t * GetClassName(void) = 0;
	static HINSTANCE hInstance;
	virtual void InitialUpdate(HWND hWndParent);

private:	
};

//_____________________________________________________________________ Tooltip
// They are pop-up windows that display text
// The text usually describes a tool, which is either a window, such as a child window or control, or an application-defined rectangular area within a window's client area
class Tooltip : public Win::Module
{
public:
	Tooltip(void);
	Tooltip(HWND hWnd);
	virtual ~Tooltip(void);
	HWND Create(HWND parent);
	HWND Create(DWORD dwExStyle, const wchar_t* pszWindowName, DWORD dwStyle, int x, int y, int width, int height, HWND hParent, int id);
	//
	// It registers a control (a window) with a tooltip control #TTM_ADDTOOL+Win32 
	bool AddTool(Win::Module& control, const wchar_t* tip);
	//
	// It registers a control (a window) with a tooltip control #TTM_ADDTOOL+Win32 
	bool AddTool(HWND hWndControl, unsigned int control_id, const wchar_t* tip);
	//
	// It removes a control (a window) from a tooltip control #TTM_DELTOOL+Win32 
	void DelTool(Win::Module& control);
	//
	// It removes a control (a window) from a tooltip control #TTM_DELTOOL+Win32 
	void DelTool(HWND hWndControl, unsigned int control_id);
	//
	// It updates the tip #TTM_UPDATETIPTEXT+Win32 
	void UpdateTipText(Win::Module& control, const wchar_t* tip);
	//
	// It updates the tip #TTM_UPDATETIPTEXT+Win32 
	void UpdateTipText(HWND hWndControl, unsigned int control_id, const wchar_t* tip);
	//
	// It updates the rectangle of the control #TTM_NEWTOOLRECT+Win32 
	void NewToolRect(Win::Module& control);
	//
	// It updates the rectangle of the control #TTM_NEWTOOLRECT+Win32 
	void NewToolRect(HWND hWndControl, unsigned int control_id);
	//
	// It returns the text tip associated with the control #TTM_GETTEXT+Win32 
	void GetText(Win::Module& control, wchar_t* buffer, int buffer_size);
	//
	// It returns the text tip associated with the control #TTM_GETTEXT+Win32 
	void GetText(HWND hWndControl, unsigned int control_id, wchar_t* buffer, int buffer_size);
	//
	// TTI_NONE, TTI_INFO, TTI_WARNING, TTI_ERROR,TTI_INFO_LARGE, TTI_WARNING_LARGE, TTI_ERROR_LARGE 
	// The title must not exceed 100 TCHARs in length, including the terminating NULL
	// It adds an icon and title string to a tooltip #TTM_SETTITLE+Win32 
	bool SetTitleWithStandardIcon(wchar_t* title, int tti_icon);
	//
	// The title must not exceed 100 TCHARs in length, including the terminating NULL
	// It adds an icon and title string to a tooltip #TTM_SETTITLE+Win32 
	bool SetTitle(wchar_t* title, int id_icon);
	//
	// It retrieves the information that a tooltip control maintains about the associated control. #TTM_GETTOOLINFO+Win32 
	bool GetToolInfo(Win::Module& control, TOOLINFO& out_toolinfo);
	//
	// It retrieves the information that a tooltip control maintains about the associated control. #TTM_GETTOOLINFO+Win32 
	bool GetToolInfo(HWND hWndControl, unsigned int control_id, TOOLINFO& out_toolinfo);
	//
	// The string pointed to by the lpszText member of the TOOLINFO structure must not exceed 80 TCHARs in length
	// It sets the information that a tooltip control maintains about the associated control. #TTM_SETTOOLINFO+Win32 
	void SetToolInfo(Win::Module& control, const TOOLINFO& toolinfo);
	//
	// The string pointed to by the lpszText member of the TOOLINFO structure must not exceed 80 TCHARs in length
	// It sets the information that a tooltip control maintains about the associated control. #TTM_SETTOOLINFO+Win32 
	void SetToolInfo(HWND hWndControl, unsigned int control_id, const TOOLINFO& toolinfo);
	//
	// It retrieves the information for the current tool in a tooltip control. . #TTM_GETCURRENTTOOL+Win32 
	bool GetCurrentTool(TOOLINFO& out_toolinfo);
	//
	// control_index is a zero-based index of the tool for which to retrieve information
	// It retrieves the information that a tooltip control maintains about the specified control. #TTM_ENUMTOOLS+Win32 
	bool EnumTools(unsigned int control_index, TOOLINFO& out_toolinfo);
	//
	// It tests a point to determine whether it is within the bounding rectangle of the specified tool and, if it is, 
	// retrieves information about the tool. The hwnd member must specify the handle to a tool and the pt member must specify 
	// the coordinates of a point #TTM_HITTEST+Win32 
	bool HitTest(TTHITTESTINFO& hitTestInfo);

	// It sets the maximum width for a tooltip window (use -1 to allow any width).  if a tooltip string exceeds the maximum width,
	// the control breaks the text into multiple lines, using spaces to determine line breaks #TTM_SETMAXTIPWIDTH
	int SetMaxTipWidth(int maxTipWidth);

	// It returns avalue that represents the maximum tooltip width, in pixels. If no maximum width was set previously,
	// the message returns -1 #TTM_GETMAXTIPWIDTH
	int GetMaxTipWidth();

protected:
	const wchar_t * GetClassName(void){ return TOOLTIPS_CLASS; }
private:
};

//_____________________________________________________________________Window
class Window : public Module, public Sys::IWindow
{
public:
	//____________________________________________________ Sys::IWindow
	HWND GetHWND();
	int MessageBox(const wchar_t * text, const wchar_t * caption, UINT type);
	int MessageBox(const wstring& text, const wstring& caption, UINT type);
	void EndDialog(int result);
	//
	int GetClientWidth();
	int GetClientHeight();
	virtual ~Window(void);
	bool RegisterClassEx(UINT nClassStyle, bool bModelessDialog, HINSTANCE hInst, USHORT nIconId, USHORT nSmallIconId, USHORT nMenu, HCURSOR hCursor, HBRUSH hBackground);
	bool RegisterClassEx(HCURSOR hCursor, HBRUSH hbrBackground);
	static bool UserControlRegisterClass();
	bool RegisterGlobalClassEx(HCURSOR hCursor, HBRUSH hbrBackground);
	virtual HWND Create(DWORD dwExStyle, const wchar_t * text, DWORD dwStyle, int pixelsX, int pixelsY, int pixelsWidth, int pixelsHeight, HWND hParent, int id);
	virtual HWND CreateX(DWORD dwExStyle, const wchar_t * text, DWORD dwStyle, double cmX, double cmY, double cmWidth, double cmHeight, HWND hParent, int id);
	HWND CreateMainWindow(const wchar_t * text, int cmdShow, USHORT iconID, USHORT menuID, HBRUSH bkgnd, HINSTANCE hInstance);
	HWND CreateMainWindow(const wchar_t * text, int cmdShow, USHORT iconID, USHORT menuID, CG::Brush& background, HINSTANCE hInstance);
	HWND CreateMainWindow(DWORD dwExStyle, DWORD dwStyle, int x, int y, int width, int height, const wchar_t * text, int cmdShow, USHORT iconID, USHORT menuID, HBRUSH bkgnd, HINSTANCE hInstance);
	HWND GetDialogItem(HWND hDlg, int id);
	virtual int MessageLoop(WORD aceleratorsID);
	int MessageLoop(WORD aceleratorsID, Win::IModelessDlg& modelessDlg);
	int MessageLoop(WORD aceleratorsID, Win::IModelessDlg& modelessDlg1, Win::IModelessDlg& modelessDlg2);
	int MessageLoop(WORD aceleratorsID, Win::IModelessDlg& modelessDlg1, Win::IModelessDlg& modelessDlg2, Win::IModelessDlg& modelessDlg3);
	int MessageLoop(WORD aceleratorsID, Win::IModelessDlg& modelessDlg1, Win::IModelessDlg& modelessDlg2, Win::IModelessDlg& modelessDlg3, Win::IModelessDlg& modelessDlg4);
	virtual void GetWindowInformation(CREATESTRUCT& createStruct);
	bool GetCommandFileName(const wchar_t* in_cmdLine, wstring& out_filename);
protected:
	virtual void GetRegisterClass(WNDCLASSEX& wcex);
	vector<Win::IParent*> children;
	bool _isMainWindow;
	int initialWidth;
	int initialHeight;
	Window();
	virtual bool Window_WndProc(Win::Event& e);
	virtual void InitializeGui();
	virtual bool EventHandler(Win::Event& e);
	virtual void Window_WinAddChild(Win::Event& e);
	virtual void Window_Activate(Win::Event& e);
	virtual void Window_Cancel(Win::Event& e);
	virtual void Window_Char(Win::Event& e);
	virtual void Window_Close(Win::Event& e);
	virtual void Window_Open(Win::Event& e);
	virtual void Window_Destroy(Win::Event& e);
	virtual void Window_DisplayChange(Win::Event& e);
	virtual void Window_DrawItem(Win::Event& e);
	virtual void Window_DropFiles(Win::Event& e);
	virtual void Window_EraseBkgnd(Win::Event& e);
	virtual void Window_GetDlgCode(Win::Event& e);
	virtual void Window_GetFont(Win::Event& e);
	virtual void Window_GetMinMaxInfo(Win::Event& e);
	virtual void Window_GetText(Win::Event& e);
	virtual void Window_GetTextLength(Win::Event& e);
	virtual void Window_Help(Win::Event& e);
	virtual void Window_InputLangChange(Win::Event& e);
	virtual void Window_KeyDown(Win::Event& e);
	virtual void Window_KeyUp(Win::Event& e);
	virtual void Window_KillFocus(Win::Event& e);
	virtual void Window_LButtonDblclk(Win::Event& e);
	virtual void Window_LButtonDown(Win::Event& e);
	virtual void Window_LButtonUp(Win::Event& e);
	virtual void Window_RButtonDblclk(Win::Event& e);
	virtual void Window_RButtonDown(Win::Event& e);
	virtual void Window_RButtonUp(Win::Event& e);
	virtual void Window_MeasureItem(Win::Event& e);
	virtual void Window_MouseMove(Win::Event& e);
	virtual void Window_MouseWheel(Win::Event& e);
	virtual void Window_NcActivate(Win::Event& e);
	virtual void Window_NcCalcSize(Win::Event& e);
	virtual void Window_NcCreate(Win::Event& e);
	virtual void Window_NcDestroy(Win::Event& e);
	virtual void Window_NcHitTest(Win::Event& e);
	virtual void Window_NcLButtonDblclk(Win::Event& e);
	virtual void Window_NcLButtonDown(Win::Event& e);
	virtual void Window_NcLButtonUp(Win::Event& e);
	virtual void Window_NcMButtonDblclk(Win::Event& e);
	virtual void Window_NcMButtonDown(Win::Event& e);
	virtual void Window_NcMButtonUp(Win::Event& e);
	virtual void Window_NcMouseMove(Win::Event& e);
	virtual void Window_NcPaint(Win::Event& e);
	virtual void Window_NcRButtonDblclk(Win::Event& e);
	virtual void Window_NcRButtonDown(Win::Event& e);
	virtual void Window_NcRButtonUp(Win::Event& e);
	virtual void Window_Paint(Win::Event& e);
	virtual void Window_SetFocus(Win::Event& e);
	virtual void Window_SetFont(Win::Event& e);
	virtual void Window_SetText(Win::Event& e);
	virtual void Window_Size(Win::Event& e);
	void WindowDockChild();
	virtual void Window_SysCommand(Win::Event& e);
	virtual void Window_Timer(Win::Event& e);
	virtual void Window_User(Win::Event& e);
	virtual void Window_User1(Win::Event& e);
	virtual void Window_User2(Win::Event& e);
	virtual void Window_User3(Win::Event& e);
	virtual void Window_User4(Win::Event& e);
	virtual void Window_User5(Win::Event& e);
	virtual void Window_User6(Win::Event& e);
	virtual void Window_User7(Win::Event& e);
	virtual void Window_User8(Win::Event& e);
	virtual void Window_User9(Win::Event& e);
	virtual void Window_User10(Win::Event& e);
	virtual void Window_VScroll(Win::Event& e);
	virtual void Window_HScroll(Win::Event& e);
	virtual void Window_SocketNotify(Win::Event& e);
	virtual void Window_SocketHostname(Win::Event& e);
#ifdef WIN_DAC_ADC_SUPPORT
	virtual void Window_WomOpen(Win::Event& e);
	virtual void Window_WomClose(Win::Event& e);
	virtual void Window_WomDone(Win::Event& e);
	virtual void Window_WimOpen(Win::Event& e);
	virtual void Window_WimClose(Win::Event& e);
	virtual void Window_WimData(Win::Event& e);
#endif
	virtual void Window_RenderFormat(Win::Event& e);
	virtual void Window_RenderAllFormats(Win::Event& e);
	virtual void Window_DestroyClipboard(Win::Event& e);
	virtual void Window_DrawClipboard(Win::Event& e);
	virtual void Window_PaintClipboard(Win::Event& e);
	virtual void Window_VscrollClipboard(Win::Event& e);
	virtual void Window_SizeClipboard(Win::Event& e);
	virtual void Window_AskCbFormatName(Win::Event& e);
	virtual void Window_ChangeCbChain(Win::Event& e);
	virtual void Window_HscrollClipboard(Win::Event& e); 
	virtual void Window_QueryNewPalette(Win::Event& e);
	virtual void Window_PaletteIsChanging(Win::Event& e);
	virtual void Window_PaletteChanged(Win::Event& e);
	virtual void Window_HotKey(Win::Event& e);
	virtual void Window_ShowWindow(Win::Event& e);
	virtual void Window_ActivateApp(Win::Event& e);
private:
	static LRESULT CALLBACK InternalWndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
};

//_____________________________________________________________________ Control
class Control : public Win::Window, public Win::IExportableEx, public Win::IPrintElement, public Win::IPrintDoc
{
public:
	Control(void);
	virtual ~Control(void);
	//
	HWND Create(DWORD dwExStyle, const wchar_t * text, DWORD dwStyle, int x, int y, int width, int height, HWND hParent, int id);
	bool IsEvent(Win::Event& e, int notification);
	//_______________________________________________________________________ BackColor
	COLORREF GetBackColor();
	virtual void SetBackColor(COLORREF color);
	__declspec( property( get=GetBackColor, put=SetBackColor ) ) COLORREF BackColor;
	//_______________________________________________________________________ TextColor
	COLORREF GetTextColor();
	virtual void SetTextColor(COLORREF color);
	__declspec( property( get=GetTextColor, put=SetTextColor ) ) COLORREF TextColor;
	//_______________________________________________________________________ LineColor
	COLORREF GetLineColor();
	virtual void SetLineColor(COLORREF color);
	__declspec( property( get=GetLineColor, put=SetLineColor ) ) COLORREF LineColor;
	//_______________________________________________________________________ ExtraColor
	COLORREF GetExtraColor();
	virtual void SetExtraColor(COLORREF color);
	__declspec( property( get=GetExtraColor, put=SetExtraColor ) ) COLORREF ExtraColor;
	//
	virtual void SetWindowText(const wchar_t* text);
	virtual int GetWindowText(wchar_t* text, int size);
	virtual int GetTextLength();
	//
	//____________________________________________________ ColorMode
	// colorMode: WIN_COLOR_MODE_NORMAL, WIN_COLOR_MODE_BLACKANDWHITE, WIN_COLOR_MODE_DARK
	void SetColorMode(int colorMode);
	int GetColorMode();
	__declspec(property(get=GetColorMode, put=SetColorMode)) int ColorMode;
	//____________________________________________________ Text
	virtual wstring& GetText();
	virtual void SetText(const wstring& text);
	__declspec( property( get=GetText, put=SetText) ) wstring Text;
	//____________________________________________________ Font
	virtual void SetFont(Win::Gdi::Font& font);
	virtual void SetFont(HFONT hfont);
	virtual HFONT GetFont();
	__declspec( property( put=SetFont) ) Win::Gdi::Font& Font;
	//____________________________________________________ IExportable
	virtual void OnPaintControl(CG::Gdi& gdi); 
	virtual void OnPaintControl(CG::IGdi& gdi);
	//
	void SetControlSize(int width, int height);
	void GetControlSize(int& width, int& height);
	//
	bool CopyToClipboard();
	//
	bool CopyToBitmap(int width, int height, bool clientEdge, CG::DDBitmap& result);
	bool SaveBMP(const wchar_t* fileName);
	bool SaveEMF(const wchar_t* fileName);
	bool SavePDF(const wchar_t* fileName, double cm_margin);
	virtual void ChooseSave(const wchar_t* workingFolder);
	//_______________________________________________________________________ LineWidth
	int GetLineWidth();
	void SetLineWidth(int lineWidth);
	__declspec(property(get=GetLineWidth, put=SetLineWidth)) int LineWidth;
	//__________________________________________________________________________ IPrintElement
	int GetElementCount(const Win::PrintDocInfo& pdi, int element_width_millicm, int element_height_millicm);
	void OnPrintPartBegin(CG::Gdi& gdi, const Win::PrintDocInfo& pdi, int element_width_millicm, int element_height_millicm);
	void OnPrintElement(CG::Gdi& gdi, const Win::PrintDocInfo& pdi, const Win::PrintElementInfo& pei);
	void OnPrintPartEnd(CG::Gdi& gdi, const Win::PrintDocInfo& pdi);
	//
	void Print();
	//_______________________________________________________________________ Win::IPrintDoc
	int GetPageCount(const Win::PrintDocInfo& pdi);
	bool OnPrintPage(CG::Gdi& gdi, const Win::PrintDocInfo& pdi);
	void OnPrintDocBegin(CG::Gdi& gdi, const Win::PrintDocInfo& pdi);
	void OnPrintDocEnd(CG::Gdi& gdi);
protected:
	//____________________________________ You can use this to Save and Load the control
	bool Save(Sys::File& file);
	bool Load(Sys::File& file);
	//____________________________________ You can use this to choose a color using the color picker
	bool ChoosePropColor(COLORREF& color);
	//____________________________________ You can use this to save (BMP, EMF, PDF)
	void OnFontSet(const LOGFONT& logFont);
	int _colorMode;
	HFONT _hfont;
	COLORREF _textColor;
	COLORREF _backColor;
	COLORREF _lineColor;
	int _lineWidth;
	COLORREF _extraColor;
	//
	COLORREF _colorModeBackColor;
	COLORREF _colorModeTextColor;
	COLORREF _colorModeLineColor;
	COLORREF _colorModeExtraColor;
	//
	int _fontHeight;
	//______________________________________ Double Buffer
	CG::DDBitmap bitmap;
	virtual bool EventHandler(Win::Event& e);
	virtual void OnSizePrivate();
	void Window_Open(Win::Event& e);
	void Window_Paint(Win::Event& e);
	void Window_Size(Win::Event& e);
	void Window_LButtonDown(Win::Event& e);
	virtual void Window_RButtonDown(Win::Event& e);
	void Window_LButtonDblclk(Win::Event& e);
	const wchar_t * GetClassName(void){return L"WINTEMPLA_CONTROL";}
private:
	static bool bRegistered;
};

//_____________________________________________________________________Button
// Button: The user click the button to execute an action, usually by calling a function
// Checkbox: The user may select YES or NO by clicking the checkbox
// Radio button: A set of radio buttons allows the user selecting from a set of options
class Button : public Module, public Sys::IButton
{
public:
	Button(void);
	virtual ~Button(void);
	//____________________________________________________________ Text
	wstring& GetText();
	void SetText(const wstring& text);
	__declspec( property( get=GetText, put=SetText) ) wstring Text;
	//____________________________________________________________ Visible
	virtual void SetVisible(bool visible);
	virtual bool IsVisible();
	__declspec( property( get=IsVisible, put=SetVisible) ) bool Visible;
	//____________________________________________________________ Enabled
	void SetEnabled(bool enabled);
	bool IsEnabled();
	__declspec( property( get=IsEnabled, put=SetEnabled) ) bool Enabled;	
	//____________________________________________________________ Checked
	void SetChecked(bool checked);
	bool IsChecked();
	__declspec( property( get=IsChecked, put=SetChecked) ) bool Checked;
	//____________________________________________________________ BackColor
	COLORREF GetBackColor();
	virtual void SetBackColor(COLORREF color);
	__declspec( property( get=GetBackColor, put=SetBackColor ) ) COLORREF BackColor;
	//____________________________________________________________ TextColor
	COLORREF GetTextColor();
	virtual void SetTextColor(COLORREF color);
	__declspec( property( get=GetTextColor, put=SetTextColor ) ) COLORREF TextColor;
	//
	// To display an Icon and Text set the icon and do not use BS_ICON
	// Requires the style BS_ICON
	//LoadIcon only works with icons of size SM_CXICON, SM_CYICON
	//to load icons of other sizes use LoadImage
	LRESULT SetImage(HICON hicon);
	//
	// To display an Icon and Text set the icon and do not use BS_ICON
	// Requires the style BS_ICON
	//LoadIcon only works with icons of size SM_CXICON, SM_CYICON
	//to load icons of other sizes use LoadImage
	LRESULT SetImage(Sys::Icon& icon);
	//
	// Requires the style BS_BITMAP
	LRESULT SetImage(Sys::Bitmap& bitmap);
	//
	// Requires the style BS_BITMAP
	LRESULT SetImage(CG::DDBitmap& bitmap);
	__declspec( property( put=SetImage) ) Sys::Bitmap& Bitmap;
	__declspec( property( put=SetImage) ) Sys::Icon& Icon;
	bool IsEvent(Win::Event& e, int notification);
	void UpdateValue();
	void DrawButton(DRAWITEMSTRUCT* pDrawItem);
	//
	void DrawButton(DRAWITEMSTRUCT* pDrawItem, CG::DDBitmap& bitmap);
	static void DrawButtonText(CG::Gdi& gdi, DWORD buttonStyle, RECT rect, const wchar_t* text, COLORREF colorText);
	//_____________________________________________________________________ Sys::ISelectBool
	bool& SqlGetBool();
	void SqlUpdate(bool toGui);
protected:
	static void DrawButton(DRAWITEMSTRUCT* pDrawItem, COLORREF colorText, COLORREF backColor);
	static void DrawButton(DRAWITEMSTRUCT* pDrawItem, COLORREF backColor, CG::DDBitmap& bitmap);	
	COLORREF _textColor;
	COLORREF _backColor;
	bool used_checked;
	bool _checked;
	const wchar_t * GetClassName(void){return WC_BUTTON;}
	void InitialUpdate(HWND hParent);
};
	
//_____________________________________________________________________Dialog
// A generic dialog class to create dialogs
class Dialog : public Module, public Sys::IWindow, public Win::IModelessDlg
{
public:
	Dialog(void);
	virtual ~Dialog(void);

	//Modal Dialog
	int DialogBox_(HWND hWndParent);

	//Modeless Dialog
	HWND CreateDialog_(HWND hWndParent);

	//Modeless Dialog
	HWND CreateDialog_(HWND hWndParent, int icon_id);

	// Modeless Dialog
	HWND CreateDialog__(HWND hWndParent, LPDLGTEMPLATE pTemplate);

	//Modal Dialog Application
	int BeginDialog(USHORT iconID, HINSTANCE hInstance);

	//Modal Dialog
	virtual int BeginDialog(HWND hWndParent);

	//Modal Dialog
	virtual int BeginDialog(HWND hWndParent, int icon_id);

	HWND GetNextTabItem(HWND hWndCurrentControl);
	HWND GetPrevTabItem(HWND hWndCurrentControl);
	HWND GetNextGroupItem(HWND hWndCurrentControl);
	HWND GetPrevGroupItem(HWND hWndCurrentControl);
	BOOL MapDialogRect(RECT* pRect);// Convert pRect to pixels coordinates
	static void SetInstance(HINSTANCE hInstance);
	void SetDefaultButton(Win::Button& button);
	LONG_PTR SetReturnValue(LONG_PTR value);
	//_____________________________________________________________________ Win::IModelessDlg
	bool IsModelessDlgMessage(MSG& msg);
	//_____________________________________________________________________ Sys::IWindow
	HWND GetHWND();
	int MessageBox(const wchar_t * text, const wchar_t * caption, UINT type);
	int MessageBox(const wstring& text, const wstring& caption, UINT type);
	void EndDialog(int result);
protected:
	HWND hWndModeless;
	void DoChildDock(Win::IParent& child);
	bool _isDialogApplication;
	int initialWidth;
	int initialHeight;
	virtual void GetDialogTemplate(DLGTEMPLATE& dlgTemplate);
	virtual int GetIDD(void);
	const wchar_t * GetClassName(void) {return L"WINDIALOG";}
	virtual void InitializeGui();
	virtual bool Window_WndProc(Win::Event& e);
	virtual bool EventHandler(Win::Event& e);
	virtual void Window_WinAddChild(Win::Event& e);
	virtual void Window_Activate(Win::Event& e);
	virtual void Window_Cancel(Win::Event& e);
	virtual void Window_Char(Win::Event& e);
	virtual void Window_Close(Win::Event& e);
	virtual void Window_Open(Win::Event& e);
	virtual void Window_Destroy(Win::Event& e);
	virtual void Window_DisplayChange(Win::Event& e);
	virtual void Window_DrawItem(Win::Event& e);
	virtual void Window_DropFiles(Win::Event& e);
	virtual void Window_EraseBkgnd(Win::Event& e);
	virtual void Window_GetFont(Win::Event& e);
	virtual void Window_GetMinMaxInfo(Win::Event& e);
	virtual void Window_GetText(Win::Event& e);
	virtual void Window_GetTextLength(Win::Event& e);
	virtual void Window_Help(Win::Event& e);
	virtual void Window_InputLangChange(Win::Event& e);
	virtual void Window_KeyDown(Win::Event& e);
	virtual void Window_KeyUp(Win::Event& e);
	virtual void Window_KillFocus(Win::Event& e);
	virtual void Window_LButtonDblclk(Win::Event& e);
	virtual void Window_LButtonDown(Win::Event& e);
	virtual void Window_LButtonUp(Win::Event& e);
	virtual void Window_RButtonDblclk(Win::Event& e);
	virtual void Window_RButtonDown(Win::Event& e);
	virtual void Window_RButtonUp(Win::Event& e);
	virtual void Window_MeasureItem(Win::Event& e);
	virtual void Window_MouseMove(Win::Event& e);
	virtual void Window_MouseWheel(Win::Event& e);
	virtual void Window_NcActivate(Win::Event& e);
	virtual void Window_NcCalcSize(Win::Event& e);
	virtual void Window_NcCreate(Win::Event& e);
	virtual void Window_NcDestroy(Win::Event& e);
	virtual void Window_NcHitTest(Win::Event& e);
	virtual void Window_NcLButtonDblclk(Win::Event& e);
	virtual void Window_NcLButtonDown(Win::Event& e);
	virtual void Window_NcLButtonUp(Win::Event& e);
	virtual void Window_NcMButtonDblclk(Win::Event& e);
	virtual void Window_NcMButtonDown(Win::Event& e);
	virtual void Window_NcMButtonUp(Win::Event& e);
	virtual void Window_NcMouseMove(Win::Event& e);
	virtual void Window_NcPaint(Win::Event& e);
	virtual void Window_NcRButtonDblclk(Win::Event& e);
	virtual void Window_NcRButtonDown(Win::Event& e);
	virtual void Window_NcRButtonUp(Win::Event& e);
	virtual void Window_Paint(Win::Event& e);
	virtual void Window_SetFocus(Win::Event& e);
	virtual void Window_SetFont(Win::Event& e);
	virtual void Window_SetText(Win::Event& e);
	virtual void Window_Size(Win::Event& e);
	virtual void Window_SysCommand(Win::Event& e);
	virtual void Window_Timer(Win::Event& e);
	//
	// WM_USER is equal to DM_SETDEFID be careful when using this message, when DM_SETDEFID is sent e.lParam and e.wParam are both zero
	virtual void Window_User(Win::Event& e);
	virtual void Window_User1(Win::Event& e);
	virtual void Window_User2(Win::Event& e);
	virtual void Window_User3(Win::Event& e);
	virtual void Window_User4(Win::Event& e);
	virtual void Window_User5(Win::Event& e);
	virtual void Window_User6(Win::Event& e);
	virtual void Window_User7(Win::Event& e);
	virtual void Window_User8(Win::Event& e);
	virtual void Window_User9(Win::Event& e);
	virtual void Window_User10(Win::Event& e);
	virtual void Window_VScroll(Win::Event& e);
	virtual void Window_HScroll(Win::Event& e);
	virtual void Window_SocketNotify(Win::Event& e);
	virtual void Window_SocketHostname(Win::Event& e);
#ifdef WIN_DAC_ADC_SUPPORT
	virtual void Window_WomOpen(Win::Event& e);
	virtual void Window_WomClose(Win::Event& e);
	virtual void Window_WomDone(Win::Event& e);
	virtual void Window_WimOpen(Win::Event& e);
	virtual void Window_WimClose(Win::Event& e);
	virtual void Window_WimData(Win::Event& e);
#endif
	virtual void Window_RenderFormat(Win::Event& e);
	virtual void Window_RenderAllFormats(Win::Event& e);
	virtual void Window_DestroyClipboard(Win::Event& e);
	virtual void Window_DrawClipboard(Win::Event& e);
	virtual void Window_PaintClipboard(Win::Event& e);
	virtual void Window_VscrollClipboard(Win::Event& e);
	virtual void Window_SizeClipboard(Win::Event& e);
	virtual void Window_AskCbFormatName(Win::Event& e);
	virtual void Window_ChangeCbChain(Win::Event& e);
	virtual void Window_HscrollClipboard(Win::Event& e); 
	virtual void Window_QueryNewPalette(Win::Event& e);
	virtual void Window_PaletteIsChanging(Win::Event& e);
	virtual void Window_PaletteChanged(Win::Event& e);
	virtual void Window_HotKey(Win::Event& e);
	virtual void Window_ShowWindow(Win::Event& e); 
	virtual void Window_ActivateApp(Win::Event& e); 
	static LRESULT CALLBACK ModalDlgProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
	static LRESULT CALLBACK ModelessDlgProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
	int iconID;
protected:
	vector<Win::IParent*> children;
	bool bModal;
};

//_____________________________________________________________________ PrintPart
// This class stores a print part and it is used by Win::MultipartDocument
class PrintPart
{
public:
	PrintPart();
	~PrintPart();
	Win::IPrintElement *printElement;
	int elementHeight;
	int elementCount;
};

//_____________________________________________________________________ MultipartDocument
// It provides support to create a document that can be sent to the printer
// Any object that implements the Win::IPrint interface can be inserted in a PrintDoc and form part of the document
class MultipartDocument: public Win::IPrintDoc
{
public:
	MultipartDocument(void);
	virtual ~MultipartDocument(void);
	void Create();
	void AddPart(int element_height_millicm, Win::IPrintElement& printElement);
	void SetFooter(int height_millicm, Win::IPrintElement& printElementFooter);
	//________________________________________________________________ Win::IPrintDoc
	int GetPageCount(const Win::PrintDocInfo& pdi);
	bool OnPrintPage(CG::Gdi& gdi, const Win::PrintDocInfo& pdi);
	void OnPrintDocBegin(CG::Gdi& gdi, const Win::PrintDocInfo& pdi);
	void OnPrintDocEnd(CG::Gdi& gdi);
protected:
	void PrivateOnPrintPage(CG::Gdi& gdi, const Win::PrintDocInfo& pdi, bool sendToPrinter);
	set<int> partsToPrint; 
	void Update(const Win::PrintDocInfo& pdi);
	void Reset();
private:
	vector<Win::PrintPart> printPart;
	Win::IPrintElement* footer;
	int footerHeight;
	int GetNextElementHeight(int input_ipart, int input_ielement, int height);
};

//___________________________________________ PrintSeparator
class PrintSeparator: public Win::IPrintElement
{
public:
	PrintSeparator();
	~PrintSeparator();
	int GetElementCount(const Win::PrintDocInfo& pdi, int element_width_millicm, int element_height_millicm);
	void OnPrintPartBegin(CG::Gdi& gdi, const Win::PrintDocInfo& pdi, int element_width_millicm, int element_height_millicm);
	void OnPrintElement(CG::Gdi& gdi, const Win::PrintDocInfo& pdi, const Win::PrintElementInfo& pei);
	void OnPrintPartEnd(CG::Gdi& gdi, const Win::PrintDocInfo& pdi);
};

class PrintConnector;
//_____________________________________________________________________PrintPreview
// It provides print preview to any object that is derived from Win::PrintConnector
class PrintPreview: public Win::Window
{
public:
	PrintPreview();
	virtual ~PrintPreview();
	void SetDoc(PrintConnector& printConnector);
	void SetCurrentPage(int pageNumber);
	int GetCurrentPage(void);
protected:
	PrintConnector * printConnector;
	const wchar_t * GetClassName(void){ return L"WINPRINTPREVIEW"; }
private:
	void Window_Paint(Win::Event& e);
	int page;
	RECT rect;
	static bool registered;
};

//_____________________________________________________________________ PrintConnector
class PrintConnector: private Win::Dialog
{
public:
	PrintConnector();
	~PrintConnector();
	bool Print(HWND hWndParent, const wchar_t* documentName, Win::IPrintDoc& printDoc);
	void Delete();

	//// 1000 milli centimeters = 1 cm
	//void GetPaperSize(SIZE& out_millicm) const;

	//// 1000 milli centimeters = 1 cm
	//void GetPrintArea(SIZE& out_millicm) const;
	//
	wstring PrintButtonText;
	wstring CloseButtonText;
	wstring PreviousButtonText;
	wstring NextButtonText;
	wstring PageSetupButtonText;
protected:
	Win::IPrintDoc *_printDoc;
	PAGESETUPDLG _pageSetupDlg;
	PRINTDLG _printDlg;
	bool _paperOrientationPortrait;
	SIZE _paperSize;
	wstring _printerName;
	wstring _documentName;
	void UpdatePrinterAndPageInfo();
	void PrivatePrint();
	int PrivateGetPageCount();
	bool PrivatePrintDocument();
	void UpdateButtons();
	void UpdateCancelWindowInfo(int pageIndex);
	static bool _userAbort;
	static HWND _hWndCancelDlg;
	static HWND _hWndInfo;
	//
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate);
private:
	int _pageCount;
	Win::Gdi::Font font;
	RECT rectButton;
	Win::Button btPrint;
	Win::Button btPageSetup;
	Win::Button btClose;
	Win::Button btPrev;
	Win::Button btNext;
	PrintPreview printPreview;
	//
	bool EventHandler(Win::Event& e);
	void Window_Open(Win::Event& e);
	void Window_Size(Win::Event& e);
	void Window_GetMinMaxInfo(Win::Event& e);
	void btPrint_Click(Win::Event& e);
	void btPageSetup_Click(Win::Event& e);
	void btClose_Click(Win::Event& e);
	void btPrev_Click(Win::Event& e);
	void btNext_Click(Win::Event& e);
	//
	static INT_PTR CALLBACK PrintDlgProc(HWND hDlg, UINT msg, WPARAM wParam, LPARAM lParam);
	static BOOL CALLBACK AbortProc(HDC hPrinterDC, int iCode);
	//
	friend class Win::PrintPreview;
};

class DropDownList;
class ListBox;
class ListItemCollection;
//_____________________________________________________________________ ListItem
class ListItem
{
public:
	ListItem(void);
	virtual ~ListItem(void);
	__declspec( property( get=GetData, put=SetData ) ) LPARAM Data;
	// If error, it returns: LB_ERR or CB_ERR
	LPARAM GetData();
	void SetData(LPARAM data);
	__declspec( property( get=GetText ) ) wstring Text;
	wstring GetText();
	void GetText(wchar_t* text);
	__declspec( property( get=GetTextLength ) ) int TextLength;
	int GetTextLength();
private:
	bool isListBox;
	int index;
	HWND listControl;
	friend class Win::ListItemCollection;
};

//_____________________________________________________________________ ListItemCollection
class ListItemCollection
{
public:
	ListItemCollection(void);
	virtual ~ListItemCollection(void);
	bool Delete(int index);
	void DeleteAll();
	LRESULT Add(const wchar_t* text);
	LRESULT Add(const wstring& text);
	LRESULT Add(const wchar_t* text, LPARAM data);
	LRESULT Add(const wstring& text, LPARAM data);
	LRESULT Add(const wchar_t* text, int index, LPARAM data);
	LRESULT Add(const wstring& text, int index, LPARAM data);
	__declspec( property( get=GetCount ) ) int Count;
	int GetCount();
	//
	int GetIndex(const wchar_t* text);
	int GetIndex(const wstring& text);
	//
	Win::ListItem& operator[](long index);
private:
	bool used_data;
	LPARAM _data;
	Win::ListItem _item;
	void SetParent(Win::IParent* iparent, bool isListBox);
	Win::IParent* iparent;
	bool isListBox;
	friend class Win::DropDownList;
	friend class Win::ListBox;
};

//_____________________________________________________________________ DropDownList
// A list and a selection field. The list presents the options that a user can select and the selection field displays the current selection
class DropDownList : public Module, public Sys::IDropDownList
{
public:
	DropDownList(void);
	virtual ~DropDownList(void);
	//_______________________________________________________________ Text
	virtual wstring& GetText();
	virtual void SetText(const wstring& text);
	__declspec( property( get=GetText, put=SetText) ) wstring Text;
	//_______________________________________________________________ Visible
	virtual void SetVisible(bool visible); 
	virtual bool IsVisible();
	__declspec( property( get=IsVisible, put=SetVisible) ) bool Visible;
	//_______________________________________________________________ Enabled
	virtual void SetEnabled(bool enabled); 
	virtual bool IsEnabled();
	__declspec( property( get=IsEnabled, put=SetEnabled) ) bool Enabled;
	//
	int GetItemCount();
	//_______________________________________________________________ Add
	virtual void AddItem(const wchar_t* text, LPARAM data);
	virtual void AddItem(const wstring& text, LPARAM data);
	//______________________________________________________________ Delete
	virtual bool DeleteItem(int index);
	virtual void DeleteAllItems();
	//_______________________________________________________________ ItemText
	virtual bool GetItemText(int index, wstring& out_text);
	virtual bool GetItemText(int index, wchar_t* buffer, int buffer_length);
	//_______________________________________________________________ ItemData
	// It returns CB_ERR on error
	virtual LPARAM GetItemData(int index); 
	virtual bool SetItemData(int index, const LPARAM data);
	//_______________________________________________________________ SelectedIndex
	virtual int GetSelectedIndex();
	virtual bool SetSelectedIndex(int index);
	__declspec( property( get=GetSelectedIndex, put=SetSelectedIndex ) ) int SelectedIndex;
	//_______________________________________________________________ SelectedData
	virtual bool GetSelectedData(LPARAM& out_data);
	virtual bool SetSelectedByData(LPARAM data);
	//_______________________________________________________________ Sys::IEnumerator
	void Enumerate(wchar_t** data, int colCount, int rowIndex);
	//
	LRESULT SetSelected(const wchar_t* searchString);
	LRESULT SetSelected(const wstring& searchString);
	//
	ListItemCollection& GetItems();
	__declspec( property ( get=GetItems) ) ListItemCollection& Items;
	//
	LRESULT ShowDropDown(bool show);
	bool IsEvent(Win::Event& e, int notification);

	// It fills the control with the names of directories and files that match a specified string and set of file attributes
	// attributes: DDL_READWRITE, DDL_READONLY, DDL_HIDDEN, DDL_SYSTEM
	// DDL_DIRECTORY, DDL_ARCHIVE, DDL_DRIVES, DDL_EXCLUSIVE (For searching) 
	// filter: "*.*", "*.wav", "*.jpg" #Win32+CB_DIR
	LRESULT FillWithDirectoryInfo(int attributes, const wchar_t* filter);
	int GetMinWidth();
	void UpdateValue();
	//
	//comboboxinfo.rcItem: It returns the coordinates of the edit box.
	//comboboxinfo.rcButton: It returns the coordinates of the button that contains the drop - down arrow.
	//comboboxinfo.hwndCombo: It returns a handle to the combo box.
	//comboboxinfo.hwndItem: It returns a handle to the textbox.
	//comboboxinfo.hwndList: It returns a handle to the drop - down list.
	void GetInfo(COMBOBOXINFO& comboInfo); 
	//
	void CopyToClipboard();
	void PasteFromClipboard();
	void ClearSelection();
	void CutSelection();
	//_____________________________________________________________________ Sys::ISelectInt
	LPARAM& SqlGetInt();
	void SqlUpdate(bool toGui);
protected:
	Win::ListItemCollection _items;
	LPARAM _data;
	bool used_data;
	const wchar_t * GetClassName(void){return WC_COMBOBOX;}
	bool m_bListBox; // If false, then it is a DropDownList
	void InitialUpdate(HWND hParent);
};

//_____________________________________________________________________HourGlassCursor
// It provides a simplified method to show and hide a busy system cursor 
class HourGlassCursor
{
public:
	HourGlassCursor(void);
	HourGlassCursor(bool busy);
	virtual ~HourGlassCursor(void);
	HCURSOR SetBusy();
	HCURSOR SetAppStarting();
	void SetNormal();
private:
	HCURSOR hCursorOriginal;
};

//_____________________________________________________________________ BusyCursor
// It provides a simplified method to show and hide a busy system cursor 
class BusyCursor
{
public:
	BusyCursor();
	BusyCursor(bool isBusy);
	~BusyCursor();
	//____________________________________________________________ Enabled
	HCURSOR SetBusyCursor(bool isBusy);
	bool IsBusyCursor();
	__declspec(property(get=IsBusyCursor, put=SetBusyCursor)) bool IsBusy;
private:
	HCURSOR _hCursorOriginal;
};

//_____________________________________________________________________ ListBox
// It displays a list of  items that can be represented by text strings, bitmaps, or both
class ListBox : public Sys::IListBox, public DropDownList
{
public:
	ListBox(void);
	virtual ~ListBox(void);
	//_______________________________________________________________ Text
	wstring& GetText();
	void SetText(const wstring& text);
	__declspec( property( get=GetText, put=SetText) ) wstring Text;
	//_______________________________________________________________ Visible
	void SetVisible(bool visible); 
	bool IsVisible();
	__declspec( property( get=IsVisible, put=SetVisible) ) bool Visible;
	//_______________________________________________________________ Enabled
	void SetEnabled(bool enabled); 
	bool IsEnabled();
	__declspec( property( get=IsEnabled, put=SetEnabled) ) bool Enabled;
	//
	int GetItemCount();
	//_______________________________________________________________ Add
	void AddItem(const wchar_t* text, LPARAM data);
	void AddItem(const wstring& text, LPARAM data);
	//______________________________________________________________ Delete
	bool DeleteItem(int index);
	void DeleteAllItems();
	//_______________________________________________________________ ItemText
	bool GetItemText(int index, wstring& out_text);
	bool GetItemText(int index, wchar_t* buffer, int buffer_length);
	//_______________________________________________________________ ItemData
	// It returns CB_ERR on error
	LPARAM GetItemData(int index); 
	bool SetItemData(int index, const LPARAM data);
	//_______________________________________________________________ SelectedIndex
	int GetSelectedIndex();
	bool SetSelectedIndex(int index);
	__declspec( property( get=GetSelectedIndex, put=SetSelectedIndex ) ) int SelectedIndex;
	//_______________________________________________________________ SelectedData
	bool GetSelectedData(LPARAM& out_data);
	bool SetSelectedByData(LPARAM data);
	//_______________________________________________________________ Multiple Selection
	// If index is -1, it will affect all items
	bool SetSelection(int index, bool selected);
	bool IsItemSelected(int index);
	//_______________________________________________________________ Sys::IEnumerator
	void Enumerate(wchar_t** data, int colCount, int rowIndex);
	//_____________________________________________________________________ Sys::ISelectInt
	LPARAM& SqlGetInt();
	void SqlUpdate(bool toGui);
	//
	void SetColumnWidth(int columnWidth);
protected:
	const wchar_t * GetClassName(void){return WC_LISTBOX;}
};

//_____________________________________________________________________Menu
// It provides support to handle menus
class Menu
{
public:
	Menu(void);
	virtual ~Menu(void);
	void Attach(HMENU hMenu, bool bPopUp);

	// Use this to attach a main menu with bPopUp set to false
	void Attach(HWND hWnd, bool bPopUp);
	bool Create(bool bPopUp);
	void AddItem(UINT nID, wchar_t* pszCaption, bool bChecked, bool bEnabled);
	void AddItem(UINT nID, HBITMAP hBitmap, bool bEnabled);
	void SetItemEnableByPosition(int nPosition, bool bEnabled);
	void SetItemEnableByID(UINT nID, bool bEnabled);
	void SetItemCheckByPosition(int nPosition, bool bChecked);
	void SetItemCheckByID(UINT nID, bool bChecked);
	bool Create(HINSTANCE hInstance, const wchar_t * pszID);
	HMENU GetHMENU();
	HMENU GetSubHMENU_(int nPosition);
	int GetStringByID(UINT nID, wchar_t* pszCaption, int nMaxCount);
	int GetStringByPosition(UINT nID, wchar_t* pszCaption, int nMaxCount);
	BOOL AddItem(MENUITEMINFO& menuInfo);
	bool IsItemEnabled(int nID);
	bool IsItemChecked(int nID);
	BOOL AppendMenu_(HMENU hMenu, wchar_t* pszCaption);
	BOOL AppendMenu_(Menu& menu, wchar_t* pszCaption);
	bool IsPopUp(void);
	BOOL DeleteItemByPosition(int nPosition);
	BOOL DeleteItemByID(int nID);
	UINT GetItemID(int nPosition);
	int GetItemCount(void);
	Menu GetSubMenu_(int nPosition);
	void AddSeparator(void);
	operator HMENU();
protected:
	HMENU hMenu;
	bool bCreated;
private:
	bool bPopUp;
	void Destructor();
	int nPosition;
};

//_____________________________________________________________________ Label
// A label to display text
class Label : public Module, public Sys::IObject
{
public:
	Label(void);
	virtual ~Label(void);
	//____________________________________________________________ Text
	wstring& GetText();
	void SetText(const wstring& text);
	__declspec( property( get=GetText, put=SetText) ) wstring Text;
	//____________________________________________________________ Visible
	virtual void SetVisible(bool visible);
	virtual bool IsVisible();
	__declspec( property( get=IsVisible, put=SetVisible) ) bool Visible;
	//____________________________________________________________ Enabled
	void SetEnabled(bool enabled);
	bool IsEnabled();
	__declspec( property( get=IsEnabled, put=SetEnabled) ) bool Enabled;	
	//
	LRESULT SetImage(HICON hicon);	
	LRESULT SetImage(HBITMAP hbitmap);
	LRESULT SetImage(CG::DDBitmap& bitmap);
	LRESULT SetImage(Sys::Bitmap& bitmap);
	LRESULT SetImage(Sys::Icon& icon);	
	LRESULT SetImage(HENHMETAFILE henhmetafile);
	LRESULT SetImage(CG::Metafile& metafile);
	bool IsEvent(Win::Event& e, int notification);
	//
	COLORREF GetBackColor();
	void SetBackColor(COLORREF color);
	__declspec( property( get=GetBackColor, put=SetBackColor) ) COLORREF BackColor;
	//
	COLORREF GetTextColor();
	void SetTextColor(COLORREF color);
	__declspec( property( get=GetTextColor, put=SetTextColor) ) COLORREF TextColor;
	//
	void SetTransparent(bool transparent);
	bool GetTransparent();
	__declspec( property( get=GetTransparent, put=SetTransparent) ) bool Transparent;
protected:
	const wchar_t * GetClassName(void){return WC_STATIC;}
	CG::Brush _brush;
	COLORREF _backColor;
	COLORREF _textColor;
	bool _transparent;
};

//_____________________________________________________________________ Camera
// It capture video and audio from a camera #Win32+capCreateCaptureWindow
// Add the folowing two lines in the stdafx.h before including Wintempla.h
//#include "Vfw.h"
//#pragma comment(lib, "Vfw32.lib")
class Camera: public Win::Module
{
public:
	Camera();
	virtual ~Camera();
	HWND Create(DWORD dwExStyle, const wchar_t* text, DWORD dwStyle, int x, int y, int width, int height, HWND hParent, int id);
	HWND CreateX(DWORD dwExStyle, const wchar_t * text, DWORD dwStyle, double cmX, double cmY, double cmWidth, double cmHeight, HWND hParent, int id);
	
	// It connects a capture window to a capture driver #Win32+WM_CAP_DRIVER_CONNECT
	bool Connect(int deviceIndex);

	// It disconnects a capture driver from a capture window #Win32+WM_CAP_DRIVER_DISCONNECT
	bool Disconnect();

	// It stops the capture operation #Win32+WM_CAP_ABORT
	bool Abort();

	// It displays a dialog box to select a compressor to use during the capture process #Win32+WM_CAP_DLG_VIDEOCOMPRESSION
	bool DlgVideoCompression();

	// It displays a dialog box in which the user can set or adjust the video output  #Win32+WM_CAP_DLG_VIDEODISPLAY
	bool DlgVideoDisplay();

	// It displays a dialog box in which the user can select the video format #Win32+WM_CAP_DLG_VIDEOFORMAT
	bool DlgVideoFormat();

	// It displays a dialog box in which the user can control the video source #Win32+WM_CAP_DLG_VIDEOSOURCE
	bool DlgVideoSource();

	// It returns the name of the capture driver connected to the capture window #Win32+WM_CAP_DRIVER_GET_NAME
	bool GetDriverName(wchar_t* out_buffer, size_t buffer_len);

	// It returns the version information of the capture driver connected to a capture window #Win32+WM_CAP_DRIVER_GET_VERSION
	bool GetDriverVersion(wchar_t* out_buffer, size_t buffer_len);

	// It stops the capture operation #Win32+WM_CAP_STOP
	bool Stop();
	void SetPreview(bool preview);
	bool SetPreviewRate(int milliseconds);
	bool SetStrechFrames(bool stretchFrames);
	bool CopyFrameBuffer();
	bool FileSaveAs(const wchar_t* filename);
	bool FileSaveDIB(const wchar_t* filename);
	bool SetFileCaptureFile(const wchar_t* filename);

	// It retrieves and displays a single frame from the capture driver #Win32+WM_CAP_GRAB_FRAME
	bool GrabFrame();

	bool CreateBMPFile(const wchar_t* filename, PBITMAPINFO pBitmapInfo, HBITMAP hBitmap, HDC hDC);
	PBITMAPINFO CreateBitmapInfoStruct(HBITMAP hBitmap);
	
	bool IsEvent(Win::Event& e, int notification);
protected:
	const wchar_t * GetClassName(void){ return NULL; } //Not used
	
};
//WM_CAP_DRIVER_GET_CAPS
//WM_CAP_DRIVER_GET_NAME
//WM_CAP_DRIVER_GET_VERSION
//WM_CAP_FILE_ALLOCATE
//WM_CAP_FILE_GET_CAPTURE_FILE
//WM_CAP_FILE_SET_INFOCHUNK
//WM_CAP_GET_AUDIOFORMAT
//WM_CAP_GET_MCI_DEVICE
//WM_CAP_GET_SEQUENCE_SETUP
//WM_CAP_GET_STATUS
//WM_CAP_GET_USER_DATA
//WM_CAP_GET_VIDEOFORMAT
//WM_CAP_GRAB_FRAME
//WM_CAP_GRAB_FRAME_NOSTOP
//WM_CAP_PAL_AUTOCREATE
//WM_CAP_PAL_MANUALCREATE
//WM_CAP_PAL_OPEN
//WM_CAP_PAL_PASTE
//WM_CAP_PAL_SAVE
//WM_CAP_SEQUENCE
//WM_CAP_SEQUENCE_NOFILE
//WM_CAP_SET_AUDIOFORMAT
//WM_CAP_SET_CALLBACK_CAPCONTROL
//WM_CAP_SET_CALLBACK_ERROR
//WM_CAP_SET_CALLBACK_FRAME
//WM_CAP_SET_CALLBACK_STATUS
//WM_CAP_SET_CALLBACK_VIDEOSTREAM
//WM_CAP_SET_CALLBACK_WAVESTREAM
//WM_CAP_SET_CALLBACK_YIELD
//WM_CAP_SET_MCI_DEVICE
//WM_CAP_SET_OVERLAY
//WM_CAP_SET_SCALE
//WM_CAP_SET_SCROLL
//WM_CAP_SET_SEQUENCE_SETUP
//WM_CAP_SET_USER_DATA
//WM_CAP_SET_VIDEOFORMAT
//WM_CAP_SINGLE_FRAME
//WM_CAP_SINGLE_FRAME_CLOSE
//WM_CAP_SINGLE_FRAME_OPEN

//_____________________________________________________________________ VideoAvi
// It plays an uncompressed AVI file (with no sound) or a compressed using run-length (BI_RLE8) encoding
class VideoAvi : public Win::Module
{
public:
	VideoAvi();
	virtual ~VideoAvi();
	HWND Create(DWORD dwExStyle, const wchar_t* text, DWORD dwStyle, int x, int y, int width, int height, HWND hParent, int id);
	HWND CreateX(DWORD dwExStyle, const wchar_t * text, DWORD dwStyle, double cmX, double cmY, double cmWidth, double cmHeight, HWND hParent, int id);

	// It plays an uncompressed AVI file (with no sound) or a compressed using run-length (BI_RLE8) encoding
	// Be you sure you have an AVI resource by editing the MyProject.rc file as shown 
	// IDA_MYVIDEO              AVI                     "myvideo.avi" 
	// #ACM_OPEN+Win32
	bool Open(int resourceID);

	// It plays an uncompressed AVI file (with no sound) or a compressed using run-length (BI_RLE8) encoding #ACM_OPEN+Win32
	bool Open(LPTSTR name);
	BOOL CloseAnimation();
	BOOL Play(UINT from, UINT to, UINT repeat);
	BOOL PlayContinuously();
	BOOL Play(int repeatCount);
	BOOL Stop();
	virtual bool IsEvent(Win::Event& e, int notification);
	//
	COLORREF GetBackColor();
	void SetBackColor(COLORREF color);
	__declspec( property( get=GetBackColor, put=SetBackColor) ) COLORREF BackColor;
protected:
	CG::Brush _brush;
	const wchar_t * GetClassName(void){return ANIMATE_CLASS;} //Not used
	static int bRegistered;
	COLORREF _backColor;
};

//_____________________________________________________________________PropertySheet and Wizard
// It allows the user to view and edit the properties of an item, usually they have several tabs.  
// They can also be used to create Wizards.
class PropertySheet_ : public Dialog
{
public:
	PropertySheet_(void);
	virtual ~PropertySheet_(void);
	HPROPSHEETPAGE CreatePropertySheetPage_(HWND hParent, const wchar_t * pszTemplateId, const wchar_t * pszIcon);
	HPROPSHEETPAGE CreateWizardMainPage(HWND hParent, const wchar_t * pszTemplateId);
	HPROPSHEETPAGE CreateWizardPage(HWND hParent, const wchar_t * pszTemplateId, const wchar_t * pszTitle, const wchar_t * pszSubTitle);
	static int CALLBACK RemoveContextHelpProc(HWND hwnd, UINT message, LPARAM lParam);
	void SetEnableApplyButton(bool bEnabled);  
	void SetWizardButtons(DWORD dwFlags);
protected:
	static LRESULT CALLBACK PropertySheetProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
private:
	bool m_bModal;
};

//_____________________________________________________________________ColorDlg
// Provides a standard GUI to select a color
class ColorDlg
{
public:
	ColorDlg(void);
	virtual ~ColorDlg(void);
	bool BeginDialog(HWND hWndParent);
	//
	__declspec( property( get=GetSelectedColor, put=SetSelectedColor) ) COLORREF SelectedColor;
	COLORREF GetSelectedColor();
	 void SetSelectedColor(COLORREF color);
	 //
	 bool SaveCustomColors(const wchar_t* filename);
	 bool LoadCustomColors(const wchar_t* filename);
	//
	void ResetCustomColors();
private:
	CHOOSECOLOR m_cc;
	static COLORREF m_rgbColor[16];
};

//_____________________________________________________________________ DateView
// It implements a calendar-like user interface
class DateView : public Win::Module, public Sys::ISelectTime
{
public:
	DateView(void);
	virtual ~DateView(void);
	bool GetCurrentSelection(Sys::Time& systime);
	Sys::Time GetCurrentSelection();
	bool SetCurrentSelection(Sys::Time& systime);
	__declspec( property( get=GetCurrentSelection, put=SetCurrentSelection) ) Sys::Time SelectedDate;
	//
	bool SetRange(Sys::Time& minimum, Sys::Time& maximum);
	bool GetCurrentSelection(int& month, int& day, int& year);
	bool SetCurrentSelection(int month, int day, int year);
	bool IsEvent(Win::Event& e, int notification);
	void AdjustSize(int x, int y);
	//
	void SetBackColor(COLORREF color);
	COLORREF GetBackColor();
	__declspec( property( get=GetBackColor, put=SetBackColor) ) COLORREF BackColor;
	//
	void SetTextColor(COLORREF color);
	COLORREF GetTextColor();
	__declspec( property( get=GetTextColor, put=SetTextColor) ) COLORREF TextColor;
	//
	void SetMonthBkColor(COLORREF color);
	COLORREF GetMonthBkColor();
	__declspec( property( get=GetMonthBkColor, put=SetMonthBkColor) ) COLORREF MonthBkColor;
	//
	void SetTitleBkColor(COLORREF color);
	COLORREF GetTitleBkColor();
	__declspec( property( get=GetTitleBkColor, put=SetTitleBkColor) ) COLORREF TitleBkColor;
	//
	void SetTitleTextColor(COLORREF color);
	COLORREF GetTitleTextColor();
	__declspec( property( get=GetTitleTextColor, put=SetTitleTextColor) ) COLORREF TitleTextColor;
	//
	void SetTrailingTextColor(COLORREF color);
	COLORREF GetTrailingTextColor();
	__declspec( property( get=GetTrailingTextColor, put=SetTrailingTextColor) ) COLORREF TrailingTextColor;
	//
	void Window_Size(Win::Event& e); // Call onsize of the parent to display as much months as possible
	//_______________________________________________________________ Sys::ISelectTime
	Sys::SqlTime& SqlGetTime();
	Sys::Time& SqlGetSysTime();
	void SqlUpdate(bool toGui);
protected:
	const wchar_t * GetClassName(void){return MONTHCAL_CLASS;}
	Sys::Time _systemtime;	
	bool used_systemtime;
	void InitialUpdate(HWND hParent);
	Sys::SqlTime _sqltime;
private:
	static bool bInit;
};

//_____________________________________________________________________ HotKey
class HotKey : public Win::Module
{
public:
	HotKey(void);
	virtual ~HotKey(void);
	void SetRules(WPARAM invalidKeyCombinations, LPARAM invalidEntries);
	void SetHotKey(WPARAM defaultKey);
protected:
	const wchar_t * GetClassName(void){return HOTKEY_CLASS;}
};

//_____________________________________________________________________ DateTimeBox
// It provides a simple and intuitive interface through which to exchange date and time information with a user
class DateTimeBox : public Win::Module, public Sys::IDateTime
{
public:
	DateTimeBox(void);
	virtual ~DateTimeBox(void);
	//____________________________________________________________ Text
	wstring& GetText();
	void SetText(const wstring& text);
	__declspec( property( get=GetText, put=SetText) ) wstring Text;
	//____________________________________________________________ Visible
	virtual void SetVisible(bool visible);
	virtual bool IsVisible();
	__declspec( property( get=IsVisible, put=SetVisible) ) bool Visible;
	//____________________________________________________________ Enabled
	void SetEnabled(bool enabled);
	bool IsEnabled();
	__declspec( property( get=IsEnabled, put=SetEnabled) ) bool Enabled;	
	bool GetCurrentSelection(Sys::Time& systime);
	//____________________________________________________________ SelectedDateTime
	Sys::Time GetSelectedDateTime();
	bool SetSelectedDateTime(Sys::Time& systime);
	__declspec( property( get=GetSelectedDateTime, put=SetSelectedDateTime) ) Sys::Time SelectedDateTime;
	//____________________________________________________________ CurrentSelection
	bool GetCurrentSelection(int& month, int& day, int& year);
	bool SetCurrentSelection(int month, int day, int year);
	//
	bool SetRange(Sys::Time& minimum, Sys::Time& maximum);
	//void SetMonthBkColor(COLORREF color);
	//void SetTitleBkColor(COLORREF color);
	//void SetTitleTextColor(COLORREF color);
	//void SetTrailingTextColor(COLORREF color);
	bool IsEvent(Win::Event& e, int notification);

	// d  The one- or two-digit day.
	// dd  The two-digit day.Single-digit day values are preceded by a zero.
	// ddd  The three-character weekday abbreviation.
	// dddd  The full weekday name.
	// h  The one- or two-digit hour in 12-hour format.
	// hh The two-digit hour in 12-hour format.Single-digit values are preceded by a zero.
	// H The one- or two-digit hour in 24-hour format.
	// HH The two-digit hour in 24-hour format.Single-digit values are preceded by a zero.
	// m The one- or two-digit minute.
	// mm The two-digit minute.Single-digit values are preceded by a zero.
	// M The one- or two-digit month number.
	// MM The two-digit month number.Single-digit values are preceded by a zero.
	// MMM The three-character month abbreviation.
	// MMMM The full month name.
	// t The one-letter AM/PM abbreviation (that is, AM is displayed as "A").
	// tt The two-letter AM/PM abbreviation (that is, AM is displayed as "AM").
	// yy The last two digits of the year (that is, 1996 would be displayed as "96").
	// yyyy The full year (that is, 1996 would be displayed as "1996").
	//format> L"hh:mm:ss dddd MMM dd, yyyy"   #DTM_SETFORMAT+Win32
	bool SetFormat(const wchar_t * format);
	void UpdateValue();
	//_______________________________________________________________ Sys::ISelectTime
	Sys::SqlTime& SqlGetTime();
	Sys::Time& SqlGetSysTime();
	void SqlUpdate(bool toGui);
protected:
	Sys::Time _systemtime;	
	bool used_systemtime;
	const wchar_t * GetClassName(void){return DATETIMEPICK_CLASS;}
	void InitialUpdate(HWND hParent);
	Sys::SqlTime _sqltime;
private:
	static bool bInit;
};

//_____________________________________________________________________ IpAddress
class IpAddress : public Win::Module
{
public:
	IpAddress(void);
	virtual ~IpAddress(void);
	void SetFieldRange(int index, int minimum, int maximum);
	void SetAddress(int b1, int b2, int b3, int b4);
	void GetAddress(int& b1, int& b2, int& b3, int& b4);
	void Clear();
	bool IsBlank();
protected:
	const wchar_t * GetClassName(void){return WC_IPADDRESS;}
private:
	static bool bInit;
};

//_____________________________________________________________________ SysLink
class SysLink : public Win::Module
{
public:
	SysLink(void);
	virtual ~SysLink(void);
	void SetItem(LITEM& litem);
	void GetItem(LITEM& litem);
protected:
	const wchar_t * GetClassName(void){return WC_LINK;}
private:
	static bool bInit;
};

	//LITEM litem;
	//litem.state = LIS_ENABLED;
	//litem.mask = LIF_ITEMINDEX | LIF_STATE | LIF_URL;
	//litem.iLink = 0;
	//_snwprintf_s(litem.szUrl, L_MAX_URL_LENGTH, _TRUNCATE, L"%s", L"http://www.yahoo.com");
	//this->link1.SetItem(litem);

//#pragma once
//#include "Module.h"
//#include "Error.h"
//
//// This control works only with Unicode
////#define _WIN32_WINNT 0x0501   // for Mouse Wheel support & SysLink
//namespace win{
//
//class SysLink : public win::Module
//{
//public:
//	SysLink(void);
//	virtual ~SysLink(void);
//	HWND Create(DWORD dwExStyle, DWORD dwStyle, int x, int y, int width, int height,
//					 const TCHAR* pszHtml, HWND hParent, HMENU id);
//	bool SetItem(PLITEM pLitem)
//	{
//		return (TRUE==SendMessage(this->m_hWnd, (UINT) LM_SETITEM, (WPARAM)NULL,
//			(LPARAM)pLitem));
//	}
//	bool GetItem(PLITEM pLitem)
//	{
//		return (TRUE==SendMessage(this->m_hWnd, (UINT) LM_GETITEM, (WPARAM)NULL,
//			(LPARAM)pLitem));
//	}
//private:
//	static int m_nCount;
//};
//
//}

 //#include <commctrl.h> //Requires a manifest 
//#define _WIN32_WINNT >= 0x501
// Class View -> right click -> Properties -> Linker -> Command Line -> comctl32.lib

// Following are examples of resource strings that
// contain an anchor tag(<A>) with an ID or
// HREF attribute.

// Or inside a Resource file
//CONTROL "For more information, see the 
//<A ID=""idLaunchHelp"">HelpCenter</A>, 
//<A ID=""idHelpMenu"">Help Menu</A>,
//<A HREF=""http://www.help.com"">Website</A>,
//IDD_MYLINK, WS_TABSTOP, 8, 8, 200, 24

/*
LRESULT InstDigital::OnCreate(HWND hWnd, WPARAM wParam, LPARAM lParam)
{
	//TCHAR * psz = _T("Click here to connect to <A HREF=\"http://www.yahoo.com\">Yahoo!</A>");
	TCHAR * psz = _T("Click here to connect to <A HREF=\"ftp://www.ugto.mx\">Ugto Ftp!</A>");
	this->m_sl.Create(0, 0, 0, 0, 200, 300, psz, hWnd, (HMENU)IDC_LINK);
	LITEM litem;
	litem.mask = LIF_ITEMINDEX | LIF_URL;
	litem.iLink = 0;
	this->m_sl.GetItem(&litem);
	this->MessageBox_(litem.szUrl);
	return 0;
}

LRESULT InstDigital::OnNotify(HWND hWnd, WPARAM wParam, LPARAM lParam)
{
    LPNMHDR pHdr = (LPNMHDR)lParam;
	PNMLINK pNMLink = NULL;
	switch (pHdr->code)
	{
		case NM_RETURN:
		case NM_CLICK:
			 pNMLink= (PNMLINK) lParam;
			 switch(pNMLink->item.iLink)
			 {
			 case 0:
				 this->MessageBox_(pNMLink->item.szUrl, _T("Open this link"));
				 break;
			 }
			
			//if (!StrCmpW (pNMLink->item.szID,
			//				L"idLaunchHelp"))
			//{
			//	// TODO: Launch Help Center...
			//}
			//else if (!StrCmpW (pNMLink->item.szID,
			//	L"idHelpMenu"))
			//{
			//	// TODO: Launch Help Menu...
			//}
	break;
	}
	return TRUE;
}
*/

//#include "StdAfx.h"
//#include ".\SysLink.h"
//
//namespace win{
//
//int SysLink::m_nCount = 0;
//
//SysLink::SysLink(void)
//{
//	if (m_nCount==0)
//	{
//		CoInitialize(NULL);
//		INITCOMMONCONTROLSEX cc;
//		cc.dwSize=sizeof(INITCOMMONCONTROLSEX);
//		cc.dwICC=ICC_LINK_CLASS;
//		InitCommonControlsEx(&cc);
//	}
//	m_nCount++;
//}
//
//SysLink::~SysLink(void)
//{
//	m_nCount--;
//	if (m_nCount==0) CoUninitialize();
//}
//
//HWND SysLink::Create(DWORD dwExStyle, DWORD dwStyle, int x, int y, int width, int height,
//					 const TCHAR* pszHtml, HWND hParent, HMENU id)
//{
//	if (dwStyle==0) dwStyle = WS_BORDER | WS_CHILD | WS_VISIBLE | WS_TABSTOP; 
//	 Module::Create(dwExStyle, (LPCTSTR)WC_LINK, pszHtml, dwStyle, 
//		x, y, width, height, hParent, id, NULL);
//	 win::Error::DisplayLastError(NULL);
//	 return 0;
//}
//}
/*
LIF_ITEMINDEX
Retrieve the numeric item index. Items are always accessed by index, therefore you must always set this flag and assign a value to iLink. To obtain the item ID you must set both LIF_ITEMINDEX and LIF_ITEMID.
LIF_STATE
Use stateMask to get or set the state of the link.
LIF_ITEMID
Specify the item by the ID value given in szID.
LIF_URL
Set or get the URL for this item.
iLink
Value of type int that contains the item index. This numeric index is used to access a SysLink control link.
state
Combination of one or more of the following flags, describing the state of the item.
LIS_ENABLED
The link can respond to user input. This is the default unless the entire control was created with WS_DISABLED. In this case, all links are disabled.
LIS_FOCUSED
The link has the keyboard focus. Pressing ENTER sends a NM_CLICK notification.
LIS_VISITED
The link has been visited by the user. Changing the URL to one that has not been visited causes this flag to be cleared.
stateMask
Combination of flags describing which state item to get or set. Allowable items are identical to those allowed in state.
szID
WCHAR string that contains the ID name. The maximum number of characters in the array is MAX_LINKID_TEXT. The ID name cannot be used to access a SysLink control link. You use the item index to access the item.
szUrl
WCHAR string that contains the URL represented by the link. The maximum number of characters in the array is L_MAX_URL_LENGTH.
*/

//#ifdef WIN_FOLDER_DLG
//_____________________________________________________________________FolderDlg
// It provides a standard graphic interface to request a folder from the user
class FolderDlg : public Win::Module
{
public:
	FolderDlg(void);
	~FolderDlg(void);
	//
	// BeginDialog opens the Folder Dialog
	// It returns the select path, or NULL if the user cancels the dialog
	wchar_t* BeginDialog(HWND hParent, const wchar_t * caption);
	//
	// You may call this funtion after a successfull call to BeginDialog
	wchar_t* GetFolderName();
	bool newDialogStyle;
private:
	wchar_t* GetPathName_(LPCITEMIDLIST pidl);
	wchar_t* GetDisplayNameOf(IShellFolder* psf, LPCITEMIDLIST pidl, DWORD uFlags);
	static void FreePIDL(LPCITEMIDLIST pidl);
	wchar_t pathName[WIN_FILEDLG_MAXPATH];
	wchar_t displayName[WIN_FILEDLG_MAXPATH];
	LPCITEMIDLIST itemIdList;
	//wchar_t tmpName[WIN_FILEDLG_MAXPATH];// allows selecting previous folder selected
	IShellFolder *shellFolderRoot;
protected:
	// It enables or disables the OK button #BFFM_ENABLEOK+Win32
	void EnableOK(BOOL bEnable);
	//
	// It sets the text of  the OK button #BFFM_SETOKTEXT+Win32
	void SetOKText(LPCWSTR lpText);
	//
	// It sets the selection #BFFM_SETSELECTION+Win32
	void SetSelection(const wchar_t * lpText) ;
	void SetSelection(LPCITEMIDLIST pidl);
	//
	// It expands a node #BFFM_SETEXPANDED+Win32
	void SetExpanded(LPCWSTR lpText);
	void SetExpanded(LPCITEMIDLIST pidl);
	void SetStatusText(const wchar_t * pText);
	//
	BROWSEINFO browseInfo;
	static int CALLBACK CallbackProc(HWND hWnd, UINT msg, LPARAM lp, LPARAM lpData);
	virtual void OnInitialized(HWND hwnd);
	//virtual void OnIUnknown(IUnknown* punk);
	virtual void OnSelChanged(HWND hwnd, LPCITEMIDLIST pidl);
	virtual BOOL OnValidateFailed(HWND hwnd, const wchar_t * lpsz);
	const wchar_t * GetClassName(void){return L"WINFOLDERDLG";}
};
//#endif

//_____________________________________________________________________FileDlg
// It provides a standard GUI to select a file
class FileDlg
{
public:
	FileDlg(void);
	virtual ~FileDlg(void);
	bool BeginDialog(HWND hWndParent, const wchar_t* caption, bool save);
	//
	// Default extension is appended if the user does not provide one
	// SetFilter(L"Text Documents (*.txt)\0*.txt\0All Files (*.*)\0*.*\0\0", 0, L"txt");
	// The first pair of strings has an nFilterIndex value of 1, the second pair 2, and so on. 
	// An nFilterIndex of zero indicates the custom filter specified by lpstrCustomFilter.
	void SetFilter(const wchar_t* pszFilter, int nFilterIndex, const wchar_t* pszDefaultExtenstion);
	//
	const wchar_t* GetFileName();
	bool SetFileName(const wchar_t* fileName);
	const wchar_t* GetFileNameFullPath();
	const wchar_t* GetFilePath();
	void Clear();
	void ClearFileName();
	//
	wstring& GetWorkingFolder();
	void SetWorkingFolder(const wstring& folderName);
	__declspec( property( get=GetWorkingFolder, put=SetWorkingFolder) ) wstring WorkingFolder;
	//
	wstring GetSelectedFileName();
	void SetSelectedFileName(const wstring fileName);
	__declspec( property( get=GetSelectedFileName, put=SetSelectedFileName) ) wstring SelectedFileName;
	//
	OPENFILENAME openFileName;
private:
	wchar_t m_szFileName[WIN_FILEDLG_MAXPATH];
	wchar_t m_szPath[WIN_FILEDLG_MAXPATH];
	wchar_t m_szFilePath[WIN_FILEDLG_MAXPATH];
	wchar_t m_szDefaultExt[32];
	wchar_t m_szFilter[WIN_MAX_FILTER];
	static wchar_t m_szCustomFilter[WIN_MAX_FILTER];
	wstring _workingFolder;
};

//_____________________________________________________________________FindReplaceDlg
// It provides a standard GUI to find and replace
class FindReplaceDlg: public Win::IModelessDlg
{
public:
	FindReplaceDlg(void);
	virtual ~FindReplaceDlg(void);
	//
	// flags: FR_DOWN, FR_WHOLEWORD, FR_MATCHCASE, FR_FINDNEXT, FR_REPLACE
	// FR_REPLACEALL, FR_DIALOGTERM, FR_SHOWHELP, FR_ENABLEHOOK, FR_ENABLETEMPLATE
	// FR_NOUPDOWN, FR_NOMATCHCASE, FR_NOWHOLEWORD, FR_ENABLETEMPLATEHANDLE
	// FR_HIDEUPDOWN, FR_HIDEMATCHCASE, FR_HIDEWHOLEWORD  
	DWORD GetFlags();
	//
	// flags: FR_DOWN, FR_WHOLEWORD, FR_MATCHCASE, FR_FINDNEXT, FR_REPLACE
	// FR_REPLACEALL, FR_DIALOGTERM, FR_SHOWHELP, FR_ENABLEHOOK, FR_ENABLETEMPLATE
	// FR_NOUPDOWN, FR_NOMATCHCASE, FR_NOWHOLEWORD, FR_ENABLETEMPLATEHANDLE
	// FR_HIDEUPDOWN, FR_HIDEMATCHCASE, FR_HIDEWHOLEWORD  
	void SetFlags(DWORD flags);
	__declspec(property(get=GetFlags, put=SetFlags)) DWORD Flags;
	//
	// It opens the standard Microsoft Windows Find Dialog #FindText+Win32
	HWND BeginFindDialog(HWND hWndParent, const wchar_t* findThis);
	//
	// It opens the standard Microsoft Windows Replace Dialog #ReplaceText+Win32
	HWND BeginReplaceDialog(HWND hWndParent, const wchar_t* findThis, const wchar_t* replaceWithThis);
	//
	// It returns true when the event was generated from the Find and Replace dialog
	static bool IsEvent(Win::Event& e);
	//_____________________________________________________________________ Win::IModelessDlg
	bool IsModelessDlgMessage(MSG& msg);
private:
	static FINDREPLACE _findReplace;
	static wchar_t _findText[MAX_FIND_LEN];
	static wchar_t _replaceText[MAX_FIND_LEN];
	static HWND _hWndFindReplace;
	static UINT _wmMessageFind;
};

//_____________________________________________________________________FontDlg
// It provides a standard graphic interface to request a font from the user
class FontDlg
{
public:
	FontDlg(void);
	virtual ~FontDlg(void);
	bool BeginDialog(HWND hWndParent);
	//
	void SetSelectedFontName(const wstring& fontname);
	wstring GetSelectedFontName();
	__declspec( property( get=GetSelectedFontName, put=SetSelectedFontName) ) wstring SelectedFontName;
	//
	void SetSelectedPointSize(const double pointSize);
	double GetSelectedPointSize();
	__declspec( property( get=GetSelectedPointSize, put=SetSelectedPointSize) ) double SelectedPointSize;
	//
	void SetSelectedFont(CG::Font& font);
	//
	void SetSelectedLogFont(LOGFONT& logFont);
	LOGFONT& GetSelectedLogFont();
	__declspec( property( get=GetSelectedLogFont, put=SetSelectedLogFont) ) LOGFONT SelectedLogFont;
	//
	void SetSelectedFontColor(COLORREF color);
	COLORREF GetSelectedFontColor();
private:
	CHOOSEFONT m_cf;
	LOGFONT m_logFont;
};

class PrintDoc;

//_____________________________________________________________________Edit
// A rectangular control window to enter and edit text by typing on the keyboard
class Textbox : public Module, public Win::IPrintElement, public Sys::ITextbox
{
public:
	Textbox(void);
	Textbox(HWND hWnd);
	virtual ~Textbox(void);
	//____________________________________________________________ Text
	wstring& GetText();
	void SetText(const wstring& text);
	__declspec( property( get=GetText, put=SetText) ) wstring Text;
	//____________________________________________________________ Visible
	virtual void SetVisible(bool visible);
	virtual bool IsVisible();
	__declspec( property( get=IsVisible, put=SetVisible) ) bool Visible;
	//____________________________________________________________ Enabled
	void SetEnabled(bool enabled);
	bool IsEnabled();
	__declspec( property( get=IsEnabled, put=SetEnabled) ) bool Enabled;	
	//____________________________________________________________ DoubleValue
	void SetDoubleValue(double value, const wchar_t* format);
	void SetDoubleValue(double value);
	double GetDoubleValue();
	__declspec( property( get=GetDoubleValue, put=SetDoubleValue) ) double DoubleValue;
	//____________________________________________________________ IntValue
	bool GetIntValue(int &outValue);
	int GetIntValue(void);
	void SetIntValue(int value);
	__declspec( property( get=GetIntValue, put=SetIntValue) ) int IntValue;
	//____________________________________________________________ Password
	void SetPassword(bool isPassword);
	bool IsPassword();
	__declspec( property ( get=IsPassword, put=SetPassword ) ) bool Password;
	//____________________________________________________________ ReadOnly
	void SetReadOnly(bool readOnly);
	bool IsReadOnly();
	__declspec( property( get=IsReadOnly, put=SetReadOnly) ) bool ReadOnly;
	//____________________________________________________________ MaxTextLength
	// Check for notification EN_MAXTEXT
	void SetMaxTextLength(int maxTextLength);
	int GetMaxTextLength();
	__declspec( property( get=GetMaxTextLength, put=SetMaxTextLength) ) int MaxTextLength;
	//____________________________________________________________ Multiline
	void SetMultiline(bool isMultiline);
	bool IsMultiline();
	__declspec( property ( get=IsMultiline, put=SetMultiline ) ) bool Multiline;
	//____________________________________________________________ BalloonTip
	//
	// icon: TTI_ERROR,TTI_INFO,TTI_NONE,TTI_WARNING
	void ShowBalloonTip(const wchar_t* caption, const wchar_t* text, int icon);
	//
	// icon: TTI_ERROR,TTI_INFO,TTI_NONE,TTI_WARNING
	void ShowBalloonTip(const wstring& caption, const wstring& text, int icon); 
	void HideBalloonTip();
	//____________________________________________________________ BackColor
	COLORREF GetBackColor();
	virtual void SetBackColor(COLORREF color);
	__declspec( property( get=GetBackColor, put=SetBackColor ) ) COLORREF BackColor;
	//____________________________________________________________ TextColor
	COLORREF GetTextColor();
	virtual void SetTextColor(COLORREF color);
	__declspec( property( get=GetTextColor, put=SetTextColor ) ) COLORREF TextColor;
	//____________________________________________________________ LeftAlign
	void SetLeftAlign(bool isLeftAlign);
	bool IsLeftAlign();
	__declspec( property ( get=IsLeftAlign, put=SetLeftAlign ) ) bool LeftAlign;
	//____________________________________________________________ CenterAlign
	void SetCenterAlign(bool isCenterAlign);
	bool IsCenterAlign();
	__declspec( property ( get=IsCenterAlign, put=SetCenterAlign ) ) bool CenterAlign;
	//____________________________________________________________ RightAlign
	void SetRightAlign(bool isRightAlign);
	bool IsRightAlign();
	__declspec( property ( get=IsRightAlign, put=SetRightAlign ) ) bool RightAlign;
	//____________________________________________________________ Uppercase
	void SetUppercase(bool isUppercase);
	bool IsUppercase();
	__declspec( property ( get=IsUppercase, put=SetUppercase ) ) bool Uppercase;
	//____________________________________________________________ Lowercase
	void SetLowercase(bool isLowercase);
	bool IsLowercase();
	__declspec( property ( get=IsLowercase, put=SetLowercase) ) bool Lowercase;
	//____________________________________________________________ Number
	void SetNumber(bool isNumber);
	bool IsNumber();
	__declspec( property ( get=IsNumber, put=SetNumber ) ) bool Number;
	//____________________________________________________________ Undo
	bool CanUndo();
	bool Undo();
	//____________________________________________________________ Find and Replace
	//
	// The function selects the specified text, if a match is found
	// and returns the position of the text.  Otherwise, it returns -1
	int FindNext(const wchar_t* findThis, bool matchWholeWord, bool matchCase);
	//
	// It replaces the current selection, then it selects the specified text, if a match is found
	// If the word is found, it returns the position of the word.  Otherwise, it returns -1
	int ReplaceNext(const wchar_t* findThis, const wchar_t* replaceWithThis, bool matchWholeWord, bool matchCase);
	//
	// It returns the number of replacements
	int ReplaceAll(const wchar_t* findThis, const wchar_t* replaceWithThis, bool matchWholeWord, bool matchCase);
	//
	int GetLineCount();
	void SetPrintAlignment(int alignment); //WIN_ALIGNMENT_LEFT, WIN_ALIGNMENT_RIGHT, WIN_ALIGNMENT_CENTER, WIN_ALIGNMENT_JUSTIFIED
	//void SetPrintList(int type); //WIN_LISTTYPE_NONE, WIN_LISTTYPE_NUMBER, WIN_LISTTYPE_UNNUMBER
	int GetOffset(int line);
	bool GetLine(wchar_t* result, int lineIndex, int bufferSize);
	wstring GetLine(int lineIndex);
	int GetLineLength(int lineIndex);
	//
	// it scrolls the caret into view # EM_SCROLLCARET+Win32
	void ScrollCaret();
	LRESULT Scroll(WPARAM how);
	bool AppendText(const wchar_t* buffer);
	//
	// It returns the position of the editing position (caret position) in the text from 0 to length-1
	int GetEditingPosition();
	LRESULT SetCueBanner(wchar_t* cue);
	//
	bool IsEvent(Win::Event& e, int notification);
	//____________________________________________________________________ Win::IPrintElement
	int GetElementCount(const Win::PrintDocInfo& pdi, int element_width_millicm, int element_height_millicm);
	void OnPrintElement(CG::Gdi& gdi, const Win::PrintDocInfo& pdi, const Win::PrintElementInfo& pei);
	void OnPrintPartBegin(CG::Gdi& gdi, const Win::PrintDocInfo& pdi, int element_width_millicm, int element_height_millicm);
	void OnPrintPartEnd(CG::Gdi& gdi, const Win::PrintDocInfo& pdi);
	//
	void Print();
	//
	void CopyToClipboard();
	void PasteFromClipboard();
	void ClearSelection();
	void CutSelection();
	void SelectAll();
	//
	// It gets the starting and ending character positions of the current selection #EM_GETSEL+Win32
	LRESULT GetSelection(int& start, int& end);
	LRESULT SetSelection(int start, int end);
	void ReplaceSelection(const wchar_t* replaceWithThis, bool canBeUndone);
	//
	void UpdateValue();
	bool GetParagraphText(vector<wstring>& output);
	//_____________________________________________________________________ Sys::ISelectString
	wstring& SqlGetString();
	void SqlUpdate(bool toGui);
protected:
	void InitialUpdate(HWND hParent);
	const wchar_t * GetClassName(void){return WC_EDIT;}
	int maxTextLength;
	//wstring _text;
	//bool used_text;
	CG::Brush brush;
	COLORREF _backColor;
	COLORREF _textColor;
	int _printAlignment;
	//int _printRowCount;
	void CreatePrintFont(CG::Font& output, int rowHeight);
	CG::Font printFont;
	vector<CG::TextLine> textLine;
};

//_____________________________________________________________________ Scintilla
// Be sure to include Scintilla.h before WintemplaWin.h
// Be sure to place in the working folder SciLexer.dll
// Be sure to include SciLexer.h before Scintilla.h
#ifdef SCINTILLA_H
class Scintilla: public Win::Window, public Win::IPrintElement
{
public:
	Scintilla();
	~Scintilla();
	void Undo();
	bool CanUndo();
	void Redo();
	bool CanRedo();
	void Replace(const wchar_t* originalText, const wchar_t* newText);
	void Cut();
	void Copy();
	void Paste();
	void Clear();
	bool CanPaste();
	void BeginUndoAction();
	void EndUndoAction();
	void EmptyUndoBuffer();
	//
	void SelectAll();
	void SetSelectionStart(int position);
	void SetSelectionEnd(int position);
	void SelectLine(int line);
	int GetSelectionStart();
	int GetSelectionEnd();
	bool IsSelectionEmpty();
	int GetSelectionStartLine();
	int GetSelectionEndLine();
	void GetSelectedText(wstring& text);
	int LineFromPosition(int position);
	int PositionFromLine(int line);
	int GetLineEndPosition(int line);
	int LineLength(int line);
	void GetCurrentLine(wstring& text);
	int GetCurrentLine(char * text);
	int GetCurrentLineNumber();
	//
	void New();
	void ClearAll();
	void SetSavePoint(); // Call this every time you save the file
	bool IsModified();
	void Cancel();
	void SetUndoCollection(bool collectInformation);
	void AddText(int length, const wchar_t* text);
	int GetLineCount();
	//
	void CommentOut();
	void Uncomment();
	//
	void GoToPosition(int position);
	void GoToLine(int line);
	void SetCurrentPostion(int position);
	int GetCurrentPosition();
	//
	int GetTextLength();
	void GetText(int length, char *text);
	void GetText(wstring& text);
	void GetTextRange(int posStart, int posEnd, wstring& text);
	void SetText(const wchar_t* text);
	void GetLine(int line, wstring& text);
	void GetLine(int line, string& text);
	void GetLine(int line, char * text);
	void ReplaceSelection(const char* text);
	int TextWidth(int styleNumber, const char *text);
	//
	void SetLexer(int sclex);
	void SetKeyWords(int keyWordSet, const char *keyWordList);
	//
	void SetStyleFore(int styleNumber, COLORREF color);
	void SetStyleBack(int styleNumber, COLORREF color);
	void SetStyleSize(int styleNumber, int sizeInPoints);
	int GetStyleSize(int styleNumber);
	void SetStyleFont(int styleNumber, const char* fontName);
	void GetStyleFont(int styleNumber, char * buffer);
	void SetStyle(int styleNumber, COLORREF fore, COLORREF back, int sizeInPoints, const char* fontName);
	void StyleClearAll();
	//
	void TipShow(int position, const char* tip);
	bool IsTipActive();
	void TipCancel();
	void SetTipHighlight(int highlightStart, int highlightEnd);
	void SetTipBackColor(COLORREF color);
	void SetTipTextColor(COLORREF color);
	void SetTipForeHltColor(COLORREF color);
	void SetTipUseStyle(int tabsize);
	void SetTipPosition(bool above);
	//
	void AutoCompletionShow(int lenEntered, const char *list);
	void AutoCompletionCancel();
	bool IsAutoCompletionActive();
	int AutoCompletionPositionStart();
	void AutoCompletionComplete();
	void AutoCompletionStop(const char *chars);
	void AutoCompletionSelect(const char* chars);
	int AutoCompletionGetCurrent();
	bool GetAutoCompletionIgnoreCase();
	void SetAutoCompletionIgnoreCase(bool ignoreCase);
	int GetAutoCompletionMaxWidth();
	void SetAutoCompletionMaxWidth(int width);
	int GetAutoCompletionMaxHeight();
	void SetAutoCompletionMaxHeight(int height);
	//
	void SetMarginType(int marginIndex, int type);
	int GetMarginType(int marginIndex);
	void SetMarginWidth(int marginIndex, int widthPixels);
	int GetMarginWidth(int marginIndex);
	//
	void SetReadOnly(bool readOnly);
	bool GetReadOnly();
	__declspec( property( get=GetReadOnly, put=SetReadOnly) ) bool ReadOnly;
	//
	bool IsEvent(Win::Event& e, int notification);
	//_______________________________________________________________ Win::IPrint
	int GetElementCount(const Win::PrintDocInfo& pdi, int element_width_millicm, int element_height_millicm);
	void OnPrintPartBegin(CG::Gdi& gdi, const Win::PrintDocInfo& pdi, int element_width_millicm, int element_height_millicm);
	void OnPrintElement(CG::Gdi& gdi, const Win::PrintDocInfo& pdi, const Win::PrintElementInfo& pei);
	void OnPrintPartEnd(CG::Gdi& gdi, const Win::PrintDocInfo& pdi);
private:
	const wchar_t * GetClassName(void){return L"SCINTILLA";}
	Sys::DLLibrary dll;
protected:
};
#endif

#ifdef WIN_RICHEDIT_SUPPORT

//_____________________________________________________________________ RichEdit
// It allows displaying and editing rich format text (text with different color, sizes, ets.)  
// To use this control please uncomment the #define WIN_RICHEDIT_SUPPORT line in the file stdafx.h
class RichEdit : public Module //, public Win::IPrintDoc
{
public:
	RichEdit(void);
	virtual ~RichEdit(void);
	LRESULT SetParaFormat(PARAFORMAT2& pf);
	LRESULT GetParaFormat(PARAFORMAT2& pf);
	//
	LRESULT SetBold(bool bBold, WPARAM scf);
	LRESULT SetItalic(bool bItalic, WPARAM scf);
	LRESULT SetUnderline(bool bUnderline, WPARAM scf);
	//
	//fontSize, in twips (1/1440 of an inch or 1/20 of a printer's point).
	//scf: SCF_ALL, SCF_SELECTION, SCF_WORD
	LRESULT SetFontSize(int fontSize, WPARAM scf);
	LRESULT SetTextColor(COLORREF rgb, WPARAM scf);
	LRESULT SetFontFamily(const wchar_t* fontFamily, WPARAM scf);
	LRESULT SetFont(const wchar_t* fontFamily, int fontSize, WPARAM scf);
	LRESULT SetParaFormat(PARAFORMAT& pf);
	LRESULT SetParaAligment(WORD aligment);
	LRESULT SetNumbering(bool bullets);
	void SetScrollPosition(const POINT* point);
	bool SetZoom(int numerator, int denominator);
	//
	// ENM_CHANGE, ENM_CORRECTTEXT, ENM_DRAGDROPDONE, ENM_DROPFILES 
	// ENM_KEYEVENTS, ENM_LINK, ENM_MOUSEEVENTS, ENM_OBJECTPOSITIONS 
	// ENM_PROTECTED, ENM_REQUESTRESIZE, ENM_SCROLL, ENM_SCROLLEVENTS 
	// ENM_SELCHANGE 
	LRESULT SetEventMask(LPARAM eventMask);
	//
	// ENM_CHANGE, ENM_CORRECTTEXT, ENM_DRAGDROPDONE, ENM_DROPFILES 
	// ENM_KEYEVENTS, ENM_LINK, ENM_MOUSEEVENTS, ENM_OBJECTPOSITIONS 
	// ENM_PROTECTED, ENM_REQUESTRESIZE, ENM_SCROLL, ENM_SCROLLEVENTS 
	// ENM_SELCHANGE 
	LRESULT GetEventMask();
	//
	LRESULT SetBkGndColor(COLORREF color);
	//
	//SCF_ALL, SCF_SELECTION, SCF_WORD
	LRESULT SelectLine(int lineIndex);
	//
	void GetSelection(CHARRANGE& crSelection);
	void GetSelection(int& charStart, int& charEnd);
	//
	// The return value is the selection that is actually set
	LRESULT SetSelection(CHARRANGE& crSelection);
	//
	// The return value is the selection that is actually set
	LRESULT SetSelection(int charStart, int charEnd);
	//
	LRESULT GetSelectionType();
	void ShowSelection(bool show);
	int GetSelectedText(wchar_t * buffer);
	int GetSelectedText(wstring& selectedText);
	int GetText(int charStart, int cpMax, wchar_t * buffer);
	int GetText(CHARRANGE& cr, wchar_t * buffer);
	int GetTextLength(bool includeLineBreaks);
	int GetWindowText(bool includeLineBreaks, wstring& out_text);
	CHARRANGE FindText(int charStart, int charEnd, wchar_t * stringToFind, bool matchCase, bool wholeWords, bool backwards);
	int GetLineFromChar(int charIndex);
	int GetCharIndex(int lineIndex);
	int GetLineLength(int lineIndex);
	int GetLineLengthFromChar(int charIndex);
	int GetLineCount();
	int GetLineText(int lineIndex, wstring& out_text);
	bool GetLineText(int lineIndex, wchar_t * buffer);
	bool GetLineText(int lineIndex, wchar_t * buffer, int bufferLength);
	bool AppendText(const wchar_t* text);
	bool AppendText(const wchar_t* text, CHARFORMAT2& cf);
	bool AppendText(const wchar_t* text, COLORREF color);
	bool AppendText(const wchar_t* text, const wchar_t* fontFamily, int fontSize);
	bool AppendText(const wchar_t* text, const wchar_t* fontFamily, int fontSize, COLORREF color);
	bool AppendText(const wstring& text);
	bool AppendText(const wstring& text, CHARFORMAT2& cf);
	bool AppendText(const wstring& text, COLORREF color);
	bool AppendText(const wstring& text, const wchar_t* fontFamily, int fontSize);
	bool AppendText(const wstring& text, const wchar_t* fontFamily, int fontSize, COLORREF color);
	void Delete();
	void ReplaceSelection(const wchar_t* replaceWithThis, bool canBeUndone);
	bool SetTextColor(int charStart, int charEnd, COLORREF color);
	//
	// scf: SCF_SELECTION, SCF_DEFAULT
	// It returns the value of the dwMask member of the CHARFORMAT structure.
	LRESULT GetCharFormat(CHARFORMAT2& cf, WPARAM scf);
	//
	//scf: SCF_ALL, SCF_SELECTION, SCF_WORD, 0  for DEFAULT FORMAT
	bool SetCharFormat(CHARFORMAT2& cf, WPARAM scf);
	//
	bool SetCharFormat(int charStart, int charEnd, bool isBold, COLORREF color);
	bool SetCharFormat(int charStart, int charEnd, bool isBold, COLORREF color, const wchar_t* fontFamily, int fontSize);
	bool SetProtectedCharFormat(int charStart, int charEnd, bool isBold, COLORREF color, const wchar_t* fontFamily, int fontSize);
	bool IsEvent(Win::Event& e, int notification);
	BOOL Print(HWND hWndParent, const wchar_t* documentName);
	virtual bool Undo();
	virtual bool Redo();
	virtual void CopyToClipboard();
	virtual void PasteFromClipboard();
	virtual void ClearSelection();
	virtual void CutSelection();
	bool SetAutoUrlDetect(bool autoDetect);
	bool CanPaste();
	bool CanRedo();
	bool CanUndo();
	//
	void SetReadOnly(bool readOnly);
	bool GetReadOnly();
	__declspec( property( get=GetReadOnly, put=SetReadOnly) ) bool ReadOnly;
	//
	void GetData(string& output);
	bool SaveToRtf(const wchar_t* filename);
protected:
	const wchar_t * GetClassName(void){return RICHEDIT_CLASS;}
private:
	HMODULE m_hModule;
	static DWORD CALLBACK StreamCallback(DWORD_PTR dwCookie, LPBYTE pbBuff, LONG cb, LONG *pcb);
};

//_____________________________________________________________________ CodeEditor
// It allows the edition and displaying of programming code
class CodeEditor : public Win::RichEdit
{
public:
	CodeEditor(void);
	~CodeEditor(void);
	void CommentOut();
	void Uncomment();
	void Setup(const wchar_t* fontFamily, int fontSize);
	void FormatTextRange(int charStart, int charEnd);
	void FormatTextLines(int lineStart, int lineEnd);
	void FormatAll();
	COLORREF keywordColor;
	COLORREF functionColor;
	COLORREF commentColor;
	COLORREF numberColor;
	COLORREF stringColor;
	set<wstring> keywords;
	set<wstring> functions;
	virtual void OnChange(Win::Event& e);
	virtual void OnProtected(Win::Event& e);
	virtual void OnMsgFilter(Win::Event& e);
	virtual bool Undo();
	virtual bool Redo();
	void PasteFromClipboard();
	virtual void SetText(const wstring& text);
	__declspec( property( get=GetText, put=SetText) ) wstring Text;
	//
	static void FillCppKeywords(set<wstring>& keywords);
	static void FillCppFunctions(set<wstring>& functions);
	static void FillSqlKeywords(set<wstring>& keywords);
	static void FillSqlFunctions(set<wstring>& functions);
private:
	enum FormatType 
	{
		FORMAT_CURRENT_SELECTION = 0, 
		FORMAT_ALL, 
		FORMAT_REPLACESEL, 
		FORMAT_CUT, 
		FORMAT_PASTE, 
		FORMAT_MOVE
	};
	struct SymbolColor 
	{
		COLORREF color;
		bool isBold;
	};
	bool isBlocking;
	FormatType formatType;
	CHARRANGE previousSelection;
	wchar_t _fontFamily[LF_FACESIZE];
	int _fontSize;
};
#endif

//_____________________________________________________________________ImageList
//An image list is a collection of images of the same size, each of which can be referred to by its index.
// Image lists are used to efficiently manage large sets of icons or bitmaps.All images in an image list are contained in a single list.
// An image list can be used on a ListView control, Tab control, ...
class ImageList
{
public:
	ImageList(void);
	virtual ~ImageList(void);
	//
	// flags: ILC_MASK, ILC_COLOR, ILC_COLOR8, ILC_COLOR16, ILC_COLOR24, ILC_COLOR32, ILC_ORIGINALSIZE, ILC_HIGHQUALITYSCALE, ...
	HIMAGELIST Create(int iconPixelsWidth, int iconPixelsHeight, UINT flags, int initialNumImages, int grow);
	HIMAGELIST Create(int iconPixelsWidth, int iconPixelsHeight, int initialNumImages);
	HIMAGELIST CreateFromBitmap(HINSTANCE hi, const wchar_t * bimap_id, int width, int grow, COLORREF mask, UINT uFlags);
	HIMAGELIST GetHImageList();
	int AddIcon(HICON hIcon);
	int AddIcon(HINSTANCE hInstance, const wchar_t * icon_id);
	int AddIcon(HINSTANCE hInstance, int icon_id);
	int AddSystemIcon(LPTSTR idIcon);
	int ReplaceIcon(int index, HICON hicon);
	int ReplaceIcon(int index, HINSTANCE hInst, const wchar_t * icon_id);
	int ReplaceIcon(int index, HINSTANCE hInst, int icon_id);
	BOOL Draw(int index, HDC hdc, int x, int y, int dx, int dy, UINT fStyle);
	int GetImageCount();
	BOOL RemoveAll();
	BOOL Remove(int index);
	operator HIMAGELIST();
	BOOL Destroy();
	int GetIconWidth();
	int GetIconHeight();
private:
	HIMAGELIST m_hIL;
	static bool bInit;
	int _iconPixelsWidth;
	int _iconPixelsHeight;
};

//_____________________________________________________________________ Spin
// A pair of arrow buttons that the user can click to increment or decrement a value
// It is most often used with textbox, which is called a buddy window.
class Spin : public Win::Module
{
public:
	Spin(void);
	virtual ~Spin(void);
	LRESULT SetRange(int minimum, int maximum);
	LRESULT SetPosition(int position);
	int GetPosition();
	__declspec( property( get=GetPosition, put=SetPosition) ) int Position;
	LRESULT SetBuddy(HWND hEditBox);
	LRESULT SetBuddy(Win::Textbox& txbox);
	bool IsEvent(Win::Event& e, int notification);
protected:
	const wchar_t * GetClassName(void){return UPDOWN_CLASS;}
private:
	static bool bInit;
};

//_____________________________________________________________________ TreeView
// A classic tree diagram with nodes
class TreeView : public Win::Module
{
public:
	TreeView(void);
	virtual ~TreeView(void);
	bool SetItem(const TVITEMEX& tvitem);
	bool SetItemText(HTREEITEM hItem, const wchar_t* text);
	bool SetItemImage(HTREEITEM hItem, int imageIndex);
	bool SetItemData(HTREEITEM hItem, LPARAM data);
	//
	// state and stateMask: TVIS_SELECTED, TVIS_CUT, TVIS_DROPHILITED, TVIS_BOLD, 
	// TVIS_EXPANDED, TVIS_EXPANDEDONCE, TVIS_EXPANDPARTIAL,
	// TVIS_OVERLAYMASK, TVIS_STATEIMAGEMASK, TVIS_USERMASK
	bool SetItemState(HTREEITEM hItem, UINT state, UINT stateMask);
	//
	// state and stateMask: TVIS_SELECTED, TVIS_CUT, TVIS_DROPHILITED, TVIS_BOLD, 
	// TVIS_EXPANDED, TVIS_EXPANDEDONCE, TVIS_EXPANDPARTIAL,
	// TVIS_OVERLAYMASK, TVIS_STATEIMAGEMASK, TVIS_USERMASK
	// The state of the parent is not changed
	void SetStateRecursive(HTREEITEM hItemParent, UINT state, UINT stateMask);
	//
	bool SetItemSelectedState(HTREEITEM hItem, bool selected);
	//
	HTREEITEM InsertItem(TVINSERTSTRUCT& tvinsert);
	//
	//hParent: Handle to the parent item. If this member is the TVI_ROOT value or NULL, the item is inserted at the root of the tree-view control. 
	//hInsertAfter: Handle to the item after which the new item is to be inserted, or one of the following values: 
	//	TVI_FIRST: Inserts the item at the beginning of the list.
	//	TVI_LAST: Inserts the item at the end of the list.
	//	TVI_ROOT: Add the item as a root item.
	//	TVI_SORT: Inserts the item into the list in alphabetical order.
	HTREEITEM InsertItem(HTREEITEM hParent, HTREEITEM hInsertAfter, const wchar_t *text);
	//
	//hParent: Handle to the parent item. If this member is the TVI_ROOT value or NULL, the item is inserted at the root of the tree-view control. 
	//hInsertAfter: Handle to the item after which the new item is to be inserted, or one of the following values: 
	//	TVI_FIRST: Inserts the item at the beginning of the list.
	//	TVI_LAST: Inserts the item at the end of the list.
	//	TVI_ROOT: Add the item as a root item.
	//	TVI_SORT: Inserts the item into the list in alphabetical order.
	HTREEITEM InsertItem(HTREEITEM hParent, HTREEITEM hInsertAfter, const wchar_t *text, LPARAM data);
	//
	//hParent: Handle to the parent item. If this member is the TVI_ROOT value or NULL, the item is inserted at the root of the tree-view control. 
	//hInsertAfter: Handle to the item after which the new item is to be inserted, or one of the following values: 
	//	TVI_FIRST: Inserts the item at the beginning of the list.
	//	TVI_LAST: Inserts the item at the end of the list.
	//	TVI_ROOT: Add the item as a root item.
	//	TVI_SORT: Inserts the item into the list in alphabetical order.
	HTREEITEM InsertItem(HTREEITEM hParent, HTREEITEM hInsertAfter, const wchar_t *text, int imageIndex, int selectedImageIndex);
	//
	//hParent: Handle to the parent item. If this member is the TVI_ROOT value or NULL, the item is inserted at the root of the tree-view control. 
	//hInsertAfter: Handle to the item after which the new item is to be inserted, or one of the following values: 
	//	TVI_FIRST: Inserts the item at the beginning of the list.
	//	TVI_LAST: Inserts the item at the end of the list.
	//	TVI_ROOT: Add the item as a root item.
	//	TVI_SORT: Inserts the item into the list in alphabetical order.
	HTREEITEM InsertItem(HTREEITEM hParent, HTREEITEM hInsertAfter, const wchar_t *text, int imageIndex, int selectedImageIndex, LPARAM data);
	//
	//hParent: Handle to the parent item. If this member is the TVI_ROOT value or NULL, the item is inserted at the root of the tree-view control. 
	//hInsertAfter: Handle to the item after which the new item is to be inserted, or one of the following values: 
	//	TVI_FIRST: Inserts the item at the beginning of the list.
	//	TVI_LAST: Inserts the item at the end of the list.
	//	TVI_ROOT: Add the item as a root item.
	//	TVI_SORT: Inserts the item into the list in alphabetical order.
	HTREEITEM InsertItem(HTREEITEM hParent, HTREEITEM hInsertAfter, const wchar_t *text, int imageIndex, int selectedImageIndex, LPARAM data, UINT state);
	//
	bool GetItem(TVITEMEX& tvitem);
	bool GetItemText(HTREEITEM hItem, wchar_t* buffer, int bufferSize);
	bool GetItemImage(HTREEITEM hItem, int& imageIndex);
	bool GetItemData(HTREEITEM hItem, LPARAM& lParam);
	//
	// flag: 
	//TVGN_CARET: Retrieves the currently selected item. You can use the TreeView_GetSelection macro to send this message.
	//TVGN_CHILD: Retrieves the first child item of the item specified by the hitem parameter. You can use the TreeView_GetChild macro to send this message.
	//TVGN_DROPHILITE: Retrieves the item that is the target of a drag-and-drop operation. You can use the TreeView_GetDropHilight macro to send this message.
	//TVGN_FIRSTVISIBLE: Retrieves the first item that is visible in the tree-view window. You can use the TreeView_GetFirstVisible macro to send this message.
	//TVGN_LASTVISIBLE: Version 4.71. Retrieves the last expanded item in the tree. This does not retrieve the last item visible in the tree-view window. You can use the TreeView_GetLastVisible macro to send this message.
	//TVGN_NEXT: Retrieves the next sibling item. You can use the TreeView_GetNextSibling macro to send this message.
	//TVGN_NEXTVISIBLE: Retrieves the next visible item that follows the specified item. The specified item must be visible. Use the TVM_GETITEMRECT message to determine whether an item is visible. You can use the TreeView_GetNextVisible macro to send this message.
	//TVGN_PARENT: Retrieves the parent of the specified item. You can use the TreeView_GetParent macro to send this message.
	//TVGN_PREVIOUS: Retrieves the previous sibling item. You can use the TreeView_GetPrevSibling macro to send this message.
	//TVGN_PREVIOUSVISIBLE: Retrieves the first visible item that precedes the specified item. The specified item must be visible. Use the TVM_GETITEMRECT message to determine whether an item is visible. You can use the TreeView_GetPrevVisible macro to send this message.
	//TVGN_ROOT: Retrieves the topmost or very first item of the tree-view control. You can use the TreeView_GetRoot macro to send this message. 
	HTREEITEM GetNextItem(UINT flag, HTREEITEM hItem);
	HTREEITEM GetRoot();
	HTREEITEM GetParent(HTREEITEM hItem);
	HTREEITEM GetFirstChild_(HTREEITEM hItemParent);
	HTREEITEM GetNextSibling_(HTREEITEM hItem);
	HTREEITEM GetPreviousSibling(HTREEITEM hItem);
	int GetChildrenCount(HTREEITEM hItemParent);
	//
	// It returns: 0, 1, 2, 3, ..., childrenCount -1
	int GetChildrenIndex(HTREEITEM hItemParent, HTREEITEM hItem);
	//
	//TVGN_CARET : Sets the selection to the specified item. The tree-view control's parent window receives the TVN_SELCHANGING and TVN_SELCHANGED notification messages. 
	//TVGN_DROPHILITE: Redraws the specified item in the style used to indicate the target of a drag-and-drop operation.
	//TVGN_FIRSTVISIBLE: Ensures that the specified item is visible, and, if possible, displays it at the top of the control's window. Tree-view controls display as many items as will fit in the window. If the specified item is near the bottom of the control's hierarchy of items, it might not become the first visible item, depending on how many items fit in the window.
	//TVSI_NOSINGLEEXPAND
	bool SelectItem(DWORD flag, HTREEITEM hItem);
	//
	bool SelectItem(HTREEITEM hItem);
	bool RemoveSelection();
	void RemoveSelectionRecursive();
	//
	HTREEITEM GetSelectedItem(HTREEITEM hItem);
	//
	bool GetSelectedData(LPARAM& out_data);
	//
	HTREEITEM GetSelectedItem();
	//
	bool DeleteItem(HTREEITEM hItem);
	bool DeleteAllItems();
	//
	//option: TVE_COLLAPSE, TVE_COLLAPSERESET, TVE_EXPAND, TVE_EXPANDPARTIAL, TVE_TOGGLE
	bool ExpandItem(HTREEITEM hItem, WPARAM option);
	//
	bool GetItemRect(RECT& rc, HTREEITEM hItem, bool onlyTextBox);
	int GetCount(void);
	int GetVisibleCount(void);
	//
	int GetIndent();
	void SetIndent(int indent);
	__declspec(property(get = GetIndent, put = SetIndent)) int Indent;
	//
	// Ensures that a tree-view item is visible, expanding the parent item or scrolling the tree-view control, if necessary
	void EnsuresVisible(HTREEITEM hItem);
	//
	void SetBackColor(COLORREF color);
	COLORREF GetBackColor();
	__declspec(property(get = GetBackColor, put = SetBackColor)) COLORREF BackColor;
	//
	// New line color. Use the CLR_DEFAULT value to restore the system default colors. 
	void SetLineColor(COLORREF color);
	COLORREF GetLineColor();
	__declspec(property(get = GetLineColor, put = SetLineColor)) COLORREF LineColor;
	//
	void SetTextColor(COLORREF color);
	COLORREF GetTextColor();
	__declspec(property(get = GetTextColor, put = SetTextColor)) COLORREF TextColor;
	//
	// New height of every item in the tree view, in pixels.Heights less than 1 will be set to 1. 
	// If this argument is not even and the tree - view control does not have the TVS_NONEVENHEIGHT style, 
	// this value will be rounded down to the nearest even value.If this argument is - 1, the control will revert to using its default item height.
	void SetItemHeight(int height);
	int GetItemHeight();
	__declspec(property(get = GetItemHeight, put = SetItemHeight)) int ItemHeight;
	//
	bool SortChildren(HTREEITEM hItemParent, bool recursive);
	//
	// It returns the previous tooltip control
	Win::Tooltip SetToolTip(Win::Tooltip& tooltip);
	Win::Tooltip GetToolTip();
	//
	// Begins in-place editing of the specified item's text, replacing the text of the item with a single-line edit control containing the text. 
	// This message implicitly selects and focuses the specified item. 
	Win::Textbox EditLabel(HTREEITEM hItem);
	Win::Textbox GetTextBox();
	//
	HIMAGELIST SetImageList(Win::ImageList& imageList);
	bool IsEvent(Win::Event& e, int notification);
protected:
	const wchar_t * GetClassName(void){return WC_TREEVIEW;}
private:
	static bool bInit;
};

class ListView;
class ListViewItemCollection;
class ListViewItem;

//_____________________________________________________________________ ListViewSubItem
class ListViewSubItem
{
public:
	ListViewSubItem(void);
	virtual ~ListViewSubItem(void);
	int GetItemText(wchar_t* buffer, int buffer_length);
	wstring GetText();
	void SetText(const wstring& text);
	__declspec( property( get=GetText, put=SetText) ) wstring Text;
private:
	int index;
	int sub_index;
	HWND listControl;
	friend class Win::ListViewItem;
};

//_____________________________________________________________________ ListViewItem
class ListViewItem
{
public:
	ListViewItem(void);
	virtual ~ListViewItem(void);
	//
	// It returns the number of characters written to the buffer
	int GetText(int subItemIndex, wchar_t* buffer, int bufferSize);
	bool SetText(int subItemIndex, const wchar_t* text);
	wstring GetText(int subItemIndex);
	void SetText(int subItemIndex, const wstring& text);
	//
	wstring GetText();
	void SetText(const wstring& text);
	__declspec( property( get=GetText, put=SetText) ) wstring Text;
	//
	UINT GetState(UINT mask);
	LRESULT SetState(UINT state, UINT stateMask);
	//
	bool GetChecked();
	void SetChecked(bool isChecked);
	__declspec( property( get=GetChecked, put=SetChecked ) ) bool Checked;
	//
	LPARAM GetData();
	void SetData(LPARAM data);
	__declspec( property( get=GetData, put=SetData ) ) LPARAM Data;
	//
	int GetImageIndex();
	void SetImageIndex(int imageIndex);
	__declspec( property( get=GetImageIndex, put=SetImageIndex ) ) int ImageIndex;
	//
	void SetDropHiLited(bool on);
	__declspec( property( put=SetDropHiLited ) ) bool DropHiLited;
	//
	bool Delete();
	Win::ListViewSubItem& operator[](long index);
	//
	bool GetSelected();
	void SetSelected(bool selected);
	__declspec( property( get=GetSelected, put=SetSelected) ) bool Selected;
	//
	bool GetBoundsRect(long index, RECT& output);
	bool GetIconRect(long index, RECT& output);
	bool GetLabelRect(long index, RECT& output);
	bool GetSelectBoundsRect(long index, RECT& output);
private:
	Win::ListViewSubItem _subItem;
	int index;
	HWND listControl;
	friend class Win::ListViewItemCollection;
};

//_____________________________________________________________________ ListViewItemCollection
class ListViewItemCollection
{
public:
	ListViewItemCollection(void);
	virtual ~ListViewItemCollection(void);
	LRESULT DeleteAll();
	LRESULT DeleteItem(int index);
	int GetCount();
	__declspec( property( get=GetCount ) ) int Count;
	int GetIndex(const wchar_t* text) ;// Returns the index of the item or -1 if not found
	//
	//Inserts a new item in a list-view control. Use module::SetRedraw(false) before inserting a lot of items
	//It returns the index of the new item if successful, or -1 otherwise. #LVM_INSERTITEM+Win32
	LRESULT Add(LVITEM& lvi);
	//
	//Inserts a new item in a list-view control. Use module::SetRedraw(false) before inserting a lot of items
	//It returns the index of the new item if successful, or -1 otherwise. #LVM_INSERTITEM+Win32
	LRESULT Add(int index, int imageIndex, const wchar_t* text);
	//
	//Inserts a new item in a list-view control. Use module::SetRedraw(false) before inserting a lot of items
	//It returns the index of the new item if successful, or -1 otherwise. #LVM_INSERTITEM+Win32
	LRESULT Add(int index, const wchar_t* text, int imageIndex, LPARAM data);
	//
	//Inserts a new item in a list-view control. Use module::SetRedraw(false) before inserting a lot of items
	//It returns the index of the new item if successful, or -1 otherwise. #LVM_INSERTITEM+Win32
	LRESULT Add(int index, const wchar_t* text);
	//
	//Inserts a new item in a list-view control. Use module::SetRedraw(false) before inserting a lot of items
	//It returns the index of the new item if successful, or -1 otherwise. #LVM_INSERTITEM+Win32
	LRESULT Add(int index, const wchar_t* text, LPARAM data);
	//
	LRESULT Add(int index, int imageIndex, const wstring& text);
	//
	//Inserts a new item in a list-view control. Use module::SetRedraw(false) before inserting a lot of items
	//It returns the index of the new item if successful, or -1 otherwise. #LVM_INSERTITEM+Win32
	LRESULT Add(int index, const wstring& text, int imageIndex, LPARAM data);
	//
	//Inserts a new item in a list-view control. Use module::SetRedraw(false) before inserting a lot of items
	//It returns the index of the new item if successful, or -1 otherwise. #LVM_INSERTITEM+Win32
	LRESULT Add(int index, const wstring& text);
	//
	//Inserts a new item in a list-view control. Use module::SetRedraw(false) before inserting a lot of items
	//It returns the index of the new item if successful, or -1 otherwise. #LVM_INSERTITEM+Win32
	LRESULT Add(int index, const wstring& text, LPARAM data);
	//
	//Inserts a new item in a list-view control. Use module::SetRedraw(false) before inserting a lot of items
	//It returns the index of the new item if successful, or -1 otherwise. #LVM_INSERTITEM+Win32
	LRESULT Add(int index, const wchar_t* text, int imageIndex, LPARAM data, int group_id);
	//
	//Inserts a new item in a list-view control. Use module::SetRedraw(false) before inserting a lot of items
	//It returns the index of the new item if successful, or -1 otherwise. #LVM_INSERTITEM+Win32
	LRESULT Add(int index, const wstring& text, int imageIndex, LPARAM data, int group_id);
	//
	BOOL Set(LVITEM& lvitem);
	BOOL Get(LVITEM& lvitem);
	//
	Win::ListViewItem& operator[](long index);
private:
	Win::ListViewItem _item;
	void SetParent(Win::IParent* iparent);
	Win::IParent* iparent;
	friend class Win::ListView;
};

//_____________________________________________________________________ ListViewColumn
class ListViewColumn
{
public:
	ListViewColumn(void);
	virtual ~ListViewColumn(void);
	//
	//format: LVCFMT_LEFT, LVCFMT_CENTER, LVCFMT_RIGHT
	bool Add(LVCOLUMN& lvcolumn, int index);
	//
	//format: LVCFMT_LEFT, LVCFMT_CENTER, LVCFMT_RIGHT
	bool Add(int index, int format, int width, const wchar_t* text);
	//
	//format: LVCFMT_LEFT, LVCFMT_CENTER, LVCFMT_RIGHT
	bool Add(int index, int format, int width, const wstring& text);
	bool DeleteAll(void);
	bool Set(int index, LPLVCOLUMN pLvc);
	//_________________________________________________________ Text
	bool SetText(int index, const wchar_t* text);
	bool GetText(int index, wchar_t* buffer, int buffer_size);
	//_________________________________________________________ Width
	bool SetWidth(int index, int width);
	bool GetWidth(int index, int& out_width);
	//_________________________________________________________ Format
	bool SetFormat(int index, int format);
	bool GetFormat(int index, int& out_format);
	//_________________________________________________________
	int GetCount();
	bool Delete(int index);
private:
	void SetParent(Win::IParent* iparent);
	Win::IParent* iparent;
	friend class Win::ListView;
};

//_____________________________________________________________________ LVDropInfo
struct LVDropInfo
{
	int sourceItemIndex;
	int targetItemIndex;
};

//_____________________________________________________________________ListView
// A window that displays a collection of items; each item may consist of an icon and a label
// The Windows Explorer and the Windows Desktop are listview controls
class ListView : public Win::Module, public Sys::IListView, public Win::IPrintElement, public Sys::IError
{
public:
	ListView(void);
	virtual ~ListView(void);
	//____________________________________________________________ Text
	wstring& GetText();
	void SetText(const wstring& text);
	__declspec( property( get=GetText, put=SetText) ) wstring Text;
	//____________________________________________________________ Visible
	void SetVisible(bool visible);
	bool IsVisible();
	__declspec( property( get=IsVisible, put=SetVisible) ) bool Visible;
	//____________________________________________________________ Enabled
	void SetEnabled(bool enabled);
	bool IsEnabled();
	__declspec( property( get=IsEnabled, put=SetEnabled) ) bool Enabled;
	//________________________________________________________________________ COLUMNS
	int GetColumnCount();
	//_____________________________________________________ Add
	//
	//format: LVCFMT_LEFT, LVCFMT_CENTER, LVCFMT_RIGHT
	void AddColumn(int format, int width, const wchar_t* text);
	//
	//format: LVCFMT_LEFT, LVCFMT_CENTER, LVCFMT_RIGHT
	void AddColumn(int format, int width, const wstring& text);
	//_____________________________________________________ Delete
	bool DeleteColumn(int index);
	void DeleteAllColumns();
	//_____________________________________________________ Text
	bool GetColumnText(int index, wstring& out_text);
	bool GetColumnText(int index, wchar_t* buffer, int buffer_length);
	bool SetColumnText(int index, const wstring& text);
	bool SetColumnText(int index, const wchar_t* text);
	//_____________________________________________________ Format: LVCFMT_LEFT, LVCFMT_CENTER, LVCFMT_RIGHT
	bool GetColumnFormat(int index, int& out_format);
	bool SetColumnFormat(int index, int format);
	//_____________________________________________________ Width
	bool GetColumnWidth(int index, int& out_width);
	bool SetColumnWidth(int index, int width);
	//_________________________________________________________________________ ITEMS
	bool SetItemCount(int count);
	int GetItemCount();
	__declspec(property(get=GetItemCount, put=SetItemCount)) int ItemCount;
	//_____________________________________________________ Add
	//
	//Inserts a new item in a list-view control. Use module::SetRedraw(false) before inserting a lot of items
	//It returns the index of the new item if successful, or -1 otherwise. #LVM_INSERTITEM+Win32
	LRESULT AddItem(const wchar_t* text, LPARAM data);
	//
	//Inserts a new item in a list-view control. Use module::SetRedraw(false) before inserting a lot of items
	//It returns the index of the new item if successful, or -1 otherwise. #LVM_INSERTITEM+Win32
	LRESULT AddItem(int index, const wchar_t* text, int imageIndex, LPARAM data);
	//
	//Inserts a new item in a list-view control. Use module::SetRedraw(false) before inserting a lot of items
	//It returns the index of the new item if successful, or -1 otherwise. #LVM_INSERTITEM+Win32
	LRESULT AddItem(const wstring& text, LPARAM data);
	//
	//Inserts a new item in a list-view control. Use module::SetRedraw(false) before inserting a lot of items
	//It returns the index of the new item if successful, or -1 otherwise. #LVM_INSERTITEM+Win32
	LRESULT AddItem(int index, const wstring& text, int imageIndex, LPARAM data);
	//
	//Inserts a new item in a list-view control. Use module::SetRedraw(false) before inserting a lot of items
	//It returns the index of the new item if successful, or -1 otherwise. #LVM_INSERTITEM+Win32
	LRESULT AddItem(LVITEM& lvi);
	//_____________________________________________________ Delete
	bool DeleteItem(int row);
	void DeleteAllItems();
	void Delete();
	//_____________________________________________________ Text
	bool GetItemText(int row, int column, wstring& out_text);
	//
	// It returns the number of characters
	int GetItemText(int row, int column, wchar_t* buffer, int buffer_length);
	bool SetItemText(int row, int column, const wstring& text);
	bool SetItemText(int row, int column, const wchar_t* text);
	//_____________________________________________________ Data
	bool GetItemData(int row, LPARAM& out_data);
	bool SetItemData(int row, const LPARAM data);
	//_____________________________________________________ Selection
	int GetSelectedIndex();
	bool SetSelectedIndex(int row);
	__declspec( property( get=GetSelectedIndex, put=SetSelectedIndex ) ) int SelectedIndex;
	//
	bool GetSelectedData(LPARAM& out_data);
	bool SetSelectedByData(LPARAM data);
	bool IsItemSelected(int row);
	//______________________________________________________ Multiple Selection
	int GetSelectedCount();
	// The first time the function is called, row must -1. The next calls row must be set to the value returned on the previous function call.
	// The function is called until it returns -1
	int GetNextSelectedIndex(int row);
	//
	// Selects or un-select the specified item (Indexes start at 0. Use row =-1 to affect all rows)
	bool SetSelection(int row, bool selected);
	//_______________________________________________________ ItemChecked
	bool IsItemChecked(int row);
	void SetItemChecked(int row, bool checked);
	//_______________________________________________________ ItemState
	UINT GetItemState(int row, UINT stateMask);
	bool SetItemState(int row, UINT state, UINT stateMask);
	//__________________________________________________________ SetExtStyle
	LRESULT SetExtStyle(DWORD dwExMask, DWORD dwExStyle);
	LRESULT GetExtStyle();
	//_________________________________________________ View
	//LV_VIEW_ICON, LV_VIEW_DETAILS, LV_VIEW_SMALLICON, LV_VIEW_LIST, LV_VIEW_TILE, LV_VIEW_MAX  
	void SetView(int view);
	//LV_VIEW_ICON, LV_VIEW_DETAILS, LV_VIEW_SMALLICON, LV_VIEW_LIST, LV_VIEW_TILE, LV_VIEW_MAX  
	int GetView();
	//LV_VIEW_ICON, LV_VIEW_DETAILS, LV_VIEW_SMALLICON, LV_VIEW_LIST, LV_VIEW_TILE, LV_VIEW_MAX  
	__declspec( property( get=GetView, put=SetView) ) int View;
	//
	// Use this for multiple item selection
	int GetNextIndex(int index, DWORD flags);
	//
	bool IsEvent(Win::Event& e, int notification);
	bool CopyLatexToClipboard(bool isNumber);
	//
	bool CopyTo(bool includeItemData, Sys::IEnumerator& num);
	bool ExportToXml(bool includeItemData, Sys::Xml& output);
	bool ImportFromXml(bool firstColumnIsItemData, const Sys::Xml& input);
	//
	// In Group View, do not use: grid lines, align left (LVS_ALIGNLEFT)
	// In Group View, the control does not need columns
	bool EnableGroupView(bool groupView);
	//
	// In Group View, do not use: grid lines, align left (LVS_ALIGNLEFT)
	// In Group View, the control does not need columns
	// You need to call EnableGroupView for this API to work and have Windows XP styles enabled
	// align: LVGA_HEADER_CENTER, LVGA_HEADER_LEFT, LVGA_HEADER_RIGHT
	LRESULT InsertGroup(int index, int groupId, LPWSTR text, UINT align);
	//
	// In Group View, do not use: grid lines, align left (LVS_ALIGNLEFT)
	// In Group View, the control does not need columns
	LRESULT InsertItemIntoGroup(int index, wchar_t* text, int imageIndex, int groupId);
	//
	// In Group View, do not use: grid lines, align left (LVS_ALIGNLEFT)
	// In Group View, the control does not need columns
	LRESULT InsertItemIntoGroup(int index, wchar_t* text, int imageIndex, LPARAM userData, int groupId);
	//
	// In Group View, do not use: grid lines, align left (LVS_ALIGNLEFT)
	// In Group View, the control does not need columns
	LRESULT InsertItemIntoGroup(int index, wchar_t* text, int groupId);
	//
	// In Group View, do not use: grid lines, align left (LVS_ALIGNLEFT)
	// In Group View, the control does not need columns
	LRESULT InsertItemIntoGroup(int index, wchar_t* text, LPARAM userData, int groupId);
	//_________________________________________________________________ Sys::IEnumerator
	void Enumerate(wchar_t** data, int colCount, int rowIndex);
	//operator Sys::IEnumerator&();
	//
	BOOL Scroll(int deltaX, int deltaY);
	BOOL Scroll();
	BOOL RedrawItems(int indexIni, int indexEnd);
	HWND GetHeaderControl();
	BOOL GetHeaderText(int index, wchar_t* pszBuffer, int nBufferSize);
	LRESULT SetBkColor_(COLORREF rgb);
	LRESULT SetImageList(HIMAGELIST hil, bool bSmall);
	LRESULT SetImageList(Win::ImageList& imageList, bool bSmall);
	bool SaveToFile(const wchar_t* filename, const wchar_t* colIni, const wchar_t* colEnd, const wchar_t* rowIni, const wchar_t* rowEnd, const wchar_t* docIni, const wchar_t* docEnd);
	bool SaveToFile(HANDLE hFile, const wchar_t* colIni, const wchar_t* colEnd, const wchar_t* rowIni, const wchar_t* rowEnd, const wchar_t* headIni, const wchar_t* headEnd, bool includeHeader);
	bool SaveToFile(const wchar_t* filename);
	bool SaveToFile(const wchar_t* filename, const char* colIni, const char* colEnd, const char* rowIni, const char* rowEnd, const char* docIni, const char* docEnd);
	bool SaveToFile(HANDLE hFile, const char* colIni, const char* colEnd, const char* rowIni, const char* rowEnd, const char* headIni, const char* headEnd, bool includeHeader);
	bool SaveToFileA(const wchar_t* filename);
	bool SaveWebFile(const wchar_t* filename);
	bool SaveLatexToFile(const wchar_t* filename);
	bool ExportToMsExcel(const wchar_t* filename);
	//_______________________________________________________________________ Win::IPrintElement
	int GetElementCount(const Win::PrintDocInfo& pdi, int element_width_millicm, int element_height_millicm);
	void OnPrintPartBegin(CG::Gdi& gdi, const Win::PrintDocInfo& pdi, int element_width_millicm, int element_height_millicm);
	void OnPrintElement(CG::Gdi& gdi, const Win::PrintDocInfo& pdi, const Win::PrintElementInfo& pei);
	void OnPrintPartEnd(CG::Gdi& gdi, const Win::PrintDocInfo& pdi);
	//
	void Print();
	bool CopyToClipboard();
	//
	Win::ListViewColumn& GetColumns();
	__declspec( property( get=GetColumns) ) Win::ListViewColumn& Cols;
	//
	/*__declspec(property(*/ Win::ListViewItemCollection Items;
	
	//It returns the item index or -1
	int GetHitTestItemIndex(LVHITTESTINFO& hitTestInfo);
	//
	// Call this on listView_beginDrag
	void BeginDrag(Win::Event& e);
	
	// Call this on Window_MouseMove using the input list view
	void Drag(Win::Event& e, Win::ListView& listViewTarget);
	
	// Call this on Window_LButtonUp using the input list view, use return LVDropInfo
	LVDropInfo Drop(Win::Event& e, Win::ListView& listViewTarget);  
	
	bool GetSubItemRect(int itemIndex, int subItemIndex, RECT& output);
	
	// flags: LVIR_BOUNDS, LVIR_ICON, LVIR_LABEL 
	bool GetSubItemRect(int itemIndex, int subItemIndex, int flags, RECT& output); 
	//_____________________________________________________ Sys::IError
	void ReportError(bool error, wchar_t* description);
protected:
	Win::ListViewColumn _cols;
	
	const wchar_t * GetClassName(void){return WC_LISTVIEW;}
private:
	static bool bInit;
	bool isDragging;
	int dragItemIndex;
	Sys::Cursor cursor;
};

//_____________________________________________________________________ Slider
// When the user moves the slider, using either the mouse or the direction keys, the control fires events to indicate the change
class Slider : public Win::Module
{
public:
	Slider(void);
	virtual ~Slider(void);
	bool IsEvent(Win::Event& e, int notification);
	void SetRange(int minimum, int maximum);
	//
	void SetPosition(int position);
	int GetPosition();
	__declspec( property( get=GetPosition, put=SetPosition) ) int Position;
	//
	void SetMinimumPosition(int position);
	int GetMinimumPosition();
	__declspec( property( get=GetMinimumPosition, put=SetMinimumPosition) ) int MinimumPosition;
	//
	void SetMaximumPosition(int position);
	int GetMaximumPosition();
	__declspec( property( get=GetMaximumPosition, put=SetMaximumPosition) ) int MaximumPosition;
	//
	// If the position has NOT changed, it returns -1.  If the position has changed, the function returns the new position
	// Use this function when performance is important. Call this function from: sld_Hscroll() or sld_Vscroll()
	int HasPositionChanged();

	bool GetPosition(int& out_position);
protected:
	const wchar_t * GetClassName(void){return TRACKBAR_CLASS;}
private:
	int _position;
	static bool bInit;
};

//_____________________________________________________________________Toolbar
// It contains one or more buttons. Each button, when clicked by a user, generates an event
class Toolbar : public Win::Module
{
public:
	Toolbar(void);
	virtual ~Toolbar(void);
	//
	// It sets the size of the bitmapped images to be added to a toolbar  #Win32+TB_SETBITMAPSIZE
	bool SetBitmapSize(UINT width, UINT height);
	//
	// It  adds one or more images to the list of button images available for a toolbar  #Win32+TB_ADDBITMAP
	LRESULT AddBitmap(HINSTANCE hInst, UINT idBitmap, UINT_PTR nImages);
	//
	// It  adds one or more images to the list of button images available for a toolbar
	// TBBUTTON index: STD_COPY, STD_CUT,  STD_DELETE, STD_FILENEW, STD_FILEOPEN
	//STD_FILESAVE, STD_HELP, STD_PASTE, STD_PRINT, STD_PRINTPRE 
	//STD_PROPERTIES, STD_REDOW, STD_REPLACE, STD_UNDO#Win32+TB_ADDBITMAP
	LRESULT AddStdBitmap(bool bLarge);
	//
	// It  adds one or more images to the list of button images available for a toolbar 
	// You can use either AddViewBitmap or LoadViewImages
	// TBBUTTON index: VIEW_DETAILS, VIEW_LARGEICONS, VIEW_LIST, VIEW_SMALLICONS
	//VIEW_SORTDATE, VIEW_SORTNAME, VIEW_SORTSIZE, VIEW_SORTTYPE #Win32+TB_ADDBITMAP
	LRESULT AddViewBitmap(bool bLarge);
	//
	// It loads system-defined button images into a toolbar control's image list 
	// TBBUTTON index_ STD_COPY, STD_CUT,  STD_DELETE, STD_FILENEW, STD_FILEOPEN
	//STD_FILESAVE, STD_HELP, STD_PASTE, STD_PRINT, STD_PRINTPRE 
	//STD_PROPERTIES, STD_REDOW, STD_REPLACE, STD_UNDO#Win32+TB_LOADIMAGES
	LRESULT LoadStdImages(bool bLarge);
	//
	// It loads system-defined button images into a toolbar control's image list 
	// TBBUTTON index: VIEW_DETAILS, VIEW_LARGEICONS, VIEW_LIST, VIEW_SMALLICONS
	//VIEW_SORTDATE, VIEW_SORTNAME, VIEW_SORTSIZE, VIEW_SORTTYPE #Win32+TB_LOADIMAGES
	LRESULT LoadViewImages(bool bLarge);
	//
	// TBBUTTON index: HIST_ADDTOFAVORITES, HIST_BACK, HIST_FAVORITES 
	// HIST_FORWARD, HIST_VIEWTREE  #Win32+TB_LOADIMAGES
	LRESULT LoadHistoryImages(bool bLarge);
	//
	// It adds a new string to the toolbar's string pool #Win32+TB_ADDSTRING
	LRESULT AddString(const wchar_t * szText);
	//__________________________________________________________ Check
	// It checks or unchecks a given button in a toolbar #Win32+TB_CHECKBUTTON
	bool CheckButton(int button_id, bool checked);
	//
	// It determines whether the specified button in a toolbar is checked   #Win32+TB_ISBUTTONCHECKED
	bool IsButtonChecked(int button_id);
	//_________________________________________________________ Press
	// It presses or releases the specified button in a toolbar #Win32+TB_PRESSBUTTON
	bool PressButton(int button_id, bool pressed);
	//
	// It determines whether the specified button in a toolbar is checked   #Win32+TB_ISBUTTONPRESSED
	bool IsButtonPressed(int button_id);
	//_________________________________________________________ Enable
	// It enables or disables the specified button in a toolbar #Win32+TB_ENABLEBUTTON
	bool EnableButton(int button_id, bool enabled);
	//
	// It determines whether the specified button in a toolbar is enabled  #Win32+TB_ISBUTTONENABLED
	bool IsButtonEnabled(int button_id);
	//_________________________________________________________ Enable
	// It hides or shows the specified button in a toolbar #Win32+TB_HIDEBUTTON
	bool HideButton(int button_id, bool hidden);
	//
	// It determines whether the specified button in a toolbar is hidden  #Win32+TB_ISBUTTONHIDDEN
	bool IsButtonHidden(int button_id);
	//_________________________________________________________
	// It adds one or more buttons to a toolbar #Win32+TB_ADDBUTTONS
	LRESULT AddButtons(LPCTBBUTTON lpButtons, UINT nButtons);
	//
	// It deletes a button from the toolbar #Win32+TB_DELETEBUTTON
	BOOL DeleteButton(int index);
	//
	// It retrieves information about the specified button in a toolbar #Win32+TB_GETBUTTON
	bool GetButton(int index, TBBUTTON& out_button);
	//___________________________________________________________ Button Size
	// It retrieves the current width and height of toolbar buttons, in pixels #Win32+TB_GETBUTTONSIZE
	void GetButtonSize(int& out_width, int& out_height);
	//
	//  It sets the size of buttons on a toolbar#Win32+TB_SETBUTTONSIZE
	bool SetButtonSize(int width, int height);
	//
	//  It retrieves the bounding rectangle of a button in a toolbar #Win32+TB_GETITEMRECT
	bool GetItemRect(int index, RECT& out_Rect);
	//
	// It retrieves the total size of all of the visible buttons and separators in the toolbar #Win32+TB_GETMAXSIZE
	bool GetMaxSize(SIZE& out_size);
	//
	// It inserts a button in a toolbar #Win32+TB_INSERTBUTTON
	bool InsertButton(int index, TBBUTTON& button);
	//
	// It sets the maximum number of text rows displayed on a toolbar button #Win32+TB_SETMAXTEXTROWS
	void SetMaxTextRows(int count);
	//
	// It sets the minimum and maximum button widths in the toolbar control #Win32+TB_SETBUTTONWIDTH
	bool SetButtonWidth(int mimimum, int maximum);
	//
	// It sets the image list that the toolbar uses to display buttons that are in their default state #Win32+TB_SETIMAGELIST
	LRESULT SetImageList(Win::ImageList& imageList);
	//
	// It sets the image list that the toolbar control will use to display disabled buttons #Win32+TB_SETDISABLEDIMAGELIST
	LRESULT SetDisabledImageList(Win::ImageList& imageList);
	//
	// It causes a toolbar to be resized #Win32+TB_AUTOSIZE
	void AutoSize();
	//
	// It retrieves a count of the buttons currently in the toolbar #Win32+TB_BUTTONCOUNT
	int GetButtonCount();
	//
	// It retrieves information about the state of the specified button in a toolbar, such as whether it is enabled, pressed, or checked#Win32+TB_GETSTATE
	LRESULT GetButtonState(int button_id);
	//
	// It displays the Customize Toolbar dialog box 
	//  The toolbar must handle the TBN_QUERYINSERT and TBN_QUERYDELETE notifications for the Customize Toolbar dialog box to appear #Win32+TB_CUSTOMIZE
	void Customize();
	//___________________________________________________________________ Metrics
	// It retrieves the metrics of a toolbar control.  Please set the dwMask field of the TBMETRICS structure before calling this function #Win32+TB_GETMETRICS
	void GetMetrics(TBMETRICS& out_tbmetrics);
	//
	// It sets the metrics of a toolbar control #Win32+TB_SETMETRICS
	void SetMetrics(TBMETRICS& tbmetrics);
	//___________________________________________________________________ Rows
	// It sets the number of rows of buttons in a toolbar #Win32+TB_SETROWS
	void SetRows(int numRows, bool createMoreRows, RECT& out_resultingRectAfterSettingRows);
	//
	// It retrieves the number of rows of buttons in a toolbar with the TBSTYLE_WRAPABLE style. #Win32+TB_GETROWS 
	int GetRowCount();
	//
	// It gets the ideal width of the toolbar so that all buttons would be displayed at the current height #Win32+TB_GETIDEALSIZE 
	int GetIdealWidth();
	//
	// It gets the ideal height of the toolbar so that all buttons would be vertically displayed  #Win32+TB_GETIDEALSIZE 
	int GetIdealHeight();
	//
	// It resizes the toolbar dimensions to display all buttons. 
	void ResizeToFit();
	bool GetIdealSize(SIZE& out_size);
	//
	// It sets the command identifier of a toolbar button  #Win32+TB_SETCMDID 
	bool SetCommandID(int index, int command_id);
	//
	bool IsEvent(Win::Event& e, int notification);
	Win::ImageList imageList;
private:
	static bool bInit;
protected:
	const wchar_t * GetClassName(void){return TOOLBARCLASSNAME;}
};

//_____________________________________________________________________ TabHeaderItem
class TabHeaderItem
{
public:
	TabHeaderItem();
	~TabHeaderItem();
	wstring text;
	int iconIndex;
	LPARAM data;
	RECT rect;
};

//_____________________________________________________________________ TabHeader
// It is analogous to the top part of the dividers in a notebook or the labels in a file cabinet
class TabHeader: public Win::Window, public Win::IExportableEx
{
public:
	TabHeader();
	~TabHeader();
	//____________________________________________________ BackColor
	COLORREF GetBackColor();
	virtual void SetBackColor(COLORREF color);
	__declspec(property(get=GetBackColor, put=SetBackColor)) COLORREF BackColor;
	//____________________________________________________ TextColor
	COLORREF GetTextColor();
	virtual void SetTextColor(COLORREF color);
	__declspec(property(get=GetTextColor, put=SetTextColor)) COLORREF TextColor;
	//____________________________________________________ Font
	virtual void SetFont(Win::Gdi::Font& font);
	__declspec(property(put=SetFont)) Win::Gdi::Font& Font;
	//____________________________________________________ SelectedIndex
	bool SetSelected(int index);
	int GetSelectedIndex();
	__declspec(property(get=GetSelectedIndex, put=SetSelected)) int SelectedIndex;
	//____________________________________________________ SelectedData
	bool SetSelectedByData(LPARAM data);
	LPARAM GetSelectedData();
	__declspec(property (get=GetSelectedData, put=SetSelectedByData)) LPARAM SelectedData;
	//____________________________________________________ Events
	bool IsEvent(Win::Event& e, int notification);
	//
	void AddItem(const wchar_t* text);
	void AddItem(LPARAM data, const wchar_t* text);
	void AddItem(const wchar_t* text, int iconIndex);
	void AddItem(const wchar_t* text, int iconIndex, LPARAM data);
	//
	bool InsertItem(int index, const wchar_t* text);
	bool InsertItem(int index, LPARAM data, const wchar_t* text);
	bool InsertItem(int index, const wchar_t* text, int iconIndex);
	bool InsertItem(int index, const wchar_t* text, int iconIndex, LPARAM data);
	
	// it returns the item with the specified text or -1 if the text is not found
	int FindItemIndex(const wchar_t* text);
	//______________________________________________________________ Item Text
	bool SetItemText(int index, const wchar_t* text);
	bool GetItemText(int index, wstring& out_text);
	//______________________________________________________________ Data
	bool SetItemData(int index, LPARAM data);
	bool GetItemData(int index, LPARAM& out_data);
	//______________________________________________________________ Icon Index
	bool SetItemIcon(int index, int iconIndex);
	bool GetItemIcon(int index, int& out_iconIndex);
	//______________________________________________________________ Item
	bool SetItem(int index, const wchar_t* text, int iconIndex, LPARAM data);
	bool GetItem(int index, wstring& out_text, int& out_iconIndex, LPARAM& out_data);
	//
	bool GetItemRect(int index, RECT& out_rect);
	//
	int GetItemCount();
	void DeleteAllItems();
	bool DeleteItem(int index);
	void Refresh();
	//
	vector<TabHeaderItem> item;
	HIMAGELIST SetImageList(Win::ImageList& imageList);

	// It returns the minimum height of the control in pixels
	// After inserting the tabs (items) in the control send a WM_SIZE to the parent to re-adjust the parent layout
	// this->SendMessage(WM_SIZE, 0, MAKELPARAM(width, height));
	// From Window_Size() you can call GetMinimumHeght() to re-arrange the GUI elements
	int GetMinimumHeight();
	//____________________________________________________ IExportable
	void OnPaintControl(CG::Gdi& gdi);
	void OnPaintControl(CG::IGdi& gdi);
	//
	void GetControlSize(int& width, int&height);
	void SetControlSize(int width, int height);
	//
	int GetLineWidth();
	void SetLineWidth(int lineWidth);
	//
	void SetFont(HFONT hfont);
	HFONT GetFont();
	//
	bool CopyToBitmap(int width, int height, bool clientEdge, CG::DDBitmap& result);
	void Reset();
private:
	HIMAGELIST _hImageList;
	const wchar_t * GetClassName(void){ return L"WinTabControl"; }
	static bool isRegistered;
protected:
	CG::DDBitmap bitmap;
	void DrawTab(CG::IGdi& gdi, int index, RECT& rect, CG::Brush& brushTabs, TEXTMETRIC& tm);
	HFONT _hFont;
	int _fontHeight;
	bool _hasIcons;
	COLORREF _textColor;
	COLORREF _backColor;
	int _selectedIndex;
	int _scroll_index;
	int _iconSize;
	RECT _rectScroll_left;
	RECT _rectScroll_right;
	bool _showScrollButton;
	bool _enableLeftButton;
	bool _enableRightButton;
	int _tabWidth;
	int _tabHeight;
	int _tabLeftOffset;
	void UpdateScrollButtonVisibility();
	void OnSizePrivate();
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	void Window_Open(Win::Event& e);
	void Window_Paint(Win::Event& e);
	void Window_Size(Win::Event& e);
	//void Window_KeyDown(Win::Event& e);
	//void Window_SetFocus(Win::Event& e);
	//void Window_KillFocus(Win::Event& e);
	//void Window_HScroll(Win::Event& e);
	void Window_LButtonDown(Win::Event& e);
};


class TabItemCollection;
class Tab;

//_____________________________________________________________________ TabItem
class TabItem
{
public:
	TabItem(void);
	virtual ~TabItem(void);
	//
	wstring GetText();
	void SetText(const wstring& text);
	__declspec( property( get=GetText, put=SetText) ) wstring Text;
	//
	LPARAM GetData();
	void SetData(LPARAM data);
	__declspec( property( get=GetData, put=SetData ) ) LPARAM Data;
	//
	int GetImageIndex();
	void SetImageIndex(int imageIndex);
	__declspec( property( get=GetImageIndex, put=SetImageIndex ) ) int ImageIndex;
	//
	BOOL Delete();
	bool GetItemRect(int index, RECT& rect);
private:
	int index;
	HWND tabControl;
	friend class Win::TabItemCollection;
};

//_____________________________________________________________________ TabItemCollection
class TabItemCollection
{
public:
	TabItemCollection(void);
	virtual ~TabItemCollection(void);
	LRESULT DeleteAll();
	int GetCount();
	__declspec( property( get=GetCount ) ) int Count;
	int GetIndex(const wchar_t* text) ;// Returns the index of the item or -1 if not found
	//
	int Add(int index, TCITEM& item);// Use module::SetRedraw(false) before inserting a lot of items
	int Add(int index, int imageIndex, const wchar_t* text);
	int Add(int index, const wchar_t* text, int imageIndex, LPARAM data);
	int Add(int index, const wchar_t* text);
	int Add(int index, const wchar_t* text, LPARAM data);
	//
	int Add(int index, int imageIndex, const wstring& text);
	int Add(int index, const wstring& text, int imageIndex, LPARAM data);
	int Add(int index, const wstring& text);
	int Add(int index, const wstring& text, LPARAM data);
	//
	bool Set(TCITEM& item);
	bool Get(TCITEM& item);
	//
	Win::TabItem& operator[](long index);
private:
	Win::TabItem _item;
	void SetParent(Win::IParent* iparent);
	Win::IParent* iparent;
	friend class Win::Tab;
};

//_____________________________________________________________________ Tab
// It is analogous to the dividers in a notebook or the labels in a file cabinet
class Tab : public Win::Module
{
public:
	Tab(void);
	virtual ~Tab(void);
	int SetSelected(int index);
	int GetSelectedIndex();
	__declspec( property( get=GetSelectedIndex, put=SetSelected ) ) int SelectedIndex;
	//
	void SetSelectedByData(LPARAM data);
	LPARAM GetSelectedData();
	__declspec( property ( get=GetSelectedData, put=SetSelectedByData ) ) LPARAM SelectedData;
	//
	LRESULT HighLightItem(int index, bool bIsHighLight);
	HIMAGELIST SetImageList(Win::ImageList& imageList);
	bool IsEvent(Win::Event& e, int notification);
	Win::TabItemCollection Items;
protected:
	const wchar_t * GetClassName(void){return WC_TABCONTROL;}
private:
	static bool bInit;
};

//_____________________________________________________________________ProgressBar
// It can be used to display the progress of a lengthy operation
class ProgressBar: public Win::Control
{
public:
	ProgressBar();
	virtual ~ProgressBar();

	// Specifies the step increment for a progress bar. The step increment is the amount by which the progress 
	// bar increases its current position whenever it receives a PBM_STEPIT message. 
	// By default, the step increment is set to 10. #PBM_SETSTEP+Win32
	int SetStep(int stepSize);

	// Sets the minimum and maximum values for a progress bar to 32-bit values, and redraws the bar 
	// to reflect the new range. #PBM_SETRANGE32+Win32
	int SetRange(int minimum, int maximum);

	// Advances the current position for a progress bar by the step increment and redraws the 
	// bar to reflect the new position. Returns the previous position.
	// When the position exceeds the maximum range value, it resets the current position so that the progress 
	// indicator starts over again from the beginning. #GDIWPBM_STEPIT+Win32
	int StepIt();

	COLORREF SetBarColor(COLORREF color);
	//COLORREF SetBackColor(COLORREF color);

	// Sets the progress bar to marquee mode. This causes the progress bar to move like a marquee
	void SetMarquee(bool on, int milliseconds);

	//Sets the current position for a progress bar and redraws the bar to reflect the new position. 
	//It returns the previous position. #PBM_SETPOS+Win32
	int SetPosition(int position);

	void SetVertical(bool isVertical);

	// Retrieves the current position of the progress bar. #PBM_GETPOS+Win32
	int GetPosition();
	__declspec(property(get=GetPosition, put=SetPosition)) int Position;
	
	void OnPaintControl(CG::IGdi& gdi);
private:
	void Window_Open(Win::Event& e);
	void Window_Timer(Win::Event& e);
	int _stepSize;
	int _minimum;
	int _maximum;
	int _position;
	bool _isVertical;
	bool _marqueeOn;
	void PaintGradient(CG::IGdi& gdi, int p1, int p2, COLORREF color);
//protected:
//	const wchar_t * GetClassName(void){ return PROGRESS_CLASS; }
//	static bool bInit;
};

//_____________________________________________________________________ StatusBar
// It is a horizontal window at the bottom of a parent window in which an application can display various kinds of status information. 
// The status bar can be divided into parts to display more than one type of information.
class StatusBar : public Win::Module
{
public:
	StatusBar(void);
	virtual ~StatusBar(void);
	LRESULT SetPartCount(int nCount, int* nPartWidth);
	LRESULT SetPartText(int index, const wchar_t * szText) 
		{return ::SendMessage(hWnd, SB_SETTEXT, (WPARAM)index, (LPARAM)szText);}
	BOOL SetPartIcon(INT index, HICON hIcon);
	BOOL SetPartIcon(INT index, UINT resourceID, HINSTANCE hInst);
	COLORREF SetBackcolor(COLORREF rgb);
	int GetPartTextLength(int index);
	LRESULT GetPartText(int index, wchar_t* buffer);
	void SetMinHeight(int height);
protected:
	const wchar_t * GetClassName(void){return STATUSCLASSNAME;}
private:
	static bool bInit;
};

//_____________________________________________________________________ Rebar
// It is a containers fo child windows (GUI elements).
// It contains one or more bands, and each band can have any combination of a gripper bar, a bitmap, a text label, and a child window. 
// However, bands cannot contain more than one child window.
// A band in a rebar typically have a toolbar
class Rebar : public Win::Module
{
public:
	Rebar(void);
	virtual ~Rebar(void);
	UINT GetBarHeight();
	UINT GetBandCount();
	BOOL InsertBand(LPREBARBANDINFO rbBand);
	BOOL InsertBand(int index, LPREBARBANDINFO rbBand);
	BOOL GetBandInfo(UINT index, LPREBARBANDINFO p);
	BOOL SetBandInfo(UINT index, LPREBARBANDINFO p);
	BOOL SetBarInfo(HIMAGELIST hImageList);
protected:
	const wchar_t * GetClassName(void){return REBARCLASSNAME;}
private:
	static bool bInit;
};

class DropDownImageList;
class ListImageCollection;
//_____________________________________________________________________ ListImage
class ListImage
{
public:
	ListImage(void);
	virtual ~ListImage(void);
	//
	DWORD GetData();
	void SetData(DWORD data);
	__declspec( property( get=GetData, put=SetData ) ) DWORD Data;
	//
	wstring GetText();
	void GetText(wstring& text);
	void GetText(wchar_t* text);
	__declspec( property( get=GetText ) ) wstring Text;
	//
	int GetTextLength();
	__declspec( property( get=GetTextLength ) ) int TextLength;
	//
	int Delete();
private:
	bool isListBox;
	int index;
	HWND listControl;
	friend class Win::ListImageCollection;
};

//_____________________________________________________________________ ListImageCollection
class ListImageCollection
{
public:
	ListImageCollection(void);
	virtual ~ListImageCollection(void);
	void DeleteAll();
	bool Add(COMBOBOXEXITEM cbei);
	bool Add(int index, int indent, int image, int imageSelected, const wchar_t* text);
	bool Add(int index, int indent, int image, int imageSelected, const wchar_t* text, LPARAM data);
	bool Add(int index, int indent, int image, int imageSelected, const wstring& text);
	bool Add(int index, int indent, int image, int imageSelected, const wstring& text, LPARAM data);
	__declspec( property( get=GetCount ) ) int Count;
	int GetCount();
	int GetIndex(wchar_t* text);
	Win::ListImage& operator[](long index);
private:
	bool used_data;
	LPARAM _data;
	Win::ListImage _item;
	void SetParent(Win::IParent* iparent);
	Win::IParent* iparent;
	friend class Win::DropDownImageList;
};

//_____________________________________________________________________ DropDownImageList
// They are an extension of the drop down list control that provides native support for item images from an Win::ImageList variable
class DropDownImageList : public Win::Module
{
public:
	DropDownImageList(void);
	virtual ~DropDownImageList(void);
	//
	LRESULT SetSelected(int index);
	//
	// The return value is the zero-based index of the currently selected item. If no item is selected, the return value is -1.
	int GetSelectedIndex();
	__declspec( property( get=GetSelectedIndex, put=SetSelected ) ) int SelectedIndex;
	//
	void SetSelectedByData(DWORD data);
	DWORD GetSelectedData();
	__declspec( property ( get=GetSelectedData, put=SetSelectedByData ) ) DWORD SelectedData;
	//
	// The zero-based index of the item preceding the first item to be searched. When the search reaches the bottom of the list box, 
	// it continues from the top of the list box back to the item specified by the wParam parameter. If beginSearchIndex is –1, 
	// the entire list box is searched from the beginning. 
	// It returns the zero-based index of the matching item. If the search is unsuccessful, it returns CB_ERR #Win32+CB_FINDSTRING
	int FindString(int beginSearchIndex, LPCSTR thisString);
	//
	// It searches the list of a combo box for an item that begins with the characters in a specified string.
	// If a matching item is found, it is selected and copied to the edit control. If the string is found, the return value is the index of the selected item. 
	// If the search is unsuccessful, the return value is CB_ERR and the current selection is not changed. #Win32+CB_SELECTSTRING
	int SelectString(int beginSearchIndex, const wchar_t* thisString);
	//
	void SetSelectedByData(const wchar_t* data);
	//
	void SetImageList(Win::ImageList& imageList, HWND parent);
	bool IsEvent(Win::Event& e, int notification);
	//
	ListImageCollection& GetItems();
	__declspec( property ( get=GetItems) ) ListImageCollection& Items;
	//
	LRESULT ShowDropDown(bool show);
	//
	bool AddItem(COMBOBOXEXITEM cbei);
	bool AddItem(int index, int indent, int image, int imageSelected, const wchar_t* text);
	bool AddItem(int index, int indent, int image, int imageSelected, const wstring& text);
	bool AddItem(int index, int indent, int image, int imageSelected, const wchar_t* text, LPARAM data);
	bool AddItem(int index, int indent, int image, int imageSelected, const wstring& text, LPARAM data);
	void DeleteAllItems();
protected:
	Win::ListImageCollection _items;
	const wchar_t * GetClassName(void){return WC_COMBOBOXEX;}
private:
	static bool bInit;
};

//_____________________________________________________________________ Tray
// It provides support to handle the tray (the notification area in the right-bottom corner of the screen)
class Tray
{
public:
	Tray(void);
	virtual ~Tray(void);
	void Create(HINSTANCE hInst, HWND hWndParent, UINT id);
	BOOL Add(UINT idIcon, const wchar_t* szTip);
	BOOL ModifyTip(const wchar_t* szTip);
	BOOL ModifyIcon(UINT idIcon);
	BOOL Delete();
	UINT GetId()
		{return m_id;}
	bool IsTrayMessage(UINT uMsg, WPARAM wParam)
	{
		return (uMsg == m_WinMessage && wParam==m_id);
	}
private:
	HWND m_hWndParent;
	UINT m_id;
	HINSTANCE m_hInst;
	bool m_bAdd;
	UINT m_WinMessage;
};

//____________________________________________________________________ ScrollBar
// It scroll a data object in the client area to bring into view the portions of the object that extend beyond the borders of the window
class ScrollBar : public Module
{
public:
	ScrollBar();
	~ScrollBar();
	int SetScrollInfo(LPCSCROLLINFO lpsi,BOOL fRedraw);
	int GetScrollInfo(LPSCROLLINFO lpsi);
	int SetRange(int nMin, int nMax);
	int GetRange(int& nMin, int& nMax);
	int SetPosition(int nPos);
	int GetPosition(int& nPos);
	int SetPage(int page);
	int GetPage(int& page);
	int GetTrackPosition(int& nPos);
	int GetNewPosition(Win::Event& e); // Call this from Window_HScroll or Window_VScroll
	bool IsEvent(Win::Event& e, int notification);
protected:
	const wchar_t * GetClassName(void){return WC_SCROLLBAR;}
	SCROLLINFO si;
};


//_____________________________________________________________________ Image
// It displays an image: EMF, BMP, ICO, JPG, PNG, GIF
class Image : public Win::Window
{
public:
	Image(void);
	virtual ~Image(void);
	bool IsEvent(Win::Event& e, int notification);
	//
	COLORREF GetBackColor();
	virtual void SetBackColor(COLORREF color);
	__declspec( property( get=GetBackColor, put=SetBackColor ) ) COLORREF BackColor;
	//
	const wstring& GetFileName();

	// EMF, BMP, ICO, JPG, PNG, GIF
	bool SetFileName(const wstring& filename);
	__declspec( property( get=GetFileName, put=SetFileName ) ) wstring& FileName;
	//
	// The Icon will be displayed on the default size using the screen DPI
	bool SetIcon(HINSTANCE hInstance, int icon_id);
	bool SetBitmap(HINSTANCE hInstance, int bitmap_id);
	bool SetEMF(HINSTANCE hInstance, int emf_id);

	bool CopyToClipboard();
protected:
	bool Load_Metafile(CG::Metafile& out_metafile);
	bool Load_Bitmap(CG::DDBitmap& out_bitmap);
	bool EventHandler(Win::Event& e);
	CG::DDBitmap doubleBuffer;
	int _image_id;
	wstring _filename;
	HINSTANCE _hInstance;
	int _image_type; // WIN_IMAGE_GDI, WIN_IMAGE_ICON, WIN_IMAGE_BITMAP
	COLORREF _backColor;
	void PaintGdiPlus(CG::Gdi& gdi);
	void Window_Paint(Win::Event& e);
	void Window_Size(Win::Event& e);
	void Window_LButtonDown(Win::Event& e);
	void Window_RButtonDown(Win::Event& e);
	const wchar_t * GetClassName(void){return L"WINTEMPLA_IMAGE";}
private:
	static bool bRegistered;
};

//_____________________________________________________________________ ScrollBase
// Abstract class that provides basic functionability to build a scrolling window
class ScrollBase: public Win::Window
{
public:
	ScrollBase();
	virtual ~ScrollBase();
	//______________________________________________________________ BackColor
	COLORREF GetBackColor();
	virtual void SetBackColor(COLORREF color);
	__declspec(property(get=GetBackColor, put=SetBackColor)) COLORREF BackColor;
	//______________________________________________________________ TextColor
	COLORREF GetTextColor();
	virtual void SetTextColor(COLORREF color);
	__declspec(property(get=GetTextColor, put=SetTextColor)) COLORREF TextColor;
	//______________________________________________________________ LineColor
	COLORREF GetLineColor();
	virtual void SetLineColor(COLORREF color);
	__declspec(property(get=GetLineColor, put=SetLineColor)) COLORREF LineColor;
	//______________________________________________________________ SelectionColor
	COLORREF GetSelectionColor();
	virtual void SetSelectionColor(COLORREF color);
	__declspec(property(get=GetSelectionColor, put=SetSelectionColor)) COLORREF SelectionColor;
	//______________________________________________________________ ShowGrid
	void SetShowGrid(bool showGrid);
	bool GetShowGrid();
	__declspec(property(get=GetShowGrid, put=SetShowGrid)) bool ShowGrid;
	//______________________________________________________________ BorderSelection
	void SetBorderSelection(bool displayOnlyBorder);
	bool GetBorderSelection();
	__declspec(property(get=GetBorderSelection, put=SetBorderSelection)) bool BorderSelection;
	//______________________________________________________________ Font
	virtual void SetFont(Win::Gdi::Font& font);
	__declspec(property(put=SetFont)) Win::Gdi::Font& Font;
	HFONT GetHFont();
	int GetFontHeight();
	bool GetLogfont(LOGFONT& output);

	bool HasFocus();
	bool IsEvent(Win::Event& e, int notification);
	void RefreshAll();
	void CopyToClipboard();
	bool SaveEmfImage(const wchar_t* filename);

	// It scrolls the control to make the selection visible
	virtual void ShowSelection() = 0;
	virtual bool IsSelectionVisible() = 0;
	virtual void RemoveSelection() = 0;
	virtual void RepaintSelectedItem() = 0;
	virtual bool GetSelectionRect(RECT& out_rect) = 0;
protected:
	COLORREF GetFocusColor();
	TEXTMETRIC textMetric;
	void UpdateTextMetric();
	virtual void UpdateScrollInfo() = 0;
	virtual void OnFontSet(const LOGFONT& logFont);
	//__________________________ For double buffer
	CG::DDBitmap _bitmap;
	virtual bool ButtonDown(Win::Event& e) = 0;
	virtual void OnPaintControl(CG::Gdi& gdi, bool isMetafile) = 0;
	const wchar_t * GetClassName(void){ return L"WINBASESCROLL"; }
	virtual void Window_GetDlgCode(Win::Event& e);
	virtual void Window_Size(Win::Event& e);
	virtual void Window_Paint(Win::Event& e);
	virtual void Window_KeyDown(Win::Event& e);
	virtual void Window_SetFocus(Win::Event& e);
	virtual void Window_KillFocus(Win::Event& e);
	virtual void Window_LButtonDown(Win::Event& e);
	virtual void Window_RButtonDown(Win::Event& e);
	virtual void Window_LButtonDblclk(Win::Event& e);
	virtual void Window_Open(Win::Event& e);
	bool _hasFocus;
	bool _borderSelection;
	HWND _hWndParent;
	bool _showGrid;
	COLORREF _backColor;
	COLORREF _textColor;
	COLORREF _lineColor;
	COLORREF _selectionColor;
	HFONT _hfont;
	int _emfWidth;
	int _emfHeight;
private:
	static int _isRegistered;
};

//_____________________________________________________________________ ScrollControl
// It provides functionability to scroll a window or build a table
class ScrollControl: public Win::ScrollBase
{
public:
	ScrollControl(void);
	virtual ~ScrollControl(void);
	//_______________________________________________________________________ HdrBackColor
	COLORREF GetHdrBackColor();
	virtual void SetHdrBackColor(COLORREF color);
	__declspec(property(get=GetHdrBackColor, put=SetHdrBackColor)) COLORREF HdrBackColor;

	//_______________________________________________________________________ RowHeight
	int GetRowHeight();
	void SetRowHeight(int rowHeight);
	__declspec(property(get=GetRowHeight, put=SetRowHeight)) int RowHeight;
	//_______________________________________________________________________ ColumnWidth
	int GetColumnWidth();
	void SetColumnWidth(int columnWidth);
	__declspec(property(get=GetColumnWidth, put=SetColumnWidth)) int ColumnWidth;

	//_______________________________________________________________________ RowCount
	void SetRowCount(int rowCount);
	int GetRowCount();
	__declspec(property(get=GetRowCount, put=SetRowCount)) int RowCount;

	//_______________________________________________________________________ ColumnCount
	void SetColumnCount(int columnCount);
	int GetColumnCount();
	__declspec(property(get=GetColumnCount, put=SetColumnCount)) int ColumnCount;

	//_______________________________________________________________________ SelectedCol
	bool SetSelectedCol(int colIndex);
	// if the value is negative, the full row is selected and the column index begins at -1
	int GetSelectedCol();
	__declspec(property(get=GetSelectedCol, put= SetSelectedCol)) int SelectedCol;
	//_______________________________________________________________________ SelectedRow
	bool SetSelectedRow(int rowIndex);
	int GetSelectedRow();
	__declspec(property(get=GetSelectedRow, put=SetSelectedRow)) int SelectedRow;

	//_______________________________________________________________________ SelectFullRow (without header)
	void SetSelectFullRow(bool selectFullRow);
	bool GetSelectFullRow();
	__declspec(property(get=GetSelectFullRow, put=SetSelectFullRow)) bool SelectFullRow;

	//_______________________________________________________________________ ShowVerticalGrid
	void SetShowVerticalGrid(bool showGrid);
	bool GetShowVerticalGrid();
	__declspec(property(get=GetShowVerticalGrid, put=SetShowVerticalGrid)) bool ShowVerticalGrid;

	//_______________________________________________________________________ ShowHorizontalGrid
	void SetShowHorizontalGrid(bool showGrid);
	bool GetShowHorizontalGrid();
	__declspec(property(get=GetShowHorizontalGrid, put=SetShowHorizontalGrid)) bool ShowHorizontalGrid;

	//_______________________________________________________________________ HasHeader
	bool GetHasHeader();
	void SetHasHeader(bool hasHeader);
	__declspec(property(get=GetHasHeader, put=SetHasHeader)) bool HasHeader;
	//
	// It scrolls the control to make the selection visible
	void ShowSelection();
	bool IsSelectionVisible();
	void RemoveSelection();
	void RepaintItem(int rowIndex, int colIndex);
	void RepaintHeader();
	void RepaintSelectedItem();
	bool GetSelectionRect(RECT& out_rect);
	bool GetItemRect(int rowIndex, int colIndex, RECT& out_rect);
	void GetPaintInfo(const RECT& rcPaint, int& out_posX, int& out_posY, int& out_row1, int& out_row2, int& out_col1, int& out_col2);
	void GetPageInfoH(int& out_colIndex1, int& out_colIndex2);
	void GetPageInfoV(int& out_rowIndex1, int& out_rowIndex2);
	void GetClickInfo(LPARAM lParam, int& out_rowIndex, int& out_colIndex, RECT& out_cell);
	void GetAbsoluteClickInfo(LPARAM lParam, int& out_row, int& out_col, RECT& out_cell);

	void SetSelectedCell(int rowIndex, int colIndex);
	//___________________________________________________________ It is called when painting each cell
	// paintEvent: WNT_PAINTCELLSBEGIN, WNT_PAINTCELL, WNT_PAINTCELLSEND
	virtual void ScrollPaint(int paintEvent, CG::Gdi& gdi, const RECT& cell, int rowIndex, int colIndex, bool isSelected);
protected:
	bool ButtonDown(Win::Event& e);
	void OnPaintControl(CG::Gdi& gdi, bool isMetafile);
	virtual void Window_VScroll(Win::Event& e);
	virtual void Window_HScroll(Win::Event& e);
	virtual void Window_MouseWheel(Win::Event& e);
	virtual bool ProcessMouse(LPARAM lParam);
	bool _selectFullRow;
	int _selectedRow; // Full row selected: _selectedRow >= 0 && _selectedCol < 0 
	int _selectedCol; // Full col selected: _selectedRow < 0 && _selectedCol >= 0
					  // Empty selection: _selectedRow < 0 && _selectedCol < 0 
					  // Once cell selected: _selectedRow >= 0 && _selectedCol >= 0 
	bool _showHorizontalGrid;
	bool _showVerticalGrid;
	COLORREF _hdrBackColor;
	int _columnWidth;
	int _rowHeight;
	bool _hasHeader;
	int _rowCount;
	int _columnCount;
private:
	void UpdateScrollInfo();
};

//_____________________________________________________________________ VerticalScroll
// It provides functionability to scroll items vertically
class VerticalScroll: public Win::ScrollBase
{
public:
	VerticalScroll(void);
	virtual ~VerticalScroll(void);

	VerticalScroll(const Win::VerticalScroll& init);
	Win::VerticalScroll& operator=(const Win::VerticalScroll& init);

	//_______________________________________________________________________ RowHeight
	int GetRowHeight();
	void SetRowHeight(int rowHeight);
	__declspec(property(get=GetRowHeight, put=SetRowHeight)) int RowHeight;

	//_______________________________________________________________________ RowCount
	void SetRowCount(int rowCount);
	int GetRowCount();
	__declspec(property(get=GetRowCount, put=SetRowCount)) int RowCount;

	//_______________________________________________________________________ SelectedRow
	bool SetSelectedRow(int rowIndex);
	int GetSelectedRow();
	__declspec(property(get=GetSelectedRow, put=SetSelectedRow)) int SelectedRow;

	// It scrolls the control to make the selection visible
	void ShowSelection();
	bool IsSelectionVisible();
	void RemoveSelection();
	void RepaintSelectedItem();
	void RepaintRow(int rowIndex);
	bool GetSelectionRect(RECT& out_rect);
	bool GetItemRect(int rowIndex, RECT& out_rect);
	//___________________________________________________________ It is called when painting each row
	// paintEvent: WNT_PAINTCELLSBEGIN, WNT_PAINTCELL, WNT_PAINTCELLSEND
	virtual void VerticalPaint(int paintEvent, CG::Gdi& gdi, const RECT& cell, int rowIndex, bool isSelected);

	void Delete();

	//___________________________________________________________ Variable item height support
	bool SetRowHeights(const valarray<int>& rowHeights);
	int GetRowHight(int index);

	bool IsVariableItemHeight();
protected:
	// Given the rcPaint, it returns the scroll position 
	// out_row1 returns the first row index of the current view
	// out_row2 returns the last row index of the current view
	int GetViewPos(const RECT& rcPaint, int& out_rowIndex1, int& out_rowIndex2);

	// From a mouse LPARAM value, it returns the row index and the rect of the cell
	void GetClickInfo(const LPARAM in_MouseLParam, int& out_rowIndex, RECT& out_cell);

	// From a mouse LPARAM value, it returns the row number (counting from the top of the control) and the rect of the cell
	//void GetAbsoluteClickInfo(const LPARAM in_MouseLParam, int& out_rowFromTop, RECT& out_cell);
	bool ButtonDown(Win::Event& e);
	void OnPaintControl(CG::Gdi& gdi, bool isMetafile);
	virtual void Window_VScroll(Win::Event& e);
	virtual void Window_MouseWheel(Win::Event& e);
	virtual bool ProcessMouse(LPARAM lParam);
	int _selectedRow;
	int _rowHeight;
	int _rowCount;

	//___________________________________________________________ Variable height items support
	int* _vh_height;
	int _vh_scrollDelta;
private:
	void UpdateScrollInfo();
	void Constructor();
	void Copy(const Win::VerticalScroll& init);
};

//_____________________________________________________________________ HorizontalScroll
// It provides functionability to scroll items horizontally
class HorizontalScroll: public Win::ScrollBase
{
public:
	HorizontalScroll(void);
	virtual ~HorizontalScroll(void);

	//_______________________________________________________________________ ColumnWidth
	int GetColumnWidth();
	void SetColumnWidth(int columnWidth);
	__declspec(property(get=GetColumnWidth, put=SetColumnWidth)) int ColumnWidth;

	//_______________________________________________________________________ ColumnCount
	void SetColumnCount(int columnCount);
	int GetColumnCount();
	__declspec(property(get=GetColumnCount, put=SetColumnCount)) int ColumnCount;

	//_______________________________________________________________________ SelectedCol
	bool SetSelectedCol(int colIndex);
	int GetSelectedCol();
	__declspec(property(get=GetSelectedCol, put= SetSelectedCol)) int SelectedCol;

	// It scrolls the control to make the selection visible
	void ShowSelection();
	bool IsSelectionVisible();
	void RemoveSelection();
	void RepaintSelectedItem();
	void RepaintColumn(int itemColumn);
	bool GetSelectionRect(RECT& out_rect);
	bool GetItemRect(int columnIndex, RECT& out_rect);
	//___________________________________________________________ It is called when painting each column
	// paintEvent: WNT_PAINTCELLSBEGIN, WNT_PAINTCELL, WNT_PAINTCELLSEND
	virtual void HorizontalPaint(int paintEvent, CG::Gdi& gdi, const RECT& cell, int colIndex, bool isSelected);
protected:
	// Given the rcPaint, it returns the scroll position 
	// out_colIndex1 returns the first column index of the current view
	// out_colIndex2 returns the last column index of the current view
	int GetViewPos(const RECT& rcPaint, int& out_colIndex1, int& out_colIndex2);

	// From a mouse LPARAM value, it returns the row index and the rect of the cell
	void GetClickInfo(const LPARAM in_MouseLParam, int& out_colIndex, RECT& out_cell);

	// From a mouse LPARAM value, it returns the column number (counting from the left of the control) and the rect of the cell
	void GetAbsoluteClickInfo(const LPARAM in_MouseLParam, int& out_colFromLeft, RECT& out_cell);
	bool ButtonDown(Win::Event& e);
	void OnPaintControl(CG::Gdi& gdi, bool isMetafile);
	virtual void Window_HScroll(Win::Event& e);
	virtual void Window_MouseWheel(Win::Event& e);
	virtual bool ProcessMouse(LPARAM lParam);
	int _selectedCol;
	int _columnWidth;
	int _columnCount;
private:
	void UpdateScrollInfo();
};

//_____________________________________________________________________ ScrollText
class ScrollText: public Win::ScrollBase
{
public:
	ScrollText(void);
	virtual ~ScrollText(void);

	//_______________________________________________________________________ PixelsTextWidth
	int GetPixelsTextWidth();
	void SetPixelsTextWidth(int pixelsTextWidth);
	__declspec(property(get=GetPixelsTextWidth, put=SetPixelsTextWidth)) int PixelsTextWidth;

	//_______________________________________________________________________ RowCount
	void SetRowCount(int rowCount);
	int GetRowCount();
	__declspec(property(get=GetRowCount, put=SetRowCount)) int RowCount;

	//_______________________________________________________________________ SelectedRow
	bool SetSelectedRow(int rowIndex);
	int GetSelectedRow();
	__declspec(property(get = GetSelectedRow, put = SetSelectedRow)) int SelectedRow;

	// It scrolls the control to make the selection visible
	void ShowSelection();
	bool IsSelectionVisible();
	void RemoveSelection();
	void UpdateScrollInfo();
	void UpdateHScrollInfo();
	void UpdateVScrollInfo();
	void RepaintSelectedItem();
	void RepaintRow(int rowIndex);
	bool GetSelectionRect(RECT& out_rect);
	bool GetItemRect(int rowIndex, RECT& out_rect);
	int GetRowHeight();
	//___________________________________________________________ It is called when painting each row
	// paintEvent: WNT_PAINTCELLSBEGIN, WNT_PAINTCELL, WNT_PAINTCELLSEND
	virtual void PaintRow(int paintEvent, CG::Gdi& gdi, int x, int y, int rowIndex, bool isSelected);
protected:

	// Given the rcPaint, it returns the scroll position 
	// out_row1 returns the first row index of the current view
	// out_row2 returns the last row index of the current view
	int GetViewPos(const RECT& rcPaint, int& out_rowIndex1, int& out_rowIndex2);

	// From a mouse LPARAM value, it returns the row, column and the rect of the cell
	void GetClickInfo(const LPARAM in_MouseLParam, int&out_rowIndex, RECT& out_cell);

	bool ButtonDown(Win::Event& e);
	void OnPaintControl(CG::Gdi& gdi, bool isMetafile);
	bool ProcessMouse(LPARAM lParam);
	void Window_MouseWheel(Win::Event& e);
	void Window_HScroll(Win::Event& e);
	void Window_VScroll(Win::Event& e);
	void Window_GelDlgCode(Win::Event& e);
	int _deltaWheelPerLine;
	int _selectedRow;
	int _positionHorizontal;
	int _positionVertical;
	int _rowCount;
	int _pixelsTextWidth;
};


//_____________________________________________________________________ Clipboard
// It allows an application to copy information to another program
// It allows an application to paste informaton from another program
class Clipboard
{
public:
	virtual ~Clipboard(void);

	// It returns true if the data in the clipboard is CF_PRIVATEFIRST, index = 0, 1, ..  #IsClipboardFormatAvailable+Win32
	static bool HasPrivateFirst(HWND hWnd);
	
	// It returns true if the data in the clipboard is a Device Dependent Bitmap #IsClipboardFormatAvailable+Win32
	static bool HasDDBitmap(HWND hWnd);
	
	// It returns true if the data in the clipboard is a Device Independent Bitmap #IsClipboardFormatAvailable+Win32
	static bool HasDIBitmap(HWND hWnd);
	
	// It returns true if the data in the clipboard is text #IsClipboardFormatAvailable+Win32
	static bool HasText(HWND hWnd);
	
	// It returns true if the data in the clipboard is a metafile #IsClipboardFormatAvailable+Win32
	static bool HasMetafile(HWND hWnd);

	// It returns true if the data in the clipboard is a list of files #IsClipboardFormatAvailable+Win32
	static bool HasFileList(HWND hWnd);
	
	// It returns true if the clipboard has data that was pasted from the a Window of the specified class
	static bool IsDataFromWindowClass(const wchar_t* windowClass);
	//
	static bool CopyDDBFromClipboard(HWND hWnd, CG::DDBitmap& ddbitmap);
	static bool CopyDDBToClipboard(HWND hWnd, HBITMAP hBitmap);
	static bool CopyDDBToClipboard(HWND hWnd, CG::DDBitmap& ddbitmap);

	static wchar_t* CopyTextToClipboard(HWND hWnd, const wchar_t* text);
	static wchar_t* CopyTextToClipboard(HWND hWnd, const wstring& text);
	static wchar_t* CopyTextToClipboard(HWND hWnd, const char* text);
	static wchar_t* CopyTextToClipboard(HWND hWnd, const string& text);
	static wchar_t* CopyTextFromClipboard(HWND hWnd, wchar_t** text);
	static void CopyTextFromClipboard(HWND hWnd, wstring& out_text);
	static void CopyTextFromClipboard(HWND hWnd, string& out_text);

	static bool CopyMetaFileToClipboard(HWND hWnd, CG::Metafile& mf);
	static bool CopyMetaFileFromClipboard(HWND hWnd, CG::Metafile& mf);

	static bool CopyFileListFromClipboard(HWND hWnd, vector<wstring>& output);
private:
	Clipboard(void);
};

//_____________________________________________________________________ HorizontalSplitter
class HorizontalSplitter : public Win::Window
{
public:
	HorizontalSplitter(void);
	virtual ~HorizontalSplitter(void);
	//
	// Call this function to manually set the position of the splitter
	void SetSplitterPosition(int y);
	//
	// Set child to the GUI element on the top
	HWND childTop;
	//
	// Set child to the GUI element on the bottom
	HWND childBottom;
	//
	// Be default, offsetLeft is zero, you can use the offsetLeft to leave space for 
	// one or more controls on the left of the window
	int offsetLeft;
	//
	// Be default, offsetRight is zero, you can use the offsetRight to leave space for 
	// one or more controls on the right of the window
	int offsetRight;
	//
	// Be default, offsetTop is zero, you can use the offsetTop to leave space for 
	// one or more controls on the top of the window
	int offsetTop;
	//
	// Be default, offsetBottom is zero, you can use the offsetBottom to leave space for 
	// one or more controls on the bottom of the window
	int offsetBottom;
	//
	HWND Setup(HWND parent, int splitterPositionY);
	//
	// Call this function in Window_Size and Window_Open
	void UpdateChildrenPosition();
protected:
	const wchar_t * GetClassName(void);
private:
	void Window_LButtonUp(Win::Event& e);
	void Window_LButtonDown(Win::Event& e);
	void Window_MouseMove(Win::Event& e);
	//
	// You can create your own splitter by deriving from Win::Splitter and overiding Adjust
	virtual void Adjust();
	//
	static int objectCount;
	//static Sys::Cursor cursor;
	//
	enum MouseLocation{overTopChild, overSplitter, overBottomChild};
	void DrawBoxOutline(HWND hWnd);
	bool isBlocking;
	//
	Win::HorizontalSplitter::MouseLocation mouseLocation;
	int splitterPosition;
	//
	HWND hWndParent;
	//
	int parent_width;
	int parent_height;
	//
	int childTop_height;
	const int splitter_height;
	int childBottom_height;
	//
	void Reset();
};

//_____________________________________________________________________ VerticalSplitter
class VerticalSplitter : public Win::Window
{
public:
	VerticalSplitter(void);
	virtual ~VerticalSplitter(void);
	//
	// Call this function to manually set the position of the splitter
	void SetSplitterPosition(int x);
	//
	// Set child to the GUI element on the left
	HWND childLeft;
	//
	// Set child to the GUI elemnet of the right
	HWND childRight;
	//
	// Be default, offsetLeft is zero, you can use the offsetLeft to leave space for 
	// one or more controls on the left of the window
	int offsetLeft;
	//
	// Be default, offsetRight is zero, you can use the offsetRight to leave space for 
	// one or more controls on the right of the window
	int offsetRight;
	//
	// Be default, offsetTop is zero, you can use the offsetTop to leave space for 
	// one or more controls on the top of the window
	int offsetTop;
	//
	// Be default, offsetBottom is zero, you can use the offsetBottom to leave space for 
	// one or more controls on the bottom of the window
	int offsetBottom;
	//
	HWND Setup(HWND parent, int splitterPositionX);
	//
	// Call this function in Window_Size and Window_Open
	void UpdateChildrenPosition();
	//
protected:
	const wchar_t * GetClassName(void);
private:
	void Window_LButtonUp(Win::Event& e);
	void Window_LButtonDown(Win::Event& e);
	void Window_MouseMove(Win::Event& e);
	//
	// You can create your own splitter by deriving from Win::Splitter and overiding Adjust
	virtual void Adjust();
	//
	static int objectCount;
	//static Sys::Cursor cursor;
	//
	enum MouseLocation{ overLeftChild, overSplitter, overRightChild };
	void DrawBoxOutline(HWND hWnd);
	bool isBlocking;
	//
	Win::VerticalSplitter::MouseLocation mouseLocation;
	int splitterPosition;
	//
	HWND hWndParent;
	//
	int parent_width;
	int parent_height;
	//
	int childLeft_width;
	const int splitter_width;
	int childRight_width;
	//
	void Reset();
};


//_____________________________________________________________________ Digit
// Displays a single digit
class Digit : public Win::Window
{
public:
	Digit(void);
	virtual ~Digit(void);
	void SetValue(int n);
	int GetValue();
	void SetColor(COLORREF color);
	COLORREF GetColor(void);
	void SetBackColor(COLORREF color);
	COLORREF GetBackColor(void);
	bool IsEvent(Win::Event& e, int notification);
protected:
	COLORREF color;
	COLORREF colorBackground;
	int m_nValue;
	void Window_Paint(Win::Event& e);
	void Window_LButtonDown(Win::Event& e);
	void Window_RButtonDown(Win::Event& e);
	//LRESULT WndProc(Win::Event& e);
	const wchar_t * GetClassName(void){return L"WINDIGIT";}
	static bool m_bRegistered;
};

//_____________________________________________________________________ FlowDisplay
// It displays flow
class FlowDisplay : public Win::Window
{
public:
	FlowDisplay(void);
	virtual ~FlowDisplay(void);
	enum Flow{Left, None, Right};
	void SetFlow(Win::FlowDisplay::Flow flow);
	void SetColor(COLORREF color);
	COLORREF GetColor(void);
	bool IsEvent(Win::Event& e, int notification);
protected:
	COLORREF color;
	Win::FlowDisplay::Flow m_flow;
	bool m_bFlowing;
	bool m_bDisplayed;
	void Window_Paint(Win::Event& e);
	void Window_Timer(Win::Event& e);
	void Window_LButtonDown(Win::Event& e);
	void Window_RButtonDown(Win::Event& e);
	//LRESULT WndProc(Win::Event& e);
	COLORREF ReduceLuminance(COLORREF color);
	const wchar_t * GetClassName(void){return L"WINFLOWDISPLAY";}
	static bool m_bRegistered;
};

//_____________________________________________________________________ SimulationView
// It provides support for creating visual simulations 
class SimulationView : public Win::Window
{
public:
	SimulationView(void);
	virtual ~SimulationView(void);
	COLORREF GetBackColor();
	virtual void SetBackColor(COLORREF color);
	__declspec( property( get=GetBackColor, put=SetBackColor ) ) COLORREF BackColor;
	//
	COLORREF GetTextColor();
	virtual void SetTextColor(COLORREF color);
	__declspec( property( get=GetTextColor, put=SetTextColor ) ) COLORREF TextColor;
	//
	virtual void SetFont(Win::Gdi::Font& font);
	__declspec( property( put=SetFont) ) Win::Gdi::Font& Font;
	//
	bool IsEvent(Win::Event& e, int notification);
	void Start(int refreshTime);
	void Stop();
	Sys::Stopwatch time;
	CG::DDBitmap bitmap;
protected:
	COLORREF _backColor;
	COLORREF _textColor;
	HFONT _hfont;
	void Window_Open(Win::Event& e);
	void Window_Size(Win::Event& e);
	void Window_Paint(Win::Event& e);
	void Window_Timer(Win::Event& e);
	void Window_LButtonDown(Win::Event& e);
	void Window_RButtonDown(Win::Event& e);
	//LRESULT WndProc(Win::Event& e);
	const wchar_t * GetClassName(void){return L"VISUALSIMULATION";}
	static bool m_bRegistered;
};

//_____________________________________________________________________ Tank
// It displays a tank with liquid. The level of the liquid can be modified.
class Tank : public Win::Control
{
public:
	Tank(void);
	virtual ~Tank(void);
	void SetRange(double minimum, double maximum);
	//
	void SetLevel(double level);
	double GetLevel();
	__declspec( property( get=GetLevel, put=SetLevel ) ) double Level;
	//
	void SetTankColor(COLORREF color);
	COLORREF GetTankColor(void);
	__declspec( property( get=GetTankColor, put=SetTankColor ) ) COLORREF TankColor;
protected:
	COLORREF _tankColor;
	double _level;
	double _levelOld;
	double _minLevel;
	double _maxLevel;
	RECT _rcScale;
	RECT _rcMarks;
	RECT _rcCilinder;
	RECT _rcCaption;
	double _markDelta;
	virtual void OnPaintControl(CG::Gdi& gdi);
	virtual void OnSizePrivate();
};

//_____________________________________________________________________ ValueDisplay
// It displays a variable name and value
class ValueDisplay : public Win::Control
{
public:
	ValueDisplay(void);
	virtual ~ValueDisplay(void);
	//____________________________________________________ Text
	wstring& GetText();
	void SetText(const wstring& text);
	__declspec(property(get=GetText, put=SetText)) wstring Text;
	//
	void SetValue(const wstring& value);
	wstring& GetValue();
	__declspec( property( get=GetValue, put=SetValue ) ) wstring& Value;
	//
	void SetDouble(double value);
	double GetDouble();
__declspec( property( get=GetDouble, put=SetDouble) ) double DoubleValue;
	//__________________________________________________________________ ValueColor
	COLORREF GetValueColor();
	void SetValueColor(COLORREF color);
	__declspec(property(get=GetValueColor, put=SetValueColor)) COLORREF ValueColor;
protected:
	//
	wstring _value;
	RECT _rectName;
	RECT _rectValue;
	void OnPaintControl(CG::Gdi& gdi);
	void OnSizePrivate();
};

//_____________________________________________________________________ ColorDisplay
// It displays text in color
class ColorDisplay : public Win::Control
{
public:
	ColorDisplay(void);
	virtual ~ColorDisplay(void);
	bool IsEvent(Win::Event& e, int notification);
	//
	//TA_LEFT, TA_CENTER, TA_RIGHT
	void SetAlignment(int alignment); 
	//
	// TA_LEFT, TA_CENTER, TA_RIGHT
	int GetAlignment(); 
	__declspec( property( get=GetAlignment, put=SetAlignment ) ) int Alignment;
	//
	void SetBlink(bool blink);
	bool GetBlink();
	__declspec( property( get=GetBlink, put=SetBlink ) ) bool Blink;
protected:
	bool _blink;
	bool _on;
	void Window_Timer(Win::Event& e);
	int alignment;
	void OnPaintControl(CG::Gdi& gdi);
};

#ifdef WIN_DAC_ADC_SUPPORT
//_____________________________________________________________________ SignalView
// It display signals from the DAC or the ADC
class SignalView : public Win::Control
{
public:
	SignalView();
	virtual ~SignalView();
	//_______________________________________________________________________ Ch1Color
	COLORREF GetCh1Color();
	virtual void SetCh1Color(COLORREF color);
	__declspec(property(get=GetCh1Color, put=SetCh1Color)) COLORREF Ch1Color;
	//_______________________________________________________________________ Ch2Color
	COLORREF GetCh2Color();
	virtual void SetCh2Color(COLORREF color);
	__declspec(property(get=GetCh2Color, put=SetCh2Color)) COLORREF Ch2Color;
	//
	void SetToZero(void);
	bool IsEvent(Win::Event& e, int notification);

	// Call this function to update the signals on the control
	void RefreshFromDAC(WAVEHDR* waveHdr, unsigned int numbChannels, unsigned int bitsResolution);

	// Call this function to update the signals on the control
	void RefreshFromADC(WAVEHDR* waveHdr, unsigned int numbChannels, unsigned int bitsResolution);

protected:
	void OnData(WAVEHDR* waveHdr, unsigned int numbChannels, unsigned int bitsResolution, unsigned int numSamples);
	void OnPaintControl(CG::Gdi& gdi);
	POINT* _ptLeft;
	POINT* _ptRight;
	unsigned int _pointCount;
	int _maxLeft;
	int _maxRight;
	int _bitsResolution;
};
#endif

//_____________________________________________________________________Graph
// An XY graph or polar graph to be use with the XyChart or PolarChart controls
class Graph
{
public:
	enum Type {dot = 0, line, cross, circle, square, histogram, impulse, number, fuzzy_set};
	Graph();
	virtual ~Graph();
	Graph(const Graph& init);
	Graph& operator=(const Graph& init);
	//
	COLORREF Color;
	//
	// Win::Graph::dot, Win::Graph::line, Win::Graph::cross, Win::Graph::circle, Win::Graph::square, Win::Graph::histogram, Win::Graph::impulse, Win::Graph::number
	Type Type;
	void SetGraphType(int graphType);
	int PenWidth;
	wstring Caption;
	virtual bool SetPointCount(int pointCount);
	int GetPointCount();
	void Delete();
	POINT* GetScreenPoints();
	CG::PointF* GetDataPoints();

	// Subscript operator
	CG::PointF& operator[](long index)
	{
		if (index<0 || index>=(long) m_nPointCount) throw out_of_range("Invalid index");
		return m_pDataPoints[index];
	}

	// Subscript operator
	const CG::PointF& operator[](long index) const
	{
		if (index<0 || index>=(long) m_nPointCount) throw out_of_range("Invalid index");
		return m_pDataPoints[index];
	}
	CG::PointF& Get(long index);

	// It sets the value of the point specified by index with the values of "x" and "y"
	void Set(long index, double x, double y);

	// It sets the points of the graph using the values of "x" and "y". numbValues indicates the number of values in "x" and "y"
	void SetData(double* x, double* y, int numbValues);

	// It sets the points of the graph using the values  "y". numbValues indicates the number of values in "y". 
	// "x" is assumed to be 1, 2, 3, ...
	void SetData(double* y, int numbValues);

	// It sets the points of the graph using the values of "x" and "y"
	void SetData(const valarray<double>& x, const valarray<double>& y);

	// It sets the points of the graph using the values of "x" and "y"
	void SetData(const vector<double>& x, const vector<double>& y);

	double GetMinX();
	double GetMaxX();
	double GetMinY();
	double GetMaxY();
	bool DownSample(int newLength);
	int GetToolTipText(const POINT& pt, wchar_t* text, int textLength, bool polar);
	//____________________________________ You can use this to Save and Load the Graph
	bool Save(Sys::File& file);
	bool Load(Sys::File& file);
protected:
	double ConvertToDegrees(double radians);
	void Contruction(void);
	void Copy(const Graph& init);
	POINT *m_pScreenPoints;
	CG::PointF *m_pDataPoints;
	int m_nPointCount;
};

//_____________________________________________________________________ GraphCollection
class GraphCollection
{
public:
	GraphCollection();
	~GraphCollection();

	// It adds a new graph and returns the number of graphs
	int Add(int graphPointCount);

	// It adds a new graph based on the value of x and y, both vectors must have the same size
	// The function returns the number of graphs
	int Add(const valarray<double>& x, const valarray<double>& y);

	// It adds a new graph based on the value of x and y, both vectors must have the same size
	// The function returns the number of graphs
	int Add(const vector<double>& x, const vector<double>& y);

	// It adds a new graph and returns the number of graphs
	int Add();

	void Delete(long index);
	void DeleteAll();
	Win::Graph& operator[](long index);
	//_______________________________________________ Count
	void SetCount(int count);
	int GetCount();
	__declspec( property( get=GetCount, put=SetCount) ) int Count;
	vector<Win::Graph> _data;
	//____________________________________ You can use this to Save and Load the GraphCollection
	bool Save(Sys::File& file);
	bool Load(Sys::File& file);
};

//_____________________________________________________________________  GraphSetupDlg.h
// It provides a graphic user interface to configure an XyChart control
class GraphSetupDlg: public Win::Dialog
{
public:
	GraphSetupDlg()
	{
		minX = 0.0;
		maxX = 0.0;
		minY = 0.0;
		maxY = 0.0;
		ticksX = 0;
		ticksY = 0;
		isLogX = false;
		isLogY = false;
		colorMode = WIN_COLOR_MODE_NORMAL;
		showGrid = true;
	}
	~GraphSetupDlg()
	{
	}
	int ticksX;
	int ticksY;
	double minX;
	double maxX;
	double minY;
	double maxY;
	bool isLogX;
	bool isLogY;
	int colorMode;
	bool showGrid;
private:
	//____________________________________ Wintempla GUI manager section begin
	Win::Button gboxX;
	Win::Label lb1;
	Win::Label lb2;
	Win::Textbox tbxMinX;
	Win::Textbox tbxMaxX;
	Win::Button ckAutoX;
	Win::Button gboxY;
	Win::Textbox tbxMinY;
	Win::Textbox tbxMaxY;
	Win::Button ckAutoY;
	Win::Button btOk;
	Win::Button btCancel;
	Win::Label lbMinY;
	Win::Label lbMaxY;
	Win::Button ckLogX;
	Win::Button ckLogY;
	Win::Label lbTicks;
	Win::Textbox tbxTicksX;
	Win::Spin spnTicksX;
	Win::Label lb6;
	Win::Textbox tbxTicksY;
	Win::Spin spnTicksY;
	Win::Button gbox3;
	Win::Button radioColor;
	Win::Button radioBlackAndWhite;
	Win::Button radioDark;
	Win::Button ckGrid;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx=Sys::Convert::CentimetersToDlgUnitX(11.94153);
		dlgTemplate.cy=Sys::Convert::CentimetersToDlgUnitY(7.83167);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"Graph Setup";
		gboxX.CreateX(WS_EX_TRANSPARENT, L"X", WS_CHILD | WS_VISIBLE | BS_GROUPBOX, 0.19403, 0.17639, 4.69194, 4.30389, hWnd, 1000);
		lb1.CreateX(NULL, L"Minimum", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.40569, 0.72319, 2.11667, 0.45861, hWnd, 1001);
		lb2.CreateX(NULL, L"Maximum", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.40569, 1.39347, 2.02847, 0.59972, hWnd, 1002);
		tbxMinX.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 2.55764, 0.72319, 2.01083, 0.52917, hWnd, 1003);
		tbxMaxX.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 2.55764, 1.35819, 2.01083, 0.52917, hWnd, 1004);
		ckAutoX.CreateX(NULL, L"Auto Set", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_AUTOCHECKBOX | BS_LEFT | BS_VCENTER, 0.40569, 2.04611, 2.09903, 0.54681, hWnd, 1005);
		gboxY.CreateX(WS_EX_TRANSPARENT, L"Y", WS_CHILD | WS_VISIBLE | BS_GROUPBOX, 5.09764, 0.17639, 4.67431, 4.26861, hWnd, 1006);
		tbxMinY.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 7.44361, 0.72319, 1.97556, 0.52917, hWnd, 1007);
		tbxMaxY.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 7.44361, 1.35819, 1.97556, 0.52917, hWnd, 1008);
		ckAutoY.CreateX(NULL, L"Auto Set", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_AUTOCHECKBOX | BS_LEFT | BS_VCENTER, 5.30931, 2.04611, 2.09903, 0.54681, hWnd, 1009);
		btOk.CreateX(NULL, L"OK", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_DEFPUSHBUTTON | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 9.93069, 0.24694, 1.88736, 0.59972, hWnd, 1010);
		btCancel.CreateX(NULL, L"Cancel", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 9.93069, 0.97014, 1.88736, 0.59972, hWnd, 1011);
		lbMinY.CreateX(NULL, L"Minimum", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 5.30931, 0.72319, 2.11667, 0.45861, hWnd, 1012);
		lbMaxY.CreateX(NULL, L"Maximum", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 5.30931, 1.39347, 2.02847, 0.59972, hWnd, 1013);
		ckLogX.CreateX(NULL, L"Logarithmic", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_AUTOCHECKBOX | BS_LEFT | BS_VCENTER, 0.40569, 2.64583, 3.03389, 0.54681, hWnd, 1014);
		ckLogY.CreateX(NULL, L"Logarithmic", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_AUTOCHECKBOX | BS_LEFT | BS_VCENTER, 5.30931, 2.64583, 3.03389, 0.54681, hWnd, 1015);
		lbTicks.CreateX(NULL, L"Ticks", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.40569, 3.56306, 2.01083, 0.52917, hWnd, 1016);
		tbxTicksX.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_NUMBER | ES_LEFT | ES_WINNORMALCASE, 2.55764, 3.49250, 1.69333, 0.52917, hWnd, 1017);
		spnTicksX.CreateX(NULL, NULL, WS_CHILD | WS_VISIBLE | UDS_ALIGNRIGHT | UDS_ARROWKEYS | UDS_SETBUDDYINT | UDS_WINVERT, 4.00403, 3.49250, 0.56444, 0.52917, hWnd, 1018);
		lb6.CreateX(NULL, L"Ticks", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 5.36222, 3.56306, 2.01083, 0.52917, hWnd, 1019);
		tbxTicksY.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_NUMBER | ES_LEFT | ES_WINNORMALCASE, 7.51417, 3.49250, 1.69333, 0.52917, hWnd, 1020);
		spnTicksY.CreateX(NULL, NULL, WS_CHILD | WS_VISIBLE | UDS_ALIGNRIGHT | UDS_ARROWKEYS | UDS_SETBUDDYINT | UDS_WINVERT, 8.96056, 3.49250, 0.56444, 0.52917, hWnd, 1021);
		gbox3.CreateX(WS_EX_TRANSPARENT, L"Appearance", WS_CHILD | WS_VISIBLE | BS_GROUPBOX, 0.14111, 4.67431, 4.74486, 3.03389, hWnd, 1022);
		radioColor.CreateX(NULL, L"Color", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_AUTORADIOBUTTON | BS_LEFT | BS_VCENTER, 0.38806, 5.16819, 2.92806, 0.54681, hWnd, 1023);
		radioBlackAndWhite.CreateX(NULL, L"Black and White", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_AUTORADIOBUTTON | BS_LEFT | BS_VCENTER, 0.38806, 5.75028, 2.92806, 0.54681, hWnd, 1024);
		radioDark.CreateX(NULL, L"Dark", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_AUTORADIOBUTTON | BS_LEFT | BS_VCENTER, 0.38806, 6.35000, 2.92806, 0.54681, hWnd, 1025);
		ckGrid.CreateX(NULL, L"Grid", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_AUTOCHECKBOX | BS_LEFT | BS_VCENTER, 0.38806, 6.98500, 2.92806, 0.54681, hWnd, 1026);
		this->SetDefaultButton(btOk);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		gboxX.Font = fontArial009A;
		lb1.Font = fontArial009A;
		lb2.Font = fontArial009A;
		tbxMinX.Font = fontArial009A;
		tbxMaxX.Font = fontArial009A;
		ckAutoX.Font = fontArial009A;
		gboxY.Font = fontArial009A;
		tbxMinY.Font = fontArial009A;
		tbxMaxY.Font = fontArial009A;
		ckAutoY.Font = fontArial009A;
		btOk.Font = fontArial009A;
		btCancel.Font = fontArial009A;
		lbMinY.Font = fontArial009A;
		lbMaxY.Font = fontArial009A;
		ckLogX.Font = fontArial009A;
		ckLogY.Font = fontArial009A;
		lbTicks.Font = fontArial009A;
		tbxTicksX.Font = fontArial009A;
		lb6.Font = fontArial009A;
		tbxTicksY.Font = fontArial009A;
		gbox3.Font = fontArial009A;
		radioColor.Font = fontArial009A;
		radioBlackAndWhite.Font = fontArial009A;
		radioDark.Font = fontArial009A;
		ckGrid.Font = fontArial009A;
	}
	//_________________________________________________
	void ckAutoX_Click(Win::Event& e);
	void ckAutoY_Click(Win::Event& e);
	void btOk_Click(Win::Event& e);
	void btCancel_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (ckAutoX.IsEvent(e, BN_CLICKED)) { ckAutoX_Click(e); return true; }
		if (ckAutoY.IsEvent(e, BN_CLICKED)) { ckAutoY_Click(e); return true; }
		if (btOk.IsEvent(e, BN_CLICKED)) { btOk_Click(e); return true; }
		if (btCancel.IsEvent(e, BN_CLICKED)) { btCancel_Click(e); return true; }
		return false;
	}
};

//_____________________________________________________________________ XyChart
// It displays one or more XY graphs.  It works together with the Win::Graph class.
// You can override OnPaintScaleX and OnPaintScaleY
class XyChart : public Win::Control
{
public:
	XyChart(void);
	virtual ~XyChart(void);
	//
	Win::GraphCollection Graphs;
	//
	void SetShowGrid(bool showGrid);
	bool GetShowGrid();
	__declspec( property( get=GetShowGrid, put=SetShowGrid ) ) bool ShowGrid;
	//
	void SetMinX(double minimum);
	double GetMinX();
	__declspec( property( get=GetMinX, put=SetMinX ) ) double MinX;
	//
	void SetMaxX(double maximum);
	double GetMaxX();
	__declspec( property( get=GetMaxX, put=SetMaxX ) ) double MaxX;
	//
	void SetMinY(double minimum);
	double GetMinY();
	__declspec( property( get=GetMinY, put=SetMinY ) ) double MinY;
	//
	void SetMaxY(double maximum);
	double GetMaxY();
	__declspec( property( get=GetMaxY, put=SetMaxY ) ) double MaxY;
	//
	bool SetDivisionCountX(int count);
	int GetDivisionCountX();
	__declspec( property( get=GetDivisionCountX, put=SetDivisionCountX ) ) int DivisionCountX;
	//
	bool SetDivisionCountY(int count);
	int GetDivisionCountY();
	__declspec( property( get=GetDivisionCountY, put=SetDivisionCountY ) ) int DivisionCountY;
	//
	bool SetSubDivisionCountX(int count);
	int GetSubDivisionCountX();
	__declspec( property( get=GetSubDivisionCountX, put=SetSubDivisionCountX ) ) int SubDivisionCountX;
	//
	bool SetSubDivisionCountY(int count);
	int GetSubDivisionCountY();
	__declspec( property( get=GetSubDivisionCountY, put=SetSubDivisionCountY ) ) int SubDivisionCountY;
	//
	void SetCaptionX(const wstring& caption);
	wstring& GetCaptionX();
	__declspec( property( get=GetCaptionX, put=SetCaptionX ) ) wstring& CaptionX;
	//
	void SetCaptionY(const wstring& caption);
	wstring& GetCaptionY();
	__declspec( property( get=GetCaptionY, put=SetCaptionY ) ) wstring& CaptionY;
	//
	void SetLogScaleX(bool logScale);
	bool GetLogScaleX();
	__declspec( property( get=GetLogScaleX, put=SetLogScaleX ) ) bool LogScaleX;
	//
	void SetLogScaleY(bool logScale);
	bool GetLogScaleY();
	__declspec( property( get=GetLogScaleY, put=SetLogScaleY ) ) bool LogScaleY;
	//
	void SetSubgridColor(COLORREF color);
	COLORREF GetSubgridColor();
	__declspec( property( get=GetSubgridColor, put=SetSubgridColor ) ) COLORREF SubgridColor;
	//
	void SetSymbolCaption(bool captionX, bool captionY);
	//
	void AutoScaleX(bool bestView);
	void AutoScaleY(bool bestView);
	//
	void SetFormat(const wchar_t* formatX, const wchar_t* formatY);
	void SetCommaSeparatedFormat(bool useCommaX, bool useCommaY);
	void RefreshGraphArea();
	void RefreshAll();
	void RefreshGraphCaption();
	double TransformFromScreenCoordinatesX(int x);
	double TransformFromScreenCoordinatesY(int y);
	bool Setup();
	//____________________________________________________ IExportable
	void OnPaintControl(CG::IGdi& gdi);
	bool IsEvent(Win::Event& e, int notification);
	//____________________________________ You can use this to Save and Load the control
	bool Save(const wchar_t* filename);
	bool Load(const wchar_t* filename);
	//
	void ChooseSave(const wchar_t* workingFolder);
protected:
	//
	void FormatLog(wchar_t* buffer, size_t bufferSize, double value);
	bool _isCtrlKeyPressed; // To provide copy through Ctrl-C, and zoom through Ctrl-Arrow Keys
	POINT _mousePosition;
	HCURSOR _hCursor;
	bool _lbuttonDown;
	Win::Label labelTooltip;
	virtual void Window_LButtonDown(Win::Event& e);
	virtual void Window_LButtonUp(Win::Event& e);
	virtual void Window_RButtonDown(Win::Event& e);
	virtual void Window_MouseWheel(Win::Event& e);
	virtual void Window_MouseMove(Win::Event& e);
	virtual void Window_GetDlgCode(Win::Event& e); // So that we can accept the arrow keys
	virtual void Window_KeyDown(Win::Event& e);
	virtual void Window_KeyUp(Win::Event& e);
	virtual void Window_Open(Win::Event& e);
	//
	void OnSizePrivate(void);
	virtual void OnPaintScaleX(CG::IGdi& gdi, int index, double delta, double value);
	virtual void OnPaintScaleY(CG::IGdi& gdi, int index, double delta, double value);
	virtual void DrawGraph(CG::IGdi& gdi, int graphIndex);
	double _originX;
	double _originY;
	RECT _rcMain;
	int TransformToScreenCoordinatesX(double x)
	{
		return (int)((x - _minX)* _scaleX + _originX+0.5);
	}
	int TransformToScreenCoordinatesY(double y)
	{
		return (int)((y - _minY)* _scaleY +  _originY+0.5);
	}
private:
	bool _useCommaX;
	bool _useCommaY;
	
	//_________________ The actual graph limits in X and Y
	double _minX;
	double _maxX;
	double _minY;
	double _maxY;
	//_________________ They are used to be able to reset the limits using the context menu 
	double _minXCopy;
	double _maxXCopy;
	double _minYCopy;
	double _maxYCopy;
	void ResetPosition();
	//_________________ They are used to round to powers of 10 in log scale
	static double LogRoundUp(double input);
	static double LogRoundDown(double input);
	//__________________________________
	double _scaleX;
	double _scaleY;
	double _boxCaptionHeight;
	wstring _captionX;
	wstring _captionY;
	wchar_t _formatX[8];
	wchar_t _formatY[8];
	int _divCountX;
	int _divCountY;
	int _subDivCountX;
	int _subDivCountY;
	bool _isLogX;
	bool _isLogY;
	bool _showGrid;
	bool _symbolCaptionX;
	bool _symbolCaptionY;
	void PaintCaptionX(CG::IGdi& gdi);
	void PaintCaptionY(CG::IGdi& gdi);
	void PaintScaleX(CG::IGdi& gdi, double deltaX);
	void PaintScaleY(CG::IGdi& gdi, double deltaY);
	void PaintDivX(CG::IGdi& gdi);
	void PaintDivY(CG::IGdi& gdi);
	void PaintSubDivX(CG::IGdi& gdi);
	void PaintSubDivY(CG::IGdi& gdi);
	void PaintMarksX(CG::IGdi& gdi, int fontHeight);
	void PaintMarksY(CG::IGdi& gdi, int fontHeight);
	void PaintGraphs(CG::IGdi& gdi);
	bool ChoosePropColor(COLORREF& color);
	bool ChooseGraphColor(int graph_cmd_id);
	bool EventHandler(Win::Event& e);
};

//_____________________________________________________________________ PolarChart
// It displays one or more polar graphs. It works together with the Win::Graph class.
// The value of X in the graph represents the angle in radians
// The value of Y in the graph represents the radius
class PolarChart : public Win::Control
{
public:
	PolarChart(void);
	virtual ~PolarChart(void);
	//
	bool SetRadiusDivisionCount(int count);
	int GetRadioDivisionCount();
	__declspec( property( get=GetRadioDivisionCount, put=SetRadioDivisionCount ) ) int RadioDivisionCount;
	//
	Win::GraphCollection Graphs;
	//
	//You can overwrite this function to change the Radius scale
	virtual void OnPaintScaleR(CG::IGdi& gdi, POINT center, double value);
	void OnPaintControl(CG::IGdi& gdi);
	void SetRadius(double minimum, double maximum);
	void AutoScaleMinimumRadius();
	void AutoScaleMaximumRadius();
	//
	void SetSubgridColor(COLORREF color);
	COLORREF GetSubgridColor();
	__declspec( property( get=GetSubgridColor, put=SetSubgridColor ) ) COLORREF SubgridColor;
	//
	void SetShowSubgrid(bool showSubgrid);
	bool GetShowSubgrid();
	__declspec( property( get=GetShowSubgrid, put=SetShowSubgrid ) ) bool ShowSubgrid;
	//
	void Refresh();
	//____________________________________ You can use this to Save and Load the control
	bool Save(const wchar_t* filename);
	bool Load(const wchar_t* filename);
	void ChooseSave(const wchar_t* workingFolder);
protected:
	virtual void Window_Open(Win::Event& e);
	void Window_RButtonDown(Win::Event& e);
	void Window_MouseMove(Win::Event& e);
	void OnSizePrivate(void);
	void PaintGraphs(CG::IGdi& gdi);
	virtual void DrawGraph(CG::IGdi& gdi, int graphIndex);
	int Line(CG::IGdi& gdi, double angle, int index, POINT* points);
	int ShortLine(CG::IGdi& gdi, double angle, int index, POINT* points);
	bool _subgrid;
	Win::Label labelTooltip;
private:
	int TransformToScreenCoordinatesX(double tetha, double r) 
	{
		r -= _minRadius;
		if (r>0)
			return (int)(r * _scale*cos(tetha) + _centerX+0.5);
		else
			return (int)(r * _scale*cos(tetha+M_PI)+ _centerX+0.5);
	}	
	int TransformToScreenCoordinatesY(double tetha, double r) 
	{
		r -= _minRadius;
		if (r>0)
			return (int)(-r* _scale*sin(tetha)+ _centerY+0.5);
		else
			return (int)(-r* _scale*sin(tetha+M_PI)+ _centerY+0.5);
	}
	double _scale, _centerX, _centerY, _maxRadius, _minRadius;
	int _divisionRCount;
	bool EventHandler(Win::Event& e);
	bool ChooseGraphColor(int graph_cmd_id);
};

//_____________________________________________________________________ View3DSetupDlg
// It provides an interactive method to setup the View3D control
class View3DSetupDlg: public Win::Dialog
{
public:
	View3DSetupDlg()
	{
		minX = 0.0;
		maxX = 0.0;
		minY = 0.0;
		maxY = 0.0;
		minZ = 0.0;
		maxZ = 0.0;
		ticksX = 0;
		ticksY = 0;
		ticksZ = 0;
	}
	~View3DSetupDlg()
	{
	}
	int ticksX;
	int ticksY;
	int ticksZ;
	double minX;
	double maxX;
	double minY;
	double maxY;
	double minZ;
	double maxZ;
private:
	//____________________________________ Wintempla GUI manager section begin
	Win::Button gboxX;
	Win::Label lb1;
	Win::Label lb2;
	Win::Textbox tbxMinX;
	Win::Textbox tbxMaxX;
	Win::Textbox tbxTicksX;
	Win::Button gboxY;
	Win::Textbox tbxMinY;
	Win::Textbox tbxMaxY;
	Win::Textbox tbxTicksY;
	Win::Button gbox3;
	Win::Textbox tbxMinZ;
	Win::Textbox tbxMaxZ;
	Win::Textbox tbxTicksZ;
	Win::Button btOk;
	Win::Button btCancel;
	Win::Label lbMinY;
	Win::Label lbMaxY;
	Win::Label lbTicks;
	Win::Spin spnTicksX;
	Win::Label lb6;
	Win::Spin spnTicksY;
	Win::Label lb7;
	Win::Label lb8;
	Win::Label lb9;
	Win::Spin spnTicksZ;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx=Sys::Convert::CentimetersToDlgUnitX(16.84514);
		dlgTemplate.cy=Sys::Convert::CentimetersToDlgUnitY(3.24556);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"Graph Setup";
		gboxX.CreateX(WS_EX_TRANSPARENT, L"X", WS_CHILD | WS_VISIBLE | BS_GROUPBOX, 0.19403, 0.17639, 4.69194, 2.94569, hWnd, 1000);
		lb1.CreateX(NULL, L"Minimum", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.40569, 0.77611, 2.11667, 0.45861, hWnd, 1001);
		lb2.CreateX(NULL, L"Maximum", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.40569, 1.51694, 2.02847, 0.59972, hWnd, 1002);
		tbxMinX.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 2.55764, 0.72319, 2.01083, 0.59972, hWnd, 1003);
		tbxMaxX.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 2.55764, 1.46403, 2.01083, 0.59972, hWnd, 1004);
		tbxTicksX.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_NUMBER | ES_LEFT | ES_WINNORMALCASE, 2.55764, 2.25778, 1.69333, 0.59972, hWnd, 1005);
		gboxY.CreateX(WS_EX_TRANSPARENT, L"Y", WS_CHILD | WS_VISIBLE | BS_GROUPBOX, 5.09764, 0.17639, 4.67431, 2.94569, hWnd, 1006);
		tbxMinY.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 7.44361, 0.72319, 1.97556, 0.59972, hWnd, 1007);
		tbxMaxY.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 7.44361, 1.46403, 1.97556, 0.59972, hWnd, 1008);
		tbxTicksY.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_NUMBER | ES_LEFT | ES_WINNORMALCASE, 7.51417, 2.25778, 1.69333, 0.59972, hWnd, 1009);
		gbox3.CreateX(WS_EX_TRANSPARENT, L"Z", WS_CHILD | WS_VISIBLE | BS_GROUPBOX, 9.98361, 0.17639, 4.67431, 2.94569, hWnd, 1010);
		tbxMinZ.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 12.32958, 0.72319, 1.97556, 0.59972, hWnd, 1011);
		tbxMaxZ.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 12.32958, 1.48167, 1.97556, 0.59972, hWnd, 1012);
		tbxTicksZ.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_NUMBER | ES_LEFT | ES_WINNORMALCASE, 12.40014, 2.27542, 1.69333, 0.59972, hWnd, 1013);
		btOk.CreateX(NULL, L"OK", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_DEFPUSHBUTTON | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 14.83431, 0.14111, 1.88736, 0.59972, hWnd, 1014);
		btCancel.CreateX(NULL, L"Cancel", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 14.83431, 0.86431, 1.88736, 0.59972, hWnd, 1015);
		lbMinY.CreateX(NULL, L"Minimum", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 5.30931, 0.77611, 2.11667, 0.45861, hWnd, 1016);
		lbMaxY.CreateX(NULL, L"Maximum", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 5.30931, 1.51694, 2.02847, 0.59972, hWnd, 1017);
		lbTicks.CreateX(NULL, L"Ticks", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.40569, 2.32833, 2.01083, 0.52917, hWnd, 1018);
		spnTicksX.CreateX(NULL, NULL, WS_CHILD | WS_VISIBLE | UDS_ALIGNRIGHT | UDS_ARROWKEYS | UDS_SETBUDDYINT | UDS_WINVERT, 4.00403, 2.25778, 0.56444, 0.52917, hWnd, 1019);
		lb6.CreateX(NULL, L"Ticks", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 5.36222, 2.32833, 2.01083, 0.52917, hWnd, 1020);
		spnTicksY.CreateX(NULL, NULL, WS_CHILD | WS_VISIBLE | UDS_ALIGNRIGHT | UDS_ARROWKEYS | UDS_SETBUDDYINT | UDS_WINVERT, 8.96056, 2.25778, 0.56444, 0.52917, hWnd, 1021);
		lb7.CreateX(NULL, L"Minimum", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 10.19528, 0.77611, 2.11667, 0.45861, hWnd, 1022);
		lb8.CreateX(NULL, L"Maximum", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 10.19528, 1.51694, 2.02847, 0.59972, hWnd, 1023);
		lb9.CreateX(NULL, L"Ticks", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 10.24819, 2.34597, 2.01083, 0.52917, hWnd, 1024);
		spnTicksZ.CreateX(NULL, NULL, WS_CHILD | WS_VISIBLE | UDS_ALIGNRIGHT | UDS_ARROWKEYS | UDS_SETBUDDYINT | UDS_WINVERT, 13.84653, 2.27542, 0.56444, 0.52917, hWnd, 1025);
		this->SetDefaultButton(btOk);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		gboxX.Font = fontArial009A;
		lb1.Font = fontArial009A;
		lb2.Font = fontArial009A;
		tbxMinX.Font = fontArial009A;
		tbxMaxX.Font = fontArial009A;
		tbxTicksX.Font = fontArial009A;
		gboxY.Font = fontArial009A;
		tbxMinY.Font = fontArial009A;
		tbxMaxY.Font = fontArial009A;
		tbxTicksY.Font = fontArial009A;
		gbox3.Font = fontArial009A;
		tbxMinZ.Font = fontArial009A;
		tbxMaxZ.Font = fontArial009A;
		tbxTicksZ.Font = fontArial009A;
		btOk.Font = fontArial009A;
		btCancel.Font = fontArial009A;
		lbMinY.Font = fontArial009A;
		lbMaxY.Font = fontArial009A;
		lbTicks.Font = fontArial009A;
		lb6.Font = fontArial009A;
		lb7.Font = fontArial009A;
		lb8.Font = fontArial009A;
		lb9.Font = fontArial009A;
	}
	//_________________________________________________
	void btOk_Click(Win::Event& e);
	void btCancel_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btOk.IsEvent(e, BN_CLICKED)) { btOk_Click(e); return true; }
		if (btCancel.IsEvent(e, BN_CLICKED)) { btCancel_Click(e); return true; }
		return false;
	}
};

//_____________________________________________________________________ View3D
// It displays a graphics in a 3D coordinate system
class View3D : public Win::Window, public Win::IExportableEx, public Win::IPrintElement
{
public:
	View3D(void);
	virtual ~View3D(void);
	//
	double TransformX(double gridValueX); // Returns the value of X using the scaling and translation of View3D
	double TransformY(double gridValueY); // Returns the value of Y using the scaling and translation of View3D
	double TransformZ(double gridValueZ); // Returns the value of Z using the scaling and translation of View3D
	double TransformToGridX(double x); // Returns the gridValueZ using the scaling and translation of View3D
	double TransformToGridY(double y); // Returns the gridValueZ using the scaling and translation of View3D
	double TransformToGridZ(double z); // Returns the gridValueZ using the scaling and translation of View3D
	//
	Sys::GraphicsX graphics;
	Sys::Point3D eye;
	//
	vector<Sys::Line3D> line;
	vector<Sys::Line3D> lineAntialising;
	vector<Sys::Triangle3D> triangle;
	vector<Sys::Triangle3D> triangleAntialising;
	vector<Sys::Triangle3D> triangleGouraud;
	vector<Sys::Grid> grid;
	//
	void SetLine(Sys::Line3D& line, float x1, float y1, float z1, float x2, float y2, float z2, COLORREF color); // Just to help on setting a line
	//
	//This function will not work, if it is called from Window_Open
	void SetCenter(double centerX, double centerY);
	void GetCenter(double& centerX, double& centerY);
	//
	void SetCaptionX(const wchar_t* caption, bool isFontSymbol);
	void SetCaptionY(const wchar_t* caption, bool isFontSymbol);
	void SetCaptionZ(const wchar_t* caption, bool isFontSymbol);
	//
	COLORREF GetBackColor();
	virtual void SetBackColor(COLORREF color);
	__declspec( property( get=GetBackColor, put=SetBackColor ) ) COLORREF BackColor;
	//
	COLORREF GetLineColor();
	virtual void SetLineColor(COLORREF color);
	__declspec( property( get=GetLineColor, put=SetLineColor ) ) COLORREF LineColor;
	//
	void SetGridColor(COLORREF color);
	COLORREF GetGridColor();
	__declspec( property( get=GetGridColor, put=SetGridColor ) ) COLORREF GridColor;
	//
	COLORREF GetTextColor();
	virtual void SetTextColor(COLORREF color);
	__declspec( property( get=GetTextColor, put=SetTextColor ) ) COLORREF TextColor;
	//
	virtual void SetFont(Win::Gdi::Font& font);
	__declspec( property( put=SetFont) ) Win::Gdi::Font& Font;
	//
	void GetLogfont(LOGFONT& logfont);
	//
	void SetZoom(double zoom);
	double GetZoom(void);
	__declspec( property( get=GetZoom, put=SetZoom ) ) double Zoom;
	//
	void SetAngle(double angleDegrees);
	double GetAngle(void);
	__declspec( property( get=GetAngle, put=SetAngle ) ) double Angle;
	//
	void SetShowBackAxis(bool show);
	bool GetShowBackAxis(void);
	__declspec( property( get=GetShowBackAxis, put=SetShowBackAxis ) ) bool ShowBackAxis;
	//
	void SetShowFrontAxis(bool show);
	bool GetShowFrontAxis(void);
	__declspec( property( get=GetShowFrontAxis, put=SetShowFrontAxis ) ) bool ShowFrontAxis;
	//
	void SetShowDivX(bool show);
	bool GetShowDivX(void);
	__declspec( property( get=GetShowDivX, put=SetShowDivX ) ) bool ShowDivX;
	//
	void SetShowDivY(bool show);
	bool GetShowDivY(void);
	__declspec( property( get=GetShowDivY, put=SetShowDivY ) ) bool ShowDivY;
	//
	void SetShowDivZ(bool show);
	bool GetShowDivZ(void);
	__declspec( property( get=GetShowDivZ, put=SetShowDivZ ) ) bool ShowDivZ;
	//
	void SetElevation(double angleDegrees);
	double GetElevation(void);
	__declspec( property( get=GetElevation, put=SetElevation ) ) double Elevation;
	//
	void SetMinX(double minimum);
	double GetMinX();
	__declspec( property( get=GetMinX, put=SetMinX ) ) double MinX;
	//
	void SetMaxX(double maximum);
	double GetMaxX();
	__declspec( property( get=GetMaxX, put=SetMaxX ) ) double MaxX;
	//
	void SetMinY(double minimum);
	double GetMinY();
	__declspec( property( get=GetMinY, put=SetMinY ) ) double MinY;
	//
	void SetMaxY(double maximum);
	double GetMaxY();
	__declspec( property( get=GetMaxY, put=SetMaxY ) ) double MaxY;
	//
	void SetMinZ(double minimum);
	double GetMinZ();
	__declspec( property( get=GetMinZ, put=SetMinZ ) ) double MinZ;

	// numColors =  2: Blue  > Cyan
	// numColors =  3: Blue  > Cyan > Green 
	// numColors =  4: Blue  > Cyan > Green > Yellow
	// numColors =  5: Blue  > Cyan > Green > Yellow > Red
	// numColors =  6: Blue  > Cyan > Green > Yellow > Red > Purple
	// numColors =  7: Blue  > Cyan > Green > Yellow > Red > Purple > Black
	COLORREF GetZColor(double z, int numColors);
	//
	void SetMaxZ(double maximum);
	double GetMaxZ();
	__declspec( property( get=GetMaxZ, put=SetMaxZ ) ) double MaxZ;
	//
	void Setup(double minX, double maxX, double minY, double maxY, double minZ, double maxZ);
	//
	void SetDivisionCountX(int count);
	int GetDivisionCountX();
	__declspec( property( get=GetDivisionCountX, put=SetDivisionCountX ) ) int DivisionCountX;
	//
	void SetDivisionCountY(int count);
	int GetDivisionCountY();
	__declspec( property( get=GetDivisionCountY, put=SetDivisionCountY ) ) int DivisionCountY;
	//
	void SetDivisionCountZ(int count);
	int GetDivisionCountZ();
	__declspec( property( get=GetDivisionCountZ, put=SetDivisionCountZ ) ) int DivisionCountZ;
	//
	void ResetView(bool resetZoom);
	virtual void OnPaint3D(CG::IGdi& gdi); //Override this function
	//
	void Transform(const vector<Sys::Line3D>& input, __int8 type, vector<Sys::Object3DInfo>& output, int& index);
	void Transform(const vector<Sys::Triangle3D>& input, __int8 type, vector<Sys::Object3DInfo>& output, int& index);
	void Transform(const  Sys::Grid& input, vector<Sys::Object3DInfo>& output, int& index);
	//
	// It modifies: input
	void TransformToGrid(Sys::Point3D* input, POINT* output, const int count);
	void Transform(Sys::Point3D* input, POINT* output, const int count);
	void Transform(Sys::Point3D* input, Sys::Point* output, const int count);
	void Transform(Sys::Point3D* input, Sys::Point16* output, const int count);
	//
	static void ConvertFromSphericalToCartesian(Sys::SphericalPoint* input, Sys::Point3D* output, const int count);
	bool IsEvent(Win::Event& e, int notification);
	//____________________________________________________ IExportableEx
	void OnPaintControl(CG::IGdi& gdi);
	void OnPaintControl(CG::Gdi& gdi);
	//
	void GetControlSize(int& width, int&height);
	void SetControlSize(int width, int height);
	//
	int GetLineWidth();
	void SetLineWidth(int lineWidth);
	//
	void SetFont(HFONT hfont);
	HFONT GetFont();
	//____________________________________________________ IPrintElement
	int GetElementCount(const Win::PrintDocInfo& pdi, int element_width_millicm, int element_height_millicm);
	void OnPrintPartBegin(CG::Gdi& gdi, const Win::PrintDocInfo& pdi, int element_width_millicm, int element_height_millicm);
	void OnPrintElement(CG::Gdi& gdi, const Win::PrintDocInfo& pdi, const Win::PrintElementInfo& pei);
	void OnPrintPartEnd(CG::Gdi& gdi, const Win::PrintDocInfo& pdi);
	//
	void Print();
	bool SaveEmf(const wchar_t* fileName);
	bool CopyToBitmap(int width, int height, bool clientEdge, CG::DDBitmap& result);
	bool CopyToClipboard();
	bool Setup();
protected:
	void Window_Paint(Win::Event& e);
	void Window_Size(Win::Event& e);
	void Window_Open(Win::Event& e);
	void Window_KeyDown(Win::Event& e);
	void Window_HScroll(Win::Event& e);
	void Window_VScroll(Win::Event& e);
	void Window_LButtonDown(Win::Event& e);
	void Window_RButtonDown(Win::Event& e);
	void Window_LButtonUp(Win::Event& e);
	void Window_MouseMove(Win::Event& e);
	void Window_MouseWheel(Win::Event& e);
	void Window_GetDlgCode(Win::Event& e);
	virtual void Window_SetFocus(Win::Event& e);
	virtual void Window_KillFocus(Win::Event& e);
	const wchar_t * GetClassName(void){return L"VIEW3D";}
	void OnSizePrivate(void);
	bool EventHandler(Win::Event& e);
	bool ChoosePropColor(COLORREF& color);
	//
	//Sys::Axis axis;
	wstring _captionX;
	wstring _captionY;
	wstring _captionZ;
	bool _isCaptionXSymbol;
	bool _isCaptionYSymbol;
	bool _isCaptionZSymbol;
	COLORREF _backColor;
	COLORREF _lineColor;
	COLORREF _gridColor;
	COLORREF _textColor;
	HFONT _hfont;
	int _fontHeight;
	float _angle;
	float _sinAngle;
	float _cosAngle;
	float _zoom;
	float _centerX;
	double _centerY;
	float _elevation;
	float _cosElevation;
	float _sinElevation;
	double _minX;
	double _maxX;
	double _minY;
	double _maxY;
	double _minZ;
	double _maxZ;
	double _deltaX;
	double _deltaY;
	double _deltaZ;
	int _divCountX;
	int _divCountY;
	int _divCountZ;
	bool _showBackAxis;
	bool _showFrontAxis;
	bool _showDivX;
	bool _showDivY;
	bool _showDivZ;
	int _deltaWheelPerLine, _accumWheelDelta;
	bool _hasFocus;
	bool _lbuttonDown;
	POINT _mousePosition;
	HCURSOR _hCursor;
	HWND _hWndParent;
private:
	static bool _bRegistered;
};

class BarChart;
class BarCollection;

//_____________________________________________________________________ Bar
class Bar
{
public:
	Bar();
	~Bar();
	//
	COLORREF GetColor();
	virtual void SetColor(COLORREF color);
	__declspec( property( get=GetColor, put=SetColor ) ) COLORREF Color;
	//
	double GetValue();
	virtual void SetValue(double value);
	__declspec( property( get=GetValue, put=SetValue ) ) double Value;
	//
	wstring GetText();
	virtual void SetText(wstring text);
	__declspec( property( get=GetText, put=SetText ) ) wstring Text;
	//
	bool operator<(const Win::Bar& bar) const;
private:
	double _value;
	wstring _text;
	COLORREF _color;
	int _index;
	//
	HWND barchart;
	Win::BarChart * barChart;
	friend class BarChart;
	friend class BarCollection;
};

//_____________________________________________________________________ BarCollection
class BarCollection
{
public:
	BarCollection();
	~BarCollection();
	void Add(const wstring& text, COLORREF color, double value);
	void DeleteAll();
	//
	Win::Bar& operator[](long index);
	//
	int GetCount();
	__declspec( property( get=GetCount) ) int Count; 
private:
	vector<Bar> _bars;
	Win::BarChart * barChart;
	friend class BarChart;
};

//_____________________________________________________________________ BarChart
// A classic bar chart
class BarChart : public Win::Control
{
public:
	BarChart(void);
	virtual ~BarChart(void);
	//_____________________________________________________ DivYCount
	void SetDivYCount(int count);
	int GetDivYCount();
	__declspec( property( get=GetDivYCount, put=SetDivYCount ) ) int DivYCount;
	//_____________________________________________________ MaxY
	void SetMaxY(double value);
	double GetMaxY();
	__declspec( property( get=GetMaxY, put=SetMaxY ) ) double MaxY;
	//_____________________________________________________ MinY
	void SetMinY(double value);
	double GetMinY();
	__declspec( property( get=GetMinY, put=SetMinY ) ) double MinY;
	//_____________________________________________________ Autoscale
	void SetAutoscale(bool autoscale);
	bool GetAutoscale();
	__declspec( property( get=GetAutoscale, put=SetAutoscale ) ) bool Autoscale;
	//
	bool IsEvent(Win::Event& e, int notification);
	void Refresh();
	//
	Win::BarCollection& GetBars();
	__declspec( property( get=GetBars) ) Win::BarCollection& Bars;
	//
	void UpdateBar(int index);
	void UpdateBarText(int index);
	void UpdateBarValues();
	//
	void OnPaintControl(CG::IGdi& gdi);
private:
	Win::BarCollection _bars;
	//
	RECT _box;
	int _divCount;
	RECT _rectCaptionX;
	RECT _rectCaptionY;
	double _deltaX;
	double _deltaY;
	double _scaleY;
	double _barWidth;
	
	double _maxValue;
	double _minValue;
protected:
	bool m_bTickX;
	bool _autoscale;
	void OnSizePrivate(void);
};

//_____________________________________________________________________ ColorMap
// A X-Y-Z graph where the Z axis is displayed using different colors.  See documentation Wintempla > Graphics > Dynamic Bitmap
class ColorMap : public Win::Control
{
public:
	ColorMap(void);
	virtual ~ColorMap(void);
	//
	// See documentation Wintempla > Graphics > Dynamic Bitmap
	void SetDataProvider(Sys::IColorMapDataProvider* colorMapDataProvider);
	//_____________________________________________________ PixelsResolutionX
	void SetPixelsResolutionX(int numPixels);
	int GetPixelsResolutionX();
	__declspec(property(get=GetPixelsResolutionX, put=SetPixelsResolutionX)) int PixelsResolutionX;
	//_____________________________________________________ PixelsResolutionY
	void SetPixelsResolutionY(int numPixels);
	int GetPixelsResolutionY();
	__declspec(property(get=GetPixelsResolutionY, put=SetPixelsResolutionY)) int PixelsResolutionY;
	//_____________________________________________________ DivXCount
	void SetDivXCount(int count);
	int GetDivXCount();
	__declspec( property( get=GetDivXCount, put=SetDivXCount ) ) int DivXCount;
	//_____________________________________________________ MaxX
	void SetMaxX(double value);
	double GetMaxX();
	__declspec( property( get=GetMaxX, put=SetMaxX ) ) double MaxX;
	//_____________________________________________________ MinX
	void SetMinX(double value);
	double GetMinX();
	__declspec( property( get=GetMinX, put=SetMinX ) ) double MinX;
	//_____________________________________________________ DivYCount
	void SetDivYCount(int count);
	int GetDivYCount();
	__declspec( property( get=GetDivYCount, put=SetDivYCount ) ) int DivYCount;
	//_____________________________________________________ MaxY
	void SetMaxY(double value);
	double GetMaxY();
	__declspec( property( get=GetMaxY, put=SetMaxY ) ) double MaxY;
	//_____________________________________________________ MinY
	void SetMinY(double value);
	double GetMinY();
	__declspec( property( get=GetMinY, put=SetMinY ) ) double MinY;
	//_____________________________________________________ DivZCount
	void SetDivZCount(int count);
	int GetDivZCount();
	__declspec( property( get=GetDivZCount, put=SetDivZCount ) ) int DivZCount;
	//_____________________________________________________ MaxZ
	void SetMaxZ(double value);
	double GetMaxZ();
	__declspec( property( get=GetMaxZ, put=SetMaxZ ) ) double MaxZ;
	//_____________________________________________________ MinZ
	void SetMinZ(double value);
	double GetMinZ();
	__declspec( property( get=GetMinZ, put=SetMinZ ) ) double MinZ;
	//_____________________________________________________ ShowAxis
	void SetShowAxis(bool showAxis);
	bool GetShowAxis();
	__declspec(property(get=GetShowAxis, put=SetShowAxis)) bool ShowAxis;
	//_____________________________________________________ NumColors
	// numColors =  2: Blue  > Cyan
	// numColors =  3: Blue  > Cyan > Green 
	// numColors =  4: Blue  > Cyan > Green > Yellow
	// numColors =  5: Blue  > Cyan > Green > Yellow > Red
	// numColors =  6: Blue  > Cyan > Green > Yellow > Red > Purple
	// numColors =  7: Blue  > Cyan > Green > Yellow > Red > Purple > Black
	void SetNumColors(int numColors);
	int GetNumColors();
	__declspec(property(get=GetNumColors, put=SetNumColors)) int NumColors;
	//_____________________________________________________ Caption
	void SetCaptionX(const wchar_t* caption, bool isSymbol);
	void SetCaptionY(const wchar_t* caption, bool isSymbol);
	void SetCaptionZ(const wchar_t* caption, bool isSymbol);
	
	void Setup(double minX, double maxX, double minY, double maxY, double minZ, double maxZ);
	//
	bool IsEvent(Win::Event& e, int notification);
	void Refresh();
	//
	void OnPaintControl(CG::Gdi& gdi);
	bool EventHandler(Win::Event& e);
protected:
	Sys::IColorMapDataProvider* _colorMapDataProvider;
	Sys::Graphics graphics;
	bool _showAxis;
	int _numColors;
	int _pixelsResolutionX;
	int _pixelsResolutionY;
	double _minX;
	double _minY;
	double _minZ;
	double _maxX;
	double _maxY;
	double _maxZ;
	int _divCountX;
	int _divCountY;
	int _divCountZ;
	wstring _captionX;
	wstring _captionY;
	wstring _captionZ;
	bool _isSymbolX;
	bool _isSymbolY;
	bool _isSymbolZ;
	virtual void Window_RButtonDown(Win::Event& e);
	void OnSizePrivate(void);
	double *_x;
	double *_z;
};

class PieChart;
class PieCollection;

//_____________________________________________________________________ Pie
class Pie
{
public:
	Pie();
	~Pie();
	//
	COLORREF GetColor();
	virtual void SetColor(COLORREF color);
	__declspec( property( get=GetColor, put=SetColor ) ) COLORREF Color;
	//
	double GetValue();
	virtual void SetValue(double value);
	__declspec( property( get=GetValue, put=SetValue ) ) double Value;
	//
	wstring GetText();
	virtual void SetText(wstring text);
	__declspec( property( get=GetText, put=SetText ) ) wstring Text;
	//
	bool operator<(const Win::Pie& pie) const;
private:
	double _value;
	wstring _text;
	COLORREF _color;
	int _index;
	//
	HWND piechart;
	Win::PieChart * pieChart;
	friend class PieChart;
	friend class PieCollection;
};

//_____________________________________________________________________ PieCollection
class PieCollection
{
public:
	PieCollection();
	~PieCollection();
	void Add(const wstring& text, COLORREF color, double value);
	void DeleteAll();
	//
	Win::Pie& operator[](long index);
	//
	int GetCount();
	__declspec( property( get=GetCount) ) int Count; 
private:
	vector<Pie> _pies;
	Win::PieChart * pieChart;
	friend class PieChart;
};


//_____________________________________________________________________ PieChart
// A classic pie chart
class PieChart : public Win::Control
{
public:
	PieChart(void);
	virtual ~PieChart(void);
	//
	Win::PieCollection& GetPies();
	__declspec( property( get=GetPies) ) Win::PieCollection& Pies;
	//
	void SetPieValue(int index, double value);
	void SetPieColor(int index, COLORREF color);
	void SetPieText(int index, const wchar_t* text);
	void SetPieText(int index, const wstring& text);
	void SetCaptionFormat(const wchar_t* format);
	//
	void OnPaintControl(CG::IGdi& gdi);
	void Refresh();
private:
	Win::PieCollection _pies;
	void Pie_(CG::IGdi& gdi, const wchar_t* text, double percent, COLORREF color, int spacingY, double& angleIni);
	RECT _rectCircle;
	int _radius;
	int _xCenter; 
	int _yCenter;
	int _xCaption;
	int _yCaption;
	double _dimension;
protected:
	void OnSizePrivate(void);
	wchar_t captionFormat[WIN_PIECHART_SZ];
};

//_____________________________________________________________________Histogram
// It displays a histogram
class Histogram : public Win::XyChart
{
public:
	Histogram(void);
	virtual ~Histogram(void);
	void SetData(valarray<double>& data, int resolution, bool percentDisplay);
};

//_____________________________________________________________________ TitleBarButton
class TitleBarButton
{
public:
	TitleBarButton();
	~TitleBarButton();
	bool NcCreate(HINSTANCE hInstance, int idi_enabled, int idi_disabled);
	void NcCalcSize(int x, int y, int width, int height);
	void NcCalcSize(const RECT& rectButton);
	void NcPaint(CG::Gdi& gdi);
	void Redraw(HWND hWnd, CG::Region& regionWindow);
	bool NcLButtonDown(HWND hWnd, Win::Event& e, CG::Region& regionWindow);
	bool NcLButtonUp(HWND hWnd, Win::Event& e, CG::Region& regionWindow);
	bool NcMouseMove(HWND hWnd, Win::Event& e, CG::Region& regionWindow);
	void GetRect(RECT& out_rect);
	COLORREF color;
	bool drawBorder;
	bool drawButton;
	//_____________________________________________________ Enabled
	void SetEnabled(bool isEnabled);
	bool GetEnabled();
	__declspec(property(get=GetEnabled, put=SetEnabled)) bool Enabled;
private:
	HICON _hIconEnabled;
	HICON _hIconDisabled;
	RECT _rect;
	bool _isEnabled;
	int _iconWidth;
	int _iconHeight;
	bool _isPressed;
	bool _isMouseOver;
};

//_____________________________________________________________________ LevelInfo
class LevelInfo
{
public:
	LevelInfo();
	~LevelInfo();
	RECT rc;
	int brushOnIndex;
	int brushOffIndex;
	double level; //From 0.0 to 0.99
};

//_____________________________________________________________________ LevelControl
// It displays the value of a variable using a color bar
class LevelControl : public Win::Control
{
public:
	LevelControl(void);
	virtual ~LevelControl(void);
	void SetRange(double minValue, double maxValue);
	//__________________________________________________________________________________ Level
	void SetLevel(double level);
	double GetLevel();
	__declspec( property( get=GetLevel, put=SetLevel ) ) double Level;
	//__________________________________________________________________________________ WarningColor
	COLORREF GetWarningColor();
	virtual void SetWarningColor(COLORREF color);
	__declspec( property( get=GetWarningColor, put=SetWarningColor ) ) COLORREF WarningColor;
	//__________________________________________________________________________________ ErrorColor
	COLORREF GetErrorColor();
	virtual void SetErrorColor(COLORREF color);
	__declspec( property( get=GetErrorColor, put=SetErrorColor ) ) COLORREF ErrorColor;
	//__________________________________________________________________________________ WarningLevel
	double GetWarningLevel();
	virtual void SetWarningLevel(double warningLevel);
	__declspec(property(get=GetWarningLevel, put=SetWarningLevel)) double WarningLevel;
	//__________________________________________________________________________________ ErrorLevel
	double GetErrorLevel();
	virtual void SetErrorLevel(double errorLevel);
	__declspec(property(get=GetErrorLevel, put=SetErrorLevel)) double ErrorLevel;
protected:
	double Normalize(double x);
	void OnPaintControl(CG::Gdi& gdi);
	void OnSizePrivate();
	static COLORREF GetOffColor(COLORREF color);
private:
	COLORREF _warningColor;
	COLORREF _errorColor;
	double _warningLevel;
	double _errorLevel;
	int _blockCount;
	int _blockHeight;
	int _blockWidth;
	int _blockPadding;
	int _padding;
	double _minLevel;
	double _maxLevel;
	double _level;
	LevelInfo levels[WIN_LEVELCONTROL_MAX];
};

//_____________________________________________________________________LevelState
// It displays a level and a state
class LevelState : public Win::Control
{
public:
	LevelState(void);
	virtual ~LevelState(void);
	void SetStateCount(int count);
	int GetStateCount();
	__declspec( property( get=GetStateCount, put=SetStateCount ) ) int StateCount;
	//
	void SetState(int index, double minValue, double maxValue, COLORREF color, wchar_t* caption);
	//
	void SetLevel(double level);
	double GetLevel();
	__declspec( property( get=GetLevel, put=SetLevel ) ) double Level;
	//
	void SetLogScale(bool logScale);
	bool GetLogScale();
	__declspec( property( get=GetLogScale, put=SetLogScale ) ) bool LogScale;
	//
	void SetDisplayLevelValue(bool displayLevelValue);
	bool GetDisplayLevelValue();
	__declspec( property( get=GetDisplayLevelValue, put=SetDisplayLevelValue ) ) bool DisplayLevelValue;
protected:
	//
	void OnPaintControl(CG::IGdi& gdi);
	int _numDivisions;
	double _minValue;
	double _maxValue;
	int MapToScreen(double value, int fontHeight);
	double _level;
	int _stateCount;
private:
	struct StateInfo
	{
		double minValue;
		double maxValue;
		COLORREF color;
		wchar_t text[64];
	};
	LevelState::StateInfo _si[WIN_LEVEL_STATE_STATES];
	bool _logScale;
	bool _displayLevelValue;
	double _minimum;
	double _scale;
	void InvalidateMiddle();
};

//m_lc.Create(0, NULL, WS_VISIBLE | WS_CHILD | WS_TABSTOP, 
//	0, 0, 0, 0, hWnd, (HMENU)IDC_STATIC);
//m_lc.SetRange(1.90, 4.5155);
//m_lc.SetLevel(0);
//_____________________________________________________________________Monitor
// It displays the history of a variable with time
class Monitor : public Win::Control
{
public:
	Monitor(void);
	virtual ~Monitor(void);
	void AddValue(double value);
	void SetSquareSize(int size);
	void SetResolution(int resolution);
	void SetRange(double minimum, double maximum);
	void Clear();
	void SetAll(double value);
	//
	COLORREF GetLineColor1();
	virtual void SetLineColor1(COLORREF color);
	__declspec( property( get=GetLineColor1, put=SetLineColor1 ) ) COLORREF LineColor1;
protected:
	virtual void OnPaintControl(CG::Gdi& gdi);
	virtual void OnSizePrivate();
	double _min;
	double _max;
private:
	double *_data;
	int _dataSize;
	int _dataScreenCount;
	int _lineOffset;
	int _resolutionX;
	int _squareSize;
	double _scale;
	int _offsetData;
	COLORREF _lineColor1;
};

//_____________________________________________________________________ Monitor3
// It displays the history of several variables with time
class Monitor3 : public Win::Control
{
public:
	Monitor3(void);
	virtual ~Monitor3(void);
	//____________________________________________________ NumbVariables
	bool SetNumbVariables(int numVariables);
	int GetNumbVariables();
	__declspec(property(get=GetNumbVariables, put=SetNumbVariables)) int NumbVariables;

	//____________________________________________________ SquareSize
	void SetSquareSize(int size);
	int GetSquareSize();
	__declspec(property(get=GetSquareSize, put=SetSquareSize)) int SquareSize;

	//____________________________________________________ Resolution
	bool SetResolution(int numPixels);
	int GetResolution();
	__declspec(property(get=GetResolution, put=SetResolution)) int Resolution;

	// It adds a value for each variable
	// double value[2];
	// value[0] = 1.0;
	// value[1] = 2.0;
	bool AddValue(double* values);

	void SetRange(double minimum, double maximum);
	void Clear();
	void Delete();
	bool SetAll(double* values);
	
	// It returns the color of the variable.  variableIndex is in the range from 0 to numVariables-1.
	COLORREF GetVariableColor(int variableIndex);

	// It sets the color of the variable.  variableIndex is in the range from 0 to numVariables-1.
	bool SetLineColor(int variableIndex, COLORREF color);
protected:
	virtual void OnPaintControl(CG::Gdi& gdi);
	virtual void OnSizePrivate();
	double _min;
	double _max;
	void PaintData(CG::Gdi& gdi, int index1, int index2, double* data);
private:
	double ** _data;
	COLORREF * _variableColor;
	int _numVariables;
	int _dataSize;
	int _dataScreenCount;
	int _lineOffset;
	int _resolutionX;
	int _squareSize;
	double _scale;
	int _offsetData;;
};

//____________________________________________________________SerialPort
// Provides multithread support to handle the serial port. 
class SerialPort : public Win::Control
{
public:
	enum Status{Success=0, Error, Timeout};
	SerialPort(void);
	~SerialPort(void);
	bool Open(wchar_t* portName, DCB& dcb); 
	void Close();
	void InitializeDcbDefaults(DCB& dcb);
	BOOL InitializeDcbDlg(const wchar_t * lpszName, HWND hWnd, DCB& dcb);
	Win::SerialPort::Status writeByte(BYTE byte);
	Win::SerialPort::Status writeBuffer(char* buffer, unsigned int count);
	Win::SerialPort::Status readByte(BYTE& byte);
	Win::SerialPort::Status readBuffer(char* buffer, unsigned int count);
	void Break(long milliseconds);
	Win::SerialPort::Status Peek(void* buffer, unsigned int count);
	bool IsEvent(Win::Event& e, int notification);
protected:
	Mt::Deque rxQueue;
	Mt::Deque txQueue;
	virtual void RxNotify(int byteCount); // It's called when there is data ready to read
	virtual void TxNotify(); //Its' called when data is successfully trasmitted
	virtual void BreakDetectNotify();
	virtual void FramingErrorNotify();
	virtual void HardwareOverrunErrorNotify();
	virtual void ParityErrorNotify();
	virtual void SoftwareOverrunErrorNotify();
	virtual void CtsNotify(bool status);
	virtual void DsrNotify(bool status);
	virtual void CdNotify(bool status);
	virtual void RiNotify(bool status);
	//
	int rxCount;
	int txCount;
	bool isCts;
	bool isDsr;
	bool isCd;
	bool isRi;
	wchar_t * errorCaption;
	//
	void UpdateRow(int index);
	//
	wchar_t  portName[32];
	void Window_Open(Win::Event& e);
	void OnPaintControl(CG::Gdi& gdi);
private:
	HWND hWndParent;
	HANDLE port;
	HANDLE hInputThread;
	HANDLE hOutputThread;
	int breakDuration;
	DWORD dwErrors;
	DWORD dwModemStatus;
	Win::SerialPort::Status error_status;
	Mt::EventI eventKillInputThread;
	Mt::EventI eventKillOutputThread;
	Mt::EventI eventWriteRequest;
	Mt::EventI eventReadRequest;
	Mt::EventI eventBreakRequest;
	static unsigned WINAPI InputThreadFunc(LPVOID param);
	static unsigned WINAPI OutputThreadFunc(LPVOID param);
	void clear_error(void);
	void check_modem_status(bool first_time, DWORD event_mask);
	bool output_worker();
	bool bInputThreadReading;
	int iBreakDuration;
	unsigned int byteCount;
	void DrawDataRow(CG::Gdi& gdi, int index, COLORREF nameColor, const wchar_t* text, bool active);
};

//__________________________________________________________________________ ListDlg
// This class allows displaying a vector of strings in a dialog, the first row in the vector is displayed in the Window Title
class ListDlg :    
	public Dialog
{
public:
	ListDlg()
	{
	}
	~ListDlg()
	{
	}
	list<wstring> data; // The first row is displayed in the Window Title
private:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Button btDummy;
	Win::Textbox tbxData;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx=Sys::Convert::CentimetersToDlgUnitX(14.1);
		dlgTemplate.cy=Sys::Convert::CentimetersToDlgUnitY(12.2);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_THICKFRAME | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"List Dialog";
		btDummy.Create(NULL, L"Get Focus", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 308, 65, 4, 7, hWnd, 1000);
		tbxData.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_HSCROLL | WS_VISIBLE | WS_VSCROLL | ES_AUTOHSCROLL | ES_MULTILINE | ES_READONLY | ES_WANTRETURN | ES_LEFT | ES_WINNORMALCASE, 0, 0, 685, 600, hWnd, 1001);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		btDummy.Font = fontArial009A;
		tbxData.Font = fontArial009A;
		tbxData.SetDock(DOCK_BORDER, DOCK_BORDER, DOCK_BORDER, DOCK_BORDER);
	}
	//_________________________________________________
	void btDummy_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	void Window_Size(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btDummy.IsEvent(e, BN_CLICKED)) {btDummy_Click(e); return true;}
		return false;
	}
};

//_____________________________________________________________________ Win::SelectionPoint
class SelectionPoint
{
public:
	SelectionPoint();
	~SelectionPoint();
	int line_index; // The line where the character is in the ColorTextBox
	list<Sys::CharInfo>::iterator p; // An iterator to the character
	bool operator==(const Win::SelectionPoint& selectionPoint);
	bool operator!=(const Win::SelectionPoint& selectionPoint);
};

//_____________________________________________________________________ Win::ColtexState
// This class is used to provide UNDO and REDO operations for the Win::ColorTextBox
class ColtexState
{
public:
	ColtexState();
	~ColtexState();
	list<Sys::CharInfo> data;
	int caretIndex;
	int endIndex;
	void Delete();
};

//_____________________________________________________________________ Win::ColorTextBox
class ColorTextBox: public Win::Window//, public Win::IExportableEx
{
public:
	ColorTextBox();
	~ColorTextBox();
	//____________________________________________________ Selection
	Win::Caret caret;
	Win::SelectionPoint selectionCaret; // When the selection is empty, selectionCaret is equal to selectionEnd
	Win::SelectionPoint selectionEnd;  // selectionCaret can be before or after selectionCaret
	//____________________________________________________ The "text" variable stores the characters and their colors
	list<Sys::CharInfo> text;
	vector<list<Sys::CharInfo>::iterator> line; // A vector of iterators to the begining of each line
	//
	bool GetWordAtCaret(wstring& output);
	void ReplaceWordAtCaret(const wchar_t* replaceWithThis);
	bool GetBeginOfWordAtCaret(Win::SelectionPoint& out_BeginOfWord);
	bool GetEndOfWordAtCaret(const Win::SelectionPoint& in_BeginOfWord, Win::SelectionPoint& out_EndOfWord);
	bool GetBeginOfWordAtCaret(list<Sys::CharInfo>::iterator& out_BeginOfWord);
	bool GetEndOfWordAtCaret(const list<Sys::CharInfo>::iterator& in_BeginOfWord, list<Sys::CharInfo>::iterator& out_EndOfWord);
	//
	// If the selection is empty, it returns true 
	bool IsSelectionEmpty();
	//
	// It copies the selected text to the clipboard
	bool Copy();
	//
	// It returns true when the selection is not empty
	bool CanCopy();
	//
	// It copies the selected text to the clipboard, then it deletes the selected text
	void Cut();
	//
	// It returns true when the selection is not empty and the control is enabled and is not read only
	bool CanCut();
	//
	// It deletes the current selected text
	void Delete();
	//
	// It returns true when the selection is not empty and the control is enabled and is not read only
	bool CanDelete();
	//
	// It returns true when the clipboard has text
	bool CanPaste();
	//
	// It pastes the selected text to the clipboard
	void Paste();
	//
	// It restores the state of the control before the last editing operation
	void Undo();
	//
	// It restores the state of the control before the last undo operation
	void Redo();
	//
	// It returns true when it is possible to undo the last operation
	bool CanUndo();
	//
	// It returns true when it is possible to redo the last Undo operation
	bool CanRedo();
	//
	// It removes all undo and redo operations from memory
	void ClearUndoAndRedo();
	//
	// It selects all text in control
	void SelectAll();
	//
	// It sets the current selection
	void SetSelection(int nStart, int nEnd);
	//
	// It returns the current selection (if nStart is equal to nEnd, the selection is empty)
	void GetSelection(int&out_nStart, int& out_nEnd);
	//
	// It replaces the current selection
	void ReplaceSelection(const wchar_t* replaceWithThis, bool canBeUndone);
	//
	// It increases the font size
	void IncreaseFontSize();
	//
	// It reduces the font size
	void DecreaseFontSize();
	//
	bool ReadOnly;
	//
	// It returns the number of text lines that can be visible in the control
	int GetNumbVisibleLines();
	//
	// It scrolls horizontally the control so that the selection and the caret are visible
	void ScrollToShowSelectionHorz();
	//
	// It returns true if the selection is horizontally visible (i.e. the caret is visible)
	bool IsSelectionVisibleHorz();
	//
	// It scrolls vertically the control so that the selection and the caret are visible
	void ScrollToShowSelectionVert();
	//
	// It returns true if the selection is vertically visible (i.e. the caret is visible)
	bool IsSelectionVisibleVert();
	//
	// It returns the position X of the selection (i.e. the position X of the caret)
	int GetCaretPositionX();
	//
	// It returns the position Y of the selection (i.e. the position Y of the caret)
	int GetCaretPositionY();
	//
	void UpdateLinesAndCaret(bool makeSelectionVisible);
	int GetTextLength();
	//
	int GetSelectedTextLength();
	int GetSelectedText(wstring& out_text);
	int GetSelectedText(vector<Sys::CharInfo>& out_text);
	//
	// Moves selectionCaret before selectionEnd, if selectionCaret is after selectionEnd
	void SetSelectionCaretBeforeSelectionEnd();
	//____________________________________________________________ Text
	wstring& GetText();
	void SetText(const wstring& text);
	__declspec( property( get=GetText, put=SetText) ) wstring Text;
	//
	void SetWindowText(const wchar_t* text);
	int GetWindowText(wstring& out_text);
	//____________________________________________________ BackColor
	COLORREF GetBackColor();
	void SetBackColor(COLORREF color);
	__declspec( property( get=GetBackColor, put=SetBackColor ) ) COLORREF BackColor;
	//____________________________________________________ TextColor
	COLORREF GetTextColor();
	void SetTextColor(COLORREF color);
	__declspec( property( get=GetTextColor, put=SetTextColor ) ) COLORREF TextColor;
	//_______________________________________________________________________ SelectionColor
	COLORREF GetSelectionColor();
	virtual void SetSelectionColor(COLORREF color);
	__declspec(property(get=GetSelectionColor, put=SetSelectionColor)) COLORREF SelectionColor;
	//____________________________________________________ TabSize
	int GetTabSize();
	void SetTabSize(int numSpaces);
	__declspec( property( get=GetTabSize, put=SetTabSize ) ) int TabSize;
	//____________________________________________________ LeftMargin
	double GetLeftMargin();
	void SetLeftMargin(double numSpaces);
	__declspec( property( get=GetLeftMargin, put=SetLeftMargin ) ) double LeftMargin;
	//____________________________________________________ WrapText
	bool GetWrapText();
	void SetWrapText(bool wrapText);
	__declspec( property( get=GetWrapText, put=SetWrapText ) ) bool WrapText;
	//____________________________________________________ UndoLevelCount
	int GetUndoLevelCount();
	void SetUndoLevelCount(int numLevels);
	__declspec( property( get=GetUndoLevelCount, put=SetUndoLevelCount ) ) int UndoLevelCount;
	//____________________________________________________ LineSpacing
	double GetLineSpacing();
	void SetLineSpacing(double lineSpacing);
	__declspec(property(get=GetLineSpacing, put=SetLineSpacing)) double LineSpacing;
	//____________________________________________________ Font
	void SetFont(Win::Gdi::Font& font);
	__declspec( property( put=SetFont) ) Win::Gdi::Font& Font;
	void OpenFontDialog();
	void SetFont(int fontSize, const wchar_t* fontFaceName);
	//____________________________________________________ FontSize
	int GetFontSize();
	void SetFontSize(int fontSize);
	__declspec(property(get=GetFontSize, put=SetFontSize)) int FontSize;
	//____________________________________________________ FontFaceName
	void GetFontFaceName(wstring& out_fontFaceName);
	//____________________________________________________ VertScrollPosition
	//void SetVertScrollPosition(int position);
	//int GetVertScrollPosition();
	//__declspec(property(get=GetVertScrollPosition, put=SetVertScrollPosition)) int VertScrollPosition;
	//
	// It returns the width in pixels of the longest line in the control
	int GetMaxTextWidth();
	//
	// It adds a line break at the current selection
	void AddLineBreak();
	//
	// It deletes all text in the control
	void Clear();
	// It removes the current selection
	bool ClearSelection();
	//
	// It deletes a character at the current selection
	void DeleteChar();
	//
	// It deletes a character one position before the current selection
	void DeleteBackChar();
	//
	// It moves the selection (the caret) to the beginning of control
	void MoveFirstLine();
	//
	// It moves the selection (the caret) to the beginning of line
	void MoveHome();
	//
	// It moves the selection (the caret) to the end of line
	void MoveEnd();
	//
	// It moves the selection (the caret) one character to the left
	void MoveLeft();
	//
	// It moves the selection (the caret) one character to the right
	void MoveRight();
	//
	// It moves the selection (the caret) one line up
	void MoveUp();
	//
	// It moves the selection (the caret) one line down
	void MoveDown();
	//
	// It increases the selection one character to the left
	void SelectionLeft();
	//
	// It increases the selection one character to the right
	void SelectionRight();
	//
	// It increases the selection one line up
	void SelectionUp();
	//
	// It increases the selection one line down
	void SelectionDown();
	//
	// It moves the selection to the start of the text
	void SelectionBegin();
	//
	// It moves the selection to the end of the text
	void SelectionEnd();
	//
	// It inserts one character at the selection (at the caret)
	void Insert(wchar_t character);
	
	void Insert(const wchar_t* text, COLORREF color, bool canBeUndone);
	void Insert(const wstring& text, COLORREF color, bool canBeUndone);

	// It inserts a string at the selection (at the caret)
	void Insert(const wchar_t* text, bool canBeUndone);
	//
	// It inserts a string at the selection (at the caret)
	void Insert(const wstring& text, bool canBeUndone);
	//
	// It inserts a string at the selection (at the caret)
	void Insert(vector<Sys::CharInfo>& text);
	//
	// It returns true, if the current selection (the caret) is the first character in a line
	bool IsSelectedFirstInLine();
	//
	// It returns true, if the current selection (the caret) is the last character in a line
	bool IsSelectedLastInLine();
	//
	// It returns true if the character before at the selection (the caret) is '\n'
	bool IsPreviousCharNewLine();
	//
	wchar_t GetCharAtCaret();
	wchar_t GetCharAtSelectionEnd();
	//
	int GetCaretPosition();
	int GetEndSelectionPosition();
	//
	int GetCaretLine();
	int GetEndSelectionLine();
	//
	int GetLineCount();
	//
	int GetHScrollPosition();
	int GetVScrollPosition();
	bool ScrollUp();
	bool ScrollDown();
	bool ScrollLeft();
	bool ScrollRight();
	bool HasFocus();
	//____________________________________________________________ Find and Replace
	//
	// The function selects the specified text, if a match is found
	// and returns the position of the text.  Otherwise, it returns -1
	int FindNext(const wchar_t* findThis, bool matchWholeWord, bool matchCase);
	//
	// It replaces the current selection, then it selects the specified text, if a match is found
	// If the word is found, it returns the position of the word.  Otherwise, it returns -1
	int ReplaceNext(const wchar_t* findThis, const wchar_t* replaceWithThis, bool matchWholeWord, bool matchCase);
	//
	// It returns the number of replacements
	int ReplaceAll(const wchar_t* findThis, const wchar_t* replaceWithThis, bool matchWholeWord, bool matchCase);
	//______________________________________________________ Coloring 
	//
	// It returns one of: WIN_COLORTEXTBOX_NOSELECTION, WIN_COLORTEXTBOX_FULLROWSELECTION
	// WIN_COLORTEXTBOX_BEGINSELECTION, WIN_COLORTEXTBOX_ENDSELECTION, WIN_COLORTEXTBOX_BEGINENDSELECTION
	int GetLineSelectionType(Win::SelectionPoint& point1, Win::SelectionPoint& point2, int line_index);
	//
	//virtual bool IsSoftBreakChar(wchar_t character);
	//
	void LoadDictionaryIcon(HINSTANCE hInstance, int idi_dictionary);
	void LoadCopyIcon(HINSTANCE hInstance, int idi_copy);
	void LoadCutIcon(HINSTANCE hInstance, int idi_cut);
	void LoadDeleteIcon(HINSTANCE hInstance, int idi_delete);
	void LoadPasteIcon(HINSTANCE hInstance, int idi_paste);
	void LoadSelectAllIcon(HINSTANCE hInstance, int idi_select_all);
	void LoadUndoIcon(HINSTANCE hInstance, int idi_undo);
	void LoadRedoIcon(HINSTANCE hInstance, int idi_redo);
	void LoadDecreaseFontSizeIcon(HINSTANCE hInstance, int idi_decrease_font_size);
	void LoadIncreaseFontSizeIcon(HINSTANCE hInstance, int idi_increase_font_size);
	void LoadFontIcon(HINSTANCE hInstance, int idi_font);
	//___________________________________________________________________ Win::IExportable 
	void GetControlSize(int& width, int& height);
	void SetControlSize(int width, int height);
	void OnPaintControl(CG::Gdi& gdi);
	//
	bool CopyImageToClipboard();
	bool CopyToBitmap(int width, int height, bool clientEdge, CG::DDBitmap& result);
	bool SaveEmfImage(const wchar_t* fileName);
	//
	//void ExtractLine(list<Sys::CharInfo>::iterator& c, const int& actualWidth, list<Sys::CharInfo>::iterator& insertionPoint, bool isBegin);
	bool EventHandler(Win::Event& e);
	//____________________________________________________ Events
	bool IsEvent(Win::Event& e,int notification);
private:
	const wchar_t * GetClassName(void){return L"ColorTextBox";}
	static bool isRegistered;
protected:
	void PrivateDelete(bool deleteBack);
	static bool IsValidChar(const wchar_t c);
	void OnSize();
	//______________________________________ Icons
	int _iconSize;
	HICON hIconDictionary;
	HICON hIconCopy;
	HICON hIconCut;
	HICON hIconDelete;
	HICON hIconPaste;
	HICON hIconSelectAll;
	HICON hIconUndo;
	HICON hIconRedo;
	HICON hIconDecreaseFontSize;
	HICON hIconIncreaseFontSize;
	HICON hIconFont;
		//____________________________________
	bool PrivateLeft(Win::SelectionPoint& selectionPoint);
	bool PrivateRight(Win::SelectionPoint& selectionPoint);
	bool PrivateUp(Win::SelectionPoint& selectionPoint);
	bool PrivateDown(Win::SelectionPoint& selectionPoint);
	//
	bool IsSelectedFirstInLine(Win::SelectionPoint& selectionPoint);
	bool IsSelectedLastInLine(Win::SelectionPoint& selectionPoint);
	//
	void ScrollToShowSelectionHorz(Win::SelectionPoint& selectionPoint);
	void ScrollToShowSelectionVert(Win::SelectionPoint& selectionPoint);
	bool IsSelectionVisibleHorz(Win::SelectionPoint& selectionPoint);
	bool IsSelectionVisibleVert(Win::SelectionPoint& selectionPoint);
	//
	int GetPositionX(Win::SelectionPoint& selectionPoint);
	int GetPositionY(Win::SelectionPoint& selectionPoint);
	//
	bool IsPreviousCharNewLine(Win::SelectionPoint& selectionPoint);
	void MakeSelectionVisible(Win::SelectionPoint& selectionPoint);
	//______________________ Menu
	const wchar_t* GetMenuCaption(int index);
	const wchar_t* GetMenuShortCut(int index);
	//______________________ Undo / Redo
	int _maxUndoLevels;
	deque<Win::ColtexState> _undo;
	deque<Win::ColtexState> _redo;
	int ComputeSelectionPointIndex(Win::SelectionPoint& selectionPoint);
	void SaveState();
	//
	void UpdateFontSize();
	void PrivateResetSelection();
	bool IsSelectionALessThanSelectionB(Win::SelectionPoint& selectionA, Win::SelectionPoint& selectionB);
	//void UpdateSelectionIndex(bool isBegin, bool equal);
	bool _wrapText;
	Win::Gdi::Font _font;
	bool _hasFocus;
	//
	// It moves the position of the caret to the position of the selection
	void UpdateCaretPosition();
	void GetSelectionFromMousePosition(LPARAM param, Win::SelectionPoint& output);
	//
	LONG _fontWidth[WIN_COLORTEXTBOX_MAXFONT];
	//
	// It updates the lookup table with the width of each character in the alphabet
	void UpdateFontWidths();
	//
	// It updates the width of each character stored in text
	// You need to call this function after changing the font
	void UpdateTextFontWidths();
	void RefreshFont();
	LONG GetFontWidth(wchar_t input);
	//
#ifdef WINTEMPLA_TEXTBOX_NEXTVERSION
	list<Sys::CharInfo>::iterator GetLineBegin();
#endif
	//_____________________________
	COLORREF _backColor;
	COLORREF _textColor;
	COLORREF _selectionColor;
	int _rowHeight;
	double _lineSpacing;
	int _margin;
	bool _isInsert;
	bool _isDragging;
	int _positionHorizontal;
	int _tabSize;
	HWND _hWndParent;
	int _menuHeight;
	//__________________________ For double buffer
	CG::DDBitmap _bitmap;
	void OnPaintControl(CG::Gdi& gdi, bool isMetafile);
	void UpdateHScrollInfo();
	void UpdateVScrollInfo();
	//__________________________ Scrolling
	void GetPaintInfo(const PAINTSTRUCT& ps, int& posY, int&row1, int& row2);
	void GetPageInfoV(int& out_rowIndex1, int& out_rowIndex2);
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	void Window_Open(Win::Event& e);
	void Window_Paint(Win::Event& e);
	void Window_Size(Win::Event& e);
	void Window_Char(Win::Event& e);
	void Window_KeyDown(Win::Event& e);
	//void Window_KeyUp(Win::Event& e);
	//void Window_Activate(Win::Event& e);
	void Window_SetFocus(Win::Event& e);
	void Window_KillFocus(Win::Event& e);
	void Window_LButtonDblclk(Win::Event& e);
	void Window_LButtonDown(Win::Event& e);
	void Window_RButtonDown(Win::Event& e);
	void Window_LButtonUp(Win::Event& e);
	void Window_MouseMove(Win::Event& e);
	void Window_MouseWheel(Win::Event& e);
	void Window_HScroll(Win::Event& e);
	void Window_VScroll(Win::Event& e);
	void Window_GetDlgCode(Win::Event& e);
	void Window_InputLangChange(Win::Event& e);
	void Window_DrawItem(Win::Event& e);
	void Window_MeasureItem(Win::Event& e);
};


} //____________________________________________________ namespace Win::End

  // Fuzzy Logic
namespace Fuzzy  //________________________________________________________________ namespace Fuzzy::Ini
{

class Variable;

//________________________________________________________________ Fuzzy::Value
class Value
{
public:
	Value();
	~Value();
	Value(const Fuzzy::Value& init);
	Value(const double init);
	Fuzzy::Value& operator=(const double& init);
	Fuzzy::Value& operator=(const Fuzzy::Value& init);
	Fuzzy::Value operator||(const Fuzzy::Value& init) const;
	Fuzzy::Value operator&&(const Fuzzy::Value& init) const;
	void IF(const Fuzzy::Value& value);
private:
	double _value;
	friend class Fuzzy::Variable;
};

//________________________________________________________________ Fuzzy::Set
class Set
{
public:
	Set();
	~Set();
	Set(const Fuzzy::Set& init);
	Fuzzy::Set& operator=(const Fuzzy::Set& init);

	Fuzzy::Value IF(const Fuzzy::Value input);
	Fuzzy::Value IF(const Fuzzy::Set& input);

	// It returns one of:  FUZZY_SET_ERROR, FUZZY_SET_TRIANGULAR, FUZZY_SET_TRAPEZOIDAL, 
	// FUZZY_SET_LEFTTRAPEZOIDAL, FUZZY_SET_RIGHTTRAPEZOIDAL, FUZZY_SET_SIGMOIDAL, 
	// FUZZY_SET_LEFTSIGMOIDAL, FUZZY_SET_RIGHTSIGMOIDAL, FUZZY_SET_GAUSSIAN, FUZZY_SET_HEAVYTAILED
	int GetType();

	// It returns the set membership for the input value.  The returned value is in the range from 0 to 1 
	double GetMembership(double input);

	Fuzzy::Value& GetFuzzyValue(double input);

	// It creates a triangular fuzzy set using the values:  (a , 0),  (b, 1) and (c, 0)  with a < b < c 
	bool CreateTriangular(double a, double b, double c);

	// It returns the values of a triangular fuzzy set
	bool GetTriangular(double& out_a, double& out_b, double& out_c);

	// It creates a trapezoidal fuzzy set using the values:  (a , 0),  (b, 1), (c, 1), (d, 0)  with a < b < c < d 
	bool CreateTrapezoidal(double a, double b, double c, double d);

	// It returns the point values of a trapezoidal fuzzy set
	bool GetTrapezoidal(double& out_a, double& out_b, double& out_c, double& out_d);

	// It creates a left trapezoidal fuzzy set using the values:  (a , 1) and (b, 0)  with a < b
	// The membership is "one" for any input value that is less than "a"
	bool CreateLeftTrapezoidal(double a, double b);

	// It returns the point values of a left trapezoidal fuzzy set
	bool GetLeftTrapezoidal(double& out_a, double& out_b);

	// It creates a right trapezoidal fuzzy set using the values (x,y):  (a , 0) and (b, 1)  with a < b
	// The membership is "one" for any input value that is greater than "b"
	bool CreateRightTrapezoidal(double a, double b);

	// It returns the point values of a right trapezoidal fuzzy set
	bool GetRightTrapezoidal(double& out_a, double& out_b);

	// It creates a sigmoidal fuzzy set  
	bool CreateSigmoidal(double center, double slope);

	// It returns the values of a sigmoidal fuzzy set
	bool GetSigmoidal(double& out_center, double& out_slope);

	// It creates a left sigmoidal fuzzy set
	bool CreateLeftSigmoidal(double crossoverPoint, double slope);

	// It returns the values of a left sigmoidal fuzzy set
	bool GetLeftSigmoidal(double& out_crossoverPoint, double& out_slope);

	// It creates a right sigmoidal fuzzy set
	bool CreateRightSigmoidal(double crossoverPoint, double slope);

	// It returns the values of a right sigmoidal fuzzy set
	bool GetRightSigmoidal(double& out_crossoverPoint, double& out_slope);

	// It creates a gaussian fuzzy set 
	bool CreateGaussian(double center, double width);

	// It creates a left gaussian fuzzy set 
	bool CreateLeftGaussian(double center, double width);

	// It creates a right gaussian fuzzy set 
	bool CreateRightGaussian(double center, double width);

	// It returns the center and width of gaussian fuzzy set
	bool GetGaussian(double& out_center, double& out_width);

	// It creates a heavy tailed fuzzy set 
	bool CreateHeavyTailed(double center, double width);

	// It creates a left heavy tailed fuzzy set 
	bool CreateLeftHeavyTailed(double center, double width);

	// It creates a right heavy tailed fuzzy set 
	bool CreateRightHeavyTailed(double center, double width);

	// It returns the center and width of heavy tailed fuzzy set
	bool GetHeavyTailed(double& out_center, double& out_width);

	void Delete();
protected:
	int _type;
	double _a; // center, crossoverPoint
	double _b; // slope, leftSlope
	double _c; // rightSlope
	double _d; // width
	Fuzzy::Value _fuzzyValue;
	friend class Fuzzy::Variable;
};

//________________________________________________________________ Fuzzy::Variable
class Variable
{
public:
	Variable();
	~Variable();

	// FUZZY_CORRELATION_PRODUCT_INFERENCE
	// FUZZY_CORRELATION_MINIMUM_INFERENCE
	int correlationInference;

	// FUZZY_COMBINE_RULES_OR
	// FUZZY_COMBINE_RULES_SUM
	int combineRulesMethod;

	double minimum;
	double maximum;

	// For an output variable, it returns the total membership value based on the truth level of each fuzzy set in the variable
	double GetTotalMembership(double input);

	//_______________________________________________________________________ CrispValue
	double GetCrispValue();
	void SetCrispValue(double value);
	__declspec(property(get=GetCrispValue, put=SetCrispValue)) double CrispValue;

	//Variable(const Fuzzy::Variable& init);
	//Fuzzy::Variable& operator=(const Fuzzy::Variable& init);

	double GetMembership(const wchar_t* name);
	Fuzzy::Value& operator[](const wchar_t* name);

	// It creates a graph with the specified pointCount from the Fuzzy::Set specified by its name
	bool GetGraph(const wchar_t* name, int pointCount, Win::Graph& out_graph);

	// It creates a graph with the specified pointCount for the output variable
	bool GetOutputGraph(int pointCount, Win::Graph& out_graph);

	// TriangularSet, TriangularSet, TriangularSet, ..., TriangularSet
	// const wchar_t *names[] = {L"Cold", L"Normal", L"Hot"};
	bool CreateTriangularSets(const wchar_t *names[], double minimum, double maximum, double setCount);

	// LeftTrapezoidalSet, TriangularSet, TriangularSet, ..., RighTrapezoidalSet
	// const wchar_t *names[] = {L"Cold", L"Normal", L"Hot"};
	bool CreateTriangularLRSets(const wchar_t *names[], double minimum, double maximum, double setCount);

	// TrapezoidalSet, TrapezoidalSet, TrapezoidalSet, ..., TrapezoidalSet
	// const wchar_t *names[] = {L"Cold", L"Normal", L"Hot"};
	bool CreateTrapezoidalSets(const wchar_t** names, double minimum, double maximum, double setCount);

	// LeftTrapezoidalSet, TrapezoidalSet, TrapezoidalSet, ..., RightTrapezoidalSet
	// const wchar_t *names[] = {L"Cold", L"Normal", L"Hot"};
	bool CreateTrapezoidalLRSets(const wchar_t** names, double minimum, double maximum, double setCount);

	// SigmoidalSet, SigmoidalSet, SigmoidalSet, ..., SigmoidalSet
	// const wchar_t *names[] = {L"Cold", L"Normal", L"Hot"};
	bool CreateSigmoidalSets(const wchar_t** names, double minimum, double maximum, double setCount);

	// LeftSigmoidalSet, SigmoidalSet, SigmoidalSet, ..., RightSigmoidalSet
	// const wchar_t *names[] = {L"Cold", L"Normal", L"Hot"};
	bool CreateSigmoidalLRSets(const wchar_t** names, double minimum, double maximum, double setCount);

	// GaussianSet, GaussianSet, GaussianSet, ..., GaussianSet
	// const wchar_t *names[] = {L"Cold", L"Normal", L"Hot"};
	bool CreateGaussianSets(const wchar_t** names, double minimum, double maximum, double setCount);

	// LeftGaussianSet, GaussianSet, GaussianSet, ..., RightGaussianSet
	// const wchar_t *names[] = {L"Cold", L"Normal", L"Hot"};
	bool CreateGaussianLRSets(const wchar_t** names, double minimum, double maximum, double setCount);

	// HeavyTailedSet, HeavyTailedSet, HeavyTailedSet, ..., HeavyTailedSet
	// const wchar_t *names[] = {L"Cold", L"Normal", L"Hot"};
	bool CreateHeavyTailedSets(const wchar_t** names, double minimum, double maximum, double setCount);

	// LeftHeavyTailedSet, HeavyTailedSet, HeavyTailedSet, ..., RightHeavyTailedSet
	// const wchar_t *names[] = {L"Cold", L"Normal", L"Hot"};
	bool CreateHeavyTailedLRSets(const wchar_t** names, double minimum, double maximum, double setCount);
	
	// Please set the minimum and maximum of the variable
	bool AddTriangularSet(const wchar_t* name, double a, double b, double c);

	// Please set the minimum and maximum of the variable
	bool AddTrapezoidalSet(const wchar_t* name, double a, double b, double c, double d);

	// Please set the minimum and maximum of the variable
	bool AddLeftTrapezoidalSet(const wchar_t* name, double a, double b);

	// Please set the minimum and maximum of the variable
	bool AddRightTrapezoidalSet(const wchar_t* name, double a, double b);

	// Please set the minimum and maximum of the variable
	bool AddSigmoidalSet(const wchar_t* name, double center, double slope);

	// Please set the minimum and maximum of the variable
	bool AddLeftSigmoidalSet(const wchar_t* name, double crossoverPoint, double slope);

	// Please set the minimum and maximum of the variable
	bool AddRightSigmoidalSet(const wchar_t* name, double crossoverPoint, double slope);

	// Please set the minimum and maximum of the variable
	bool AddGaussianSet(const wchar_t* name, double center, double width);

	// Please set the minimum and maximum of the variable
	bool AddLeftGaussianSet(const wchar_t* name, double center, double width);

	// Please set the minimum and maximum of the variable
	bool AddRightGaussianSet(const wchar_t* name, double center, double width);

	// Please set the minimum and maximum of the variable
	bool AddHeavyTailedSet(const wchar_t* name, double center, double width);

	// Please set the minimum and maximum of the variable
	bool AddLeftHeavyTailedSet(const wchar_t* name, double center, double width);

	// Please set the minimum and maximum of the variable
	bool AddRightHeavyTailedSet(const wchar_t* name, double center, double width);
	//
	bool GetTriangularSet(const wchar_t* name, double& out_a, double& out_b, double& out_c);
	bool GetTrapezoidalSet(const wchar_t* name, double& out_a, double& out_b, double& out_c, double& out_d);
	bool GetLeftTrapezoidalSet(const wchar_t* name, double& out_a, double& out_b);
	bool GetRightTrapezoidalSet(const wchar_t* name, double& out_a, double& out_b);
	bool GetSigmoidalSet(const wchar_t* name, double& out_center, double& out_slope);
	bool GetLeftSigmoidalSet(const wchar_t* name, double& out_crossoverPoint, double& out_slope);
	bool GetRightSigmoidalSet(const wchar_t* name, double& out_crossoverPoint, double& out_slope);
	bool GetGaussianSet(const wchar_t* name, double& out_center, double& out_width);
	bool GetHeavyTailedSet(const wchar_t* name, double& out_center, double& out_width);
	//
	// It returns one of:  FUZZY_SET_ERROR, FUZZY_SET_TRIANGULAR, FUZZY_SET_TRAPEZOIDAL, 
	// FUZZY_SET_LEFTTRAPEZOIDAL, FUZZY_SET_RIGHTTRAPEZOIDAL, FUZZY_SET_SIGMOIDAL, 
	// FUZZY_SET_LEFTSIGMOIDAL, FUZZY_SET_RIGHTSIGMOIDAL, FUZZY_SET_GAUSSIAN, FUZZY_SET_HEAVYTAILED
	int GetSetType(const wchar_t* name);
	int GetSetCount();
	void DeleteAllSets();
	map<wstring, Fuzzy::Set> data;
private:
	double _crispValue;
};

}//____________________________________________________ namespace Fuzzy::End


//______________________________________________________ namespace Mm::Ini
#ifdef WIN_DAC_ADC_SUPPORT
// Multi-media
namespace Mm{
//_____________________________________________________________________ Assistant
class Assistant
{
public:
	static bool IsSignDifferent(int x, int y);
	static const wchar_t* GetErrorText(MMRESULT mmresult);

	// 8 bits -> level [0, 127], 16 bits -> level[0 32767]
	static void GetMaxLevel(LPSTR buffer, unsigned int bufferSize, unsigned int numbChannels, unsigned int bitsResolution, int& out_channel_1, int& out_channel_2);

	// 8 bits -> level [0, 127], 16 bits -> level[0 32767]
	static void GetMaxLevelFast(LPSTR buffer, unsigned int bufferSize, unsigned int numbChannels, unsigned int bitsResolution, int& out_channel_1, int& out_channel_2);

	static void GetRmsLevel(LPSTR buffer, unsigned int bufferSize, unsigned int numbChannels, unsigned int bitsResolution, double& out_channel_1, double& out_channel_2);
	static void GetZeroCrossings(LPSTR buffer, unsigned int bufferSize, unsigned int numbChannels, unsigned int bitsResolution, int& out_channel_1, int& out_channel_2);
	static void GetFrequency(LPSTR buffer, unsigned int bufferSize, unsigned int numbChannels, unsigned int bitsResolution, double& out_channel_1, double& out_channel_2);
	
	
	//It returns the phase difference between channel 1 and channel 2
	static void GetPhaseDifference(LPSTR buffer, unsigned int bufferSize, unsigned int bitsResolution, int& out_differenceCount);
			
	// 8 bits -> level [0, 127], 16 bits -> level[0 32767]
	static void GetMaxLevel(LPARAM lParam, unsigned int numbChannels, unsigned int bitsResolution, int& out_channel_1, int& out_channel_2);
	static void GetRmsLevel(LPARAM lParam, unsigned int numbChannels, unsigned int bitsResolution, double& out_channel_1, double& out_channel_2);
	static void GetZeroCrossings(LPARAM lParam, unsigned int numbChannels, unsigned int bitsResolution, int& out_channel_1, int& out_channel_2);
	static void GetFrequency(LPARAM lParam, unsigned int numbChannels, unsigned int bitsResolution, double& out_channel_1, double& out_channel_2);

	//It returns the phase difference between channel 1 and channel 2
	static void GetPhaseDifference(LPARAM lParam, unsigned int bitsResolution, int& out_differenceCount);

	//It adss a smooth start and a smooth end to the wave file
	static const wchar_t* SmoothEndsFile(const wchar_t* in_filename, const wchar_t* out_filename);

	//It converts a stereo wave file to a mono wave file (one channel)
	static const wchar_t* ConvertToMono(const wchar_t* in_filename, const wchar_t* out_filename);

	//It removes the offset of a wave file so that the DC level is zero
	static const wchar_t* RemoveOffset(const wchar_t* in_filename, const wchar_t* out_filename);

	//It auto adjust the volume of the wave file
	static const wchar_t* NormalizeVolume(const wchar_t* in_filename, const wchar_t* out_filename);

	//It mixes two wave files
	// rate from 0 to 100. rate = 50 to use the sample amplitude in both files
	static const wchar_t* MixWaveFiles(const wchar_t* in_filenameA, const wchar_t* in_filenameB, __int16 rateA, const wchar_t* out_filename);
private:
	Assistant();
	~Assistant();
};

//_____________________________________________________________________ SoundResource
class SoundResource
{
public:
	SoundResource(void);
	virtual ~SoundResource(void);
	bool Play(const wchar_t* name, HINSTANCE hInstance);
	void Stop();
	void Delete();
private:
	HANDLE hRes;
};

//_____________________________________________________________________ WaveFile
class WaveFile
{
public:
	WaveFile(void);
	virtual ~WaveFile(void);
	const wchar_t* OpenForReading(const wchar_t* fileName);
	const wchar_t* OpenForWritting(unsigned int samplesPerSec, unsigned int numbChannels, unsigned int bitsResolution, const wchar_t* fileName);
	void GetInfo(unsigned int& bitsResolution, DWORD& samplesPerSec, unsigned short&numbChannels);
	const wchar_t* Close(void);

	// The it reads a specified number of bytes from a file opened by using the mmioOpen function
	// It returns the number of bytes actually read. If the end of the file has been reached and no more bytes can be read, the return value is 0.
	// If there is an error reading from the file, the return value is –1. #mmioRead+Win32
	long ReadData(char* buffer, unsigned int bufferSize);

	// The it reads a specified number of bytes from a file opened by using the mmioOpen function
	// It returns the number of bytes actually read. If the end of the file has been reached it loops the file to begining of file.
	// If there is an error reading from the file, the return value is –1. #mmioRead+Win32
	long ReadLoopData(char* buffer, unsigned int bufferSize);

	// It changes the current file position in a file opened by using the mmioOpen function
	// offset to change the file position.
	// origin: SEEK_CUR (Seeks to offset bytes from the current file position), 
	// SEEK_END (Seeks to offset bytes from the end of the file), 
	// SEEK_SET (Seeks to offset bytes from the beginning of the file) #mmioSeek+Win32
	long Seek(long offset, int origin);

	long WriteData(const char* buffer, unsigned int bufferSize); //returns bytes read
	double GetRemainingSeconds();
	unsigned int GetRemainingByteCount(void);
	static const wchar_t* GetFileDuration(const wchar_t* fileName, double& durationSeconds);
	double GetFileDurationInSeconds();
	int GetNumChannels();
	int GetBitsResolution();
	int GetSamplesPerSecond();
	int GetSamplesInBuffer(unsigned int bufferSize);

	// It returns the number of seconds that can be stored in the given buffer size
	double ConvertSizeToSeconds(unsigned int bufferSize);

	// It returns the buffer size to store a given number of seconds
	unsigned int ConvertSecondsToSize(double seconds);

	// It returs the number of bytes of the file
	unsigned int GetByteCount();
protected:
	HMMIO hmmio;
	unsigned short bitsResolution;
	DWORD samplesPerSec;
	unsigned short numbChannels;
	unsigned int dataSize;
	bool isWritting;
	MMCKINFO mmckinfoData;
	MMCKINFO mmckinfoWave;
	//void Destructor(void);
};

//_____________________________________________________________________ WaveBuffer
// It provides functionability to move a digital signal
class WaveBuffer
{
public:
	WaveBuffer(void);
	virtual ~WaveBuffer(void);
	bool Create(unsigned int nBufferSize);
	void Destroy();
	LPWAVEHDR m_pWaveHdr;
	char* GetBuffer()
	{
		return m_pBuffer;
	}
	unsigned int GetBufferSize();
	bool CreateUsingExternalBuffer(char* pData, unsigned int nBufferSize);
	void SetValue(unsigned int index, char value)
	{
		m_pBuffer[index] = value;
	}
	unsigned int GetString(wchar_t* pszBuffer, int nBufferSize);
	operator char*()
	{
		return m_pBuffer;
	}
	operator WAVEHDR*()
	{
		return m_pWaveHdr;
	}
private:
	char* m_pBuffer;
	bool m_bExternalBuffer;
	//unsigned int m_nBufferSize;
};

//_____________________________________________________________________ WaveIn
// It provides support to handle the analog to digital converters (ADCs) included in the audio card
class WaveIn
{
public:
	WaveIn(void);
	virtual ~WaveIn(void);
	
	// It opens the given waveform-audio input device for recording, a MM_WIM_OPEN message will be generated
	// samplesPerSec: 44100, 22050, 11025, ...
	// numbChannels: 1, 2, ...
	// bitsResolution: 8, 16, 24, ...#Win32+waveInOpen
	MMRESULT OpenPCM(HWND hWndParent, unsigned int samplesPerSec, unsigned int numbChannels, unsigned int bitsResolution);

	// It opens the given waveform-audio input device for recording, a MM_WIM_OPEN message will be generated
	// samplesPerSec: 44100, 22050, 11025, ...
	// numbChannels: 1, 2, ...
	// bitsResolution: 8, 16, 24, ...#Win32+waveInOpen
	// deviceID: 0, 1, 2, ...
	MMRESULT OpenPCM(unsigned int deviceID, HWND hWndParent, unsigned int samplesPerSec, unsigned int numbChannels, unsigned int bitsResolution);

	// It opens the given waveform-audio input device for recording, a MM_WIM_OPEN message will be sent #Win32+waveInOpen
	MMRESULT Open(unsigned int uDeviceID, LPCWAVEFORMATEX pwfx, DWORD_PTR dwCallback, DWORD_PTR dwInstance, DWORD fdwOpen);

	// It prepares a buffer for waveform-audio input #Win32+waveInPrepareHeader
	MMRESULT PrepareHeader(LPWAVEHDR pwh);

	// It prepares a buffer for waveform-audio input #Win32+waveInPrepareHeader
	MMRESULT PrepareHeader(Mm::WaveBuffer& waveBuffer);

	// It cleans up the preparation performed by the waveInPrepareHeader function. This function 
	// must be called after the device driver fills a buffer and returns it to the application. You must 
	// call this function before freeing the buffer. #Win32+waveInUnprepareHeader
	MMRESULT UnprepareHeader(LPWAVEHDR pwh);

	// It sends an input buffer to the given waveform-audio input device. When the buffer is filled, 
	// the application is notified. #Win32+waveInAddBuffer
	MMRESULT AddBuffer(LPWAVEHDR pwh);

	// It sends an input buffer to the given waveform-audio input device. When the buffer is filled, 
	// the application is notified. #Win32+waveInAddBuffer
	MMRESULT AddBuffer(Mm::WaveBuffer& waveBuffer);

	// It stops input on the given waveform-audio input device and resets the current position to zero. 
	// All pending buffers are marked as done and returned to the application. #Win32+waveInReset
	MMRESULT Reset();

	// It closes the given waveform-audio input device. 
	// A MM_WIM_CLOSE message will be sent #Win32+waveInClose
	MMRESULT Close();

	bool IsOpen();

	void ClearHandle();

	// It starts input on the given waveform-audio input device.
	// A MM_WIM_DATA message will be sent #Win32+waveInStart
	MMRESULT Start();

	HWAVEIN GetHandle();
	const wchar_t* GetErrorDescr(MMRESULT mmresult);
	void ListLineControls();

	// It retrieves the capabilities of a given waveform-audio input device #waveInGetDevCaps+Win32
	bool GetDevCap(WAVEINCAPS& out_waveInCaps);
private:
	HWAVEIN  hWaveIn;
	wchar_t errorDescr[MAXERRORLENGTH];
};

//_____________________________________________________________________ WaveOut
// It provides support to handle the digital to analog converters (DACs) included in the audio card
class WaveOut
{
public:
	WaveOut(void);
	virtual ~WaveOut(void);

	// It opens the given waveform-audio output device for playback#Win32+waveOutOpen
	MMRESULT Open(unsigned int uDeviceID, LPCWAVEFORMATEX pwfx, DWORD_PTR dwCallback, DWORD_PTR dwInstance, DWORD fdwOpen);

	// It opens the given waveform-audio output device for playback
	// samplesPerSec: 44100, 22050, 11025, ...
	// numbChannels: 1, 2, ...
	// bitsResolution: 8, 16, 24, ...#Win32+waveOutOpen
	MMRESULT OpenPCM(HWND hWndParent, unsigned int samplesPerSec, unsigned int numbChannels, unsigned int bitsResolution);

	// It opens the given waveform-audio output device for playback
	// samplesPerSec: 44100, 22050, 11025, ...
	// numbChannels: 1, 2, ...
	// bitsResolution: 8, 16, 24, ...#Win32+waveOutOpen
	// deviceID: 0, 1, 2, ...
	MMRESULT OpenPCM(unsigned int deviceID, HWND hWndParent, unsigned int samplesPerSec, unsigned int numbChannels, unsigned int bitsResolution);

	// It prepares a waveform-audio data block for playback #Win32+waveOutPrepareHeader
	MMRESULT PrepareHeader(LPWAVEHDR pwh);

	// It prepares a waveform-audio data block for playback #Win32+waveOutPrepareHeader
	MMRESULT PrepareHeader(Mm::WaveBuffer& waveBuffer);

	// It  cleans up the preparation performed by the waveOutPrepareHeader function. This function must be called after the device driver 
	// is finished with a data block. You must call this function before freeing the buffer. #Win32+waveOutUnprepareHeader
	MMRESULT UnprepareHeader(LPWAVEHDR pwh);

	// It stops playback on the given waveform-audio output device and resets the current position to zero. All pending playback buffers are 
	// marked as done (WHDR_DONE) and returned to the application. #Win32+waveOutReset
	MMRESULT Reset();

	// It closes the given waveform-audio output device.
	// A MM_WOM_CLOSE message will be sent #Win32+waveOutClose
	MMRESULT Close();

	// It retrieves the current volume level of the specified waveform-audio output device. #Win32+waveOutGetVolume
	MMRESULT GetVolume(LPDWORD pdwVolume);

	// It  sets the volume level of the specified waveform-audio output device. #Win32+waveOutSetVolume
	MMRESULT SetVolume(DWORD dwVolume);

	bool IsOpen();

	// It sends a data block to the given waveform-audio output device. #Win32+waveOutWrite
	MMRESULT Write(LPWAVEHDR pwh);

	// It sends a data block to the given waveform-audio output device. #Win32+waveOutWrite
	MMRESULT Write(Mm::WaveBuffer& wb);

	void ClearHandle();
	const wchar_t* GetErrorDescr(MMRESULT mmresult);

	// It retrieves the capabilities of a given waveform-audio output device #waveOutGetDevCaps+Win32
	bool GetDevCap(WAVEOUTCAPS& out_waveOutCaps);
private:
	HWAVEOUT  hWaveOut;
	wchar_t errorDescr[MAXERRORLENGTH];
};

//_____________________________________________________________________ IAudioIn
// An object that implements this interface can interact with the Analog to Digital Converter using the Mm::Adc class
class IAudioIn
{
public:
	virtual void AudioInStarted(unsigned int samplesPerSec, unsigned int numbChannels, unsigned int bitsResolution) = 0;
	virtual void AudioInData(unsigned int samplesPerSec, unsigned int numbChannels, unsigned int bitsResolution, WAVEHDR* waveHdr) = 0;
	virtual void AudioInStopped() = 0;
};

//_____________________________________________________________________ IAudioOut
// An object that implements this interface can interact with the Digital to Analog Converter using the Mm::Dac class
class IAudioOut
{
public:
	virtual void AudioOutStarted(unsigned int samplesPerSec, unsigned int numbChannels, unsigned int bitsResolution) = 0;
	virtual void AudioOutData(unsigned int samplesPerSec, unsigned int numbChannels, unsigned int bitsResolution, WAVEHDR* waveHdr) = 0;
	virtual void AudioOutStopped() = 0;
};

//_____________________________________________________________________ Dac
// It sends data to the(audio) digital to analog converters
// To use this control please uncomment the #define WIN_DAC_ADC_SUPPORT line in the stdafx.h file
class Dac : public Win::Control
{
public:
	Dac(void);
	virtual ~Dac(void);

	// It returns the number of waveform-audio input devices present in the system #Win32+waveOutGetNumDevs
	int GetNumberOfDevices();

	// It returns a vector with the capatilities of waveform-audio input devices
	static void GetDevices(vector<WAVEOUTCAPS>& out_waveOutCaps);

	// samplesPerSec: 192000, 96000, 48000, 44100, 22050, 11025, ...
	// numbChannels: 1, 2, ...
	// bitsResolution: 8, 16, 24, ...
	bool IsFormatSupported(unsigned int samplesPerSec, unsigned int numbChannels, unsigned int bitsResolution);

	// deviceID: 0, 1, 2, 3, ...
	// samplesPerSec: 192000, 96000, 48000, 44100, 22050, 11025, ...
	// numbChannels: 1, 2, ...
	// bitsResolution: 8, 16, 24, ...
	// bufferSize: 4096, 8192, 16384, ...
	// If iAudioOut is not NULL, it will call the functions in the iAudioIn interface
	// If iAudioOut is NULL, you must derive this class overiding the AudioOut functions of this class
	const wchar_t* Start(unsigned int deviceID, unsigned int samplesPerSec, unsigned int numbChannels, unsigned int bitsResolution, unsigned int bufferSize, Mm::IAudioOut* iAudioOut);

	bool Stop();
	bool IsPlaying();
	void DeleteBuffers(void);
	bool IsEvent(Win::Event& e, int notification);
	Mm::WaveOut waveOut;
private:
	int preparedBufferCount;
	Mm::WaveBuffer wb[MM_DAC_NUM_BUFFER];
protected:
	void AudioOutStarted(unsigned int samplesPerSec, unsigned int numbChannels, unsigned int bitsResolution);
	void AudioOutData(unsigned int samplesPerSec, unsigned int numbChannels, unsigned int bitsResolution, WAVEHDR* waveHdr);
	void AudioOutStopped();
	void ComputeRowRect(int index, RECT& out_rect);
	bool bPlaying;
	bool bEnding;
	HWND hWndParent;
	virtual void OnPaintControl(CG::IGdi& gdi);
	void Window_WomOpen(Win::Event& e);
	void Window_WomClose(Win::Event& e);
	void Window_WomDone(Win::Event& e);
	unsigned int bufferSize;
	unsigned int bitsResolution;
	unsigned int samplesPerSec;
	unsigned int numbChannels;
	Mm::IAudioOut * iAudioOut;
};

//____________________________________________________________________ Adc
// Captures data from the (audio) analog to digital converters. 
// To use this control please uncomment the #define WIN_DAC_ADC_SUPPORT line in the stdafx.h file
// Do not close the program while recording
class Adc : public Win::Control
{
public:
	Adc(void);
	virtual ~Adc(void);

	// It returns the number of waveform-audio input devices present in the system #Win32+waveInGetNumDevs
	int GetNumberOfDevices();

	// It returns a vector with the capatilities of waveform-audio input devices
	static void GetDevices(vector<WAVEINCAPS>& out_waveInCaps);
	
	// samplesPerSec: 192000, 96000, 48000, 44100, 22050, 11025, ...
	// numbChannels: 1, 2, ...
	// bitsResolution: 8, 16, 24, ...
	bool IsFormatSupported(unsigned int samplesPerSec, unsigned int numbChannels, unsigned int bitsResolution);

	bool paused;
	bool Stop();

	// deviceID: 0, 1, 2, 3, ...
	// samplesPerSec: 192000, 96000, 48000, 44100, 22050, 11025, ...
	// numbChannels: 1, 2, ...
	// bitsResolution: 8, 16, 24, ...
	// bufferSize: 4096, 8192, 16384, ...
	// If iAudioIs is not NULL, it will call the functions in the iAudioIn interface
	// If iAudioIn is NULL, you must derive this class overiding the AudioIn functions of this class
	const wchar_t* Start(unsigned int deviceID, unsigned int samplesPerSec, unsigned int numbChannels, unsigned int bitsResolution, unsigned int bufferSize, Mm::IAudioIn* iaudioIn);

	bool IsRecording();
	bool IsEvent(Win::Event& e, int notification);
	double GetBufferDuration(); //in seconds
	void DeleteBuffers(void);
	Mm::WaveIn waveIn;
protected:
	bool isRecording;
	//___________________________________________
	void OnPaintControl(CG::IGdi& gdi);
	virtual void Window_WimOpen(Win::Event& e);
	virtual void Window_WimClose(Win::Event& e);
	virtual void Window_WimData(Win::Event& e);
	Mm::IAudioIn * iAudioIn;
	unsigned int samplesPerSec;
	unsigned int bitsResolution;
	unsigned int numbChannels;
	HWND hWndParent;
	virtual void AudioInStarted(unsigned int samplesPerSec, unsigned int numbChannels, unsigned int bitsResolution);
	virtual void AudioInData(unsigned int samplesPerSec, unsigned int numbChannels, unsigned int bitsResolution, WAVEHDR* waveHdr);
	virtual void AudioInStopped();
private:
	bool bStopping;
	void Destructor();
	Mm::WaveBuffer wb[MM_ADC_NUM_BUFFER];
	unsigned int bufferSize;
	int preparedBufferCount;
	int _maxCH1;
	int _maxCH2;
	double _maximum;
};

//_____________________________________________________________________ Note
struct Note
{
	int note; //C_MIDI, D_MIDI, DS_MIDI, E_MIDI, ...
	int octave;
	int duration; //WHOLE_NOTE, HALF_NOTE, QUARTER_NOTE,...
};

//_____________________________________________________________________ MidiOut
// It produces sounds using MIDI
class MidiOut : public Win::Control
{
public:
	MidiOut(void);
	~MidiOut(void);
	MMRESULT Open(UINT uDeviceID);
	MMRESULT Close(void);
	MMRESULT Reset(void);
	MMRESULT ShortMessage(int status, int channel, int data1, int data2);
	void PlayNote(int channel, int note, int octave);
	void StopNote(int channel, int note, int octave);
	void Play(int tempo);
	void StopSong();
	vector<Mm::Note> ch0;
	vector<Mm::Note> ch1;
private:
	void OnPaintControl(CG::Gdi& gdi);
	void Window_Timer(Win::Event& e);
	HMIDIOUT hMidiOut;
	int index_ch0;
	int index_ch1;
	int duration_ch0;
	int duration_ch1;
	bool active_ch0;
	bool active_ch1;
};

//____________________________________________________________________ Mixer
// It provides support to handle the sound mixer
class Mixer
{
public:
	Mixer();
	~Mixer();
	wchar_t * Open(void);
	void Close(void);
	wchar_t* Set_Src_Waveout(DWORD level); // level: 0 to 65535
	wchar_t* Get_Src_Waveout(DWORD& level);
	wchar_t* Set_Src_Mic(DWORD level); // level: 0 to 65535
	wchar_t* Get_Src_Mic(DWORD& level);
	wchar_t* Set_Src_Line(DWORD level); // level: 0 to 65535
	wchar_t* Get_Src_Line(DWORD& level);
	wchar_t* Set_Main_Volume(DWORD level);
	wchar_t* Get_Main_Volume(DWORD& level);
private:
	HMIXER hMixer;
	DWORD src_waveout_control_id;
	DWORD main_volume_control_id;
	DWORD src_mic_control_id;
	DWORD src_line_control_id;
	wchar_t* Open_Src_Waveout(void);
	wchar_t * Open_Src_Mic(void);
	wchar_t * Open_Src_Line(void);
	wchar_t* Open_Main_Volume(void);
	wchar_t* GetLevel(DWORD& level, DWORD controlID);
	wchar_t* SetLevel(DWORD level, DWORD controlID);
	wchar_t* GetControlID(DWORD dwComponentType, DWORD& dwControlID);
};

//Mm::Mixer mixer;
//
//wchar_t* error = mixer.Open();
//
//if (error) this->MessageBox(error, L"mixer.Open");
//
//DWORD level;
//error = mixer.Get_Main_Volume(level);//mixer.Get_Src_Waveout(level);
//if (error) this->MessageBox(error, L"mixer.Get_Src_Waveout");
//wchar_t texto[256];
//_snwprintf(texto, 256, L"%d", level);
//this->MessageBox(texto);

//____________________________________________________________________ FmDemodulator
// It recovers a signal that is frequency modulated
class FmDemodulator
{
public:
	FmDemodulator(void);
	virtual ~FmDemodulator(void);
	bool Create(unsigned int bufferSize, bool isStereo, bool is16Bits);
	int Demodulate(LPSTR buffer, unsigned int bytesRecorded);
	int Demodulate(LPARAM lParam);
	int* GetLeft(void);
	int* GetRight(void);
private:
	int* dataLeft;
	int* dataRight;
	unsigned int bufferSize;
	unsigned int data_size;
	bool isStereo;
	bool is16Bits;
	void Delete(void);
};

} // End of namespace Mm

#endif
//______________________________________________________ namespace Mm::End

// Game
namespace Game //________________________________________ namespace Game::Ini
{

//_____________________________________________________________________ VextexRhw
struct VertexRhw
{
	float x, y, z, rhw; 
	DWORD color; 
};

//_____________________________________________________________________ Vextex
struct Vertex
{
	float x, y, z; 
	DWORD color;
};

//_____________________________________________________________________ TexturedUntransformedVertex
struct TexturedUntransformedVertex
{
	float x, y, z;  // Position for the vertex.
	float tu, tv; // Texture coordinates
};

//_____________________________________________________________________ TexturedTransformedVertex
struct TexturedTransformedVertex
{
	float x, y, z, rhw;  // Position for the vertex.
	float tu, tv; // Texture coordinates
};

//_____________________________________________________________________ Element
class Element
{
public:
	Element();
	~Element();
	//
	Element(const Game::Element& init);
	Game::Element& operator=(const Game::Element& init);
	//
	bool CreateArc1(int xLeft, int yTop, int xRight, int yBottom, int xStart, int yStart, int xEnd, int yEnd);
	bool CreateArc2(int xLeft, int yTop, int xRight, int yBottom, int xStart, int yStart, int xEnd, int yEnd);
	//
	bool CreateBitmap1(HINSTANCE hInstance, int bitmap_id, int x, int y, int width, int height);
	bool CreateBitmap2(int x, int y, int width, int height);
	//
	bool CreateBitmap1(HINSTANCE hInstance, int bitmap_id, int x, int y);
	bool CreateBitmap2(int x, int y);
	//
	bool CreateCircle1(int x, int y, int radius);
	bool CreateCircle2(int x, int y, int radius);
	//
	bool CreateChord1(int xLeft, int yTop, int xRight, int yBottom, int xStart, int yStart, int xEnd, int yEnd);
	bool CreateChord2(int xLeft, int yTop, int xRight, int yBottom, int xStart, int yStart, int xEnd, int yEnd);
	//
	bool CreateEllipse1(int xLeft, int yTop, int xRight, int yBottom);
	bool CreateEllipse2(int xLeft, int yTop, int xRight, int yBottom);
	//
	bool CreateIcon1(HINSTANCE hInstance, int icon_id, int x, int y);
	bool CreateIcon2(int x, int y);
	//
	bool CreateMetafile1(const wchar_t* filename, int x, int y, int width);
	bool CreateMetafile2(int x, int y, int width);
	//
	bool CreateLine1(int x1, int y1, int x2, int y2);
	bool CreateLine2(int x1, int y1, int x2, int y2);
	//
	//alignment: WIN_ALIGNMENT_LEFT, WIN_ALIGNMENT_RIGHT, WIN_ALIGNMENT_CENTER, WIN_ALIGNMENT_JUSTIFIED
	bool CreateParagraph1(int x, int y, int fontSize, const wchar_t* fontFamily, const wchar_t* text, int text_width, int alignment);
	bool CreateParagraph2(int x, int y, int text_width, int fontSize);
	//
	bool CreatePie1(int xLeft, int yTop, int xRight, int yBottom, int xStart, int yStart, int xEnd, int yEnd);
	bool CreatePie2(int xLeft, int yTop, int xRight, int yBottom, int xStart, int yStart, int xEnd, int yEnd);
	//
	bool CreatePolyBezier1(const POINT* arrayPoints, DWORD nCount);
	bool CreatePolyBezier2(const POINT* arrayPoints);
	//
	bool CreatePolygon1(const POINT* arrayPoints, int nCount);
	bool CreatePolygon2(const POINT* arrayPoints);
	//
	bool CreatePolyline1(const POINT* arrayPoints, int nCount);
	bool CreatePolyline2(const POINT* arrayPoints);
	//
	bool CreateRectangle1(int xLeft, int yTop, int xRight, int yBottom);
	bool CreateRectangle2(int xLeft, int yTop, int xRight, int yBottom);
	//
	bool CreateRoundRectangle1(int xLeft, int yTop, int xRight, int yBottom, int xCornerEllipse, int yCornerEllipse);
	bool CreateRoundRectangle2(int xLeft, int yTop, int xRight, int yBottom, int xCornerEllipse, int yCornerEllipse);
	//
	bool CreateText1(int x, int y, int fontSize, const wchar_t* fontFamily, const wchar_t* text);
	bool CreateText2(int x, int y, int fontSize);
	//
	void Render(double currentTimeSeconds, CG::Gdi& gdi);
	//_____________________________ Time
	unsigned long timeSeconds1;
	unsigned long timeSeconds2;
	//_____________________________ FillColor
	COLORREF fillColor1;
	COLORREF fillColor2;
	//_____________________________ BorderColor
	COLORREF borderColor1;
	COLORREF borderColor2;
	//
	void Delete();
private:
	void Copy(const Game::Element& init);
	COLORREF GetCurrentColor(COLORREF color1, COLORREF color2, const double t, const double deltaT);
	bool Create(size_t count);
	void CopyPoints();
	__int8 type;
	size_t pointCount;
	POINT *point1;
	POINT *point2;
	POINT *point;
	wstring text;
	wstring fontFamily;
	int paragraphAlignment;
	CG::DDBitmap bitmap; // GAME_ELEMENT_BITMAP
	Sys::Icon icon; // GAME_ELEMENT_ICON
	CG::Metafile metafile; // GAME_ELEMENT_METAFILE
};

//_____________________________________________________________________ Game::Window
class Window : public Win::Window
{
public:
	Window(void);
	~Window(void);
	virtual bool RenderScene(CG::Gdi& gdi)=0;
	virtual int MessageLoop(WORD aceleratorsID);
protected:
	float timeSec;
	float deltaSec;
	int framesPerSecond;
	Sys::Stopwatch stopWatch;
	bool isGameMode;
	virtual void GetRegisterClass(WNDCLASSEX& wcex);
	virtual void Window_Paint(Win::Event& e);
	virtual void Window_Size(Win::Event& e);
	virtual void Window_Destroy(Win::Event& e);
	virtual void Window_Activate(Win::Event& e);
	virtual void Window_KeyDown(Win::Event& e);
	virtual void Window_KeyUp(Win::Event& e);
	virtual void Window_LButtonDown(Win::Event& e);
	virtual void Window_SysCommand(Win::Event& e);
	bool	keyboard[256];
	bool isActive;
	CG::DDBitmap bitmap;
};

//_____________________________________________________________________ DxWindow
class DxWindow : public Win::Window
{
public:
	DxWindow(void);
	~DxWindow(void);
	virtual bool RenderScene()=0;
	virtual int MessageLoop(WORD aceleratorsID);
protected:
	bool keyboard[256];
	float timeSec;
	float deltaSec;
	int framesPerSecond;
	Sys::Stopwatch stopWatch;
	bool isGameMode;
	virtual void GetRegisterClass(WNDCLASSEX& wcex);
	virtual void Window_KeyDown(Win::Event& e);
	virtual void Window_KeyUp(Win::Event& e);
};

} //____________________________________________________ namespace Game::End

//______________________________________________________ namespace Ogl::Ini
#ifdef WIN_OPENGL_SUPPORT
// Open GL
namespace Ogl{
//_____________________________________________________________________ ViewManager
// It provides support to handle the view in an OpenGL application
class ViewManager
{
public:
	ViewManager(void);
	~ViewManager(void);
	void incrementX(void);
	void decrementX(void);
	void incrementY(void);
	void decrementY(void);
	void incrementZ(void);
	void decrementZ(void);
	void incrementAngleXZ(void);
	void decrementAngleXZ(void);
	//
	void AdjustView(); //Call this inside RenderScene
protected:
	double angleXZ;
	double deltaAngleXZ;
	double x;
	double y;
	double z;
	double deltaX;
	double deltaY;
	double deltaZ;
};

//_____________________________________________________________________ Object
class Object
{
public:
	Object(void);
	~Object(void);
	GLuint GetID();
	operator GLuint() 
		{return this->id;}
protected:
	GLuint id;
};

//_____________________________________________________________________ Lists
class Lists : public Ogl::Object
{
public:
	Lists(void);
	~Lists(void);
	GLuint Generate(GLsizei size);
	void Delete(void);
protected:
	GLsizei size;
};

//_____________________________________________________________________ Texture
class Texture : public Ogl::Object
{
public:
	Texture(void);
	~Texture(void);
	void Delete(void);
	wchar_t* CreateFromBitmap(const wchar_t* filename);
	wchar_t* CreateFromBitmap(const wchar_t* filename, GLfloat minFilter, GLfloat magFilter, GLint components);
	GLuint GetWidth();
	GLuint GetHeight();
private:
	GLuint width;
	GLuint height;
};

//_____________________________________________________________________ Font
class Font : public Ogl::Lists
{
public:
	Font(void);
	~Font(void);
	wchar_t* CreateFromBitmap(const wchar_t* filename);
private:
	Ogl::Texture texture;
	const GLuint ROWS;
	const GLuint COLS;
};

//_____________________________________________________________________ GLWindow
// It provides support for OpenGL applications
class GLWindow : public Win::Window
{
public:
	GLWindow(void);
	~GLWindow(void);
	bool ActivateFullScreen();
	wchar_t* SetupGL(PIXELFORMATDESCRIPTOR& pfd);
	void DestroyGL();
	DWORD bitsPerPixel;
	void SetGLSize();
	bool	keyboard[256];
	bool isActive;
	Ogl::ViewManager viewManager;
	void DrawCube(void);
	void Print(Ogl::Font& font, const wchar_t * text);
	void Print(GLdouble x, GLdouble y, Ogl::Font& font, const wchar_t * text); //To be called inside RenderScene
	//
	void DrawFramesPerSecond(GLdouble x, GLdouble y, Ogl::Font& font);
	virtual bool RenderScene()=0;
	virtual int MessageLoop(WORD aceleratorsID);
protected:
	virtual void Window_Size(Win::Event& e);
	virtual void Window_Destroy(Win::Event& e);
	virtual void Window_Activate(Win::Event& e);
	virtual void Window_KeyDown(Win::Event& e);
	virtual void Window_KeyUp(Win::Event& e);
	virtual void Window_SysCommand(Win::Event& e);
private:
	bool isFullScreen;
	HDC hDC; // Permanent Device Context
	HGLRC hGLRC;// Permanent Rendering Context
	//
	int frames;
	bool displayedFramesPerSecond;
};

//struct TgaHeader
//{
//	__int8  identsize;          // size of ID field that follows 18 byte header (0 usually)
//	__int8  colourmaptype;      // type of colour map 0=none, 1=has palette
//	__int8  imagetype;          // type of image 0=none,1=indexed,2=rgb,3=grey,+8=rle packed
//	__int16 colourmapstart;     // first colour map entry in palette
//	__int16 colourmaplength;    // number of colours in palette
//	__int8  colourmapbits;      // number of bits per palette entry 15,16,24,32
//	__int16 xstart;             // image x origin
//	__int16 ystart;             // image y origin
//	__int16 width;              // image width in pixels
//	__int16 height;             // image height in pixels
//	__int8  bitsPerPixel;               // image bits per pixel 8,16,24,32
//	__int8  descriptor;         // image descriptor bits (vh flip bits)
//	// pixel data follows header
//};

} // End of namespace Ogl
#endif
//______________________________________________________ namespace Ogl::End


//______________________________________________________ namespace Com::Ini
// Microsoft Common Object Model
namespace Com
{

//___________________________________________________________________ Container
//A control to host an ActiveX control
class Container : 
	public Win::Window, 
	public IDispatch,
	public IOleClientSite, 
	public IOleControlSite,
	public IAdviseSink,
	public IServiceProvider,
	public IOleInPlaceSiteWindowless, // >IOleInPlaceSiteEx>IOleInPlaceSite>IOleWindow
	public IOleInPlaceFrame, // >IOleInPlaceUIWindow>IOleWindow
	public IOleContainer, // >IParseDisplayName
	public IBindHost,
	public IOleDocumentSite,
	public IOleCommandTarget
{
public:
	Container();
	~Container();
	Com::Object comobj;
	IUnknownPtr unknown;
	COLORREF GetBackColor();
	virtual void SetBackColor(COLORREF color);
	__declspec( property( get=GetBackColor, put=SetBackColor ) ) COLORREF BackColor;
	//
	COLORREF GetTextColor();
	virtual void SetTextColor(COLORREF color);
	__declspec( property( get=GetTextColor, put=SetTextColor ) ) COLORREF TextColor;
	//
	bool GetUserMode();
	virtual void SetUserMode(bool userMode);
	__declspec( property( get=GetUserMode, put=SetUserMode ) ) bool UserMode;
	//
	HRESULT DoVerb(long verb);
	//
	HRESULT Activate();
	HRESULT Activate(vector<Property>& properties);
	HRESULT OleObjectQueryInterface(REFIID riid, void** pvvObject);
	void Delete(void);
	void UpdateSize();
	//
	void SetVisible(bool visible);
	bool IsVisible();
	__declspec( property( get=IsVisible, put=SetVisible ) ) bool Visible;
	//
    void SetAllowResize(bool resizable);
	bool GetAllowResize();
	__declspec( property( get=GetAllowResize, put=SetAllowResize) ) bool AllowResize;
	//
	wstring hostUrl;
	//
	static void DisplayInterfaceFunctions(HWND hWnd, Com::Object& object);
protected:
	OLE_COLOR _backColor;
	OLE_COLOR _textColor;
	bool _userMode;
	LCID _localeId;
	struct ControlInfo
	{
		IOleObjectPtr oleObject;
		IViewObjectPtr viewObject;
		IViewObject2Ptr viewObject2;
		IViewObjectExPtr viewObjectEx;
		IDataObjectPtr dataObject;
		IUnknownPtr unknown;
		IOleInPlaceObjectPtr oleInPlaceObject;
		IOleInPlaceObjectWindowlessPtr oleInPlaceObjectWindowless;
		IOleInPlaceActiveObjectPtr oleInPlaceActiveObject;
	};
	static bool m_bRegistered;
	ControlInfo activex;
	const wchar_t * GetClassName(void){return L"WINCOM_CONTAINER";}
	void Window_Open(Win::Event& e);
	void Window_Destroy(Win::Event& e);
	void Window_Paint(Win::Event& e);
	void Window_Size(Win::Event& e);
	void Window_LButtonDown(Win::Event& e);
	void Window_RButtonDown(Win::Event& e);
	//___________________________________________________
	int refCount;
	//___________________________________________________
	bool visible;
	bool allowResize;
	DWORD miscStatus;
	RECT rectPosition;
	bool inplaceActive;
	bool isInPlace;
	bool queryInterface;
	//
	//HRESULT Activate();
	HRESULT InplaceActivate();
	HRESULT SetActivexRect(const RECT& rc);
	HRESULT SetExtent();
	void SetActivate(bool activate);
	//______________________________________________ IUnknown
	STDMETHOD (QueryInterface) (REFIID iid, void**ppvObject);
	STDMETHOD_(ULONG, AddRef) ();
	STDMETHOD_(ULONG, Release) ();
	//_______________________________________________________ IDispatch
	STDMETHOD (GetTypeInfoCount) (UINT *pctinfo);
	STDMETHOD (GetTypeInfo) (UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	STDMETHOD (GetIDsOfNames) (REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	STDMETHOD (Invoke) (DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	//_______________________________________________________ IOleClientSite
	STDMETHOD (SaveObject) ();
	STDMETHOD (GetMoniker) (DWORD dwA, DWORD dwW, IMoniker** pMoniker);
	STDMETHOD (GetContainer) (IOleContainer** pOleContainer);
	STDMETHOD (ShowObject) ();
	STDMETHOD (OnShowWindow) (BOOL fShow);
	STDMETHOD (RequestNewObjectLayout) ();
	void ProcessPaint(HDC hdc, LPCRECT lpClipRect);
	bool InsideClippingRegion(const RECT& rcClip) const;
	//_______________________________________________________ IOleControlSite
	STDMETHOD (OnControlInfoChanged) (void);
	STDMETHOD (LockInPlaceActive) (BOOL fLock);
	STDMETHOD (GetExtendedControl) (IDispatch **ppDisp);
	STDMETHOD (TransformCoords) (POINTL *pPtlHimetric, POINTF *pPtfContainer, DWORD dwFlags);
	STDMETHOD (TranslateAccelerator) (MSG *pMsg, DWORD grfModifiers);
	STDMETHOD (OnFocus) (BOOL fGotFocus);
	STDMETHOD (ShowPropertyFrame) (void);
	//_______________________________________________________ IAdviseSink
	STDMETHOD_ (void, OnDataChange) (FORMATETC *pFormatEtc, STGMEDIUM *pStgMedium);
	STDMETHOD_ (void, OnViewChange) (DWORD dwAspect, LONG lIndex);
	STDMETHOD_ (void, OnRename) (IMoniker * pMoniker);
	STDMETHOD_ (void, OnSave) ();
	STDMETHOD_ (void, OnClose) ();
	//_______________________________________________________ IServiceProvider
	STDMETHOD (QueryService) (REFGUID guidService, REFIID riid, void **ppvObject);
	//_______________________________________________________ IOleInPlaceSiteWindowless
	STDMETHOD (CanWindowlessActivate) ();
	STDMETHOD (GetCapture) ();
	STDMETHOD (SetCapture) (BOOL fCapture);
	STDMETHOD (GetFocus) ();
	STDMETHOD (SetFocus) (BOOL fFocus);
	STDMETHOD (GetDC) (LPCRECT pRect, DWORD grfFlags, HDC *phDC);
	STDMETHOD (ReleaseDC) (HDC hDC);
	STDMETHOD (InvalidateRect) (LPCRECT pRect, BOOL fErase);
	STDMETHOD (InvalidateRgn) (HRGN hRGN, BOOL fErase);
	STDMETHOD (ScrollRect) (INT dx, INT dy, LPCRECT pRectScroll, LPCRECT pRectClip);
	STDMETHOD (AdjustRect) (LPRECT prc);
	STDMETHOD (OnDefWindowMessage) (UINT msg, WPARAM wParam, LPARAM lParam, LRESULT *plResult);
	//_______________________________________________________ IOleInPlaceSiteEx
	STDMETHOD (OnInPlaceActivateEx) (BOOL *pfNoRedraw, DWORD dwFlags);
	STDMETHOD (OnInPlaceDeactivateEx) (BOOL fNoRedraw);      
	STDMETHOD (RequestUIActivate) (void);
	//_______________________________________________________ IOleInPlaceSite
	STDMETHOD (CanInPlaceActivate) ();
	STDMETHOD (OnInPlaceActivate) ();
	STDMETHOD (OnUIActivate) ();
	STDMETHOD (GetWindowContext) (IOleInPlaceFrame** ppFrame, IOleInPlaceUIWindow **ppDoc, LPRECT lprcPosRect, LPRECT lprcClipRect, LPOLEINPLACEFRAMEINFO lpFrameInfo);
	STDMETHOD (Scroll) (SIZE scrollExtant);
	STDMETHOD (OnUIDeactivate) (BOOL fUndoable);
	STDMETHOD (OnInPlaceDeactivate) ();
	STDMETHOD (DiscardUndoState) ();
	STDMETHOD (DeactivateAndUndo) ();
	STDMETHOD (OnPosRectChange) (LPCRECT rc);
	//_______________________________________________________ IOleWindow
	STDMETHOD (GetWindow) (HWND *phWnd);
	STDMETHOD (ContextSensitiveHelp) (BOOL f);
	//_______________________________________________________ IOleInPlaceFrame
	STDMETHOD (InsertMenus) (HMENU hmenuShared, LPOLEMENUGROUPWIDTHS lpMenuWidths);
	STDMETHOD (SetMenu) (HMENU hmenuShared, HOLEMENU holemenu, HWND hwndActiveObject);
	STDMETHOD (RemoveMenus) (HMENU hmenuShared);
	STDMETHOD (SetStatusText) (LPCOLESTR pszStatusText);
	STDMETHOD (EnableModeless) (BOOL fEnable);
	STDMETHOD (TranslateAccelerator) (LPMSG lpmsg, WORD wID);
	//_______________________________________________________ IOleInPlaceUIWindow
	STDMETHOD (GetBorder) (LPRECT lprectBorder);    
	STDMETHOD (RequestBorderSpace) (LPCBORDERWIDTHS pborderwidths);
	STDMETHOD (SetBorderSpace) (LPCBORDERWIDTHS pborderwidths);   
	STDMETHOD (SetActiveObject) (IOleInPlaceActiveObject *pActiveObject, LPCOLESTR pszObjName);
	//______________________________________________________ IOleContainer
	STDMETHOD (EnumObjects) (DWORD grfFlags, IEnumUnknown **ppenum);     
	STDMETHOD (LockContainer) (BOOL fLock);
	//______________________________________________________ IParseDisplayName
	STDMETHOD (ParseDisplayName) (IBindCtx *pbc, LPOLESTR pszDisplayName, ULONG *pchEaten, IMoniker **ppmkOut);
	//_______________________________________________________ IBindHost
	STDMETHOD (CreateMoniker) (LPOLESTR szName, IBindCtx *pBC, IMoniker **ppmk, DWORD dwReserved);
	STDMETHOD (MonikerBindToStorage) (IMoniker *pMk, IBindCtx *pBC, IBindStatusCallback *pBSC, REFIID riid, void **ppvObj);    
	STDMETHOD (MonikerBindToObject) (IMoniker *pMk, IBindCtx *pBC, IBindStatusCallback *pBSC, REFIID riid, void **ppvObj);
	//_______________________________________________________ IOleDocumentSite
	STDMETHOD (ActivateMe) (IOleDocumentView *pViewToActivate);
	//_______________________________________________________ IOleCommandTarget
	STDMETHOD(QueryStatus)(const GUID *pguidCmdGroup, ULONG cCmds,OLECMD *prgCmds,OLECMDTEXT *pCmdText);
	STDMETHOD(Exec)(const GUID *pguidCmdGroup, DWORD nCmdID, DWORD nCmdExecOpt, VARIANTARG *pvaIn, VARIANTARG *pvaOut);
	//_______________________________________________________ IWebBrowser2
	//STDMETHOD (GoBack)(void);
	//STDMETHOD (GoForward)(void);
	//STDMETHOD (GoHome)(void);
	//STDMETHOD (GoSearch)(void);
	//STDMETHOD (Navigate)(BSTR URL, VARIANT *Flags, VARIANT *TargetFrameName, VARIANT *PostData,VARIANT *Headers);
	//STDMETHOD (Refresh)(void);
	//STDMETHOD (Refresh2)(VARIANT *Level);    
	//STDMETHOD (Stop)(void);
	//STDMETHOD (get_Application)(IDispatch **ppDisp);        
	//STDMETHOD (get_Parent)(IDispatch **ppDisp);        
	//STDMETHOD (get_Container)(IDispatch **ppDisp);        
	//STDMETHOD (get_Document)(IDispatch **ppDisp);        
	//STDMETHOD (get_TopLevelContainer)(VARIANT_BOOL *pBool);        
	//STDMETHOD (get_Type)(BSTR *Type);        
	//STDMETHOD (get_Left)(long *pl);        
	//STDMETHOD (put_Left)(long Left);        
	//STDMETHOD (get_Top)(long *pl);        
	//STDMETHOD (put_Top)(long Top);        
	//STDMETHOD (get_Width)(long *pl);        
	//STDMETHOD (put_Width)(long Width);        
	//STDMETHOD (get_Height)(long *pl);        
	//STDMETHOD (put_Height)(long Height);        
	//STDMETHOD (get_LocationName)(BSTR *LocationName);        
	//STDMETHOD (get_LocationURL)(BSTR *LocationURL);        
	//STDMETHOD (get_Busy)(VARIANT_BOOL *pBool);
	//STDMETHOD (Quit)(void);        
	//STDMETHOD (ClientToWindow)(int *pcx,int *pcy);        
	//STDMETHOD (PutProperty)(BSTR Property,VARIANT vtValue);        
	//STDMETHOD (GetProperty)(BSTR Property, VARIANT *pvtValue);        
	//STDMETHOD (get_Name)(BSTR *Name);        
	//STDMETHOD (get_HWND)(SHANDLE_PTR *pHWND);        
	//STDMETHOD (get_FullName)(BSTR *FullName);        
	//STDMETHOD (get_Path)(BSTR *Path);        
	//STDMETHOD (get_Visible)(VARIANT_BOOL *pBool);        
	//STDMETHOD (put_Visible)(VARIANT_BOOL Value);        
	//STDMETHOD (get_StatusBar)(VARIANT_BOOL *pBool);        
	//STDMETHOD (put_StatusBar)(VARIANT_BOOL Value);        
	//STDMETHOD (get_StatusText)(BSTR *StatusText);        
	//STDMETHOD (put_StatusText)(BSTR StatusText);        
	//STDMETHOD (get_ToolBar)(int *Value);        
	//STDMETHOD (put_ToolBar)(int Value);        
	//STDMETHOD (get_MenuBar)(VARIANT_BOOL *Value);        
	//STDMETHOD (put_MenuBar)(VARIANT_BOOL Value);        
	//STDMETHOD (get_FullScreen)(VARIANT_BOOL *pbFullScreen);        
	//STDMETHOD (put_FullScreen)(VARIANT_BOOL bFullScreen);       
	//STDMETHOD (Navigate2)(VARIANT *URL, VARIANT *Flags, VARIANT *TargetFrameName, VARIANT *PostData, VARIANT *Headers);        
	//STDMETHOD (QueryStatusWB)(OLECMDID cmdID, OLECMDF *pcmdf);        
	//STDMETHOD (ExecWB)(OLECMDID cmdID, OLECMDEXECOPT cmdexecopt, VARIANT *pvaIn, VARIANT *pvaOut);        
	//STDMETHOD (ShowBrowserBar)(VARIANT *pvaClsid, VARIANT *pvarShow, VARIANT *pvarSize);        
	//STDMETHOD (get_ReadyState)(READYSTATE *plReadyState);        
	//STDMETHOD (get_Offline)(VARIANT_BOOL *pbOffline);        
	//STDMETHOD (put_Offline)(VARIANT_BOOL bOffline);        
	//STDMETHOD (get_Silent)(VARIANT_BOOL *pbSilent);        
	//STDMETHOD (put_Silent)(VARIANT_BOOL bSilent);        
	//STDMETHOD (get_RegisterAsBrowser)(VARIANT_BOOL *pbRegister);
	//STDMETHOD (put_RegisterAsBrowser)(VARIANT_BOOL bRegister);        
	//STDMETHOD (get_RegisterAsDropTarget)(VARIANT_BOOL *pbRegister);        
	//STDMETHOD (put_RegisterAsDropTarget)(VARIANT_BOOL bRegister);        
	//STDMETHOD (get_TheaterMode)(VARIANT_BOOL *pbRegister);        
	//STDMETHOD (put_TheaterMode)(VARIANT_BOOL bRegister);        
	//STDMETHOD (get_AddressBar)(VARIANT_BOOL *Value);        
	//STDMETHOD (put_AddressBar)(VARIANT_BOOL Value);        
	//STDMETHOD (get_Resizable)(VARIANT_BOOL *Value);        
	//STDMETHOD (put_Resizable)(VARIANT_BOOL Value);
};

}//______________________________________________________ namespace Com::End

 //______________________________________________________ namespace Cpl::Ini
 // Compiler
namespace Cpl
{
 //_____________________________________________________________________ VirtualMachine
 // It executes the machine code produced by the compiler
class VirtualMachine: public Mt::IThread
{
public:
	VirtualMachine(void);
	~VirtualMachine(void);
	bool checkIndex; // If true, it will check the indexes for Vector and Matrix
	struct Memory
	{
		int datatype; //LEX_DATATYPE_BOOL, LEX_DATATYPE_DOUBLE, LEX_DATATYPE_INTEGER, ...
		bool bool_value;
		double double_value;
		int int_value;
		Sys::MatrixX matrix_value;
		valarray<double> vector_value;
		complex<double> complex_value;
		valarray<complex<double> > vectorC_value;
		MATRIXC matrixC_value;
		wstring string_value;
	};

	void Setup(map<wstring, Cpl::Compiler::VariableInfo>& ids, vector<Cpl::Compiler::Instruction>& machineCode, const wchar_t* path);
	void GetMemoryInfo(HWND hWnd, int gui_type, int datatype, bool showMatrixVectorSize);  // gui_type:  VM_GUITYPE_LISTVIEW, VM_GUITYPE_DROPDOWN
	void SafeGetMemoryIntInfo(HWND hWnd, int gui_type);  // gui_type:  VM_GUITYPE_LISTVIEW, VM_GUITYPE_DROPDOWN
	Mt::IntTs line;
	Mt::DoubleTs progress;
	Mt::DoubleTs mse;
	wchar_t* GetErrorDescr();
	//
	vector<int> memIntegerExchange; // memInteger is copied to this variable at times so that we can monitor these values in another thread using the next critical section
	Mt::CriticalSection csIntegerExchange;
	//
	wstring GetVariableName(int datatype, int index);
	//
	vector<bool> memBool;
	vector<double> memDouble;
	vector<int> memInteger;
	vector<Sys::MatrixX> memMatrix; //vector<MATRIX> memMatrix;
	vector<valarray<double> > memVector;
	vector<complex<double> > memComplex;
	vector<valarray<complex<double> > >memVectorC;
	vector<MATRIXC> memMatrixC;
	vector<Nn::LayerNet> memLayerNet;
	vector<Nn::LayerNetC> memLayerNetC;
	vector<Nn::KohoNet> memKohoNet;
	vector<Nn::ProbNet> memProbNet;
	vector<Win::PolarChart> memPolarChart;
	vector<Win::XyChart> memXyChart;
	void ClearMemory();

	// It prevents a variable from being created more than once at run time
	set<wstring> variableName;

	// It sets the information to call ::PostMessage when the ThreadFunc completes
	// If hWnd is set to NULL, ::PostMessage will not be called
	// wm_message can be:  WM_USER+1, WM_USER+2, WM_USER+3, ...
	void SetPostMessage(HWND hWnd, UINT wm_message, WPARAM wParam, LPARAM lParam);

	//______ IThread
	DWORD ThreadFunc(Mt::BoolTs& cancel, Mt::DecimalTs& progress, Mt::BoolTs& resetTime);
private:
	wchar_t errorDescr[STERRORMAX];
	int instructionIndex;
	Mt::DoubleTs value;
	map<wstring, Compiler::VariableInfo> variableInfo;
	vector<Compiler::Instruction> machineCode;
	bool Execute(Compiler::Instruction& inst, Mt::BoolTs& cancel, Mt::DecimalTs& progress);
	bool VmCreate(Compiler::Instruction& inst);
	bool VmValue(Compiler::Instruction& inst);
	bool VmRefValue(Compiler::Instruction& inst);
	bool VmSetValue(Compiler::Instruction& inst);
	bool VmSetVectorCell(Compiler::Instruction& inst);
	bool VmSetMatrixCell(Compiler::Instruction& inst);
	//bool VmSetRefVectorCell(Compiler::Instruction& inst);
	//bool VmSetRefMatrixCell(Compiler::Instruction& inst);
	bool VmVectorCell(Compiler::Instruction& inst);
	bool VmMatrixCell(Compiler::Instruction& inst);
	bool VmOper(Compiler::Instruction& inst);
	bool VmOperMono(Compiler::Instruction& inst);
	bool VmOperBina(Compiler::Instruction& inst);
	bool VmFunc(Compiler::Instruction& inst, Mt::BoolTs& cancel, Mt::DecimalTs& progress);
	bool VmObjFunc(Compiler::Instruction& inst, Mt::BoolTs& cancel, Mt::DecimalTs& progress);
	bool VmGoto(Compiler::Instruction& inst);
	bool VmGoFalse(Compiler::Instruction& inst);
	bool VmGoTrue(Compiler::Instruction& inst);
	//
	bool OperBinary(Compiler::Instruction& inst, VirtualMachine::Memory& operator1, VirtualMachine::Memory& operator2);
	bool OperBool(Compiler::Instruction& inst, VirtualMachine::Memory& operator1, VirtualMachine::Memory& operator2);
	bool OperRelational(Compiler::Instruction& inst, VirtualMachine::Memory& operator1, VirtualMachine::Memory& operator2);
	//
	bool FuncComplex(Compiler::Instruction& objectFunction, Cpl::VirtualMachine::Memory* param, int paramCount, Cpl::VirtualMachine::Memory& object);
	bool FuncMatrix(Compiler::Instruction& objectFunction, Cpl::VirtualMachine::Memory* param, int paramCount, Cpl::VirtualMachine::Memory& object, bool isComplex);
	bool FuncVector(Compiler::Instruction& objectFunction, Cpl::VirtualMachine::Memory* param, int paramCount, Cpl::VirtualMachine::Memory& object, bool isComplex);
	bool FuncLayerNet(Compiler::Instruction& objectFunction, Cpl::VirtualMachine::Memory* param, int paramCount, Cpl::VirtualMachine::Memory& object, Mt::BoolTs& cancel, Mt::DecimalTs& progress);
	bool FuncLayerNetC(Compiler::Instruction& objectFunction, Cpl::VirtualMachine::Memory* param, int paramCount, Cpl::VirtualMachine::Memory& object, Mt::BoolTs& cancel, Mt::DecimalTs& progress);
	bool FuncKohoNet(Compiler::Instruction& objectFunction, Cpl::VirtualMachine::Memory* param, int paramCount, Cpl::VirtualMachine::Memory& object, Mt::BoolTs& cancel, Mt::DecimalTs& progress);
	bool FuncProbNet(Compiler::Instruction& objectFunction, Cpl::VirtualMachine::Memory* param, int paramCount, Cpl::VirtualMachine::Memory& object, Mt::BoolTs& cancel, Mt::DecimalTs& progress);
	bool FuncPolarChart(Compiler::Instruction& objectFunction, Cpl::VirtualMachine::Memory* param, int paramCount, Cpl::VirtualMachine::Memory& object, Mt::BoolTs& cancel, Mt::DecimalTs& progress);
	bool FuncXyChart(Compiler::Instruction& objectFunction, Cpl::VirtualMachine::Memory* param, int paramCount, Cpl::VirtualMachine::Memory& object, Mt::BoolTs& cancel, Mt::DecimalTs& progress);
	//
	static COLORREF CreateColor(int red, int green, int blue);
	stack<VirtualMachine::Memory> stack;
	//
	bool Convert(VirtualMachine::Memory& input_output, int datatypeTarget, wchar_t* caption);
	int GetResultingDatatype(int datatype1, int datatype2, int operation);
	void ReportConversionError(int datatypeFrom, int datatypeTo, wchar_t* caption);
	//
	wchar_t path[4*MAX_PATH];
	//
	HWND hWnd;
	UINT wm_message;
	WPARAM wParam;
	LPARAM lParam;
};

}//______________________________________________________ namespace Cpl::End
