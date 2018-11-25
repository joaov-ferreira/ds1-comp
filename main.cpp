#include <iostream>
#include "typedef.h"
#include "functions.h"

using namespace std;

// Ignorar a primeira linha
int main (int argc, char** argv){

    int soma;
    // As próximas coisas eu fiz pra testar
    t_list l, b, c;

    l.number = 8;
    l.next = &b;

    b.number = 15;
    b.next = &c;

    c.number = 1;
    c.next = nullptr;

    // A partir daqui é a resolução, considerando que existe uma função
    // Para criar a lista

    printList(&l);

    cout << "--------------------" << endl;

    soma = sumList(&l);
    cout << "Soma total: " << soma << endl;

    return 0;
}