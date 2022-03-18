#include <bits/stdc++.h>
#include <iostream>
#include <unordered_map>
#include <stdlib.h>
#include <sstream>

#define ll long long int
#define ld long double
#define IT vector<int> :: iterator
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define For(iter, iterable) for(typeof((iterable).begin()) iter = (iterable).begin(); iter != (iterable).end(); ++iter)
using namespace std;
/*
string toUpper(string s)
{
    transform(s.begin(),s.end(),s.begin(),::toupper);
    return s;
}

string toLower(string s)
{
    transform(s.begin(),s.end(),s.begin(),::tolower);
    return s;
}

string toTitle(string s)
{
    s[0]=toupper(s[0]);
    for(int i=1;i<=s.length();i++)
    {
        if(s[i]==' ')
        {
            s[i+1]=toupper(s[i+1]);
        }
        else
        {
            if(s[i-1]!=' ')
            s[i]=tolower(s[i]);
        }
        
        
    }
    return s;
}
*/

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


//#define int long long int
/*
bool sortcol( const vector<ll>& v1, const vector<ll>& v2 ) 
{ 
    return v1[1] < v2[1]; 
}
*/
/*
int gcd(ll n,ll m)
{
    if(m%n==0)
    return n;
    
    return gcd(m%n,n);
    
}*/
/*
int isPrime(ll n)
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
bool isPrime(int n) 
{ 
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
   
    if (n%2 == 0 || n%3 == 0) return false; 
   
    for (int i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return false; 
   
    return true; 
} 
  
*/

/*int MAIN()
{
    string s;
    cin>>s;
    unordered_map<char,int> ump;
    unordered_map<char,int> :: iterator it;
    for(int i=0;i<s.length();i++)
    {
        ump[i]++;
    }
    int ans=0;
    for(it=ump.begin();it!=ump.end();it++)
    {
        ans+=(it->second)/2;
    }
    cout<<ans<<"\n";
}
*/
//#define ld long long double
void MAIN()
{
    ll x,r,m;
    cin>>x>>r>>m;
    r*=60;
    m*=60;

    if(r>=2*m-1)
    cout<<"Yes"<<"\n";
    else
    cout<<"No"<<"\n";
    

        
}

int main()
{

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);

#endif
int t;
cin>>t;
for(int i=1;i<=t;i++)
{
    MAIN();

}
return 0;
  
}
