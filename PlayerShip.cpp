#include "PlayerShip.h"

PlayerShip::PlayerShip() {
	//画像マネージャに移動
	shipImg = LoadGraph("resource/graph/player_ship.png");
	SetHalfGraphSize(&w, &h, shipImg);
	x = 140;
	y = 200;
	speed = 3.0f;
	fieldLT = new Vector2D{ 20,20 };
	fieldRB = new Vector2D{ 530,580 };
}

PlayerShip::~PlayerShip() {
	DeleteGraph(shipImg);
}

bool PlayerShip::Update() {
	float dx = 0, dy = 0;
	if (KEYINPUT.GetKeyFrame(KEY_INPUT_UP) >= 1)dy -= speed;
	if (KEYINPUT.GetKeyFrame(KEY_INPUT_DOWN) >= 1)dy += speed;
	if (KEYINPUT.GetKeyFrame(KEY_INPUT_RIGHT) >= 1)dx += speed;
	if (KEYINPUT.GetKeyFrame(KEY_INPUT_LEFT) >= 1)dx -= speed;

	if (dx >= -ZEROVALUE && dy >= -ZEROVALUE) {
		dx *= SQRT2;
		dy *= SQRT2;
	}
	x += dx;
	y += dy;

	if (x <= fieldLT->_x)x = fieldLT->_x;
	else if (x >= fieldRB->_x) x = fieldRB->_x;
	if (y <= fieldLT->_y)y = fieldLT->_y;
	else if (y >= fieldRB->_y) y = fieldRB->_y;
	return true;
}

void PlayerShip::Draw() {
	DrawCenterGraph(x, y, w, h, shipImg, true);
	printfDx("%f,%f\n", x, y);
}
