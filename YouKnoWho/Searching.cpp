/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 09/04/2024 
*/ 
 
#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define MOD 1000000007
#define mem(a,b) memset(a,b,sizeof(a))
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define T  int t; cin>>t; while(t--)
const int mx = 1e5+123;
int a[mx];
int main(){
    optimize();
    int n; cin>>n;
    for(int i=0; i<n; i++) cin>>a[i];
    int m; cin>>m;

    bool f = false;
    int idx = 0;
    for(int i=0; i<n; i++){
        if(a[i]==m){
            f = true;
            idx = i;
            break;
        }
    }

    if(f) cout<<idx<<endl;
    else cout<<-1<<endl;

    return 0;
}