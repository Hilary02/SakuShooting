#include "Stage.h"
#include "DxLib.h"

Stage::Stage() {
	bgGraph = LoadGraph("resource/graph/stage/bg_stage01.png");
	plManager = new PlayerManager();
}


Stage::~Stage() {
	DeleteGraph(bgGraph);
}

void Stage::Update() {
	plManager->Update();
}

void Stage::Draw() {
	DrawGraph(0, 0, bgGraph, true);
	plManager->Draw();
}
