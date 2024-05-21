/*
 Program Name: main.cpp
 Programmer: Moris Gomez
 Date: Tuesday 05/21/2024
 Version Control: 10.0
 About: Week 14, CSCI 2, Example 2.
 Description:
 
 Tinkering with the fundamentals/basics of Binary Trees.
 1. Created a the same binary tree in Example  1 using a function instead of doing it manually step-by-step in the main function.
 2. Displayed full binary tree without alogirthm.
 3. Used same visual binary tree as Example 1.
 */
#include <iostream>
using namespace std;

//creating tree nodes via struct below:
struct TreeNode //Node template.
{
    int data = 0; //for each Node.
    TreeNode* right = NULL; //pointer to address of Node.
    TreeNode* left = NULL; //pointer to address of Node.
};

//function #1:
TreeNode* createTreeNode(int d) //takes in d for data of new treeNode.
//func will return the address of new treeNode.
//we need that address to link with other treeNodes.
{
    TreeNode* newNode; //newNode ptr = NULL.
    //will store address of a treeNode data type.
    
    newNode = new TreeNode; //newNode ptr = ioioiox59.
    //assigns new treeNode to pointer.
    //**newNode ptr in function has the same purpose as n ptr does
    //when doing treeNode creation step by step in main function
    //look at Example 1 for reference on github.**
    
    newNode->data = d;
    //note: left & right assigned NULL in struct when treeNode created.
    
    return newNode; //return ioioiox59.
    //return address of new treeNode.
}

int main()
{
//A. CREATING BINARY TREE:
//1. Create Root treeNode:
    //create pointer for root treeNode.
    TreeNode* root;
    
    //call function & assign returned treeNode address in root.
    root = createTreeNode(3); //0x600003ea5f00.

//2. Create left node for root:
    root->left = createTreeNode(2);
    
//3. Create right node for root:
    root->right = createTreeNode(7);
    
//4. Create left leaf node for left child of Root:
    root->left->left = createTreeNode(6);
    
//5. Create right leaf node for left child of Root:
    root->left->right = createTreeNode(5);
    
//6. Create left leaf node for right child of Root:
    root->right->left = createTreeNode(8);
    
//7. Create right leaf node for right child of Root:
    root->right->right = createTreeNode(1);
    
/*/////////////////////SPACE///////////////////////////*/
/*/////////////////////SPACE///////////////////////////*/
/*/////////////////////SPACE///////////////////////////*/
/*/////////////////////SPACE///////////////////////////*/

//B. DISPLAYING EACH NODE AND ITS DATA, LEFT AND RIGHT:
//ENTIRE LEFT SIDE OF BINARY TREE:
//1. Node w/ data 3 //root.
    cout << "++ENTIRE LEFT SIDE OF BINARY TREE:" << endl;
    cout << "root node w/ address: " << root << endl;
    cout << "data: " << root->data << endl;
    cout << "left ptr: " << root->left << endl;
    cout << "right ptr: " << root->right << endl;
    cout << "------------" << endl;
//2. Node w/ data 2.
    cout << "left child node w/ address: " << root->left << endl;
    cout << "data: " << root->left->data << endl;
    cout << "left ptr: " << root->left->left << endl;
    cout << "right ptr: " << root->left->right << endl;
    cout << "------------" << endl;
//3. Node w/ data 6 //leaf.
    cout << "left leaf node w/ address: " << root->left->left << endl;
    cout << "data: " << root->left->left->data << endl;
    cout << "left ptr: " << root->left->left->left << endl; //null
    cout << "right ptr: " << root->left->left->right << endl; //null
    cout << "------------" << endl;
//4. Node w/ data 5. //leaf.
    cout << "right leaf node w/ address: " << root->left->right << endl;
    cout << "data: " << root->left->right->data << endl;
    cout << "left ptr: " << root->left->right->left << endl; //null
    cout << "right ptr: " << root->left->right->right << endl; //null
    cout << "------------" << endl;

//ENTIRE RIGHT SIDE OF BINARY TREE:
    cout << endl << "[=============================]" << endl << endl;
    cout << "++ENTIRE RIGHT SIDE OF BINARY TREE:" << endl;
//1. Node w/ data 3 //root.
    cout << "root node w/ address: " << root << endl;
    cout << "data: " << root->data << endl;
    cout << "left ptr: " << root->left << endl;
    cout << "right ptr: " << root->right << endl;
    cout << "------------" << endl;
//2. Node w/ data 7.
    cout << "right child node w/ address: " << root->right << endl;
    cout << "data: " << root->right->data << endl;
    cout << "left ptr: " << root->right->left << endl;
    cout << "right ptr: " << root->right->right << endl;
    cout << "------------" << endl;
//3. Node w/ data 8 //leaf.
    cout << "left leaf node w/ address: " << root->right->left << endl;
    cout << "data: " << root->right->left->data << endl;
    cout << "left ptr: " << root->right->left->left << endl; //null
    cout << "right ptr: " << root->right->left->right << endl; //null
    cout << "------------" << endl;
//4. Node w/ data 1. //leaf.
    cout << "right leaf node w/ address: " << root->right->right << endl;
    cout << "data: " << root->right->right->data << endl;
    cout << "left ptr: " << root->right->right->left << endl; //null
    cout << "right ptr: " << root->right->right->right << endl; //null
    return 0;
}
