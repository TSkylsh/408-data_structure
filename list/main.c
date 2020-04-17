#include <stdio.h>
#include "sigal_linked_list.h"
int main() {
    ListNode *head=NULL;
    head= insert(head,1);
    head= insert(head,2);
    head= insert(head,3);
    head= insert(head,4);
    show(head);
    head=delete(head,4);
    show(head);
    head=reversal(head);
    show(head);
    return 0;
}
