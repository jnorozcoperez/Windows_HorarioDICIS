// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers

// Windows Header Files

#include "targetver.h"
#include <fstream>
#include <Windows.h>
#include <sqltypes.h>
#include <string>
#include <vector>
#include <tchar.h>
#include <sql.h>
#include <sqlucode.h>
#include <valarray>
#include <complex>
#include <Msi.h>
#include <MsiQuery.h>

using namespace std;

#ifdef PROJECT3_EXPORTS
#define PROJECT3_API __declspec(dllexport)
#else
#define PROJECT3_API __declspec(dllimport)
#endif

extern "C" UINT __stdcall CheckPID(MSIHANDLE hInstall);

namespace Nap
{

	class File {
	public:
		//===================================
		//		FUNCIONES PUBLICAS FILE
		//===================================
		static bool Save(wstring data, wstring name) {
			wofstream output(name);
			output << data;
			output.close();
			return true;
		}
	};

	class Convert {
	public:
		//===================================
		//		FUNCIONES PUBLICAS CONVERT
		//===================================
		static wstring ToWstring(string input) {
			wstring output;
			if (input.empty()) return output;
			const size_t len = (size_t)strlen(input.c_str());
			if (len == 0) return output;
			output.resize(len);
			for (size_t i = 0; i < len; i++) {
				output[i] = (wchar_t)(unsigned char)input[i];
			}
			return output;
		}
		static string ToString(wstring input) {
			string output;
			if (input.empty()) return output;
			const size_t len = (size_t)wcslen(input.c_str());
			if (len == 0) return output;
			output.resize(len);
			for (size_t i = 0; i < len; i++) {
				output[i] = (char)(unsigned char)input[i];
			}
			return output;
		}
	};

	class Encrypting {
	public:
		//===================================
		//		FUNCIONES PUBLICAS ENCRYPTING
		//===================================
		static wstring Base64(wstring input) {
			if (input == L"") return L"";
			wstring table = L"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
			const int lengthInput = input.length();
			int lengthAux = 0, i = 0;
			wstring output, aux;
			while (i < lengthInput)
			{
				aux = L"";
				lengthAux = 0;
				for (int j = 0; j < 3; j++) {
					aux += input[i];
					if (i < lengthInput) {
						i++;
						lengthAux++;
					}
				}
				if (lengthAux) Encrypting::Encode64(aux, output, table, lengthAux);
			}
			return output;
		}
		static wstring Cesar(wstring input, int id) {
			for (size_t i = 0; i < input.length(); i++) {
				input[i] = input[i] + id + 30;
				id--;
			}
			return input;
		}
	private:
		//===================================
		//		FUNCIONES PRIVADAS ENCRYPTING
		//===================================
		static void Encode64(const wstring &input, wstring &output, wstring &table, int &length) {
			output += table[(input[0] & 0xFC) >> 2];
			output += table[((input[0] & 0x03) << 4) | ((input[1] & 0xF0) >> 4)];
			if (length > 1) output += table[((input[1] & 0x0F) << 2) | ((input[2] & 0xC0) >> 6)];
			else output += L"=";
			if (length > 2) output += table[input[2] & 0x3F];
			else output += L"=";
		}
	};
}