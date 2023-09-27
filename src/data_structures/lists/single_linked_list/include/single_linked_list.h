#include <stdint.h>  /* uint32_t */
#include <stddef.h>  /* NULL */
#include <stdbool.h> /* bool */

typedef struct list_item list_item_t;
typedef struct list list_t;

struct list_item
{
    list_item_t *next_p;
};

struct list
{
    list_item_t end;
    uint32_t size;
};

void list_init(list_t *list_p);
bool list_is_empty(list_t *list_p);

uint32_t list_size_get(list_t *list_p);

list_item_t *list_head_get(list_t *list_p);

void list_item_insert(list_t *list_p, list_item_t *list_item_p);

void list_item_remove(list_t *list_p, list_item_t *list_item_p);