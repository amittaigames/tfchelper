#ifndef TFC_HELPER_H
#define TFC_HELPER_H

int tfc_strlen(char* str);

//
//  IMPLEMENTATION
//

int tfc_strlen(char* str) {
    int len = 0;
    while (str[len] != '\0')
        len++;
    return len;
}

#endif // TFC_HELPER_H