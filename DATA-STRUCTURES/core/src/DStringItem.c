#include <stddef.h> //required for NULL
#include <stdlib.h>
#include "DStringItem.h"

DString_Item new_dstring_item(const char *string)
{
    DString_Item item  = malloc(sizeof(DString_Item));
    if(!item)
    {
        return NULL;
    }

    item->string = string;
    return item;
}