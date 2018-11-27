#ifndef _TYPEDEF_
#define _TYPEDEF_

struct t_list
{
    int number;
    t_list *next;
};


typedef struct tree{
    int value;
    tree *left;
    tree *right;
}tree;


#endif