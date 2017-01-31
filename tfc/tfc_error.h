#ifndef TFC_ERROR_H
#define TFC_ERROR_H

#include <stdio.h>
#include <stdlib.h>

void panic(int code, char* str);

//
//  IMPLEMENTATION
//

void panic(int code, char* str) {
    printf("ERROR: %s\n", str);
    exit(code);
}

#endif // TFC_ERROR_H