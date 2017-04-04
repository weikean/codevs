#include <stdio.h>
#include <string.h>
/*
我们要求找出具有下列性质数的个数(包含输入的自然数n):

先输入一个自然数n(n<=1000),然后对此自然数按照如下方法进行处理:

1.          不作任何处理;

2.          在它的左边加上一个自然数,但该自然数不能超过原数的一半;

3.          加上数后,继续按此规则进行处理,直到不能再加自然数为止.
10 510 410 310 210 
*/
//递推
int f(int n)
{
	int i,count = 0,t;
	if (n == 1)
	{
		return 1;
	}
		t = n/2;
		for(i = ; i >=1; i--)
		count += f(i);
		return count;
	

}

int main(void)
{
	int n;
	scanf("%d", &n);

	printf("%d",f(n));
	return 0;
}

/*
1.我们可以发现7的拆分数个数等于6的拆分数个数，8的拆分数个数等于7的拆分数个数加上它一半（4）的拆分数个数的和，所以我们就可以得出当n是偶数时f[n]:=f[n-1]+f[n div 2];当n是奇数时F[n]:=f[n-1]；
2.递归：每一个数都等于他前面的数的和加一f[n]:=1+f[1]+f[2]…+f[n div 2]
3.在递归时将每一个数储存起来，递归时直接调用；
*/


//递归
// int f(int n)
// {
// 	return (n==0? 1: f(n/2)+f(n-1)); 
// }

// int main(void)
// {
// 	int num;

// 	scanf("%d", &num);

// 	printf("%d\n",f(num/2));
	
// 	return 0;
// }