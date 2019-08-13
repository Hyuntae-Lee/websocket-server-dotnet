// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

__declspec(dllexport) void ShowMessageBox(int *value);

int main()
{
	int value = 4;

	ShowMessageBox(&value);

    return 0;
}

