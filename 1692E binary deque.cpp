#include <iostream>
#include <vector>
#include<climits>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        vector<int>arr;
        int sum=0;
        for (int i = 0; i < n; i++) {
            int a;
            cin>>a;
            sum+=a;
            arr.push_back(a);
        }
        int ans=INT_MIN;
        int sum1=0;
        if(sum==s){
            cout<<0<<endl;
        }else if(sum<s){
            cout<<-1<<endl;
        }else{
            int l=0,r=0;
            while(1) {
            if(r==n){
                ans = max(ans,r-l);
                break;
            }
            if(arr[r]+sum1<=s){
                //ans = max(ans,r-l);
                sum1+=arr[r];
                r++;
            }else{
                ans = max(ans,r-l);
                sum1-=arr[l];
                l++;
            }
        }
        cout<<n-ans<<endl;
        }
        
        
    }

    return 0;
}
