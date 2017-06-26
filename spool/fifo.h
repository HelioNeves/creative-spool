#include "user.h"

#define FIFO_MAX 256

typedef struct Fifos {
   User buffer[FIFO_MAX];
   int tail;
   int head;
   int n_data;
} Fifo;


int fifo_data_isavailable(Fifo fifo);
int fifo_data_isfull(Fifo fifo);
int fifo_push(User data, Fifo fifo);
User fifo_pull(Fifo fifo);
