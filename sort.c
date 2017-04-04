#include <stdio.h>


//冒泡排序，时间复杂度O(n2)--超时
// int main(void)
// {
// 	int i,j,n,temp;
// 	int a[100000];

// 	scanf("%d", &n);
// 	for (i = 0; i < n; i++)
// 		scanf("%d", &a[i]);

// 	for (i = 0; i < n; ++i)
// 	{
// 		for (j = i+1; j < n; ++j)
// 		{
// 			if(a[i] >= a[j])
// 			{
// 				temp = a[i];
// 				a[i] = a[j];
// 				a[j] = temp;
// 			}
// 		}
// 	}

// 	for(i = 0; i < n; ++i)
// 		printf("%d ", a[i]);
// 	return 0;
// }

//快排，O(n*log2n)  通过

int sort(int *a, int left, int right)
{
	int i,j,mid;

	if(left >= right)
	{
		return 0;
	}

	i = left;
	j = right;
	mid = a[left];

	while(i < j)
	{
		//从后面找小于mid 的数字填充到前面
		while(i < j && mid <= a[j])
		{
			j--;
		}
		a[i] = a[j];
		//从前面找大于mid的数字填充到后面
		while(i < j && mid >= a[i])
		{
			i++;
		}
		a[j] = a[i];
	}
	//退出时i = j,将mid填入中间。则mid前面的数字均小于mid,
	//Mid后面的数据将大于mid
	a[i] = mid;
	sort(a,left,i-1);
	sort(a,i+1,right);

}

int main(void)
{
	int i,n;
 	int a[100000];

 	scanf("%d", &n);
 	for (i = 0; i < n; ++i)
 		scanf("%d", &a[i]);

 	sort(a,0,n-1);

 	for (i = 0; i < n; ++i)
 		printf("%d ", a[i]);
	return 0; 
}

//桶排序

// int main(void)
// {
// 	int i,j,s,count = 0;
// 	int n;
// 	int a[100000] = {0};

// 	scanf("%d", &n);
// 	for (i = 0; i < n; i++)
// 	{
// 		scanf("%d", &s);
// 		++a[s] ;
		
// 	}

// 	for(i = 0; i < 100000; i++)
// 	{
// 		if(a[i] != 0)
// 		{
// 			for(j = 0; j < a[i]; j++)
// 				printf("%d ", i);
// 		}
		
// 	}

// 	return 0;
// }






