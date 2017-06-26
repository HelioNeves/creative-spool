/* To compile this code just type in terminal
 * gcc fifo.c -o fifo
 * ./fifo
 */

#include <stdio.h>
#include <stdlib.h>
#include "fifo.h"
#include "user.h"

#define FIFO_MAX 256

int fifo_data_isavailable(Fifo fifo)
{
  if (fifo.n_data > 0)
  {
    return 1;
  }
  else
  {
    return 0;
  }

}

int fifo_data_isfull(Fifo fifo)
{
  if (fifo.n_data < FIFO_MAX)
    return 0;
  else
    return 1;
}

int fifo_push(User data, Fifo fifo)
{
  if (!fifo_data_isfull(fifo))
  {
    fifo.buffer[fifo.head] = data;
    if (fifo.head < (FIFO_MAX-1))
    {
      fifo.head ++;
    }
    else
    {
      fifo.head = 0;
    }

    fifo.n_data ++;
    return 1;
  }
  else
  {
    return 0;
  }

}

User fifo_pull(Fifo fifo)
{
  User data;
  if(fifo_data_isavailable(fifo))
  {
    data = fifo.buffer[fifo.tail];
    if (fifo.tail < (FIFO_MAX-1))
    {
      fifo.tail ++;
    }
    else
    {
      fifo.tail = 0;
    }
    fifo.n_data --;
    return data;
  }
  return data;
}
