#pragma once
#include "DxLib.h"
#include <string>

/*
ウィンドウシステムに関する情報を管理
*/
constexpr int WINDOW_WIDTH = 800;
constexpr int WINDOW_HEIGHT = 600;

class WindowSystem {
public:
	WindowSystem();
	~WindowSystem();
	int Init();

private:
	const std::string TITLE;
	bool is_fullscreen = false;
	bool ask_screenmode();

};

//WindowSystem.cpp内で定義済み
extern WindowSystem windowSystem;
