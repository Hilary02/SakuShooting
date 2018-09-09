#include "main.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {

	if (windowSystem.Init() == -1) return -1;

	GameMain gamemain;
	gamemain.MainLoop();

	DxLib_End();
	return 0;
}
