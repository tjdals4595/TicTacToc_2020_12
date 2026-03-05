#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<Windows.h>
#include<conio.h>
void start();
void map();
void STARTrule();
void rule();
void play();
int A[3][3] = { 0 };
int X = 6, Y = 2;
int player = 1;
int ax = 1, ay = 1;
void location(int x, int y);
void replay();
void main() {
	system("mode con: cols=100 lines=40");
	start();
	STARTrule();
	map();
	location(((X * 7) + 2), ((Y * 4) - 1));
	play();
}
void start() {
	system("cls");
	int a=0;

		printf("���������������������������������������\n");
		printf("���������������������������������������\n");
		printf("���������������������������������������\n");
		printf("���������������������������������������\n");
		printf("���������������������������������������\n");
		printf("���������������������������������������\n");
		printf("���������������������������������������\n");
		printf("���������������������������������������\n");
		printf("���������������������������������������\n");
		printf("���������������������������������������\n");
		printf("���������������������������������������\n");
		printf("���������������������������������������\n");
		printf("���������������������������������������\n");
		printf("============================================================================\n\n");
		printf("�����Ͻðٽ��ϱ�?\n");
		printf("1.����\n");
		printf("2.����\n");
		do {
		scanf("%d", &a);
		if (a == 1) {}
		else if (a == 2) {
			printf("���α׷��� �����ϰٽ��ϴ�.\n");
			exit(0);
		}
		else {
			printf("���ڷ� �ȹٷ� �Է����ּ���.");
		}
	} while (a != 1);
}
void STARTrule() {
	int a,b;

	printf("��Ģ�� ���ðٽ��ϱ�?\n");
	printf("1.��\n");
	printf("2.�ƴϿ�\n");
	scanf("%d", &a);
	do {
		if (a == 1) {
			system("cls");
			int x = 7, y = 1;
			COORD A = { x, y };
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), A);
			printf("==========================================��Ģ==========================================");
			y++;
			COORD B = { x, y };
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), B);
			printf("1.������ ������ ù���� �÷��̾ O,�ι��� �÷��̾ X����� �˴ϴ�.");
			y++;
			COORD C = { x, y };
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), C);
			printf("2.ù��° �÷��̾� ���� ���ʸ� ������ ���� ���õ� ����� ������ ������ ���� �Ӵϴ�.");
			y++;
			COORD D = { x, y };
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), D);
			printf("3.���γ� ���� �밢�� �� �� �������� ���� ������ 3�� �����ϴ� ����� �¸�!\n");
			
			y += 2;
			COORD E = { x, y };
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), E);
			printf("������ �����ϽǷ��� 1���� �����ּ���.\n");
			scanf("%d", &b);
			if (b == 1) {
				break;
			}
		}
		else if (a == 2) {
			break;
		}
		else {
			printf("���ڷ� �ȹٷ� �Է����ּ���.");
		}
	} while (a != 2);

}
void map() {
	system("cls");

	printf("\n\t\t\t\t");
	for (int i = 0; i < 13; i++) {
		for (int j = 0; j < 13; j++) {
			if (i == 0 && j == 0)
				printf("��");
			else if (i == 0 && j == 12)
				printf("��");
			else if (i == 12 && j == 0)
				printf("��");
			else if (i == 12 && j == 12)
				printf("��");
			else if (i == 0)
				printf("��");
			else if (j == 0)
				printf("��");
			else if (j == 12)
				printf("��");
			else if (i == 12)
				printf("��");
			else if (i == 4)
				printf("��");
			else if (i == 8)
				printf("��");
			else if (j == 4)
				printf("��");
			else if (j == 8)
				printf("��");
			else
				printf("��");
		}
		printf("\n\t\t\t\t");
	}
}
void play() {
	char dir;
	int count = 0;
	while (1) {
		dir = _getch();
		switch (dir) {
		case 'w':
			if (ay != 0) {
				Y -= 1;
				ay--;
			}
			break;
		case 'a':
			if (ax != 0) {
				X -= 1;
				ax--;
			}
			break;
		case 's':
			if (ay != 2) {
				Y += 1;
				ay++;
			}
			break;
		case 'd':
			if (ax != 2) {
				X += 1;
				ax++;
			}
			break;
		case 'k':
			if (A[ay][ax] == 0) {
				if (player == 1) {
					COORD S1 = { ((X * 8) - 6), (Y * 4) - 2 };
					SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), S1);
					printf("��");
					COORD S2 = { ((X * 8) - 4), (Y * 4) - 2 };
					SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), S2);
					printf("��");
					COORD S3 = { ((X * 8) - 2), (Y * 4) - 2 };
					SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), S3);
					printf("��");
					COORD S4 = { ((X * 8) - 6), (Y * 4) - 1 };
					SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), S4);
					printf("��");
					COORD S5 = { ((X * 8) - 2), (Y * 4) - 1 };
					SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), S5);
					printf("��");
					COORD S6 = { ((X * 8) - 6), (Y * 4)};
					SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), S6);
					printf("��");
					COORD S7 = { ((X * 8) - 4), (Y * 4)};
					SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), S7);
					printf("��"); 
					COORD S8 = { ((X * 8) - 2), (Y * 4)};
					SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), S8);
					printf("��");

					A[ay][ax] = 1;
					player = 2;
				}
				else if (player == 2) {
					COORD S1 = { ((X * 8) - 6), (Y * 4) - 2 };
					SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), S1);
					printf("��");
					COORD S3 = { ((X * 8) - 2), (Y * 4) - 2 };
					SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), S3);
					printf("��");
					COORD S4 = { ((X * 8) - 4), (Y * 4) - 1 };
					SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), S4);
					printf("��");
					COORD S6 = { ((X * 8) - 6), (Y * 4) };
					SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), S6);
					printf("��");
					COORD S8 = { ((X * 8) - 2), (Y * 4) };
					SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), S8);
					printf("��");

					A[ay][ax] = 2;
					player = 1;
				}
				count++;
			}
		}
		location(((X * 8) - 4), ((Y * 4) - 1));

		for (int i = 0; i < 3; i++) {
			if (A[0][i] == 1 && A[1][i] == 1 && A[2][i] == 1) {
				location(2, 18);
				printf("O���� �÷��̾ �¸��ϼ˽��ϴ�.\n");
				replay();
			}
		}
		for (int i = 0; i < 3; i++) {
			if (A[i][0] == 1 && A[i][1] == 1 && A[i][2] == 1) {
				location(2, 18);
				printf("O���� �÷��̾ �¸��ϼ˽��ϴ�.\n");
				replay();
			}
		}
		if (A[0][0] == 1 && A[1][1] == 1 && A[2][2] == 1) {
			location(2, 18);
			printf("O���� �÷��̾ �¸��ϼ˽��ϴ�.\n");
			replay();
		}
		if (A[2][0] == 1 && A[1][1] == 1 && A[0][2] == 1) {
			location(2, 18);
			printf("O���� �÷��̾ �¸��ϼ˽��ϴ�.\n");
			replay();
		}

		for (int i = 0; i < 3; i++) {
			if (A[0][i] == 2 && A[1][i] == 2 && A[2][i] == 2) {
				location(2, 18);
				printf("X���� �÷��̾ �¸��ϼ˽��ϴ�.\n");
				replay();
			}
		}
		for (int i = 0; i < 3; i++) {
			if (A[i][0] == 2 && A[i][1] == 2 && A[i][2] == 2) {
				location(2, 18);
				printf("X���� �÷��̾ �¸��ϼ˽��ϴ�.\n");
				replay();
			}
		}
		if (A[0][0] == 2 && A[1][1] == 2 && A[2][2] == 2) {
			location(2, 18);
			printf("X���� �÷��̾ �¸��ϼ˽��ϴ�.\n");
			replay();
		}
		if (A[2][0] == 2 && A[1][1] == 2 && A[0][2] == 2) {
			location(2, 18);
			printf("X���� �÷��̾ �¸��ϼ˽��ϴ�.\n");
			replay();
		}

		if (count == 9) {
			location(2, 18);
			printf("���º��Դϴ�.\n");
			replay();
		}
	}

}
void location(int x, int y){
	COORD B = { 2, 15 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), B);
	printf("\t  �⺻ �̵�Ű�� \"w = ��, s = ��, a = ��, d = ��\" �Դϴ�.\n");
	printf("\t  ���ϴ� ���� ���ż� 'k'�� �����ּ���. �ǵ����� Ű�� 'j'�Դϴ�.");
	COORD A = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), A);
}
void replay() {
	int a;
	location(2, 19);
	printf("�ٽ� �����Ͻðٽ��ϱ�?\n");
	printf("1.�����\n");
	printf("2.����");
	do {
		scanf("%d", &a);
		if (a == 1) {
			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 3; j++) {
					A[i][j] = { 0 };
				}
			}
			player = 1;
			main();
		}
		else if (a == 2) {
			printf("���α׷��� �����ϰٽ��ϴ�.\n");
			exit(0);
		}
		else {
			printf("���ڷ� �ȹٷ� �Է����ּ���.");
		}
	} while (a != 1);

}