#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

const int mx = 1e5+123;
int a[mx];
int bubble_Sort(int a[],int n){
 for(int i=0; i<n-1; i++){
    for(int j=0; j<n-i-1; j++){
        if(a[j]>a[j+1]){
        swap(a[j],a[j+1]);
    }
    }
 }
}
#define T  int t; cin>>t; while(t--)
int main(){
    optimize();
    int n; cin>>n;
    for(int i=0; i<n; i++) cin>>a[i];
    bubble_Sort(a,n);

    for(int i=0; i<n; i++) cout<<a[i]<<" ";
    cout<<endl;

    return 0;
}