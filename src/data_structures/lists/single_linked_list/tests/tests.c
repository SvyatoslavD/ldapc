#include <stdio.h> /* printf */

#include <container_of.h>
#include <single_linked_list.h>

typedef struct my_struct
{
    int x;
    list_item_t list_item;
} my_struct_t;

int main(void)
{
    list_t my_list;
    my_struct_t data[5] = {
        {
            .x = 1,
        },
        {
            .x = 2,
        },
        {
            .x = 3,
        },
        {
            .x = 4,
        },
        {
            .x = 5,
        },
    };
    list_init(&my_list);
    list_item_insert(&my_list, &data[0].list_item);
    list_item_insert(&my_list, &data[4].list_item);
    list_item_insert(&my_list, &data[2].list_item);
    list_item_insert(&my_list, &data[3].list_item);
    list_item_insert(&my_list, &data[1].list_item);

    list_item_t *iterator_p = my_list.end.next_p;
    list_item_t *last_item_p = &my_list.end;
    my_struct_t *dp = NULL;

    while (iterator_p != last_item_p)
    {
        dp = container_of(iterator_p, my_struct_t, list_item);
        printf("%d ", dp->x);
        iterator_p = iterator_p->next_p;
    }
}
