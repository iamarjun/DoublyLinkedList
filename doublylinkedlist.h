//
// Created by arjun on 3/4/18.
//

#include <stdio.h>
#include <stdlib.h>

#ifndef DOUBLYLINKEDLIST_DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_DOUBLYLINKEDLIST_H

#endif //DOUBLYLINKEDLIST_DOUBLYLINKEDLIST_H


typedef struct Node{

    int data;
    struct Node* prev;
    struct Node* next;

} Node;

Node* head;

struct Node* newNode(int n){

    struct Node* newNode = (Node*) malloc(sizeof(struct Node));
    newNode->data = n;
    newNode->prev = NULL;
    newNode->next = NULL;

    return newNode;

}


void insertion(int n){

    struct Node* temp = newNode(n);

    if (head == NULL){

        head = temp;
        return;
    }

    //insertion at the beginning

    /*head->prev = temp;
    temp->next = head;
    head = temp;*/

    //insertion at end

    struct Node* temp1 = head;

    while (temp1->next != NULL){

        temp1 = temp1->next;
    }

    temp1->next = temp;
    temp->prev = temp1;

}

void deletion(int x){

    Node* temp = head;

    if (x == 1){

        head = temp->next;
        head->prev = NULL;
        free(temp);
        return;
    }

    for (int i = 0; i < x-1 ; ++i) {

        temp = temp->next;
    }


    Node* n = temp->next;
    Node* p = temp->prev;
    n->prev = p;
    p->next = n;
    free(temp);


}

void traverse(Node* p){

    if (p == NULL)
        return;

    printf("%d ", p->data);
    traverse(p->next);
}

void traversereverse(Node* p){

    if (p == NULL)
        return;

    traversereverse(p->next);
    printf("%d ", p->data);
}

void print(Node* p){

    if (p == NULL)
        return;

    while (p != NULL){

        printf("%d ", p->data);
        p = p->next;
    }
}

void printrev(Node* p){


    if (p == NULL)
        return;

    while (p->next != NULL){

        p = p->next;
    }

    while (p != NULL){

        printf("%d ", p->data);
        p = p->prev;
    }
}