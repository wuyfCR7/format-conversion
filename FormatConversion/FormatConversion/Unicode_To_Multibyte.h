#ifndef _UNICODE_TO_MULTIBYTE_H_
#define _UNICODE_TO_MULTIBYTE_H_
#if _MSC_VER > 1000
#pragma once
#endif
#include <string>
#include <Windows.h>


struct Unicode2Multibyte
{
	// 这种宽字符到多字符的转换并不支持中文字符
	// 用_TRUNCATE代替,即最大可能的复制到目标区域
	// wchar2StringRejectChinese支持输入的变量为CString类型
	/// std::string wchart_to_string_exclude_CNH(const wchar_t* _Str)
	static std::string wchart_to_string_exclude_CNH(const wchar_t*);


	// 宽字符到多字符的转换支持中文的字符
	/// std::string wchart_to_string_support_CNH(const wchar_t* _Str)
	static std::string wchart_to_string_support_CNH(const wchar_t*);


	// 宽字符到多字符的转换支持中文字符
	/// std::string wstring_to_string(const std::wstring _Str)
	static std::string wstring_to_string(const std::wstring);


	// 多字符和宽字符之间的转换(但是这个并不支持中文字符)
	/// std::wstring string_to_wstring_exclude_CNH(const std::string _Str)
	static std::wstring string_to_wstring_exclude_CNH(const std::string);


	static std::string widechar_to_multibyte(const wchar_t*);
	static std::wstring multibyte_to_widechar(const char*);
};








#endif