#!/bin/bash

gcc -c ../tests/tests.c -o /tmp/test.o && \
gcc /tmp/test.o -lsingle_linked_list -o ../bin/single_linked_list_test