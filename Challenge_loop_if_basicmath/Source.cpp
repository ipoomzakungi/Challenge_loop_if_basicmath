#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, sum = 0, N;
	double	av, sdTemp = 0;
	scanf_s("%d %d", &a, &b);
	if (a > b)
	{
		for(int i=a;i>=b;i--)
		{
			printf("%d ", i);
			sum += i;
			
		}
		N = a - b + 1;
		printf("\n");
		av = sum / (float)N;
		for (int i = a;i >= b;i--)
		{

			sdTemp += pow(i - av, 2);
		}
		//printf("%lf", sdTemp);

		sdTemp = sqrt(sdTemp / (N - 1));

		printf("average : %.2f\n", av);
		printf("SD      : %.2f", sdTemp);
	}
	else if(b>a)
	{
		for (int i = a;i <= b;i++)
		{
			printf("%d ", i);
			sum += i;
		}
		N = b - a + 1;
		printf("\n");
		av = sum / (float)N;
		for (int i = a;i <= b;i++)
		{
			
			sdTemp += pow(i - av, 2);
		}
		//printf("%lf", sdTemp);
		
		sdTemp = sqrt(sdTemp / (N-1));

		printf("average : %.2f\n", av);
		printf("SD      : %.2f", sdTemp);
	}
	else
	{
		printf("%d\n", a);
		printf("average : %d\n", a);
		printf("SD      : 0");
	}
	
}