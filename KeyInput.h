#pragma once
#include "util/Singleton.h"

class KeyInput :public Singleton<KeyInput> {
public:
	friend class Singleton<KeyInput>; // Singleton でのインスタンス作成は許可
	void UpdateKeyState();	//キー入力フレームの更新
	int GetKeyFrame(int keycode);	//キー入力フレームの値を取得

private:
	int keyFrame[256];		// キー入力フレーム保持
	char keyStateBuf[256];	// キー入力のバッファ


protected:
	KeyInput();	//ここは書く
	virtual ~KeyInput();
};

#define KEYINPUT KeyInput::GetInstance()