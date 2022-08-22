//
// Created by ryanc on 2022-08-22.
//

#ifndef MISCELLANEOUS_LIST_SINGLE_H
#define MISCELLANEOUS_LIST_SINGLE_H
struct Node;
struct List;
struct List* create_list();
int free_list(struct List* list);
int append_list(struct List* list, int val);
struct Node* at_index(struct List* list, int idx);
int insert_list_at(struct List* list, int idx, int val);
int set_list_at(struct List* list, int idx, int val);
int del_list_at(struct List* list, int idx);
void list_print(struct List* list, char sep);
#endif //MISCELLANEOUS_LIST_SINGLE_H
