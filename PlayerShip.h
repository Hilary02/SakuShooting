#pragma once
#include "Mover.h"
#include "KeyInput.h"
#include "util/Vector2D.h"

class PlayerShip :
	public Mover {
public:
	PlayerShip();
	~PlayerShip();
	bool Update() override;
	void Draw() override;
private:
	int shipImg;
	Vector2D *fieldLT;
	Vector2D *fieldRB;
};

