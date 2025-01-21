#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> nums={1,2,3,4};
    int size = nums.size();
    vector<int> out;
    vector<int> pre(size);
    vector<int> post(size);
    vector<int> product(size);

    cout<<"size "<<size<<endl;
    long cur=1;
    int index=0;
    for (int i=0, j=0;i< size; j++, i++){
        pre[j]=cur;
        cur*=nums[i];
        }

    cur=1;
    for (int i=size-1; i>=0; i--){
        post[i]=cur;
        cur*=nums[i];

    }

    for (int  j =0; j<size; j++  ) {
        product[j]=post[j]*pre[j];
    }
    for (int  j =0; j<size; j++  ) {
        cout<<product[j]<<" ";
    }

    return 0;
}