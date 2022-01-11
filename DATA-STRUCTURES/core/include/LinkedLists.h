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
List_Head list_reverse(List_Head head);
