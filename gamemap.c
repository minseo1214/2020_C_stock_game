#include"ming.h"
void gotoxy(int x, int y) {

	COORD pos = { x,y };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

}

void random() {
	srand(time(NULL));

	random_1 = rand() % 1000;
	random_2 = rand() % 1000;
	random_3 = rand() % 1000;
	random_4 = rand() % 1000;
	random_5 = rand() % 1000;

	return 0;
}

void pmrandom() {
	srand(time(NULL));

	random_pm_1 = rand() % 4;
	for (int j = 0; j != random_pm_1; j++) {
		random_1 *= (-1);
	}
	random_pm_2 = rand() % 4;
	for (int j = 0; j != random_pm_2; j++) {
		random_2 *= (-1);
	}
	random_pm_3 = rand() % 4;
	for (int j = 0; j != random_pm_3; j++) {
		random_3 *= (-1);
	}
	random_pm_4 = rand() % 4;
	for (int j = 0; j != random_pm_4; j++) {
		random_4 *= (-1);
	}
	random_pm_5 = rand() % 4;
	for (int j = 0; j != random_pm_5; j++) {
		random_5 *= (-1);
	}
	return 0;
}

void print_g() {
	int mapx = 5;
	int mapy = 5;
	system("cls");
	gotoxy(mapx+3, mapy++);
	printf("������ �Ͻðڽ��ϱ�? ���� �ܾ� : %d", my);
	gotoxy(mapx + 3, mapy++);
	printf("1.�����ֽ�");
	gotoxy(mapx + 3, mapy++);
	printf("2.�� �ֽ�\n");
	gotoxy(mapx + 3, mapy++);
	printf("3.������\n");
}

void one() {//����
	random();
	pmrandom();
	W_check = 0;
	print_check();
	choice_check();
}


void three() {//�� �ֽĺ���
	mapx = 5;
	mapy = 3;
	i_1 = 0;
	i_2 = 0;
	i_3 = 0;
	i_4 = 0;
	i_5 = 0;
	system("cls");
	gotoxy(mapx + 3, mapy++);
	printf("1.��ȸ��");
	gotoxy(mapx + 3, mapy++);
	printf("2.���Ҹ�");
	gotoxy(mapx + 3, mapy++);
	printf("3.����");
	gotoxy(mapx + 3, mapy++);
	printf("4.���");
	gotoxy(mapx + 3, mapy++);
	printf("5.����ũ��");
	gotoxy(mapx + 3, mapy++);
	printf("Ȯ���ϰ� ���� �ֽ��� �����ϼ���");
	scanf_s("%d", &num);
	getchar();
}
void three_1(){
	char wh = 'L';
	int ab;
	char ch;
	if (my_mm_1[0] != 0) {
		while (my_mm_1[i_1] != 0) {
			gotoxy(mapx + 3, mapy++);
			printf("%d : %d\n", i_1 + 1, my_mm_1[i_1]);
			i_1++;
		}
		gotoxy(mapx + 3, mapy++);
		printf("�Ǹ��Ͻðڽ��ϱ�? ");
		scanf_s("%c", &wh);
		getchar();
		if (wh == 'Y') {
			gotoxy(mapx + 3, mapy++);
			printf("�����ϼ���");
			scanf_s("%d", &ab);
			getchar();
			gotoxy(mapx + 3, mapy++);
			printf("���� �ֽ��� %d�̰� %d����", mm_1, ab);
			gotoxy(mapx + 3, mapy++);
			printf("�ֽ��� %d�� �����ϼ̽��ϴ�.", my_mm_1[ab - 1]);
			gotoxy(mapx + 3, mapy++);
			printf("���� �Ǹ��Ͻðڽ��ϱ�?");
			scanf_s("%c", &ch);
			getchar();
			if (ch == 'Y') {
				my += mm_1;
				my_mm_1[ab - 1] = 0;
				for (int i = ab - 1; i <= 50; i++) {
					my_mm_1[i] = my_mm_1[i + 1];
				}
			}
		}
	}
	else {
		gotoxy(mapx + 3, mapy++);
		printf("���� �ֽ��� �����ϴ� ");
		Sleep(1000);
	}
}
void three_2() {
	char wh = 'L';
	int ab;
	char ch;
	if (my_mm_2[0] != 0) {
		while (my_mm_2[i_2] != 0) {
			gotoxy(mapx + 3, mapy++);
			printf("%d : %d\n", i_2 + 1, my_mm_2[i_2]);
			i_2++;
		}
		gotoxy(mapx + 3, mapy++);
		printf("�Ǹ��Ͻðڽ��ϱ�? ");
		scanf_s("%c", &wh);
		getchar();
		if (wh == 'Y') {
			gotoxy(mapx + 3, mapy++);
			printf("�����ϼ���");
			scanf_s("%d", &ab);
			getchar();
			gotoxy(mapx + 3, mapy++);
			printf("���� �ֽ��� %d�̰� %d����", mm_2, ab);
			gotoxy(mapx + 3, mapy++);
			printf("�ֽ��� %d�� �����ϼ̽��ϴ�.", my_mm_2[ab - 1]);
			gotoxy(mapx + 3, mapy++);
			printf("���� �Ǹ��Ͻðڽ��ϱ�?");
			scanf_s("%c", &ch);
			getchar();
			if (ch == 'Y') {
				my += mm_2;
				my_mm_2[ab - 1] = 0;
				for (int i = ab - 1; i <= 50; i++) {
					my_mm_2[i] = my_mm_2[i + 1];
				}
			}
		}
	}
	else {
		gotoxy(mapx + 3, mapy++);
		printf("���� �ֽ��� �����ϴ� ");
		Sleep(1000);
	}
}
void three_3() {
	char wh = 'L';
	int ab;
	char ch;
	if (my_mm_3[0] != 0) {
		while (my_mm_3[i_3] != 0) {
			gotoxy(mapx + 3, mapy++);
			printf("%d : %d\n", i_3 + 1, my_mm_1[i_3]);
			i_3++;
		}
		gotoxy(mapx + 3, mapy++);
		printf("�Ǹ��Ͻðڽ��ϱ�? ");
		scanf_s("%c", &wh);
		getchar();
		if (wh == 'Y') {
			gotoxy(mapx + 3, mapy++);
			printf("�����ϼ���");
			scanf_s("%d", &ab);
			getchar();
			gotoxy(mapx + 3, mapy++);
			printf("���� �ֽ��� %d�̰� %d����", mm_3, ab);
			gotoxy(mapx + 3, mapy++);
			printf("�ֽ��� %d�� �����ϼ̽��ϴ�.", my_mm_3[ab - 1]);
			gotoxy(mapx + 3, mapy++);
			printf("���� �Ǹ��Ͻðڽ��ϱ�?");
			scanf_s("%c", &ch);
			getchar();
			if (ch == 'Y') {
				my += mm_3;
				my_mm_3[ab - 1] = 0;
				for (int i = ab - 1; i <= 50; i++) {
					my_mm_3[i] = my_mm_3[i + 1];
				}
			}
		}
	}
	else {
		gotoxy(mapx + 3, mapy++);
		printf("���� �ֽ��� �����ϴ� ");
		Sleep(1000);
	}
}
void three_4() {
	char wh = 'L';
	int ab;
	char ch;
	if (my_mm_4[0] != 0) {
		while (my_mm_4[i_4] != 0) {
			gotoxy(mapx + 3, mapy++);
			printf("%d : %d\n", i_4 + 1, my_mm_1[i_4]);
			i_4++;
		}
		gotoxy(mapx + 3, mapy++);
		printf("�Ǹ��Ͻðڽ��ϱ�? ");
		scanf_s("%c", &wh);
		getchar();
		if (wh == 'Y') {
			gotoxy(mapx + 3, mapy++);
			printf("�����ϼ���");
			scanf_s("%d", &ab);
			getchar();
			gotoxy(mapx + 3, mapy++);
			printf("���� �ֽ��� %d�̰� %d����", mm_4, ab);
			gotoxy(mapx + 3, mapy++);
			printf("�ֽ��� %d�� �����ϼ̽��ϴ�.", my_mm_4[ab - 1]);
			gotoxy(mapx + 3, mapy++);
			printf("���� �Ǹ��Ͻðڽ��ϱ�?");
			scanf_s("%c", &ch);
			getchar();
			if (ch == 'Y') {
				my += mm_4;
				my_mm_4[ab - 1] = 0;
				for (int i = ab - 1; i <= 50; i++) {
					my_mm_4[i] = my_mm_4[i + 1];
				}
			}
		}
	}
	else {
		gotoxy(mapx + 3, mapy++);
		printf("���� �ֽ��� �����ϴ� ");
		Sleep(1000);
	}
}
void three_5() {
	char wh = 'L';
	int ab;
	char ch;
	if (my_mm_5[0] != 0) {
		while (my_mm_5[i_5] != 0) {
			gotoxy(mapx + 3, mapy++);
			printf("%d : %d\n", i_5 + 1, my_mm_5[i_5]);
			i_5++;
		}
		gotoxy(mapx + 3, mapy++);
		printf("�Ǹ��Ͻðڽ��ϱ�? ");
		scanf_s("%c", &wh);
		getchar();
		if (wh == 'Y') {
			gotoxy(mapx + 3, mapy++);
			printf("�����ϼ���");
			scanf_s("%d", &ab);
			getchar();
			gotoxy(mapx + 3, mapy++);
			printf("���� �ֽ��� %d�̰� %d����", mm_5, ab);
			gotoxy(mapx + 3, mapy++);
			printf("�ֽ��� %d�� �����ϼ̽��ϴ�.", my_mm_5[ab - 1]);
			gotoxy(mapx + 3, mapy++);
			printf("���� �Ǹ��Ͻðڽ��ϱ�?");
			scanf_s("%c", &ch);
			getchar();
			if (ch == 'Y') {
				my += mm_5;
				my_mm_5[ab - 1] = 0;
				for (int i = ab - 1; i <= 50; i++) {
					my_mm_5[i] = my_mm_5[i + 1];
				}
			}
		}
	}
	else {
		gotoxy(mapx + 3, mapy++);
		printf("���� �ֽ��� �����ϴ� ");
		Sleep(1000);
	}
}

void choice_g() {
	mapx = 5;
	mapy = 6;
	stop = 0;
	while (1) {
		print_g();
		gotoxy(mapx, mapy);
		printf(">>");
		key_g();
		system("cls");
		if (pap == 0) {
			break;
		}
	}
}

void choice_buy_1() {
	mapx = 5;
	mapy = 6;
	noo = 1;
	while (1) {
		buy();
		gotoxy(mapx, mapy);
		printf(">>");
		key_check_1();
		if (noo == 0) {
			break;
		}
	}
}

void choice_buy_2() {
	mapx = 5;
	mapy = 6;
	noo = 1;
	while (1) {
		buy();
		gotoxy(mapx, mapy);
		printf(">>");
		key_check_2();
		if (noo == 0) {
			break;
		}
	}
}
void choice_buy_3() {
	mapx = 5;
	mapy = 6;
	noo = 1;
	while (1) {
		buy();
		gotoxy(mapx, mapy);
		printf(">>");
		key_check_3();
		if (noo == 0) {
			break;
		}
	}
}
void choice_buy_4() {
	mapx = 5;
	mapy = 6;
	noo = 1;
	while (1) {
		buy();
		gotoxy(mapx, mapy);
		printf(">>");
		key_check_4();
		if (noo == 0) {
			break;
		}
	}
}
void choice_buy_5() {
	mapx = 5;
	mapy = 6;
	noo = 1;
	while (1) {
		buy();
		gotoxy(mapx, mapy);
		printf(">>");
		key_check_5();
		if (noo == 0) {
			break;
		}
	}
}

void help() {
	int mapx = 5;
	int mapy = 5;
	system("cls");
	gotoxy(mapx, mapy++);
	printf("===========");
	printf("----Ming �ֽ��Դϴ�.----");
	printf("===========\n");
	gotoxy(mapx + 3, mapy++);
	printf("�����ֽ�: ���� �ֽ��� Ȯ���մϴ�.");
	gotoxy(mapx + 3, mapy++);
	printf("�ֽ��� �� �� �ֽ��ϴ�");
	gotoxy(mapx + 3, mapy++);
	printf("���ֽ� : ���� ������ �ִ� �ֽ���\n");
	gotoxy(mapx + 3, mapy++);
	printf("1~10������ �����ݴϴ�.");
	gotoxy(mapx + 3, mapy++);
	printf("�Ǹ� : ������ �ִ� �ֽ��� �Ǹ��մϴ�\n");
	gotoxy(mapx + 3, mapy++);
	printf(">>�ڷ� ���ðڽ��ϱ�? : ");
}