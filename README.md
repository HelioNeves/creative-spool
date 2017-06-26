# creative-spool
Projeto que demonstra o funcionamento de um spool usando conceitos de sistemas operacionais.
Project that demonstrates the operation of a spool using concepts of operating systems.

## TODO:
- [x] controller implementation
- [x] user queue
- [x] fifo implementation
- [ ] fifo test
- [x] user id
- [x] printer id
- [ ] algorithm for id's
- [ ] interface

## User
Contém a representação do usuário com suas propriedades como: buffer e id.
Contains the user representation with his properties like: buffer as message and id.

## Printer
Contém a representação da impressora com suas propriedades como: função de impressão e id.
Contains the printer representation with his properties like: printing function and id.

## Fifo
Uma estrutura do tipo Array-Like com controle em fila, com funções de verificação de fila cheia, fila disponível, adição e remoção da fila.
Array-Like structure with queue control type, full queue verification, available queue, add and remove intens functions. 

## Controller
Contém a representação do fluxo de funcionamento do spool, criação de usuários (thread), criação de impressora (thread) e manipulação segura dos dados através do semáforo.
Contains the working-flux representation of spool, user thread creation, printer thread creation and a safe data manipulation through semaphore.
