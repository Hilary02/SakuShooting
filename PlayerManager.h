#pragma once
#include "PlayerShip.h"

/*
�v���C���[�@�̂�I�v�V�����������ɂȂ鎞�̊Ǘ��N���X
*/

class PlayerManager {
public:
	PlayerManager();
	~PlayerManager();
	void Update();
	void Draw();
private:
	PlayerShip * playership;
};

