#include<stdio.h>
#include<stdlib.h>

struct stud
{
	char name[20];
	int prn;
	int age;
	
};


main()
{
	int i,n;
	struct stud *ptr[10];
	for(i=0;i<n;i++)
	{
		ptr[i]=(struct stud*)malloc(sizeof(struct stud));
		printf("enter name: ");
		scanf("%s",ptr[i]->name);
		printf("enter prn: ");
		scanf("%d",&ptr[i]->prn);
		printf("enter age: ");
		scanf("%d",&ptr[i]->age);
	}
	
	for(i=0;i<n;i++)
	{
	
		printf("name: %s\n",ptr[i]->name);
		printf("prn: %d \n",ptr[i]->prn);
		printf("age: %d \n",ptr[i]->age);
	}
	
}
