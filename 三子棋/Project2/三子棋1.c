 #  define  _CRT_SECURE_NO_WARNINGS  1

# include <stdio.h>
# include "game.h"

void menu()
{
	printf("***************************************\n");
	printf("********** 1. play   2. exit **********\n");
	printf("***************************************\n");
}

void game()
{
	char ret = 0;
	char arr[Row][Col] = {0};
	// ��ʼ������
	initarr(arr, Row, Col);
	// ��ӡ����
	displayarr(arr, Row, Col);
	// ����
	while (1)
	{
		// �������
		playmov(arr,Row,Col);
		displayarr(arr,Row,Col);
		// �ж���Ӯ
		ret = inwin(arr,Row,Col);
		if (ret != 'c')
		{
			break;
		}
		// ������
		computermov(arr, Row, Col);
		displayarr(arr, Row, Col);
		// �ж���Ӯ
		char ret = inwin(arr,Row,Col);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	if (ret == 't')
	{
		printf("ƽ��\n");
	}
}

void test() 
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("�����룺");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ���˳�");
			break;
		default:
			printf("ѡ�����������ѡ��");
			test();
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}