#pragma once
#include "DoublyLinkedLists.h"

typedef struct dstring_item
{
    doubly_list_node_t node;
    const char *string;
}dstring_item_t;

#define DString_Item dstring_item_t*

DString_Item new_dstring_item(const char *string);
