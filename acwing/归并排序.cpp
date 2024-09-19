#include<bits/stdc++.h>
using namespace std;

const int N = 100010;

int n;
int res[N],q[N];

void sort(int q[],int l,int r){
    int mid = (l + r)/2;

}



int main(){
    scanf("%d", &n);

    for (int i = 0; i < n; i++) scanf("%d",&q[i]);
    
    sort(q,0,n)
    
    for (int i = 0; i < n; i++) cout << res[i] << " ";
    
    return 0;
    
}