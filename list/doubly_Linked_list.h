//
// Created by zego on 2020/4/17.
//

#include <stddef.h>

#ifndef LIST_DOUBLYLINKEDLIST_H
#define LIST_DOUBLYLINKEDLIST_H

#endif //LIST_DOUBLYLINKEDLIST_H

typedef struct DoubleLinked{
    int data;
    struct DoubleLinked *pre;
    struct DoubleLinked *next;
}DoubleLinked;
DoubleLinked * create_doublelist(value) {
    DoubleLinked *node=(DoubleLinked *)malloc(sizeof(DoubleLinked));
    node->next=NULL;
    node->pre=NULL;
    node->data=value;
}
    DoubleLinked * insert_doublelink(DoubleLinked *head ,value){
    DoubleLinked *listNode=NULL;
    if(head==NULL){
        return create_doublelist(value);
    }
        listNode=head;
    while(listNode->next!=NULL){
        listNode->next=listNode->next;
    }
        listNode->next=create_doublelist(value);
        listNode->next->pre=listNode;
                return head;
}