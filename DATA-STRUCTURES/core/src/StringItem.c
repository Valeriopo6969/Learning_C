#include <stddef.h> //required for NULL
#include <stdlib.h>
#include "StringItem.h"

String_Item new_string_item(const char *string)
{
    String_Item item  = malloc(sizeof(String_Item));
    if(!item)
    {
        return NULL;
    }

    item->string = string;
    return item;
}