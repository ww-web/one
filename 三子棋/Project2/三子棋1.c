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
	// 初始化棋盘
	initarr(arr, Row, Col);
	// 打印棋盘
	displayarr(arr, Row, Col);
	// 下棋
	while (1)
	{
		// 玩家先下
		playmov(arr,Row,Col);
		displayarr(arr,Row,Col);
		// 判断输赢
		ret = inwin(arr,Row,Col);
		if (ret != 'c')
		{
			break;
		}
		// 电脑下
		computermov(arr, Row, Col);
		displayarr(arr, Row, Col);
		// 判断输赢
		char ret = inwin(arr,Row,Col);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	if (ret == '#')
	{
		printf("电脑赢\n");
	}
	if (ret == 't')
	{
		printf("平局\n");
	}
}

void test() 
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请输入：");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏已退出");
			break;
		default:
			printf("选择错误，请重新选择");
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