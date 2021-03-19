#include <stdlib.h>
#include <stdio.h>
#include "BST.h"

int main( int argc,char *argv[] ) {
    unsigned int i;
    int item;
    BST b;
    b.rootPtr = NULL; // tree initially empty

    puts( "The numbers being placed in the tree are:" );
    for ( i = 1; i < argc; ++i ) {
        item=atoi(argv[i]);
        printf( "%3d", item );
        insertNode( &b, item );
    }

    // traverse the tree preOrder
    puts( "\n\nThe preOrder traversal is:" );
    preOrder( b.rootPtr );

    // traverse the tree inOrder
    puts( "\n\nThe inOrder traversal is:" );
    inOrder( b.rootPtr );

    // traverse the tree postOrder
    puts( "\n\nThe postOrder traversal is:" );
    postOrder( b.rootPtr );

    puts( "\n\nThe printTree traversal is:" );
    printTree(b.rootPtr,0 );

} // end main
