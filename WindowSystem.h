#pragma once
#include "DxLib.h"
#include <string>

/*
�E�B���h�E�V�X�e���Ɋւ�������Ǘ�
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

//WindowSystem.cpp���Œ�`�ς�
extern WindowSystem windowSystem;
