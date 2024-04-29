#include <iostream>
#include <cstdlib>
#include <windows.h> // 仅用于Windows系统的"system("cls")"

using namespace std;
int main() {
	int num=100;
	for (int i = 0; i < num; i++) {
		cout << '\b' << '-';
		Sleep(50);
		cout << '\b' << '\\';  //输出'\'字符时需要用转换描述形式写成'\\'
		Sleep(50);
		cout << '\b' << '/';
		Sleep(50);
	}

	return 0;
}