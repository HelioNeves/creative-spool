#include <stdio.h>
#include <stdlib.h>
#include "user.h"

#define buff_size 10

void populateIt(User user){
    char letter = 'A' + user.id;

    int i;
    for(i = 0; i < buff_size; i++){
        user.buffer[i] = letter;
    }
}
