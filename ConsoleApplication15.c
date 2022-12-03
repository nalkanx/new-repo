#include<stdio.h>
int main() {
	int i = 0, j = 1, k = 0;
	if (++k, i, j++)
	{
		printf("%d %d %d", i, j, k);
	}
		return 0;
}