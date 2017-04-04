#include <stdio.h>
#include <math.h>

int main(void)
{
	int n;
	int i,flag = 0;
	scanf("%d", &n);

	for (i = 2; i <= sqrt(n); ++i)
	{
		if(n % i == 0)
		{
			flag = 1;
			printf("\\n");
			break;
		}
			
	}
	if(flag == 0)
	printf("\\t");
	return 0;
}
