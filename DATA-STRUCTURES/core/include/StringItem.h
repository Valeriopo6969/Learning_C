#pragma once
#include "LinkedLists.h"

typedef struct string_item
{
    list_node_t node;
    const char *string;
}string_item_t;

#define String_Item string_item_t*

String_Item new_string_item(const char *string);





