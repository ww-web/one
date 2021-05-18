# define Row 3
# define Col 3

# include <stdio.h>
# include <stdlib.h>
# include <time.h>

void initarr(char arr[Row][Col], int row, int col);
void displayarr(char arr[Row][Col], int row, int col);

void playmov(char arr[Row][Col], int row, int col);
void computermov(char arr[Row][Col], int row, int col);



// 玩家赢  p
// 电脑赢  c
// 平局    t
// 继续    c
char inwin(char arr[Row][Col], int row, int rol);
