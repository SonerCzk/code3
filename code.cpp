#include <stdio.h>
int main()
{
	char names[5][20];
	double scores[5][4];  
	int i, j;
	for (i = 0; i < 5; i++)
	{
		scores[i][3] = 0;
		scanf("%s", names[i]);
		for (j = 0; j < 3; j++)
		{
			scanf("%lf", &scores[i][j]);
			scores[i][3] += scores[i][j];
		}
		scores[i][3] /= 3;
		printf("%s %lf\n", names[i], scores[i][3]);
	}
	return 0;
}
