#include "../include/single_linked_list.h"

void list_init(list_t *list_p)
{
    list_p->size = 0;
    list_p->end.next_p = &list_p->end;
}

bool list_is_empty(list_t *list_p)
{
    return list_p->size == 0;
}

uint32_t list_size_get(list_t *list_p)
{
    if (!list_p)
    {
        return 0;
    }

    return list_p->size;
}

list_item_t *list_head_get(list_t *list_p)
{
    if (!list_p)
    {
        return NULL;
    }

    if (list_p->size == 0)
    {
        return NULL;
    }

    return list_p->end.next_p;
}

void list_item_insert(list_t *list_p, list_item_t *list_item_p)
{
    list_item_p->next_p = list_p->end.next_p;
    list_p->end.next_p = list_item_p;
}

void list_item_remove(list_t *list_p, list_item_t *list_item_p)
{
    list_item_t *iterator_p = list_p->end.next_p;
    list_item_t *last_item_p = &list_p->end;

    while (iterator_p->next_p != last_item_p)
    {
        if (iterator_p->next_p == list_item_p)
        {
            iterator_p->next_p = iterator_p->next_p->next_p;
            break;
        }

        iterator_p = iterator_p->next_p;
    }
}
