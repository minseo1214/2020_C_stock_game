#include"ming.h"
int a;
int key(void) {
    char c;
    c = _getch();           // 3. ����Ű�� �Է��� �� 224 00 �� ���ۿ� �ִ�. 224���� ���ش�. 
    if (c == -32) {           // 4. -32�� �ԷµǸ�
        c = _getch();        // 5. ���� �� 00�� �Ǻ��Ͽ� �¿���� ���
        switch (c) {
        case UP:
            if (mapy > 6) {
                mapy--;
            }
            break;
        case DOWN:
            if (mapy < 9) {
                mapy++;
            }
            break;
        }
    }
    else if (c == ENTER) {
        if (mapy == 6) {
            print_g();
            choice_g();
        }
        if (mapy == 7) {
            help();
            scanf_s("%d", &a);
        }
        if (mapy == 8) {

        }
        if (mapy == 9) {
            stop = 1;
        }
    }
}
int key_g(void) {
    pap = 1;
    char c;
    c = _getch();           // 3. ����Ű�� �Է��� �� 224 00 �� ���ۿ� �ִ�. 224���� ���ش�. 
    if (c == -32) {           // 4. -32�� �ԷµǸ�
        c = _getch();        // 5. ���� �� 00�� �Ǻ��Ͽ� �¿���� ���
        switch (c) {
            break;
        case UP:
            if (mapy > 6) {
                mapy--;
            }
            break;
        case DOWN:
            if (mapy < 8) {
                mapy++;
            }
            break;
        }
    }
    else if (c == ENTER) {
        if (mapy == 6) {
            one();
        }
        if (mapy == 7) {
            three();
            if (num == 1) {
                three_1();
            }
            if (num == 2) {
                three_2();
            }
            if (num == 3) {
                three_3();
            }
            if (num == 4) {
                three_4();
            }
            if (num == 5) {
                three_5();
            }
        }
        if (mapy == 8) {
            pap = 0;
        }
    }
}
void key_jusick(void) {
    char c;
    c = _getch();           // 3. ����Ű�� �Էµ��� �� 224 00 �� ���ۿ� �ִ�. 224���� ���ش�. 
    if (c == -32) {           // 4. -32�� �ԷµǸ�
        c = _getch();        // 5. ���� �� 00�� �Ǻ��Ͽ� �¿���� ���
        switch (c) {
            break;
        case UP:
            if (mapy > 6) {
                mapy--;
            }
            break;
        case DOWN:
            if (mapy < 12) {
                mapy++;
            }
            break;
        }
    }
    else if (c == ENTER) {
        switch (mapy) {
        case 6:
            choice_buy_1();
            break;
        case 7:
            choice_buy_2();
            break;
        case 8:
            choice_buy_3();
            break;
        case 9:
            choice_buy_4();
            break;
        case 10:
            choice_buy_5();
            break;
        case 12:
            ha = 0;
            break;
        }
    }
}
int key_check_1(void) {
    char c;
    c = _getch();           // 3. ����Ű�� �Է��� �� 224 00 �� ���ۿ� �ִ�. 224���� ���ش�. 
    if (c == -32) {           // 4. -32�� �ԷµǸ�
        c = _getch();        // 5. ���� �� 00�� �Ǻ��Ͽ� �¿���� ���
        switch (c) {
            break;
        case UP:
            if (mapy > 6) {
                mapy--;
            }
            break;
        case DOWN:
            if (mapy < 7) {
                mapy++;
            }
            break;
        }
    }
    else if (c == ENTER) {
        if (mapy == 6) {
            if (my < mm_1) {
                printf("���� �����մϴ�.");
            }
            if (my >= mm_1) {
                my -= mm_1;
                my_mm_1[i_1] = mm_1;
                i_1++;
                printf("���� �Ǿ����ϴ�");
                noo = 0;
                Sleep(1000);
            }

        }
        if (mapy == 7) {
            printf("���Ű� ��� �Ǿ����ϴ�");
            noo = 0;
            Sleep(1000);
        }
    }
}
int key_check_2(void) {
    char c;
    c = _getch();    
    if (c == -32) {        
        c = _getch();        
        switch (c) {
            break;
        case UP:
            if (mapy > 6) {
                mapy--;
            }
            break;
        case DOWN:
            if (mapy < 7) {
                mapy++;
            }
            break;
        }
    }
    else if (c == ENTER) {
        if (mapy == 6) {
            if (my < mm_2) {
                printf("���� �����մϴ�.");
            }
            if (my >= mm_2) {
                my -= mm_2;
                my_mm_2[i_2] = mm_2;
                i_2++;
                printf("���� �Ǿ����ϴ�");
                noo = 0;
                Sleep(1000);
            }

        }
        if (mapy == 7) {
            printf("���Ű� ��� �Ǿ����ϴ�");
            noo = 0;
            Sleep(1000);
        }
    }
}
int key_check_3(void) {
    char c;
    c = _getch();           // 3. ����Ű�� �Է��� �� 224 00 �� ���ۿ� �ִ�. 224���� ���ش�. 
    if (c == -32) {           // 4. -32�� �ԷµǸ�
        c = _getch();        // 5. ���� �� 00�� �Ǻ��Ͽ� �¿���� ���
        switch (c) {
            break;
        case UP:
            if (mapy > 6) {
                mapy--;
            }
            break;
        case DOWN:
            if (mapy < 7) {
                mapy++;
            }
            break;
        }
    }
    else if (c == ENTER) {
        if (mapy == 6) {
            if (my < mm_3) {
                printf("���� �����մϴ�.");
            }
            if (my >= mm_3) {
                my -= mm_3;
                my_mm_3[i_3] = mm_3;
                i_3++;
                printf("���� �Ǿ����ϴ�");
                noo = 0;
                Sleep(1000);
            }

        }
        if (mapy == 7) {
            printf("���Ű� ��� �Ǿ����ϴ�");
            noo = 0;
            Sleep(1000);
        }
    }
}
int key_check_4(void) {
    char c;
    c = _getch();           // 3. ����Ű�� �Է��� �� 224 00 �� ���ۿ� �ִ�. 224���� ���ش�. 
    if (c == -32) {           // 4. -32�� �ԷµǸ�
        c = _getch();        // 5. ���� �� 00�� �Ǻ��Ͽ� �¿���� ���
        switch (c) {
            break;
        case UP:
            if (mapy > 6) {
                mapy--;
            }
            break;
        case DOWN:
            if (mapy < 7) {
                mapy++;
            }
            break;
        }
    }
    else if (c == ENTER) {
        if (mapy == 6) {
            if (my < mm_4) {
                printf("���� �����մϴ�.");
            }
            if (my >= mm_4) {
                my -= mm_4;
                my_mm_4[i_4] = mm_4;
                i_4++;
                printf("���� �Ǿ����ϴ�");
                noo = 0;
                Sleep(1000);
            }

        }
        if (mapy == 7) {
            printf("���Ű� ��� �Ǿ����ϴ�");
            noo = 0;
            Sleep(1000);
        }
    }
}
int key_check_5(void) {
    char c;
    c = _getch();           // 3. ����Ű�� �Է��� �� 224 00 �� ���ۿ� �ִ�. 224���� ���ش�. 
    if (c == -32) {           // 4. -32�� �ԷµǸ�
        c = _getch();        // 5. ���� �� 00�� �Ǻ��Ͽ� �¿���� ���
        switch (c) {
            break;
        case UP:
            if (mapy > 6) {
                mapy--;
            }
            break;
        case DOWN:
            if (mapy < 7) {
                mapy++;
            }
            break;
        }
    }
    else if (c == ENTER) {
        if (mapy == 6) {
            if (my < mm_5) {
                printf("���� �����մϴ�.");
            }
            if (my >= mm_5) {
                my -= mm_5;
                my_mm_5[i_5] = mm_5;
                i_5++;
                printf("���� �Ǿ����ϴ�");
                noo = 0;
                Sleep(1000);
            }

        }
        if (mapy == 7) {
            printf("���Ű� ��� �Ǿ����ϴ�");
            noo = 0;
            Sleep(1000);
        }
    }
}