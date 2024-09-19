/*【模板】快速排序 */
#include<bits/stdc++.h>
using namespace std;

int a[100010];
main(){
    int n;
    cin >> n;
    for(int i = 0;i < n;i++) cin >> a[i];

    sort(a ,a + n );

    for(int i = 0;i < n;i ++) cout << a[i]<<" ";
}