#include <iostream>
#include "getVolumeSurface.h"
using namespace std;
//#include "getVolumeSurface.h"




int main()
{
	const int BoxCount = 3;
	BOX judge;
	BOX boxes[BoxCount];
	for (int i = 0; i < BoxCount; i++) {
		cout << "幅を入力：";
		cin >> boxes[i].x;
		cout << "高さを入力：";
		cin >> boxes[i].y;
		cout << "奥行を入力：";
		cin >> boxes[i].z;
		getSize(&boxes[i]);
		cout << "サイズは" << boxes[i].size << endl;
		isSendable(&boxes[i]);
		if (boxes[i].judge == true) {
			judgeSize(&boxes[i]);
			cout << boxes[i].size << "サイズで送れます";
		}
		else {
			cout << "無理っすね：";
		}
	}
	return 0;
}