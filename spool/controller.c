#include <stdio.h>
#include <stdlib.h>
#include <semaphore.h>
#include <pthread.h>
#include "user.h"
#include "printer.h"
#include "fifo.h"

sem_t semaphore;
Fifo fifo;

void * threadFunctionUser(void * arg) {
    User u;
    u.id = atoi((char * ) arg);
    u.stage = true;
    populateIt(u);

    sem_wait(& semaphore);
    fifo_push(u, fifo);
    sem_post(& semaphore);

    while(u.stage){

      sleep(3);
    }
}

void * threadFunctionPrinter(void * arg) {
    Printer p;
    p.id = atoi((char * ) arg);
    p.busy = false;
    p.print = printing;

    User u;

    while(true){

      sem_wait(& semaphore);
      u = fifo_pull(fifo);
        if(u != NULL){
          sleep(5);
          u.stage = false;
        }
      sem_post(& semaphore);

      sleep(3);
    }
}

void userCreate(int index){
  pthread_t userThread;
  char * id;
  id = "1";
  pthread_create( & userThread, NULL, threadFunctionUser, (void * ) id);
}

void printerCreate(){
  pthread_t printerThread;
  char * id;
  id = "1";
  pthread_create( & printerThread, NULL, threadFunctionPrinter, (void * ) id);
}


void spoolManager(){
  sem_init(& semaphore, 0, 0);
  printerCreate();

}
