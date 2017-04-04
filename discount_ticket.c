#include <stdio.h>

/*
.输入机票原价（3到4位的正整数，单位：元），
再输入机票打折率（小数点后最多一位数字）。
编程计算打折后机票的实际价格（单位：元。计算结果要将个位数四舍五入到十位数“元”）
。输入只有一行两个数（两数间用一个空格分隔），第一个为整数，
表示机票原价，第二个整数或实数（如是实数，小数点后最多1位数字）表示打折率。
*/

int main(void)
{
	int price;
	float discount;

	scanf("%d" "%f", &price, &discount);
	printf("%d\n", ((int)(price * (discount / 100.0) + 0.5) * 10));

	return 0;
}