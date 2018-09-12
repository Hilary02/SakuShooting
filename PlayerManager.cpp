#include "PlayerManager.h"

PlayerManager::PlayerManager() {
	playership = new PlayerShip();
}

PlayerManager::~PlayerManager() {
	delete playership;
}

void PlayerManager::Update() {
	playership->Update();
}

void PlayerManager::Draw() {
	playership->Draw();
}
