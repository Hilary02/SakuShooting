#include "GameMain.h"
#include "DxLib.h"
#include "KeyInput.h"

GameMain::GameMain() {
	stage = new Stage();
}
GameMain::~GameMain() {
	delete stage;
}

//ゲームのメインループ
void GameMain::MainLoop() {

	while (ProcessMessage() == 0 && ClearDrawScreen() == 0) {
		//D	KeyInput::GetInstance().UpdateKeyState();
		KEYINPUT.UpdateKeyState();
		time++;					//全体時間の更新

		//SoundM.SoundPlayer();
		stage->Update();
		stage->Draw();

		//SceneM.update();
		//SceneM.Draw();
		//printfDx("%d\n", time);

		//デバック表示
		//FpsFunction(window.WINDOW_WIDTH - 80, 0);
		//d DrawFormatString(window.WINDOW_WIDTH-120, 20, GetColor(255, 125, 255), "Frame:%d", time);
		ScreenFlip();
	}
}
