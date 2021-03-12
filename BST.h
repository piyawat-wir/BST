
// An integer binary search tree
เบรค+ ทำ insert เอง ถึง 15.10 



struct treeNode {                                           
   struct treeNode *leftPtr; // pointer to left subtree 
   int data; // node value                               
   struct treeNode *rightPtr; // pointer to right subtree
}; // end structure treeNode         

typedef struct treeNode TreeNode; // synonym for struct treeNode
typedef TreeNode *TreeNodePtr; // synonym for TreeNode*
                    
typedef struct {
	int size;
	TreeNodePtr rootPtr;
}BST;

// prototypes
void insertNode( BST *b, int value ){

	 TreeNodePtr t =b->rootPtr,new_node;
	 int inserted=0; //สำเร็จ =1 ไม่สำเร็จ =0
    new_node=(TreeNodePtr) malloc(sizeof(TreeNode));
	if(new_node){
		new_node->leftPtr=NULL;
		new_node->rightPtr=NULL;
		new_node->data=value;
	/*First Node*/
	if(!b->rootPtr) // if(b->root==NULL)
  	b->rootPtr=new_node;
	else {
    while(!inserted){ // while(insert!=1)
      if(t->data >=value){
        
       }
       else{

	     }	

    }//end while		
 }//end else;
}
}//end function


void inOrder( TreeNodePtr treePtr )
{ 
   // if tree is not empty, then traverse
   if ( treePtr != NULL ) {                
      inOrder( treePtr->leftPtr ); //Recursion to the left 
      printf( "%3d", treePtr->data );  //print the value    
      inOrder( treePtr->rightPtr ); //Recursion to the right
   } // end if                          
} // end function 

void preOrder( TreeNodePtr treePtr ){}
void postOrder( TreeNodePtr treePtr ){}
