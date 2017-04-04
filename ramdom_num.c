#include <stdio.h>

//桶排序

// int main(void)
// {
// 	int a[1000]={0};
// 	int n,i,j;
// 	int s = 0;

// 	scanf("%d\n", &n);
// 	for(i = 0; i < n; i++)
// 	{
// 		scanf("%d", &j);
// 		if (a[j] == 0)
// 		{
// 			a[j] = 1;
// 			s++;
// 		}
		
// 	}
// 	printf("%d\n", s);
// 	for (i = 0; i < 1000; ++i)
// 	{
// 		if(a[i])
// 			printf("%d ", i);
// 	}



// }

//手动查重，冒泡

// int main(void)
// {
// 	int n,i,j,t,s = 0;
// 	int a[100];

// 	scanf("%d", &n);
// 	for(i = 0; i < n; i++)
// 	{
// 		scanf("%d", &a[i]);
// 	}

// 	for (i = 0; i < n; ++i)
// 	{
// 		for(j = i+1; j < n; ++j)
// 		{
// 			if(a[i]  == a[j])
// 			{
// 				a[i] = 0;
// 				s++;
// 			}
// 		}
// 	}

// 	for (i = 0; i < n; ++i)
// 	{
// 		for(j = i+1; j < n; ++j)
// 		{
// 			if(a[i] >= a[j])
// 			{
// 				t = a[i];
// 				a[i] = a[j];
// 				a[j] = t;
// 			}
// 		}
// 	}

// 	printf("%d\n", n-s);
// 	for(i = 0; i < n; i++)
// 	{
// 		if(a[i] != 0)
// 		printf("%d ", a[i]);
// 	}
// 	return 0;
// }