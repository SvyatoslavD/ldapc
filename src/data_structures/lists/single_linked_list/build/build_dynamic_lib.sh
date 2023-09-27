#!/bin/bash

gcc -fPIC -c ../src/single_linked_list.c -o /tmp/single_linked_list.o && \
gcc -shared /tmp/single_linked_list.o -o ../bin/libsingle_linked_list.so && \
cp ../include/single_linked_list.h ../bin/

