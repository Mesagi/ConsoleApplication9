#pragma once
struct BOX {	//���̒�`
	double x;	//��
	double y;	//����
	double z;	//���s
	double volume;	//�̐�
	double surface; //�\�ʐ�
	double size;
	bool judge;
};
void getSize(BOX* box);
bool isSendable(BOX* box);
void judgeSize(BOX* box);

