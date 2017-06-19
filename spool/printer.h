#include <stdbool.h>

typedef void (*printerFunc)(char* word);

typedef struct Printers {
    int id;
    bool busy;
    printerFunc print;
} Printer;

extern void printing(char* word);
