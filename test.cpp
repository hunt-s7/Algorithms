#include <bits/stdc++.h>
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
  

int main()
{
    
    string s;
    cin>>s;

    vector<char> v;

    for(long i=0;i<s.length();i++)
    {
        if(s[i]!='A' && s[i]!='e' && s[i]!='I' && s[i]!='O' && s[i]!='U' && s[i]!='Y' &&
            s[i]!='a' && s[i]!='E' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!='y')
            {
                v.push_back('.');
                v.push_back(tolower(s[i]));
            }
    }
    for(long i=0;i<v.size();i++)
    {
        cout<<v[i];
    }
    
}
*

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];

    //(a[i] + i*k)%n==0

    // 6 7 8 9 
    // 0 k 2k 3k....
    sort(v.begin(),v.end());
    bool ch=true;
    for(int i=0;i<n;i++)
    {

        if((v[i] + i*k)%n!=i)
        {
            ch=false;
            break;
        }
    }
    if(ch)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;

}
*/

// 4
// 1 2 3 4
// 4 2 1 3

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];

    int ans=0;

    for(int i=0;i<n;i++)
    {
        int curr = v[i];
        int swpL = 0, swpR=0;
        for(int j=i-1;j>=0;j++)
        {
            if(v[j]>v[j+1])
            {
                swpL++;
            }
        }
        for(int j=i+1;j<n;j++)
        {
            if(v[j]<curr)
            {
                swpR++;
            }
        }
        if(swpL<swpR)
        {
            for(int j=i-1;j>=0;j++)
            {
                if(v[j]>v[j+1])
                {
                    swap(v[j],v[j+1]);
                    ans++;
                }
            }
        }
        else
        {
            for(int j=i+1;j<n;j++)
            {
                if(v[j]<v[j-1])
                {
                    swap(v[j],v[j-1]);
                    ans++;
                }
            }
        }
    }
    cout<<ans;

}
