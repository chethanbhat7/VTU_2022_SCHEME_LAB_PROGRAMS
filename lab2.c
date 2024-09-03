#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	int i,j,k,textlength,patternlength,replacelength;
	char *text=(char *)malloc(sizeof(char));
	char *pattern=(char *)malloc(sizeof(char));
	char *replace=(char *)malloc(sizeof(char));
	printf("Enter the text:");
	scanf(" %[^\n]",text);
	printf("Enter the pattern:");
	scanf(" %[^\n]",pattern);
	printf("Enter Replace string:");
	scanf(" %[^\n]",replace);
	textlength=strlen(text);
	patternlength=strlen(pattern);
	replacelength=strlen(replace);
	for(i=0;i<=textlength-patternlength;i++)
	{
		for(j=0;j<patternlength;j++)
		{
			if(text[i+j]!=pattern[j])
			{
				break;
			}
		}
		if(j==patternlength)
		{
			printf("Position is %d",i);
			break;
		}
	}
	if(replacelength==patternlength)
	{
		for(k=0;k<replacelength;k++)
		{
			text[i]=replace[k];
			i++;
		}
		printf("\nUpdated Text is:%s",text);
	}
	else
	{
		printf("Not possible to replace string");
	}
}

