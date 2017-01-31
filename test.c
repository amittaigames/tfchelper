#define TFC_BOOL
#include "tfc/tfc.h"

int main(int argc, char* argv[]) {
    if (TRUE) {
        panic(1, "Random error dude");
    }
}