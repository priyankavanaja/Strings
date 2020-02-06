#include <stdio.h>
#include<stdlib.h>
#include<string.h>

void palindrome()
{
	char text[20],rev[20];
	fflush(stdin);
	printf("enter the string to be reversed\n");
	gets(text);

	strcpy(rev,text);
	strrev(rev);

	if (strcmp(text,rev)==0)
	{
		printf("\nthe %s is a palindrome\n",text);
	}
	else printf("\nthe %s is not a palindrome\n",text);
}

void countcharacter()
{
		
	char text[20],ch;
	int i=0,count=0,length;
	fflush(stdin);
	printf("enter the string \n");
	gets(text);
	fflush(stdin);
	printf("enter the char to be searched\n");
	scanf("%c",&ch);

	length=strlen(text);
	for (i=0;i<length ;i++ )
	{
		if (text[i]==ch)
		{
			++count;
		}
	}
	if (count)
	{
		printf("the occurence of the char %c in %s is %d\n",ch,text,count);
	}
	else printf("no occurence of the char %c in %s\n",ch,text);
}


int main(int argc, char *argv[])
{
	int choice;

	while(1)
	{
		printf("\nSTRING PROGRAM\n1.palindrome\n2.occurence of a char\n3.quit\n");
		printf("enter your choice\n");
		scanf("%d",&choice);

		switch (choice)
		{
			case 1: palindrome();
					break;
			case 2: countcharacter();
					break;
			/*case 3: stringconcat();
					break;
			case 4: stringcompare();
					break;*/
			default: exit(0);
		}
	}
	
	return 0;
}
