//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
      
      vector<long long int>ls(n),rs(n); ls[0]=1; rs[n-1]=1;
      for(int i=1;i<n;i++){
            ls[i] = ls[i-1]*nums[i-1];  
      }
      for(int j=n-2;j>=0;j--){
          rs[j]=rs[j+1]*nums[j+1];
      }
      for(int i=0;i<n;i++){
          nums[i]=ls[i]*rs[i];
         
      }
      
      return nums;
      
    }
};


//{ Driver Code Starts.
int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        vector<long long int> arr(n),vec(n);
        
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr,n);   // function call
        
        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends