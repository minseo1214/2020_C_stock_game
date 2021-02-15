#include"ming.h"


int main(void) {
	//PlaySound(TEXT(Third_Run), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	clock_t times = clock();
	fopen_s(&fp, "money.txt", "rt");
	fscanf_s(fp, "%d", &my);
	fclose(fp);
	i_1 = 0;
	i_2 = 0;
	i_3 = 0;
	i_4 = 0;
	i_5 = 0;
	mm_1 = 132000;
	mm_2 = 26000;
	mm_3 = 7100;
	mm_4 = 5200;
	mm_5 = 23200;
	start();
	key();
	fopen_s(&fp, "money.txt", "wt");
	fprintf(fp, "%d\n", my);
	fclose(fp);
}