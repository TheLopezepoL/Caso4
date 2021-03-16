
#include "Pattern.h"


int main() {
    Pattern *pattern = new Pattern(10, 10);
    double **array = pattern->getPattern();
    for (int h = 0; h < pattern->getHigh(); h++){
        for (int l = 0; l < pattern->getLarge(); l++)
            printf("(%d, %d, %f)\t", h, l, array[h][l]);
    }
    return 0;
}


