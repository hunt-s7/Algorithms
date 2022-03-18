#include <bits/stdc++.h>
using namespace std;

struct node
{
    int key;
    node *left;
    node *right;
} *root = NULL;

node *getNew(int x)
{
    node *ptr = new node();
    ptr->left = NULL;
    ptr->right = NULL;
    ptr->key = x;

    return ptr;
}

node *insert(node *root, int val)
{
    if (root == NULL)
    {
        return getNew(val);
    }
    else if (val < root->key)
    {
        //cout<<val<<endl;
        root->left = insert(root->left, val);
    }
    else
    {
        root->right = insert(root->right, val);
    }
    return root;
}
/*
void inorder(node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);
    }
}
*/
/*
void preorder(node *root)
{
    if (root != NULL)
    {
        cout << root->key << " ";
        preorder(root->left);

        preorder(root->right);
    }
}
*/
void postorder(node *root)
{
    if (root != NULL)
    {
        postorder(root->left);

        postorder(root->right);
        cout << root->key << " ";
    }
}

int main()
{

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        root = insert(root, x);
    }

    //cout<<root->left->key<<"endl";
    postorder(root);
}