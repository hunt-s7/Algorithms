#include <bits/stdc++.h>
using namespace std;


int toh(int n,char inti, char aux, char final)
{
    if(n==1)
    {
        cout<<"Move disc "<<n<<" from "<<inti<<"to "<<final<<"\n";
        return 0;
    }
    toh(n-1,inti,final,aux);
    cout<<"Move disc "<<n<<" from "<<inti<<"to "<<final<<"\n";
    toh(n-1,aux,inti,final);
    return 0;
}

int main()
{
    int n;
    cin>>n;

    toh(n,'A','B','C');
    return 0;
}

