#pragma once
#include "Mover.h"
#include "KeyInput.h"

class PlayerShip :
	public Mover {
public:
	PlayerShip();
	~PlayerShip();
	bool Update() override;
	void Draw() override;
private:
	int shipImg;
};

