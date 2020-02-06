#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//string length
void strlength()
{
	int length;
	char text[20];
	fflush(stdin);
	printf("enter the string\n");
	gets(text);
	int i=0;
	while (text[i]!='\0')
	{
		i++;
	}
	length =i;
	printf("\nthe length of string is %d\n",length);
}
void strlenbuilt()
{
	char text[20];
	int length;
	fflush(stdin);
	printf("enter the string\n");
	gets(text);
	length =strlen(text);
	printf("\nthe length of string is %d\n",length);
}


void stringlength()
{
	int choice;

	while(1)
	{
		printf("\nSTRING: TO CALCULATE THE LENGTTH OF THE STRING\n1.without strlen()\n2.using strlen()\n3.to go back to main\n4.quit\n");
		printf("enter your choice\n");
		scanf("%d",&choice);

		switch (choice)
		{
			case 1: strlength();
					break;
			case 2: strlenbuilt();
					break;
			default:main();
		}
	}
}

//string copy

void strcopy()
{
	char text[20],copy[20];
	int i=0;

	fflush(stdin);
	printf("enter the string\n");
	gets(text);

	while (text[i]!='\0')
	{
		copy[i]=text[i];
		i++;
	}
	copy[i]='\0';

	printf("the original string is %s\n",text);
	printf("the copy string is %s\n",copy);
}

void strcpybuilt()
{
	char text[20],copy[20];
	fflush(stdin);
	printf("enter the string\n");
	gets(text);
	strcpy(copy,text);
	printf("the original string is %s\n",text);
	printf("the copy string is %s\n",copy);
}

void stringcopy()
{
	int choice;

	while(1)
	{
		printf("\nSTRING: TO COPY TO STRINGS\n1.without strcpy()\n2.using strcpy()\n3.quit\n");
		printf("enter your choice\n");
		scanf("%d",&choice);

		switch (choice)
		{
			case 1: strcopy();
					break;
			case 2: strcpybuilt();
					break;
			default: main();
		}
	}
}
//string concatenation
void strccat()
{ 
	char text1[20],text2[20];
	int i=0,length;

	fflush(stdin);
	printf("enter the string1 \n");
	gets(text1);
	fflush(stdin);
	printf("enter the string2 \n");
	gets(text2);
	printf("the string1 is %s\n",text1);
	printf("the string2 is %s\n",text2);
	while (text1[i]!='\0')
	{
		i++;
	}
	length=i;
	int j=0;
	while (text2[j]!='\0')
	{
		text1[length+j]=text2[j];
		j++;
	}
	text1[length+j]='\0';

	printf("the concatenated string is %s\n",text1);
}

void strcatbuilt()
{ 
	char text1[20],text2[20];

	fflush(stdin);
	printf("enter the string1 \n");
	gets(text1);
	fflush(stdin);
	printf("enter the string2 \n");
	gets(text2);
	printf("the string1 is %s\n",text1);
	printf("the string2 is %s\n",text2);

	strcat(text1,text2);
	printf("the concatenated string is %s\n",text1);
}

void stringconcat()
{
	int choice;

	while(1)
	{
		printf("\nSTRING: TO CONCATENATE TWO STRINGS\n1.without strcat()\n2.using strcat()\n3.quit\n");
		printf("enter your choice\n");
		scanf("%d",&choice);

		switch (choice)
		{
			case 1: strccat();
					break;
			case 2: strcatbuilt();
					break;
			default: main();
		}
	}
}
//string compare


/*void stringcompare()
{
	int choice;

	while(1)
	{
		printf("\nSTRING: TO CONCATENATE TWO STRINGS\n1.without strcmp()\n2.using strcmp()\n3.quit\n");
		printf("enter your choice\n");
		scanf("%d",&choice);

		switch (choice)
		{
			case 1: strcompare();
					break;
			case 2: strcmpbuilt();
					break;
			default: main();
		}
	}
}*/

