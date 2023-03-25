//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int n) 
    {
       int s=0;int e=n; long long int ans=0;
        while(s<=e){
            long long int mid=s+(e-s)/2;
            long long int sq=mid*mid;
            if(sq==n)return mid;
            
            else if(sq<n) {ans=mid;s=mid+1;}
            else e=mid-1;
        }
        return ans;  
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}

// } Driver Code Ends