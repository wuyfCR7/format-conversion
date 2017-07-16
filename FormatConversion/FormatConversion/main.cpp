#include "Unicode_To_Multibyte.h"
#include <iostream>
int main(){
	const wchar_t* str_ = L"Œ“œ≤ª∂CR7";
	std::cout << Unicode2Multibyte::wchart_to_string_support_CNH(str_) << std::endl;
	std::wcout << Unicode2Multibyte::string_to_wstring_exclude_CNH("Gooooooooooo Hala Madrid") << std::endl;

	system("pause");
	return NULL;
}