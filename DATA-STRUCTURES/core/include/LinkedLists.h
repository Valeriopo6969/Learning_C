#pragma once

typedef struct list_node
{
    struct list_node *next;
}list_node_t;

#define List_Node list_node_t*
#define List_Head list_node_t**

List_Node list_get_tail(List_Head head);
List_Node list_append(List_Head head, List_Node item);
List_Node list_pop(List_Head head);

List_Node list_remove_item(List_Head head, List_Node item);
List_Node list_get_item(List_Head head, List_Node item);
void list_reverse(List_Head head);

#define LIST_APPEND(list,item) list_append((List_Head)&list,(List_Node)new_string_item(item)); //maybe name it appendstring
#define LIST_GET_TAIL(list) list_pop((List_Head)&list);
#define LIST_POP(list) list_pop((List_Head)&list);
#define LIST_REMOVE(list,item) list_remove_item((List_Head)&list,(List_Node)item);
#define LIST_GET(list,item) list_get_item((List_Head)&list,(List_Node)item);
#define LIST_REVERSE(list) list_reverse((List_Head)&list);

