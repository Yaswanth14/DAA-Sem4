
// https://practice.geeksforgeeks.org/problems/minimize-the-heights3351/1

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        sort(arr, arr+n);
        int ans = arr[n-1] - arr[0];
        
        int sm = arr[0]+k;
        int la = arr[n-1]-k;
        int mi, ma;
        
        for(int i=0;i<n-1;i++)
        {
            mi = min(sm, arr[i+1]-k);
            ma = max(la, arr[i]+k);
            
            if(mi<0) continue;
            ans = min(ans, ma-mi);
        }
        return ans;
    }
};