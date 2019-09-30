#include <stdio.h>
#include <stdlib.h>
struct node
{
	int info;
	struct node*next;
};
int main()
{
	struct node *p1,*p2,*p3,*temp;
	p1=(struct node*)malloc(sizeof(struct node));
	p2=(struct node*)malloc(sizeof(struct node));
	p3=(struct node*)malloc(sizeof(struct node));
	p1->info=20;
	p1->next=p2;
	p2->info=25;
	p2->next=p3;
	p3->info=35;
	p3->next=NULL;
	printf("\ndata p1=%d\npresent adress=%u\nnext adress to p1=%u", p1->info,p1,p1->next);
	printf("\ndata p2=%d\npresent adress=%u\nnext adress to p2=%u", p2->info,p2,p2->next);
	printf("\ndata p3=%d\npresent adress=%u\nnext adress to p3=%u", p3->info,p3,p3->next);
	temp=p1;
	while(temp!=NULL)
	{
		printf("\ndata=%d present adress=%u next adress=%u", temp->info,temp,temp->next);
	temp=temp->next;
	}

	
	
}
