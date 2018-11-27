#include <iostream>
#include "typedef.h"
#include "functions.h"

using namespace std;

int main (int argc, char** argv){
    tree *T;
    T = create_node(50);

    addToTree(30, T);
    addToTree(70, T);
    addToTree(20, T);
    addToTree(40, T);
    addToTree(60, T);
    addToTree(80, T);

    /*  
              50 
           /     \ 
          30      70 
         /  \    /  \ 
       20   40  60   80 */

    printTree(*T);
    cout << endl;
    return 0;
}