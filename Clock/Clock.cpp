#include "graphics.h"		// 引用图形库头文件
#include <ctime>

int main() {
	initgraph(400, 500);	// 创建绘图窗口，大小为 640x480 像素
	setlinecolor(RGB(0, 0, 255));
	setbkcolor(TRANSPARENT);
	cleardevice();
	setbkcolor(BLACK);
	while (1) {
		time_t rawtime;
		struct tm ptminfo;
		time(&rawtime);
		localtime_s(&ptminfo, &rawtime);
		TCHAR s[30];
		_stprintf_s(s, _T("%d-%d-%d %d:%02d:%02d"), ptminfo.tm_year + 1900, ptminfo.tm_mon, ptminfo.tm_mday, ptminfo.tm_hour, ptminfo.tm_min, ptminfo.tm_sec);
		settextstyle(32, 0, _T("Consolas"));
		outtextxy(60, 200, s);
	}
	closegraph();		// 关闭绘图窗口
}