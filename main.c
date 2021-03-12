#include <stdlib.h>
#include <stdio.h>
#include "BST.h"

int main( int argc,char *argv[] )
{ 
   unsigned int i; // counter to loop from 1-10
   int item; // variable to hold2 random values
   BST b;
   b.rootPtr = NULL; // tree initially empty39
   
 
   puts( "The numbers being placed in the tree are:" );
for ( i = 1; i < argc; ++i ) { 
      item=atoi(argv[i]);
      printf( "%3d", item );
      insertNode( &b, item );
   } // end for
   // traverse the tree preOrder
   puts( "\n\nThe preOrder traversal is:" );
   //preOrder( rootPtr );

   // traverse the tree inOrder
   puts( "\n\nThe inOrder traversal is:" );
   inOrder( b.rootPtr );

   // traverse the tree postOrder
   puts( "\n\nThe postOrder traversal is:" );
   //postOrder( rootPtr );
} // end main
