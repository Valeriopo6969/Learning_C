#pragma once

typedef struct doubly_list_node
{
    struct doubly_list_node *previous;
    struct doubly_list_node *next;

}doubly_list_node_t;

#define D_List_Node doubly_list_node_t*
#define D_List_Head doubly_list_node_t**

D_List_Node dlist_append(D_List_Head head, D_List_Node node);
D_List_Node dlist_get_tail(D_List_Head head);
D_List_Node dlist_remove_item(D_List_Head head, D_List_Node item);
D_List_Node get_first_item(D_List_Head head);

void dlist_insert_before(D_List_Head head,D_List_Node target_item,D_List_Node item_to_insert);
void dlist_insert_after(D_List_Node target_item, D_List_Node item_to_insert);

#define DLIST_APPEND_STRING(list,item) dlist_append((D_List_Head)&list,(D_List_Node)new_dstring_item(item)) 
#define DLIST_GET_TAIL(list) dlist_get_tail((D_List_Head)&list)
#define DLIST_REMOVE(list,item) dlist_remove_item((D_List_Head)&list,(D_List_Node)item)
#define DLIST_GET_FIRST(list) get_first_item((D_List_Head)&list)

#define DLIST_INSERT_BEFORE(list,item,item_to_insert) dlist_insert_before((D_List_Head)&list,(D_List_Node)item,(D_List_Node)item_to_insert)
#define DLIST_INSERT_STRING_BEFORE(list,item,string_to_insert) dlist_insert_before((D_List_Head)&list,(D_List_Node)item,(D_List_Node)new_dstring_item(string_to_insert))
//maybe change signature in item,item_to_ins,list
#define DLIST_INSERT_AFTER(item,item_to_insert) dlist_insert_after((D_List_Node)item,(D_List_Node)item_to_insert)
#define DLIST_INSERT_STRING_AFTER(item,string_to_insert) dlist_insert_after((D_List_Node)item,(D_List_Node)new_dstring_item(string_to_insert))
