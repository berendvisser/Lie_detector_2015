#include "Serial.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(void)
{
	int  z, value;
	int i = 0;
	int delay = 100;
	z = 2;
	char c[2];
	//declare com port
	string s = "COM5";
	//convert stringtype
	std::wstring stemp = std::wstring(s.begin(), s.end());
	LPCWSTR sw = stemp.c_str();
	//initialize instance serial on 'COM5'.
	Serial serial(sw);
	//timo houdt van aapjes!!!
	printf("HALLO IK BEN EEN AAP");

	while (1){
		printf("function return %d\n", serial.ReadData(c, z));
		printf("bitvalues %d,%d\n", c[0], c[1]);
		value = (int)c[1] + ((int)c[0] << 8);
		printf("value : %d", value);
		Sleep(100);
		system("cls");
	}

	system("PAUSE");
}