#include"ming.h"

void start() {//�޴�ȭ��
	system("mode con cols=62 lines=20");
	system("title MING�ֽ�");
	
	print();
	choice();
}

void print() {
	int mapx = 5;
	int mapy = 5;
	system("cls");
	gotoxy(mapx, mapy++);
	printf("===========");
	printf("----Ming �ֽ��Դϴ�.----");
	printf("===========\n");
	gotoxy(mapx + 3, mapy++);
	printf("1.����\n");
	gotoxy(mapx + 3, mapy++);
	printf("2.���ӹ��\n");
	gotoxy(mapx + 3, mapy++);
	printf("3.ȯ�漳��\n");
	gotoxy(mapx + 3, mapy++);
	printf("4.������\n");
}
//>>����
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
	printf("���� �ֽ� ");
	time_t now;
	time(&now);
	
	gotoxy(mapx + 3, mapy++);
	printf("��ȸ��   : %d",mm_1);
	printf("  %d", random_1);
	if (random_1 > 0) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
		printf("��");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	}
	if (random_1 < 0) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
		printf("��");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	}
	gotoxy(mapx + 3, mapy++);
	printf("���Ҹ�   : %d", mm_2);
	printf("  %d", random_2);
	if (random_2 > 0) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
		printf("��");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	}
	if (random_2 < 0) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
		printf("��");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	}
	gotoxy(mapx + 3, mapy++);
	printf("����     : %d", mm_3);
	printf("  %d", random_3);
	if (random_3 > 0) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
		printf("��");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	}
	if (random_3 < 0) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
		printf("��");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	}
	gotoxy(mapx + 3, mapy++);
	printf("���     : %d", mm_4);
	printf("  %d", random_4);
	if (random_4 > 0) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
		printf("��");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	}
	if (random_4 < 0) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
		printf("��");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	}
	gotoxy(mapx + 3, mapy++);
	printf("����ũ�� : %d", mm_5);
	printf("  %d", random_5);
	if (random_5 > 0) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
		printf("��");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	}
	if (random_5 < 0) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
		printf("��");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	}
	gotoxy(mapx + 3, mapy++);
	gotoxy(mapx + 3, mapy++);
	printf("������");
}

void buy(){
	int mapx = 5;
	int mapy = 5;
	system("cls");
	gotoxy(mapx + 3, mapy);
	printf("�����Ͻðڽ��ϱ�?");
	gotoxy(mapx + 3,mapy+1);
	printf("��");
	gotoxy(mapx + 3, mapy+2);
	printf("�ƴϿ�");
}