
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vctr vector<ll>
#define pai pair<ll, ll>
#define vp vector<pair<ll, ll>>

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n, x;
        cin >> n;
        if(n%2!=0){
            cout << "-1" << endl;
            continue;
        }
        int a[n+1]={0};
        a[1]=1;
        for(int i=3; i<=n/2; i+=2){
            a[i]=5*(i-1);
        }
        int five=5, j=1;
        for(int i=n-1; i>n/2; i-=2){
            a[i]=five*j;
            j+=2;
        }
        for(int i=1; i<=n; i++)cout << a[i] << " ";
        cout << endl;
    }
}
