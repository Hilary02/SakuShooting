#include "KeyInput.h"
#include "DxLib.h"

KeyInput::KeyInput() {}
KeyInput::~KeyInput() {}

//�S�ẴL�[�̓��͏�Ԃ��擾
void KeyInput::UpdateKeyState() {
	GetHitKeyStateAll(keyStateBuf);
	for (int i = 0; i < 256; i++)
		keyFrame[i] = keyStateBuf[i] ? ++keyFrame[i] : 0;
}

//�L�[�̓��̓t���[�����̕ԋp
int KeyInput::GetKeyFrame(int keyCode) {
	return keyFrame[keyCode];
}