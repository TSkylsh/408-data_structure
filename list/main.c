#include <stdio.h>
#include <stdlib.h>
typedef struct list_node {
    int value;
    struct list_node * next;
    struct  list_node * pre;
}list_node;

int main(){
    int n,value,m;
    scanf("%d",&n);
    list_node *head=NULL;
    list_node *tail =NULL;
    list_node*node=NULL;
    printf("Hello, World!\n");
    for(int i=0 ;i<n;i++){
        scanf("%d",&value);
        node=malloc(sizeof(list_node));
        node->pre=NULL,node->next=NULL;
        node->value=value;
        if(head==NULL){
            head=node;
            tail=node;
        }else{
            tail->next=node;
            node->pre=tail;
            tail=tail->next;
        }
    }
    if(head!=NULL){
        head->pre=tail;
        tail->next=head;
    }
    scanf("%d",&m);
    node=head;
    for(int i=0;i<m;i++){
        if(node->next!=NULL){
            node=node->next;
        }
    }
    for(int i=0;i<n;i++){
        if(node->pre!=NULL){
            node=node->next;
            printf("%d",node->value);
        }
    }
    return 0;
}