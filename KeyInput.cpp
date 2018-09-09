#include "KeyInput.h"
#include "DxLib.h"

KeyInput::KeyInput() {}
KeyInput::~KeyInput() {}

//全てのキーの入力状態を取得
void KeyInput::UpdateKeyState() {
	GetHitKeyStateAll(keyStateBuf);
	for (int i = 0; i < 256; i++)
		keyFrame[i] = keyStateBuf[i] ? ++keyFrame[i] : 0;
}

//キーの入力フレーム数の返却
int KeyInput::GetKeyFrame(int keyCode) {
	return keyFrame[keyCode];
}