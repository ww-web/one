 #  define  _CRT_SECURE_NO_WARNINGS  1

# include<stdio.h>
# include<stdlib.h>
# include<time.h>

void start()
{
	printf("\n*****************************************\n");
	printf("******** 1.��ʼ��Ϸ   0.�˳���Ϸ ********\n");
	printf("*****************************************\n");
}
void game()
{
	int p = 0;
	int math = 0;
	math = rand() % 100 + 1;
	while (1)
	{
		printf("\n������һ������\n");
		scanf("%d", &p);
		if (p < math)
		{
			printf("��С��\n");
		}
		else if (p > math)
		{
			printf("�´���\n");
		}
		else
		{
			printf("�¶����� %d \n", p);
			break;
		}
	}
}

int main()
{
	int i = 0;
	srand((unsigned int)time(NULL));
	do
	{
		int a = 23;
		start();
		printf("��ѡ��");
		scanf("%d", &i);
		switch (i)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("\nѡ�����������ѡ��\n");
			break;
		}
	} while(i);

	return 0;
}