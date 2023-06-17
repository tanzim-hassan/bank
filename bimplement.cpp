#include<bits/stdc++.h>
using namespace std;
class node{
public:
int id;
node* left;
node* right;
node* parent;
};
class BinaryTree{
    public:

    node*root;
    node*allnode[6];
    BinaryTree(){
        root=NULL;
    }
    node*CreateNewNode(int id){
        node*newnode=new node;
        newnode->id=id;
        newnode->left=NULL;
        newnode->parent=NULL;
        newnode->right=NULL;
        return newnode;
    }
    void BuildBinaryTree(){

for(int i=0;i<6;i++){
    allnode[i]=CreateNewNode(i);
    allnode[0]->left=allnode[1];
    allnode[0]->right=allnode[2];
    allnode[1]->left=allnode[5];
    allnode[1]->parent=allnode[0];
    allnode[2]->left=allnode[3];
    allnode[2]->right=allnode[5];
    allnode[2]->parent=allnode[0];
    allnode[4]->parent=allnode[1];
    allnode[3]->parent=allnode[2];
    allnode[5]->parent=allnode[2];
    root=allnode[0];

    }


    }
    void printTree(){

for(int i=0;i<6;i++){
    int p=-1;              //parent,left or right child null thakle default ami -1 assign koresi
    int l=-1;
    int r=-1;
    if(allnode[i]->parent!=NULL)
    p=allnode[i]->parent->id;
     if(allnode[i]->left!=NULL)
    l=allnode[i]->left->id;
     if(allnode[i]->right!=NULL)
    r=allnode[i]->right->id;
    
    cout<<"node"<<i<<"parent"<<p<<"left"<<l<<"right"<<r<<"\n";
}


    }

};
 int main(){
    BinaryTree bt;
    bt.BuildBinaryTree();
    bt.printTree();

return 0;
}
