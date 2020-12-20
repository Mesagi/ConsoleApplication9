#include "getVolumeSurface.h"

bool isSendable(BOX* box) {
	
	if (box->size > 160) {
		box->judge = false;
	}
	else {
		box->judge = true;
	}
	return box->judge;
}

void getSize(BOX* box) {
	
	box->size = box->x + box->y + box->z;
	return;
	
}

void judgeSize(BOX* box) {
	if (box->size > 140) {
		box->size = 160;
	}
	else if (box->size > 120) {
		box->size = 140;
	}
	else if (box->size > 100) {
		box->size = 120;
	}
	else if (box->size > 80) {
		box->size = 100;
	}
	else if (box->size > 60) {
		box->size = 80;
	}
	else if (box->size > 40) {
		box->size = 60;
	}
	else if (box->size > 20) {
		box->size = 40;
	}
	else {
		box->size = 20;
	}
}