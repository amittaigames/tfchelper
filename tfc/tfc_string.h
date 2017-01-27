#ifndef TFC_HELPER_H
#define TFC_HELPER_H

int tfc_strlen(char* str);
int tfc_strcmp(char* a, char* b);

//
//  IMPLEMENTATION
//

int tfc_strlen(char* str) {
    int len = 0;
    while (str[len] != '\0')
        len++;
    return len;
}

int tfc_strcmp(char* a, char* b) {
    int alen = tfc_strlen(a);
    int blen = tfc_strlen(b);
    
    if (alen != blen)
        return 0;
        
    int i;
    for (i = 0; i < alen; i++) {
        if (a[i] != b[i])
            return 0;
    }
    
    return 1;
}

#endif // TFC_HELPER_H