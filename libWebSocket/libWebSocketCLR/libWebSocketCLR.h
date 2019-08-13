// libWebSocketCLR.h

#pragma once

using namespace System;
using namespace System::Reflection;

namespace libWebSocketCLR {

	public ref class Class1
	{
	public:
		static void showDummyMessage(int value) {
			libWebSocket::Class1::ShowValue(value);
		}
	};
}

__declspec(dllexport) void ShowMessageBox(int *value)
{
	libWebSocketCLR::Class1::showDummyMessage(*value);
}
