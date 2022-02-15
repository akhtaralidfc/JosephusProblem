#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int helper(struct node *head,int k){
        struct node *temp=head; 
        while(head->next!=head){ 
            struct node *pre=NULL;
            for(int i=1; i<k; i++){
                pre=temp;
                temp=temp->next;
            }
            if(temp==head){
                head=head->next;
            }
            pre->next=temp->next;
            free(temp);
            temp=pre->next;
        }
        return head->data;
    }
    int findTheWinner(int n, int k) {
        if(k==1)
            return n;
        struct node *head=NULL,*tail=NULL;
        for(int i=1; i<=n; i++){
          struct node *newnode=(struct node *)malloc(sizeof(struct node));
          newnode->data=i;
            if(head==NULL)
                head=tail=newnode;
            else{
                tail->next=newnode;
                tail=newnode;
            }
            tail->next=head;
        }
        return helper(head,k);
    }
    int main(){
    int n,k;
    printf("Enter the number of peoples: ");
    scanf("%d",&n);
	printf("Enter the count value to skip peoples: ");
    scanf("%d",&k);
	printf("The Winner will be at the positon %d.", findTheWinner(n, k));
	return 0;
    }

    /* Time Complexity : O(n)  Space Complexity : O(n) */