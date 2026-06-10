#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
    int n;
    cin>>n;
vector<int> arr(n);
for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
vector<int>ans(n);
ans[n-1]=-1;
stack<int>st;
st.push(arr[n-1]);
for(int i=n-2;i<n;i--){
    while (!st.empty()&&st.top()<=arr[i])
    {
    st.pop();
    }
    if (st.empty())
    {
        ans[i]=-1;
    }
    else{ans[i]=st.top();
    }
    st.push(arr[i]);
}
    for (int i = 0; i < n; i++)
    {
    cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;

}
