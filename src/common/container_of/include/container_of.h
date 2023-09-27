#include <stddef.h> /* offsetof */

#define container_of(ptr, type, member) \
    ((type *)((char *)(ptr)-offsetof(type, member)))