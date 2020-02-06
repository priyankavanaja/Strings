#include <stdio.h>

static char rev[20];
char* reverse(char text[],int n)
{
	
	int i;
	i=0;
	
	while (text[i]!='\0')
	{
		rev[i]=text[n-1-i];
		i++;
	}
	rev[i]='\0';
	printf("\nthe reverse is %s\n",rev);

	return rev;
}

int palindrome (char rev[],char text[],int n)
{
	int i=0;
	while (i<n)
	{
		if (text[i]==rev[i])
		{
			i++;
			continue;
		}
		else 
			return 0;
	}
	return 1;
}

int main(int argc, char *argv[])
{
	char text[20];
	int length=0,out;

	printf("PALINDROME\n");
	printf("enter the text\n");
	scanf("%s",text);
	int i=0;
	while (text[i]!='\0')
	{
		length++;
		i++;
	}
	printf("%d\n",length);

	char *res=reverse(text,length);

	printf("printed reverse in main function %s\n",res);

	out=palindrome(rev,text,length);

	if (out==1)
	{
		printf("\nthe input is a palimdrome\n");
	}
	else printf("\n not a palindrome\n");

	return 0;
}
