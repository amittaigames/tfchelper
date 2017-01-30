#ifndef TFC_HELPER_H
#define TFC_HELPER_H

#include <stdlib.h>

int 		tfc_strlen(char* str);
int 		tfc_strcmp(char* a, char* b);
void 		tfc_strcpy(char* src, char* dest);
void 		tfc_strcpyx(char* src, char* dest, int start, int end);
char* 		tfc_strdup(char* src);
char* 		tfc_strdupx(char* src, int start, int end);

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

void tfc_strcpy(char* src, char* dest) {
	tfc_strcpyx(src, dest, 0, tfc_strlen(src));
}

void tfc_strcpyx(char* src, char* dest, int start, int end) {
	int i;
	for(i = start; i < end; i++)
		dest[i] = src[i];
}

char* tfc_strdup(char* src) {
	return tfc_strdupx(src, 0, tfc_strlen(src));
}

char* tfc_strdupx(char* src, int start, int end) {
	char* dest = (char*) malloc(sizeof(char) * (end - start));
	tfc_strcpyx(src, dest, start, end);
	return dest;
}

#endif // TFC_HELPER_H