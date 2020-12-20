#pragma once
struct BOX {	//” ‚Ì’è‹`
	double x;	//•
	double y;	//‚‚³
	double z;	//‰œs
	double volume;	//‘ÌÏ
	double surface; //•\–ÊÏ
	double size;
	bool judge;
};
void getSize(BOX* box);
bool isSendable(BOX* box);
void judgeSize(BOX* box);

