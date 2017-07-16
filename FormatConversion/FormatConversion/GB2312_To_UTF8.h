#ifndef _GB2312_TO_UTF8_H_
#define _GB2312_TO_UTF8_H_
#if _MSC_VER > 1000
#pragma once
#endif
#include <Windows.h>
#include <string>

// UTF-8到GB2312的转换
std::string utf8_to_gb2312(std::string);

// GB2312到UTF-8的转换
std::string gb2312_to_utf8(std::string);




#endif