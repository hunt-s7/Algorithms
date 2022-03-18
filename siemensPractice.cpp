
#include <bits/stdc++.h>
using namespace std;

   // BST 


struct node
{
    int val;
    node *left;
    node *right;

};

node* insert(node* root, int key)
{
    
    if(root==NULL)
    {
        node *ptr = new node;
        ptr->val = key;
        ptr->left = NULL;
        ptr->right = NULL;
        return ptr;
    }
    else if(root->val > key)
    {
        root->left = insert(root->left,key);
    }
    else if(root->val < key)
    {
        root->right = insert(root->right,key);
    }

    return root;
}

void inorder(node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<root->val<<" ";
        inorder(root->right);
    }
}

int mainforBST()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    node *root=NULL;

    for(int i=0;i<n;i++)
    {
        root = insert(root,a[i]);
    }

    inorder(root);
}


// Tower Of hanoi


void toh(int n, char init, char aux, char final)
{
    if(n==1)
    {
        cout<<"Move disc "<<n<<" from "<<init<<" to "<<final<<endl;
        return;
    }
    toh(n-1, init, final, aux);
    cout<<"Move disc "<<n<<" from "<<init<<" to "<<final<<endl;
    toh(n-1, aux, init, final);

}

int mainforTOH()
{
    int n;
    cin>>n;

    toh(n, 'A' , 'B', 'C');

    return 0;
}
*/

// BFS and DFS

void bfs(int s,vector<int> g[],int V)
{
    vector<bool> visited(V,false);

    queue<int> q;
    q.push(s);
    visited[s] = true;
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        cout<<u<<" ";

        for(int i=0;i<g[u].size();i++)
        {
            if(visited[g[u][i]]==false)
            {
                visited[g[u][i]]=true;
                q.push(g[u][i]);
            }
        }
    }

}

void dfs(int s,vector<int> g[],vector<bool> &visited)
{
    cout<<s<<" ";
    visited[s]=true;

    for(int i=0;i<g[s].size();i++)
    {
        if(visited[g[s][i]]==false)
        {
            //cout<<g[s][i]<<" ";
            //cout<<visited[g[s][i]]<<endl;
            visited[g[s][i]]=true;
            dfs(g[s][i],g,visited);
        }
    }
}

int mainforBFS_DFS()
{
    int V,E;
    cin>>V>>E;

    vector<int> g[V];

    for(int i=0;i<E;i++)
    {
        int u,v;
        cin>>u>>v;

        g[u].push_back(v);
        g[v].push_back(u);
    }
    
    vector<bool> visited(V,false);

    dfs(0,g,visited);

    cout<<endl;

    bfs(0,g,V);
}


void dijkastra(vector<int> g[], int src,int V)
{
    vector<int> dist(V,INT_MAX);
    dist[src]=0;
    vector<bool> fin(V,false);

    for(int count =0;count<V;count++)
    {
        int u=-1;
        for(int i=0;i<V;i++)
        {
            if(fin[i]!=true && (u==-1|| dist[i]<dist[u]))
            u=i;
        }
        fin[u]=true;

        for(int v=0;v<V;v++)
        {
            if(g[u][v]!=0 && fin[v]!=true)
            {
                dist[v]=min(dist[u]+g[u][v], dist[v]);
            }
        }
    }
    return dist;
}

void path(vector<int> g[], int src, int V)
{
    vector<int> dist(V,INT_MAX);
    vector<bool> fin(V,false);
    dist[src]=0;

    for(int count=0;i<V;i++)
    {
        int u=-1;
        for(int i=0;i<V;i++)
        {
            if(fin[i]!=true &&
             (u==-1 || dist[i]<dist[u]))
             u=i;
        }

        fin[i]=true;

        for(int v=0;v<V;v++)
        {
            if(fin[i]!=true && g[u][v]=0)
            {
                dist[v]=min(dist[u]+g[u][v],dist[v]);
            }
        }
    }
    return dist;
}