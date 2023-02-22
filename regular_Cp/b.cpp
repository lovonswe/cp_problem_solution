#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vctr vector<ll>
#define pai pair<ll, ll>
#define vp vector<pair<ll, ll>>
/*
In general, printf and scanf are faster
than cin and cout . This is because printf
and scanf are based on the C standard
library, which is generally faster than
the C++ standard library,
which cin and cout are part of.Dec 31, 2022

*/


int main()
{

    ll t;
    cin >> t;

    while(t--)
    {
        ll n, m, i, j, k;
        cin >> n;
        vctr a(n);
        for(int i=0; i<n; i++)cin >> a[i];

        ll fp[n+5], cnt[n+5]={0};
        for(int i=0; i<(n+5); i++)fp[i]=INT_MAX;

        for(ll i=0; i<n; i++)fp[a[i]]=min(i,fp[a[i]]);
        ll ans=0, temp=0;
        for(int i=n-1; i>=0; i--){
            if(fp[a[i]]==i){
                temp-=cnt[a[i]];
                ans=max(temp, ans);
                a[i]++;
            }

            if(fp[a[i]+1]<i){
                cnt[a[i]+1]++;
                temp++;
                ans=max(temp, ans);
            }

            cout << i << " " << temp << " " << ans << endl;

        }
        cout << endl;
        cout << ans << endl;

    }

}

/*Here's a table containing commonly used types in C programming for quick access.

Type	Size (bytes)	Format Specifier
int	at least 2, usually 4	%d, %i
char	1	%c
float	4	%f
double	8	%lf
short int	2 usually	%hd
unsigned int	at least 2, usually 4	%u
long int	at least 4, usually 8	%ld, %li
long long int	at least 8	%lld, %lli
unsigned long int	at least 4	%lu
unsigned long long int	at least 8	%llu
signed char	1	%c
unsigned char	1	%c
long double	at least 10, usually 12 or 16	%Lf
*/
