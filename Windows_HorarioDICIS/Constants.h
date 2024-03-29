#pragma once
constexpr auto NAP_CV_DOUBLE_OK = 0; //Double is OK
constexpr auto NAP_CV_DOUBLE_ISINTEGER = 1; //Al entero se le agregan 2 ceros
constexpr auto NAP_CV_DOUBLE_SIMBOL = -1; //El doble tiene letras o s�mbolos
constexpr auto NAP_CV_DOUBLE_DOUBLEDOT = -2; //El doble tiene dos puntos
constexpr auto NAP_VERIFY_REGULAREXPRESSION_EMAIL = "^[_a-z0-9-]+([.][_a-z0-9-]+)*\\@[a-z0-9-]+([.][a-z0-9-]+)*[.][a-z]{2,4}$"; //E-mail Regular Expression
constexpr auto NAP_VERIFY_REGULAREXPRESSION_CAPS = "^[A-Z0-9]+$"; //Caps or Upper Letter Regular Expression
constexpr auto NAP_VERIFY_REGULAREXPRESSION_NAME = "^[A-Z������][a-z������]+( [A-Z������][a-z������]+)*$"; //Only accepts if the first letter of a word is Upper or Caps
constexpr auto NAP_VERIFY_REGULAREXPRESSION_NUMBERDECIMAL2 = "^\\d+(\\.\\d{1,2})\\?$"; //Decimal number with 2 numbers after dot
constexpr auto NAP_VERIFY_REGULAREXPRESSION_NUMBERFRACTION = "^\\d+(.5)?$"; //Only integers numbers or .5 fractions
constexpr auto NAP_VERIFY_REGULAREXPRESSION_NUMBERINT = "^[0-9]+$"; //Permite s�lo n�meros enteros
constexpr auto NAP_VERIFY_REGULAREXPRESSION_NOTEMPTY = "^[a-zA-Z0-9������������\\%\\$\\&\\#\\+\\-]+$"; //
constexpr auto NAP_VERIFY_REGULAREXPRESSION_RFC = "^[A-Z�&]{3,4}[0-9]{2}(0[1-9]|1[012])(0[1-9]|1[0-9]|2[0-9]|3[0-1])[A-Z0-9]{3}"; // RFC Regular Expression
constexpr auto NAP_PDF_ORIENTATION_LANDSCAPE = "Landscape"; //Orientaci�n horizontal
constexpr auto NAP_PDF_ORIENTATION_PORTRAIT = "Portrait"; //Orientaci�n vertical
constexpr auto NAP_PDF_COLORMODE_COLOR = "Color"; //P�ginas en color
constexpr auto NAP_PDF_COLORMODE_GRAYSCALE = "Grayscale"; //P�ginas en Blanco y negro
constexpr auto NAP_PDF_PAPERSIZE_4A0 = "4A0"; //1682 x 2378 mm - 66.2 x 93.6 in
constexpr auto NAP_PDF_PAPERSIZE_2A0 = "2A0"; //1189 x 1682 mm - 46.8 x 66.2 in
constexpr auto NAP_PDF_PAPERSIZE_A0 = "A0"; //841 x 1189 mm - 33.1 x 46.8 in
constexpr auto NAP_PDF_PAPERSIZE_A1 = "A1"; //594 x 841 mm - 23.4 x 33.1 in
constexpr auto NAP_PDF_PAPERSIZE_A2 = "A2"; //420 x 594 mm - 16.5 x 23.4 in
constexpr auto NAP_PDF_PAPERSIZE_A3 = "A3"; //297 x 420 mm - 11.7 x 16.5 in
constexpr auto NAP_PDF_PAPERSIZE_A4 = "A4"; //210 x 297 mm - 8.3 x 11.7 in
constexpr auto NAP_PDF_PAPERSIZE_A5 = "A5"; //148 x 210 mm - 5.8 x 8.3 in
constexpr auto NAP_PDF_PAPERSIZE_A6 = "A6"; //105 x 148 mm - 4.1 x 5.8 in
constexpr auto NAP_PDF_PAPERSIZE_A7 = "A7"; //74 x 105 mm - 2.9 x 4.1 in
constexpr auto NAP_PDF_PAPERSIZE_A8 = "A8"; //52 x 74 mm - 2.0 x 2.9 in
constexpr auto NAP_PDF_PAPERSIZE_A9 = "A9"; //37 x 52 mm - 1.5 x 2.0 in
constexpr auto NAP_PDF_PAPERSIZE_A10 = "A10"; //26 x 37 mm - 1.0 x 1.5 in
constexpr auto NAP_PDF_PAPERSIZE_LETTER = "Letter"; //216 x 279 mm - 8.5 x 11.0 in
constexpr auto NAP_PDF_PAPERSIZE_LEGAL = "Legal"; //216 x 356 mm - 8.5 x 14.0 in
constexpr auto NAP_PDF_PAPERSIZE_TABLOID = "Tabloid"; //279 x 432 mm - 11.0 x 17.0 in
constexpr auto NAP_EXCEL_ERROR_OPEN = false; //Error al abrir un archivo
constexpr auto NAP_EXCEL_OK = true; //Todo bien en ecel
constexpr auto NAP_MOUSE_IN_AREA = 0; //Cuando el cursor est� dentro del �rea del cliente
constexpr auto NAP_MOUSE_IN_CLOSE = 1; //Cuando el cursor est� dentro del bot�n close
constexpr auto NAP_MOUSE_IN_MINIMIZE = 2; //Cuando el cursor est� dentro del bot�n minimizar
constexpr auto NAP_MOUSE_IN_NON_AREA = 3; //Cuando el cursor est� fuera del �rea del cliente
constexpr auto NAP_MOUSE_IS_CLICK = 4; //Cuando el da click
constexpr auto NAP_MOUSE_IS_OVER = 5; //Cuando el cursor est� sobre
constexpr auto NAP_MOUSE_IS_NOTOVER = 6; //Cuando el cursor no est� sobre
constexpr auto NAP_EMAIL_TEXT = 1; //Cuando el cursor no est� sobre
constexpr auto NAP_EMAIL_FILE = 2; //Cuando el cursor no est� sobre
constexpr auto NAP_EMAIL_LOCALFILE = 3; //Cuando el cursor no est� sobre
constexpr auto NAP_SCREEN_X = 1920.0; //Tama�o del ancho de pantalla
constexpr auto NAP_SCREEN_Y = 1080.0; //Tama�o del alto de pantalla
const map<wstring, wstring> CARRERA = {
	{L"Artes Digitales", L"ARTES"},
	{L"Ense�anza del Ingl�s", L"INGLES"},
	{L"Gesti�n Empresarial", L"GESTION"},
	{L"Ingenier�a en Comunicaciones y Electr�nica", L"ELECTRONICA"},
	{L"Ingenier�a en El�ctrica", L"ELECTRICA"},
	{L"Ingenier�a Mec�nica", L"MECANICA"},
	{L"Ingenier�a Mecatr�nica", L"MECATRONICA"},
	{L"Ingenier�a en Sistemas Computacionales", L"SISTEMAS"}
};