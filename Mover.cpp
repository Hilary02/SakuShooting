#include "Mover.h"

Mover::Mover(){}

Mover::~Mover(){}

int Mover::SetHalfGraphSize(int *w, int *h, int GrHandle){
	GetGraphSize(GrHandle, w, h);
	*w /= 2;
	*h /= 2;

	return 0;
}

int Mover::DrawCenterGraph(int x, int y, int w, int h, int GrHandle, int TransFlag){
	return DrawGraph( x-w, y-h, GrHandle, TransFlag);
}
