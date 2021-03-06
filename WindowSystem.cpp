#include "WindowSystem.h"

//windowを用いて初期化など行う．
WindowSystem windowSystem;

bool WindowSystem::ask_screenmode() {
	if (MessageBox(NULL, "フルスクリーンで起動しますか？", "起動オプション", MB_YESNO) == IDYES) {
		return true;
	}
	else {
		return false;
	}
}

WindowSystem::WindowSystem() :
	TITLE("シューティング") {
}

WindowSystem::~WindowSystem() {}

//ウィンドウの初期化処理を行う．
int WindowSystem::Init() {
	SetMainWindowText(TITLE.c_str());				//c_strでchar型にできる
													//is_fullscreen = ask_screenmode();  //コメントアウトで強制ウィンドウ
	if (is_fullscreen) {
		ChangeWindowMode(FALSE);	//フルスクリーン
	}
	else {
		ChangeWindowMode(TRUE);		//ウィンドウモードで表示
	}
	SetWindowSizeChangeEnableFlag(TRUE, TRUE);  // ウインドウサイズ可変
	SetGraphMode(WINDOW_WIDTH, WINDOW_HEIGHT, 32);
	SetWindowSize(WINDOW_WIDTH, WINDOW_HEIGHT);
	if (DxLib_Init() == -1)	return -1;
	SetBackgroundColor(0, 0, 0);					//背景色を黒に
	SetOutApplicationLogValidFlag(false);			//ログ出力
	//SetTransColor(255, 0, 255);					//透過色未設定
	SetAlwaysRunFlag(false);						//アクティブでないとき停止
	SetUseDXArchiveFlag(true);						//DXアーカイブ機能を使う

	SetDrawScreen(DX_SCREEN_BACK);					//裏画面に描画

	return 0;
}