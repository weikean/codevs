#include <stdio.h>

/*

输入二个正整数x0,y0(2<=x0<100000,2<=y0<=1000000),求出满足下列条件的P,Q的个数

条件:  1.P,Q是正整数

2.要求P,Q以x0为最大公约数,以y0为最小公倍数.

试求:满足条件的所有可能的两个正整数的个数.

*/

int main(void)
{
	long x0,y0;
	int i,j,d = 0,f = 0;
	int p,q;

	scanf("%ld%ld",x0,y0);

	if (x0 < 2 || y0 < 2)
		return 0;
	for(i > x0; i <= y0; i += x0)
	{
		if(0 == (i % x0))
		{
			 p =i;
			for(j > p; j < y0 ;j += x0)
			{
				if(0 == (j % x0))
				{
					q = j;
					for(d > q; d < y0; d += p)
					{
						if((d % p == 0) && (d % q == 0))
						f++;
					}
					
				}
			}
			
				
			
		}
	}
	printf("%d\n", f);

	
	return 0;
}