#pragma once
#include "util/Singleton.h"

class KeyInput :public Singleton<KeyInput> {
public:
	friend class Singleton<KeyInput>; // Singleton �ł̃C���X�^���X�쐬�͋���
	void UpdateKeyState();	//�L�[���̓t���[���̍X�V
	int GetKeyFrame(int keycode);	//�L�[���̓t���[���̒l���擾

private:
	int keyFrame[256];		// �L�[���̓t���[���ێ�
	char keyStateBuf[256];	// �L�[���͂̃o�b�t�@


protected:
	KeyInput();	//�����͏���
	virtual ~KeyInput();
};

#define KEYINPUT KeyInput::GetInstance()