//string reverse

void strreverse()
{
	int length;
	char text[20],rev[20];
	fflush(stdin);
	printf("enter the string1 \n");
	gets(text);
	
	length=strlen(text);
	int i=0;
	while (text[i]!='\0')
	{
		rev[length-1-i]=text[i];
		i++;
	}
	rev[i]='\0';
	printf("\nthe reverse of %s is %s",text,rev);
}

void strrevbuilt()
{
	int length;
	char text[20],rev[20];
	fflush(stdin);
	printf("enter the string1 \n");
	gets(text);
	printf("\n the original is %s ",text);
	length =strlen(text);
	strrev(text);
	printf("\n the reverse is %s",text);
}

void stringreverse()
{
	int choice;

	while(1)
	{
		printf("\nSTRING: TO REVERSE TWO STRINGS\n1.without strrev()\n2.using strrev()\n3.quit\n");
		printf("enter your choice\n");
		scanf("%d",&choice);

		switch (choice)
		{
			case 1: strreverse();
					break;
			case 2: strrevbuilt();
					break;
			default: main();
		}
	}
}
// string from upper case to lower case

void strtolower()
{   
	char text[20];
	fflush(stdin);
	printf("enter the string1 \n");
	gets(text);
	int i=0;
	while (text[i]!='\0')
	{
		if (text[i]>='A' && text[i]<='Z')
		{
			text[i]=text[i]+32;
		}
		i++;
	}
	printf("the string is converted to lower case and the res is %s\n",text);
}

void strlwrbuilt()
{
	char text[20];
	fflush(stdin);
	printf("enter the string1 \n");
	gets(text);
	strlwr(text);
	printf("the string is converted to lower case and the res is %s\n",text);
}

void stringtolower()
{
	int choice;

	while(1)
	{
		printf("\nSTRING: UPPER CASE TO LOWERCASE \n1.without strlwr()\n2.using strlwr()\n3.quit\n");
		printf("enter your choice\n");
		scanf("%d",&choice);

		switch (choice)
		{
			case 1: strtolower();
					break;
			case 2: strlwrbuilt();
					break;
			default: main();
		}
	}
}

// string from lower case to upper case
void strtoupper()
{
	char text[20];
	fflush(stdin);
	printf("enter the string1 \n");
	gets(text);
	int i=0;
	while (text[i]!='\0')
	{
		if (text[i]>='a' && text[i]<='z')
		{
			text[i]=text[i]-32;
		}
		i++;
	}
	printf("the string is converted to lower case and the res is %s\n",text);
}
	
void struprbuilt()
{
	char text[20];
	fflush(stdin);
	printf("enter the string1 \n");
	gets(text);
	strupr(text);
	printf("the string is converted to lower case and the res is %s\n",text);
}

void stringtoupper()
{
	int choice;

	while(1)
	{
		printf("\nSTRING: LOWER CASE TO UPPER CASE\n1.without strupr()\n2.using strupr()\n3.quit\n");
		printf("enter your choice\n");
		scanf("%d",&choice);

		switch (choice)
		{
			case 1: strtoupper();
					break;
			case 2: struprbuilt();
					break;
			default: main();
		}
	}
}
//main
int main(int argc, char *argv[])
{
	int choice;

	while(1)
	{
		printf("\nSTRING\n1.length of string\n2.copy two strings\n3.concat two strings\n4.string compare\n5.string reverse\n6.to lower care\n7.to uppercase\n8.quit\n");
		printf("enter your choice\n");
		scanf("%d",&choice);

		switch (choice)
		{
			case 1: stringlength();
					break;
			case 2: stringcopy();
					break;
			case 3: stringconcat();
					break;
			/*case 4: stringcompare();
					break;*/
			case 5:stringreverse();
			break;
			case 6:stringtolower();
			break;
			case 7:stringtoupper();
			break;
			default: exit(0);
		}
	}
	return 0;
}
