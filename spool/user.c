#include <stdio.h>
#include <stdlib.h>

#define buff_size 10

void populateIt(char letter, char* word){
    int i;

    for(i = 0; i < buff_size; i++){
        word[i] = letter;
    }
}
