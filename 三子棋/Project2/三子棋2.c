 #define  _CRT_SECURE_NO_WARNINGS  1

# include "game.h"

void initarr(char arr[Row][Col], int row, int col)
{
	int j = 0;
	int i = 0;
	for (j = 0;j < row; j++)
	{
		for ( i = 0; i < col; i++)
		{
			arr[j][i] = ' ';
		}
	}
}

void displayarr(char arr[Row][Col], int row, int col)
{
	int j = 0;
	for (j = 0; j < row; j++)
	{
		int i = 0;
		for (i = 0; i < col; i++)
		{
			printf(" %c ", arr[j][i]);
			if (i < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (j < row - 1)
		{
			for (i = 0; i < col; i++)
			{
				printf("---");
				if (i < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}

void playmov(char arr[Row][Col], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走：\n");
	while (1)
	{
		printf("请输入坐标：");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (arr[x - 1][y - 1] == ' ')
			{
				arr[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("坐标已被占用\n");
			}
		}
		else
		{
			printf("坐标错误，重新输入\n");
		}
	}
}

void computermov(char arr[Row][Col], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走 >\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (arr[x][y] == ' ')
		{
			arr[x][y] = '#';
			break;
		}
	}
}

int ifwin(char arr[Row][Col], int row, int col)
{
	int x = 0;
	int y = 0;
	for (x = 0; x < row; x++)
	{
		for (y = 0; y < col; y++)
		{
			if (arr[x][y] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}

char inwin(char arr[Row][Col], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{

		if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][1] != ' ')
		{
			return arr[i][1];
		}
	}

	for (i = 0; i < row; i++)
	{

		if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i] && arr[1][i] != ' ')
		{
			return arr[1][i];
		}
	}

	if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[1][1] != ' ')
	{
		return arr[1][1];
	}

	if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][1] && arr[1][1] != ' ')
	{
		return arr[1][1];
	}

	if (1 == ifwin(arr,Row,Col))
	{
		return 't';
	}
	return 'c';

}