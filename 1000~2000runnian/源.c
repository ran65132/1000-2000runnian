#include <stdio.h>
int main()
{
	int a = 1000;
	while (a <= 2000)
	{

		if (a % 4 == 0)
		{
			if (a % 100 == 0)
			{
				if (a % 400 == 0)
				{
					printf("%d\t", a);
				}
			}
			else
			{
				printf("%d\t", a);
			}
		}
		a++;
	}
}