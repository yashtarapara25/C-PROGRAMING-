#include<conio.h>
#include<stdio.h>
#include<string.h>

int main()
{

	char str[100],reversed[100];
	clrscr();

	printf("Enter A String :");
	scanf("%d",&str);

	strcpy(reversed,str);
	strrev(reversed);

	if(strcmp(str,reversed)==0)
	{
		printf("\nThe String %s is a palindrome.\n",str);
	}
	else
	{
		printf("\nThe String %s is not a palindrome.\n",str);
	}

	getch();
	return 0;
}
