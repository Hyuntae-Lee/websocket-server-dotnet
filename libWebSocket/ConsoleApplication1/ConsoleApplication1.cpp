// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

__declspec(dllexport) void ShowMessageBox(int *value);
__declspec(dllexport) void ws_run_server(char* ip, int port);

int main()
{
	ws_run_server("127.0.0.1", 7000);

    return 0;
}

