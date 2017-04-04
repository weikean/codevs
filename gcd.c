 #include <stdio.h>

int gcd(int a, int b)
{
     if(!b) return a;
     else  return gcd(b, a%b );
}

int main(void)
{
	int i,j;
	scanf("%d%d", &i,&j);
	printf("%d\n",gcd(i,j));
	return 1;
}