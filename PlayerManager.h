#pragma once
#include "PlayerShip.h"

/*
プレイヤー機体やオプションが複数になる時の管理クラス
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

