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
	int w, h;

	float x = 0, y = 0;
	float speed = 1.0f;
	int SetHalfGraphSize(int *w, int *h, int GrHandle);
	int DrawCenterGraph(int x, int y, int w, int h, int GrHandle, int TransFlag);
};
