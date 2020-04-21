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
    for(int i=0 ;i<n;i++){
        scanf("%d",&value);
        node=(list_node*)malloc(sizeof(list_node));
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
    while(node!=NULL){
        if(node->value==m){
            break;
        }
        node=node->next;
    }
    for(int i=0;i<n;i++){
        if(node!=NULL){
            printf("%d ",node->value);
            node=node->pre;
        }
    }
    return 0;
}