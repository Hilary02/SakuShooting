#pragma once
#include "util/Singleton.h"
#include "PlayerShip.h"
#include "BulletManager.h"
#include "Stage.h"

class GameMain {
public:
	GameMain();
	~GameMain();
	void MainLoop();//ゲーム全体のループ

private:
	int time = 0;
	enum SCENE { LOGO, TITLE, SELECT, PLAY, OPTION };
	SCENE scene;	//シーンごとに区別した列挙型
	Stage *stage;
};
