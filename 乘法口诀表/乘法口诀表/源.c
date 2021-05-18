 #  define  _CRT_SECURE_NO_WARNINGS  1

# include<stdio.h>

int main()
{
	int i = 0;
	int table = 0;
	printf(" ‰»Î£∫");
	scanf("%d", &table);
	for (i = 1; i <= table; i++)
	{
		int j = 0;
		for (int j = 1;j<=i;j++)
		{
			printf("%d °¡ %d = %d  ", i,j,i*j );
		}
		printf("\n");
	}

	return 0;
}