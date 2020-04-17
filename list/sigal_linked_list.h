//
// Created by zego on 2020/4/17.
//

#include <stddef.h>
#include <stdlib.h>
#ifndef LIST_LIST_H
#define LIST_LIST_H

#endif //LIST_LIST_H
typedef struct  ListNode{
    int data;
    struct ListNode * next;
}ListNode;
ListNode * create(int iValue){
    ListNode *  node=  (ListNode *) malloc(sizeof(ListNode));
    node->next=NULL;
    node->data=iValue;
    return node;
}

ListNode * insert(ListNode * head,int iValue){
    ListNode * listNode=NULL;
    if(head==NULL){
        return create(iValue);
    }
    listNode =head;
    while (listNode->next!=NULL){
        listNode=listNode->next;
    }
    listNode->next=create(iValue);
    return  head;
}
void show(ListNode * head){
    while(head!=NULL){
        printf("%d ",head->data);
        head=head->next;
    }
    printf("\n");
}
ListNode * delete(ListNode * head,int index){
    ListNode * node=head;
    ListNode * preNode=NULL;
    if(head==NULL){
        return head;
    }
    if(index==0){
        return head->next;
    }
    preNode=node;
    node=node->next;
    while(node!=NULL){
        index--;
        if(index==0){
            preNode->next=node->next;
            free(node);
            break;
        }
        preNode=node;
        node=node->next;
    }
    return head;
}
ListNode * reversal(ListNode *head){
    ListNode *node=head, *preNode=NULL;
    ListNode *temp=NULL;
    while(node!=NULL){
        temp=node;
        node=node->next;
        temp->next=preNode;
        preNode=temp;
    }
    return preNode;

}
/****排序问题***/