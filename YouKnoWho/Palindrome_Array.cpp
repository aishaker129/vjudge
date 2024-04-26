#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

const int mx = 1e5+123;
int a[mx];

#define T  int t; cin>>t; while(t--)
int main(){
    optimize();
    int n; cin>>n;
    for(int i=0; i<n; i++) cin>>a[i];

    for(int i=0; i<n; i++){
        if(a[i]!=a[n-i-1]){
            cout<<"NO"<<endl;
            return 0;
        }
    }

    cout<<"YES"<<endl;
    return 0;
}