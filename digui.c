#include <stdio.h>

/*

同学们在做题时常遇到这种函数

f(x)=5 (x>=0)

f(x)=f(x+1)+f(x+2)+1 (x<0)

下面就以这个函数为题做一个递归程序吧

*/

int f(int n)
{
	if(n >= 0)
		return 5;
	else
		return f(n+1) + f(n+2) + 1;
}

int main(void)
{
	int n;

	scanf("%d", &n);
    
    printf("%d\n",f(n));
	return 0;
}