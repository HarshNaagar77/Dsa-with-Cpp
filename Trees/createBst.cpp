#include <iostream>
#include <vector>
using namespace std;

class Node{
public:
    int val;
    Node* left ;
    Node* right ;

    Node(int data){
        val = data;
        left = right = NULL;
    }
};

static int idx = -1;
Node* buildTree( vector<int> v){
    idx++;
    if(v[idx] == -1){
        return NULL;
    }
    Node* root = new Node(v[idx]);
    root->left = buildTree(v);
    root->right = buildTree(v);

    return root;
}

void preorder(Node* root){
    if( root == NULL){
        return;
    }
    cout << root->val << endl;
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node* root){
    if( root == NULL){
        return;
    }
    inorder(root->left);
    cout << root->val << endl;
    inorder(root->right);
}
void postorder(Node* root){
    if( root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->val << endl;
}

int main(){
    vector<int> v = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root =  buildTree(v);
    // cout << root->val ;
    // cout << root->left->val ;
    // cout << root->right->val ;
    cout << "Preorder : " << endl ;
    preorder(root);

    cout << "Inorder : " << endl;
    inorder(root);

    cout << "Postorder : " << endl;
    postorder(root);

}