// libWebSocketCLR.h

#pragma once

using namespace System;
using namespace System::Reflection;

namespace libWebSocketCLR {

	public ref class Server
	{
	public:
		static void run(String^ ip, int port) {
			libWebSocket::Server::run(ip, port);
		}

		static void showDummyMessage(int value) {
			libWebSocket::Server::ShowValue(value);
		}
	};
}

__declspec(dllexport) void ws_run_server(char* ip, int port)
{
	String^ strIp = gcnew String(ip);
	libWebSocketCLR::Server::run(strIp, port);
}

__declspec(dllexport) void ShowMessageBox(int *value)
{
	libWebSocketCLR::Server::showDummyMessage(*value);
}