//
// Created by ryanc on 2022-08-22.
//

#include "list_single.h"
#include <stdlib.h>
#include <stdio.h>
struct Node {
    int val;
    struct Node* next;
};

struct List {
    int len;
    struct Node* head;
};

struct List* create_list() {
    struct List* list = (struct List*)malloc(sizeof(struct List));
    if (list == NULL) {
        return list;
    }
    list->len = 0;
    list->head = NULL;
    return list;
}

int free_list(struct List* list) {
   struct Node* current = list->head;
   free(list);
   if (current == NULL) {
      return 0;
   }
   while (current != NULL) {
       struct Node* next = current->next;
       free(current);
       current = next;
   }
   return 0;
}

int append_list(struct List* list, int val) {
    if (list == NULL) {
        return -1;
    }
    struct Node* new = (struct Node*)malloc(sizeof(struct Node));
    new->next = NULL;
    new->val = val;
    if (list->head == NULL) {
        list->head = new;
        list->len++;
        return 0;
    }
    struct Node* current = list->head;
    struct Node* prev = current;
    /** Loop until current node is NULL
     * then select last valid node
     */
    while (current != NULL) {
       prev = current;
       current = current->next;
    }
    if (prev != NULL) {
        prev->next = new;
        list->len++;
        return 0;
    }
    return -1;
}
struct Node* at_index(struct List* list, int idx) {
    if (list == NULL) {
        return NULL;
    }
    if ((list->head == NULL ) && (idx != 0)) {
        return NULL;
    }
    if (idx < 0) {
        return NULL;
    }
    if (idx > list->len) {
        return NULL;
    }
    struct Node* current = list->head;
    for (int i = 0; i < idx; i++) {
        if (current->next != NULL) {
            current = current->next;
        } else {
            return NULL;
        }
    }
    return current;
}
int insert_list_at(struct List* list, int idx, int val) {
    if (idx == 0) {
        struct Node* prev = list->head;
        struct Node* new = (struct Node*)malloc(sizeof(struct Node));
        new->next = prev;
        new->val = val;
        list->head = new;
        return 0;
    }
    struct Node* current = at_index(list, idx-1);
    if (current != NULL) {
        struct Node* new = (struct Node*)malloc(sizeof(struct Node));
        new->next = current->next;
        new->val = val;
        current->next = new;
        list->len++;
        return 0;
    }
    return -1;
}
int set_list_at(struct List* list, int idx, int val) {
    struct Node* current = at_index(list, idx);
    if (current != NULL) {
        current->val = val;
        return 0;
    }
    return -1;
}
int del_list_at(struct List* list, int idx) {
    if (idx == 0) {
        struct Node* old = list->head; // maintain ptr to old for free
        list->head = list->head->next;
        free(old);
        list->len--;
        return 0;
    }
    struct Node* current = at_index(list, idx-1);
    struct Node* old = current->next;
    current->next = current->next->next;
    free(old);
    list->len--;
    return 0;
}
void list_print(struct List* list, char sep) {
    struct Node* current = list->head;
    printf("[%c", sep);
    while (current != NULL) {
        printf("\t%d%c", current->val, sep);
        current = current->next;
    }
    printf("]\n");
}
