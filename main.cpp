#include <bits/stdc++.h>
#include <iostream>
using namespace std;


/* ----------------------------- BFS TRAVERSAL ------------------------------*/

void BFS(vector<int> g[], int k,bool visited[])
{
  //bool visited[V+1];
  //memset(visited,V)=false;
  
  //for(int i=0;i<V;i++)
  //visited[i]=false;

  queue<int> q;
  q.push(k);
  visited[k]=true;

  vector<int> :: iterator it;
  while(q.empty()==false)
  {
    int u=q.front();
    q.pop();
    cout<<u<<endl;
    for(it=g[u].begin();it!=g[u].end();it++)
    {
      if(visited[*it]==false)
      {
        visited[*it]=true;
        q.push(*it);
      }
    }
  }

}

void BFSDis(vector<int> g[],int V)
{
  bool visited[V+1];
  for(int i=0;i<V;i++)
  visited[i]=false;

  for(int i=0;i<V;i++)
  {
    if(visited[i]==false)
    {
      BFS(g,i,visited);
    }
  }
}

void addEdge(vector<int> g[],int u,int v)
{
  g[u].push_back(v);
  g[v].push_back(u);
}



int main()
{

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);

#endif

  int V,E;
  cin>>V>>E;
  vector<int> g[V];
  for(int i=0;i<E;i++)
  {
    int u,v;
    cin>>u>>v;
    addEdge(g,u,v);
  }

  BFSDis(g,V);
 return 0;
}

#define pb(x) push_back(x)

void BFS(vector<int> g[],int V, int src)
{
    bool visited[V];
    for(int i=0;i<V;i++)
    visited[i]=false;

    queue<int> q;
    q.push(src);
    visited[src]=true;

    vector<int> :: iterator it;
    while(!q.empty())
    {
        int x=q.front();
        q.pop();
        cout<<x<<" ";
        for(it=g[x].begin();it!=g[x].end();it++)
        {
            if(visited[*it]==false)
            {
                visited[*it]=true;
                q.push(*it);
            }
        }
    }
}

void DFS(vector<int> g[],int s, bool visited[])
{
    cout<<s<<" ";
    
    visited[s]=true;
    
    for(int i=0;i<g[s].size();i++)
    {
        if(visited[g[s][i]]==false)
        {
            //cout<<g[s][i]<<" ";
            visited[g[s][i]]=true;
            DFS(g,g[s][i],visited);
        }
    }
}

void addEdge(vector<int> g[],int u,int v)
{
    g[u].pb(v);
    //g[v].pb(u);
}


int main()
{

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);

#endif

    int V;
    cin>>V;
    vector<int> g[V];

    int E;
    cin>>E; //number of edge
    
    for(int i=0;i<E;i++)
    {
        int u,v;
        cin>>u>>v;
        addEdge(g,u,v);
    }
    BFS(g,V,0);

    bool visited[V];
    for(int i=0;i<V;i++)
    visited[i]=false;
    cout<<endl;
    cout<<"--------------DFS----------"<<endl;

    for(int i=0;i<V;i++)
    {
        if(visited[i]==false)
        {
            DFS(g,i,visited);
            cout<<endl;
        }
    }
}