#include <stdio.h>
#define MAX 5

int main() {
	int arr[MAX][MAX] = { 0 };
	int i, j, n = 0;

	for (i = 0; i < MAX; i++)
	{
		for (j = MAX - 1; j >= MAX - 1 - i; j--)
		{
			n++;
			arr[i][j] = n;
		}
	}

	for (i = 0; i < MAX; i++)
	{
		for (j = 0; j < MAX; j++)
		{
			if (arr[i][j] == 0)
			{
				printf("   ");
			}
			else
			{
				printf("%3d", arr[i][j]);
			}
		}
		printf("\n");
	}
	return 0;
}
