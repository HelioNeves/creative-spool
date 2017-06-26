
#define buff_size 10

typedef int bool;
enum { false, true };

typedef struct Users {
   char buffer[buff_size];
   int id;
   bool stage;
} User;

extern void populateIt(User user);
