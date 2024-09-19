#include<bits/stdc++.h>
using namespace std;

const int N = 100010;
int target,n;
int num[N];

int Add(int target,int num[]){
    
    for(int i = 0;i < n; i++){
        for(int j = i + 1;j < n;j++){
            if(num[i] + num[j] == target) cout << i << " " << j;
        }
    }

}



int main(){
    cin >> n;
    cin >> target;
    for(int i = 1;i <= n;i ++) cin >> num[i];

    Add(target,num);
    // for(int i = 1;i <= n;i ++) cout << num[i];


}

// nums = [2,7,11,15], target = 9
// 输出：[0,1]
// 解释：因为 nums[0] + nums[1] == 9 ，返回 [0, 1] 