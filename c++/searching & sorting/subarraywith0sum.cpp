#include<bits/stdc++.h>
using namespace std;
#define ll long long

  


class Solution{
    public:
    //Function to count subarrays with sum equal to 0.
    ll findSubarray(vector<ll> arr, int n ) {
        
        if(n==0) return 0;
        
        unordered_map <int ,int > m;
        int i=0,count=0,curr_sum=0;
        
        while(i<n)
        {
            curr_sum+= arr[i];
            if(curr_sum==0) count+=1;
            
            if(m.find(curr_sum)!=m.end()) count+= m[curr_sum];
            
            m[curr_sum]+=1;
            i++;
            
        }
        return count;
    }
};

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n; //input size of array
       
        vector<ll> arr(n,0);
        
        for(int i=0;i<n;i++)
            cin>>arr[i]; //input array elements
        Solution ob;
        cout << ob.findSubarray(arr,n) << "\n";
    }
	return 0;
} 