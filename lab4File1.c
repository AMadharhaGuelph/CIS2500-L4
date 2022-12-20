#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ( int argc, char *argv[] )
{
    
    int **sptr;
    
    int num = 3;
    int i, j;
    
    sptr = calloc (num, sizeof (int *));
    
    for (i = 0; i < num; i++) {
        sptr [i] = calloc (4, sizeof(int));
    }
    
    for (i = 0; i < num; i++) {
        for (j = 0; j < 4; j++) {
            sptr [i][j] =  sptr[i][j] + i * j + num;
        }
    }
    
    for (i = 0; i < num; i++) {
        for (j = 0; j < 4; j++) {
            printf ("%d \n", sptr [i][j]);
        }
    }
    
    for(i = 0; i < num; i++) {
        free(sptr[i]);
    }
    free(sptr);

    return 0;
}
