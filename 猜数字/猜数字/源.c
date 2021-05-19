 #  define  _CRT_SECURE_NO_WARNINGS  1

# include<stdio.h>
# include<stdlib.h>
# include<time.h>

void start()
{
	printf("\n*****************************************\n");
	printf("******** 1.开始游戏   0.退出游戏 ********\n");
	printf("*****************************************\n");
}
void game()
{
	int p = 0;
	int math = 0;
	math = rand() % 100 + 1;
	while (1)
	{
		printf("\n请输入一个数：\n");
		scanf("%d", &p);
		if (p < math)
		{
			printf("猜小了\n");
		}
		else if (p > math)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("猜对啦是 %d \n", p);
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
		printf("请选择：");
		scanf("%d", &i);
		switch (i)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("\n选择错误，请重新选择。\n");
			break;
		}
	} while(i);

	return 0;
}