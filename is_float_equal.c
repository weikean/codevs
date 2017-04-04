#include <stdio.h>

//题目:p1203 判断浮点数是否相等

#define s (1e-8)

int main()
{
	float f1, f2;
	scanf("%f %f", &f1,&f2);
    if(((f1 >= f2) ? (f1-f2) : (f2-f1)) <= s)
		printf("yes");
	else
		printf("no");

	return 0;
}