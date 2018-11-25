#include <iostream>

#include "functions.h"
#include "typedef.h"

using namespace std;

void printList(t_list *t)
{
    if (t)
    {
        // Quando é ponteiro usar a seta
        // Quando não é ponteiro usar ponto
        cout << "Valor do número: " << t->number << endl;
        printList(t->next);
    }
}

int sumList(t_list *t)
{
    if (t){
        int soma_parcial = t->number + sumList(t->next);
        // Só para ver o que acontece, não precisa pra funcionar
        cout << "Soma parcial: " << soma_parcial << endl;
        return soma_parcial;
    }
    return 0;
}