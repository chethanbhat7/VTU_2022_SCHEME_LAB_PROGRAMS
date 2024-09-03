#include<stdio.h>
#include<stdlib.h>

struct day
{
	char *dayname;
	int date;
	char *activity;
};
struct day* createday()
{
	struct day* newday=(struct day*)malloc(sizeof(struct day));
	newday->activity=(char*)malloc(sizeof(char));
	newday->dayname=(char*)malloc(sizeof(char));
	printf("Enter the day name:");
	scanf("%s",newday->dayname);
	printf("Enter date:");
	scanf("%d",&(newday->date));
	printf("Enter the activity description");
	scanf(" %[^\n]",newday->activity);
	return newday;
}
void read(struct day* calender[], int size)
{
 for(int i=0;i<size;i++)
 {
 	printf("Enter details for day :%d\n",i+1);
 	calender[i]=createday();
 } 
}



void display(struct day* calender[],int size)
{
	printf("\n Week's activity Details:\n");
	for(int i=0;i<size;i++)
	{
		printf("Day %d:\n",i+1);
		printf("Day Name:%s\n",calender[i]->dayname);
		printf("Date:%d\n",calender[i]->date);
		printf("Activity Description : %s\n",calender[i]->activity);
		printf("\n");
	}
} 
void freememory(struct day* calender[],int size)
{
	for(int i=0;i<size;i++)
	{
		free(calender[i]->dayname);
		free(calender[i]->activity);
		free(calender[i]);
	}
}
int main()
{
 struct day* week[7];
 read(week,7);
 display(week,7);
 freememory(week,7);
 return 0;
}
