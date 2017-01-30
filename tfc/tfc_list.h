#ifndef TFC_LIST_H
#define TFC_LIST_H

#include <stdlib.h>

typedef struct _List {
    void* data;
    int data_size;
    int ptr;
    int size;
} List;

List*       List_new(int data_size, int size);

//
//  IMPLEMENTATION
//



#endif // TFC_LIST_H