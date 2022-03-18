#include <bits/stdc++.h>
using namespace std;

int DFS(vector<pair<int,int> > g[],int s, bool visited[],int sum)
{
    cout<<s<<" ";
    
    visited[s]=true;
    
    for(int i=0;i<g[s].size();i++)
    {
        pair<int,int> p=g[s][i];
        if(visited[p.first]==false)
        {
            //cout<<g[s][i]<<" ";
            visited[p.first]=true;
            sum+=p.second;
            //cout<<sum<<endl;
            DFS(g,p.first,visited,sum);
        }
    }
    return sum;
}

void addEdge(vector<pair<int,int> > g[],int u,int v,int w)
{
    g[u].push_back(make_pair(v,w));
    g[v].push_back(make_pair(u,w));
}


int main()
{

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);

#endif

    int V;
    cin>>V;
    vector<pair<int,int> > g[V];
    //cout<<"lw"<<endl;
    int E;
    cin>>E; //number of edge
    //cout<<"kkw"<<endl;
    for(int i=0;i<E;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        addEdge(g,u-1,v-1,w);
        //cout<<i<<endl;
    }
    //BFS(g,V,0);
    //cout<<"dd"<<endl;
    bool visited[V];
    for(int i=0;i<V;i++)
    visited[i]=false;
    //cout<<endl;
    
    int ans=0;

    for(int i=0;i<V;i++)
    {
        cout<<"--------------DFS----------"<<endl;
        for(int i=0;i<V;i++)
        visited[i]=false;
        if(visited[i]==false)
        {
            int z=DFS(g,i,visited,0);
            if(z>ans)
            ans=z;
            cout<<z<<endl;

            //cout<<endl;
        }
    }
    cout<<ans<<endl;
}