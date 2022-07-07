//런타임 오버
#include <stdio.h>

int main()
{
	int c;
	scanf_s("%d", &c);
	int d;
	for (int i = 0; i < c; i++)
	{
		float sum = 0, avg = 0;
		int score[101] = { 0, };
		int count = 0;
		scanf_s("%d", &d);
		for (int j = 0; j < d;j++)
		{
			scanf_s("%d", &score[j], sizeof(score[j]));
			sum += (float)score[j];
		}
		avg = sum / (float)d;
		for (int j = 0; j < d; j++)
		{
			if (score[j]>avg)
			{
				count++;
			}
		}
		printf("%.3f \n", ((float)count / (float)d)*100);
	}
	return 0;
}