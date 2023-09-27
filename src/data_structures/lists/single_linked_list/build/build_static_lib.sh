#!/bin/bash

gcc -c ../src/single_linked_list.c -o /tmp/single_linked_list.o && \
ar rcs ../bin/libsingle_linked_list.a /tmp/single_linked_list.o
