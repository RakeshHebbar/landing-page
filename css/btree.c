#include <stdio.h>

typedef struct tree{
  item_type item;
  struct tree *parent;
  struct tree *left;
  struct tree *right;
}tree;

tree *search_tree(tree *l, item_type x){
  if(l == NULL) return NULL;

  if(l -> item == x)  return 1;

  if(x < l -> item)
    return(search_tree(l -> left, x));
  else
    return(search_tree(l -> right, x));
}
