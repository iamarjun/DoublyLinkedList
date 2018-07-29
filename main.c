#include <stdio.h>
#include "doublylinkedlist.h"

int main() {

    head = NULL;

    insertion(1);
    insertion(2);
    insertion(3);
    insertion(4);
    insertion(5);
    insertion(6);
    insertion(7);
    insertion(8);
    traverse(head);
    printf("\n");
    traversereverse(head);
    printf("\n");
    print(head);
    printf("\n");
    printrev(head);
    printf("\n");
    deletion(3);
    print(head);
    printf("\n");
    deletion(5);
    print(head);
    printf("\n");
    /*reverse();
    print(head);
    printf("\n");
    printrev(head);
    printf("\n");
    reverserecursive(head);*/


    return 0;
}