 #include <stdio.h>

/*

输入二个正整数x0,y0(2<=x0<100000,2<=y0<=1000000),求出满足下列条件的P,Q的个数

条件:  1.P,Q是正整数

2.要求P,Q以x0为最大公约数,以y0为最小公倍数.

试求:满足条件的所有可能的两个正整数的个数.

*/

int gcd(int a, int b)
{
     if(!b) return a;
     else  return gcd(b, a%b );
}

int gcf(int a, int b)
{
	int i;
	 for (i= a; ; i+= a)  
     if ( i % a == 0 && i % b ==0 )     break;  
     return i;
}

int main(void)
{
	int x0,y0;
	int i = 0,j = 0,d = 0,f = 0;
	int p,q;

	scanf("%d%d",&x0,&y0);

	if (x0 < 2 || y0 < 2)
		return 0;
	
    for(i = x0; i <= y0; i += x0)
    {
    	for (j = i; j <= y0; j += x0)
    	{
    		if(x0 == gcd(i,j) && y0 == gcf(i,j))
    		{
    			printf("%d %d\n",i,j);
    			f++;
    		}
    	}
    }
	printf("%d", 2*f);

	
	return 0;
}

