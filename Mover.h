#pragma once
#include "DxLib.h"

constexpr float ZEROVALUE = 1e-9f;
constexpr float SQRT2 = 1.41421356f;

class Mover {
public:
	Mover();
	~Mover();
	virtual bool Update() = 0;
	virtual void Draw() = 0;
protected:
	int x=0, y=0;
	float speed=1.0f;
};

