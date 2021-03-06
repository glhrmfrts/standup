// StandUp.cpp : Defines the entry point for the application.
//

#include "stdafx.h"
#include "StandUp.h"

#define MAX_LOADSTRING 100

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);

    // TODO: Place code here.

	const int minutes = 60;
	bool lastUp = false;
	unsigned flags = MB_OK | MB_TOPMOST | MB_ICONEXCLAMATION;
	while (true)
	{
		Sleep(minutes * 60 * 1000);
		if (lastUp)
		{
			MessageBoxA(NULL, "Sit down", "Sit down", flags);
		}
		else
		{
			MessageBoxA(NULL, "Stand up", "Stand up", flags);
		}

		lastUp = !lastUp;
	}
	return 0;
}