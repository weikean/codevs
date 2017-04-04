#include <stdio.h>

// int main()
// {
// 	int i,n;
// 	int max_num = 0,min_num = 0;
// 	int a[100];

// 	scanf("%d",&n);
// 	for (i = 0; i < n; i++)
// 	{
// 		scanf("%d ",&a[i]);
// 	}

// 	min_num = max_num = a[0];

// 	for (i = 0; i < n; i++)
// 	{
// 		if(max_num < a[i]) max_num = a[i];
// 		if(min_num > a[i]) min_num = a[i];
// 	}

// 	printf("%d %d",min_num,max_num);
// 	return 0;
// }

//不用数组

// int main()
// {
// 	int n,max_num,min_num,i,r;

// 	scanf("%d", &n);

// 	for (i = 0; i < n; i++)
// 	{
// 		scanf("%d", &r);
// 		if (0 == i)
// 		{
// 			max_num = min_num = r;
// 		}
// 		else
// 		{
// 			if (max_num < r) max_num = r;
// 			if (min_num > r) min_num = r;
// 		}
// 	}

// 	printf("%d %d\n", min_num, max_num);
// 	return 1;
// }