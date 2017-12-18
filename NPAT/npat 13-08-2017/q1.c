#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct node
{
	char s[105];
	struct node *next;
}Node; 

void insertAtEnd(Node **head,Node **tail,char s[105])
{
	Node *temp=(Node*)malloc(sizeof(Node));
	temp->next=NULL;
	//temp->s=malloc(105*sizeof(char));
	strcpy(temp->s,s);
	if(*head==NULL)
	*head=temp;
	
	if(*tail==NULL)
	*tail=temp;
	else
	{
		(*tail)->next=temp;
		*tail=temp;
	}
}
int main()
{
	Node *head=NULL;
	Node *tail=NULL;
	int i;
	char s[105];
	fgets(s,105,stdin);
	while(s[0]!='\n')
	{
		insertAtEnd(&head,&tail,s);
		fgets(s,105,stdin);
	}
	
	/*Node *temp=head;
	while(temp!=NULL)
	{
		printf("%s->",temp->s);
		temp=temp->next;
	}*/
	Node *p1=head;
	Node *p2=head;
	while(p2!=NULL)
	{
		p2=p2->next->next;
		p1=p1->next;
	}
	
	p2=head;
	Node *temp=p1;
	
	while(p1!=NULL)
	{
		printf("%s",p1->s);
		p1=p1->next;
	}
	while(p2!=temp)
	{
		printf("%s",p2->s);
		p2=p2->next;
	}
	return 0;
}
