#pragma once
#include "PlayerManager.h"

class Stage{
public:
	Stage();
	~Stage();
	void Update();
	void Draw();
private:
	int bgGraph;
	PlayerManager* plManager;

};

