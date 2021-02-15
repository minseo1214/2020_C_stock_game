#include"ming.h"

void start() {//메뉴화면
	system("mode con cols=62 lines=20");
	system("title MING주식");
	
	print();
	choice();
}

void print() {
	int mapx = 5;
	int mapy = 5;
	system("cls");
	gotoxy(mapx, mapy++);
	printf("===========");
	printf("----Ming 주식입니다.----");
	printf("===========\n");
	gotoxy(mapx + 3, mapy++);
	printf("1.시작\n");
	gotoxy(mapx + 3, mapy++);
	printf("2.게임방법\n");
	gotoxy(mapx + 3, mapy++);
	printf("3.환경설정\n");
	gotoxy(mapx + 3, mapy++);
	printf("4.끝내기\n");
}
//>>선택
int choice() {
	mapx = 5;
	mapy = 6;
	stop = 0;
	while (1) {
		print();
		gotoxy(mapx, mapy);
		printf(">>");
		key();
		if (stop == 1) {
			break;
		}
	}
}
void choice_check() {
	mapx = 5;
	mapy = 6;
	stop = 0;
	/*if (mm <= 0 && random_1 < 0) {
		random_1 *= (-1);
	}*/
	if (mm_1 + random_1 > 0) {
		mm_1 = mm_1 + random_1;
	}
	if (mm_2 + random_2 > 0) {
		mm_2 = mm_2 + random_2;
	}
	if (mm_3 + random_3 > 0) {
		mm_3 = mm_3 + random_3;
	}
	if (mm_4 + random_4 > 0) {
		mm_4 = mm_4 + random_4;
	}
	if (mm_5 + random_5 > 0) {
		mm_5 = mm_5 + random_5;
	}
	ha = 1;
	while (1) {
		print_check();
		gotoxy(mapx, mapy);
		printf(">>");
		key_jusick();
		if (ha==0) {
			break;
		}
	}
}
void print_check() {
	char z;
	int mapx = 5;
	int mapy = 5;
	char b = 'B';
	system("cls");
	gotoxy(mapx + 3, mapy++);
	printf("현재 주식 ");
	time_t now;
	time(&now);
	
	gotoxy(mapx + 3, mapy++);
	printf("밍회사   : %d",mm_1);
	printf("  %d", random_1);
	if (random_1 > 0) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
		printf("▲");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	}
	if (random_1 < 0) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
		printf("▼");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	}
	gotoxy(mapx + 3, mapy++);
	printf("광소마   : %d", mm_2);
	printf("  %d", random_2);
	if (random_2 > 0) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
		printf("▲");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	}
	if (random_2 < 0) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
		printf("▼");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	}
	gotoxy(mapx + 3, mapy++);
	printf("셈성     : %d", mm_3);
	printf("  %d", random_3);
	if (random_3 > 0) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
		printf("▲");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	}
	if (random_3 < 0) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
		printf("▼");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	}
	gotoxy(mapx + 3, mapy++);
	printf("사과     : %d", mm_4);
	printf("  %d", random_4);
	if (random_4 > 0) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
		printf("▲");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	}
	if (random_4 < 0) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
		printf("▼");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	}
	gotoxy(mapx + 3, mapy++);
	printf("마인크로 : %d", mm_5);
	printf("  %d", random_5);
	if (random_5 > 0) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
		printf("▲");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	}
	if (random_5 < 0) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
		printf("▼");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	}
	gotoxy(mapx + 3, mapy++);
	gotoxy(mapx + 3, mapy++);
	printf("나가기");
}

void buy(){
	int mapx = 5;
	int mapy = 5;
	system("cls");
	gotoxy(mapx + 3, mapy);
	printf("구매하시겠습니까?");
	gotoxy(mapx + 3,mapy+1);
	printf("예");
	gotoxy(mapx + 3, mapy+2);
	printf("아니요");
}