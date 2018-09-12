#pragma once
#include "util/Singleton.h"
#include "PlayerShip.h"
#include "BulletManager.h"
#include "Stage.h"

class GameMain {
public:
	GameMain();
	~GameMain();
	void MainLoop();//�Q�[���S�̂̃��[�v

private:
	int time = 0;
	enum SCENE { LOGO, TITLE, SELECT, PLAY, OPTION };
	SCENE scene;	//�V�[�����Ƃɋ�ʂ����񋓌^
	Stage *stage;
};
