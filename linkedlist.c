#include <stdio.h>
#include <stdlib.h>
#include <Math.h>

struct node {
   int sayi;
   struct node *next;
};

void insert(struct node **head,int data){
		
	struct node* new_node=malloc(sizeof(struct node));
	new_node->sayi=data;
	new_node->next=NULL;
	
	if(*head==NULL){
		*head=new_node;
	}
	
	else{
		struct node *temp = *head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=new_node;
	}
}

void print(struct node *curr){
	struct node *temp;
	
	 if (curr == NULL) {
      printf("List is empty.\n");
      return;
   }
	temp = curr;
	
	printf("Link List: ");
while(temp!=NULL){
			printf("%d ",temp->sayi);
			temp=temp->next;
		}
}


int main(){
struct node* head=NULL;
insert(&head,10);
insert(&head,5);
int data;
printf("Add data: ");
scanf("%d",&data);
insert(&head,data);
print(head);
return 0;
}





 