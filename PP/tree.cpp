#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
    
//    *right=NULL;
}*root=NULL;


struct node *getnew(int k)
{
    struct node *ptr=new node;
    ptr->data=k;
    ptr->left=NULL;
    ptr->right=NULL;

    return ptr;
}
struct node *insert(node *root,int k)
{
    if(root==NULL)
    {
        //cout<<k<<endl;
        return getnew(k);
    }
    else if(k<root->data)
    {
        //cout<<"left"<<k<<endl;
        root->left=insert(root->left,k);
    }
    else
    {
        //cout<<"right"<<k<<endl;
        root->right=insert(root->right,k);
    }
    return root;
}
void intrav(node *root)
{
    if(root!=NULL)
    {
        intrav(root->left);
        cout<<root->data<<endl;
        intrav(root->right);
    }    
}
void pretrav(node *root)
{
    if(root!=NULL)
    {
        
        cout<<root->data<<endl;
        pretrav(root->left);
        pretrav(root->right);
    }    
}
void posttrav(node *root)
{
    if(root!=NULL)
    {
        posttrav(root->left);
        
        posttrav(root->right);
        cout<<root->data<<endl;
    }    
}
int main()
{

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);

#endif

    //node *root=NULL;

    int n,x;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        cin>>x;
        root = insert(root,x);
    }
    cout<<"--------------"<<endl;
    //cout<<root->data<<endl;
    intrav(root);

    cout<<"--------------"<<endl;
    //cout<<root->data<<endl;
    pretrav(root);

    cout<<"--------------"<<endl;
    //cout<<root->data<<endl;
    posttrav(root);

}