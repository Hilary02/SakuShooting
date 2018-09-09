#include "PlayerShip.h"

PlayerShip::PlayerShip() {
	//画像マネージャに移動
	shipImg = LoadGraph("resource/graph/player_ship.png");
	x = 140;
	y = 200;
	speed = 3.0f;
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
	return true;
}

void PlayerShip::Draw() {
	DrawGraph(x, y, shipImg, true);
}
