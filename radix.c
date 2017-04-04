#include <stdio.h>

//将十进制数n转换成m进制数 m<=16

int main(void)
{
	int n,m,s,i = 0;
	char temp;
	char r[1000];

	scanf("%d%d", &n,&m);

	while(n)
	{
		temp = n % m;
		if(temp >= 10)
		{
			r[i++] = temp -10 + 'A';

		}
		else
			r[i++] = temp + '0';
		n = n / m;
	}

	for(s = i-1; s >= 0; s--)
	{
		printf("%c",r[s]);
	}
	return 0;
}