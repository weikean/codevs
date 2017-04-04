#include <stdio.h>
#include <math.h>
/*
	将m进制数n转化成一个十进制数 m<=16
*/
int main(void)
{
	int m,i = 0,j = 0;
	char s[1000];
	char temp;
	int r = 0;
	int a[1000]= {0};

	scanf("%s%d", s,&m);

	while(s[j])
	{
		if(s[j] >= 'A' && s[j] <= 'Z')
		{
			a[i++] = s[j++] - 'A' + 10 ;
		}

		else if(s[j] >= 'a' && s[j] <= 'z')
		{
			a[i++] = s[j++] - 'a' + 10;
		}
		else
			a[i++] = s[j++] - '0';
	}

	for(j = 0; j <= i-1; j++)
	{
		printf("%d",a[j]);
		r += (a[j]) * pow(m,i-1-j);
	}
	printf("%d", r);
	return 0;
}