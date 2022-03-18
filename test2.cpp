#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>
#define ld long double
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long
#define vp(x) vector<pair<x,x> >
#define vv(x) vector<vector<x> >

#define mpi map<int,int>
#define vit(x) vector<x>:: iterator
#define sit(x) set<x> :: iterator
#define ump(x,y) unordered_map<x,y>
#define mit map<int,int>::iterator
#define vec vector<int>
using namespace std;

/*
int isPrime(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}
*/

/*
bool prime[1000002]={true}; 


int primeT(ll n) 
{ 

    for (ll p = 2; p * p <= n; p++) 
    { 
          
        if (prime[p] == true) 
        {            
            for (ll i = p * 2; i <= n; i += p) 
            prime[i] = false; 
        } 
    } 
  

    return 0;
}
*/
 
/*
int gcd(long n,long m)
{
    if(m%n==0)
    return n;
    
    return gcd(m%n,n);
    
}
*/
 
// Top View 
/*
            1
          /   \
         2     3
        / \   / \
       4   5 6   7
*/

struct node
{
    int val;
    struct node *left;
    struct node *right;
    node(int k)
    {
        val = k;
        left=right=NULL;
    }
};

void leftview_Of_Binary_Tree(node *root)
{
    queue<node *> q;
    q.push(root);

    while(!q.empty())
    {
        int count = q.size();
        
        
        for(int i=0;i<count;i++)
        {
            node *curr = q.front();
            q.pop();

            if(i==0) cout<<curr->val<<" ";
            if(curr->left!=NULL) q.push(curr->left);
            if(curr->right!=NULL) q.push(curr->right);
        }

    }
}



void rightview_Of_Binary_Tree(node *root)
{
    queue<node *> q;
    q.push(root);

    while(!q.empty())
    {
        int count = q.size();
        
        
        for(int i=0;i<count;i++)
        {
            node *curr = q.front();
            q.pop();

            if(i==count-1) cout<<curr->val<<" ";
            if(curr->left!=NULL) q.push(curr->left);
            if(curr->right!=NULL) q.push(curr->right);
        }
    }
}


void topview_Of_Binary_Tree(node *root)
{
    map<int,int > mp;
    queue<pair<node*,int> > q;
    q.push(make_pair(root,0));
    while(!q.empty())
    {
        pair<node*, int> curr = q.front();
        q.pop();
        
        if(mp.find(curr.second)==mp.end())
        mp[curr.second]=curr.first->val;
        
        if(curr.first->left != NULL)
        {
            q.push(make_pair(curr.first->left , curr.second - 1));
        }
        if(curr.first->right != NULL)
        {
            q.push(make_pair(curr.first->right , curr.second + 1));
        }
    }
    map<int,int> :: iterator it;
    for(it=mp.begin();it!=mp.end();it++)
    {
        cout<<it->second;
    }
}



int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->right->right = new node(7);
    root->left->right = new node(5);
    root->right->left = new node(6);   

    //topview(root);
    leftview(root);
    return 0;
}