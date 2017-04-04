#include <stdio.h>
#include <string.h>
//给出一个英语句子，希望你把句子里的单词顺序都翻转过来

int main(void)
{
	char word[128];
	char reverse_word[128];
	int i,j,x,n;
	int s = 0;

	gets(word);

	n = strlen(word); 
	for (i = strlen(word) - 1; i >= 0; i--)
	{
		if (word[i] == ' ')
		{
			 x = i+1;
			 for (j = s ; x <= n - 1; j++,x++)
			 {
			 	reverse_word[j] = word[x];
			 }
			 reverse_word[j] = ' ';
			 n = i;
			 s = j+1;
		}
		else if(i == 0)
		{
			x=0;
			for (j = s ; x <= n - 1; j++,x++)
			 {
			 	reverse_word[j] = word[x];
			 }
			 reverse_word[j] = '\0';
		}



	}

	printf("%s\n", reverse_word); 
	return 0;
}