#ifndef TFC_LIST_H
#define TFC_LIST_H

#include <stdlib.h>

typedef struct _IntList {
    int* data;
    int ptr;
    int size;
} IntList;

IntList*        IntList_new(int size);
void            IntList_set(IntList* self, int index, int data);
void            IntList_add(IntList* self, int data);
int             IntList_get(IntList* self, int index);
void            IntList_delete(IntList* self);

//
//  IMPLEMENTATION
//

IntList* IntList_new(int size) {
    IntList* self = (IntList*) malloc(sizeof(IntList));
    
    self->data = (int*) malloc(sizeof(int) * size);
    self->ptr = 0;
    self->size = size;
    
    return self;
}

void IntList_set(IntList* self, int index, int data) {
    if (index >= self->size) {
        self->size *= 2;
        self->data = (int*) realloc(self->data, sizeof(int) * self->size);
        IntList_set(self, index, data);
    }
    
    self->data[index] = data;
}

void IntList_add(IntList* self, int data) {
    IntList_set(self, self->ptr++, data);
}

int IntList_get(IntList* self, int index) {
    return self->data[index];
}

void IntList_delete(IntList* self) {
    free(self->data);
    free(self);
}

#endif // TFC_LIST_H