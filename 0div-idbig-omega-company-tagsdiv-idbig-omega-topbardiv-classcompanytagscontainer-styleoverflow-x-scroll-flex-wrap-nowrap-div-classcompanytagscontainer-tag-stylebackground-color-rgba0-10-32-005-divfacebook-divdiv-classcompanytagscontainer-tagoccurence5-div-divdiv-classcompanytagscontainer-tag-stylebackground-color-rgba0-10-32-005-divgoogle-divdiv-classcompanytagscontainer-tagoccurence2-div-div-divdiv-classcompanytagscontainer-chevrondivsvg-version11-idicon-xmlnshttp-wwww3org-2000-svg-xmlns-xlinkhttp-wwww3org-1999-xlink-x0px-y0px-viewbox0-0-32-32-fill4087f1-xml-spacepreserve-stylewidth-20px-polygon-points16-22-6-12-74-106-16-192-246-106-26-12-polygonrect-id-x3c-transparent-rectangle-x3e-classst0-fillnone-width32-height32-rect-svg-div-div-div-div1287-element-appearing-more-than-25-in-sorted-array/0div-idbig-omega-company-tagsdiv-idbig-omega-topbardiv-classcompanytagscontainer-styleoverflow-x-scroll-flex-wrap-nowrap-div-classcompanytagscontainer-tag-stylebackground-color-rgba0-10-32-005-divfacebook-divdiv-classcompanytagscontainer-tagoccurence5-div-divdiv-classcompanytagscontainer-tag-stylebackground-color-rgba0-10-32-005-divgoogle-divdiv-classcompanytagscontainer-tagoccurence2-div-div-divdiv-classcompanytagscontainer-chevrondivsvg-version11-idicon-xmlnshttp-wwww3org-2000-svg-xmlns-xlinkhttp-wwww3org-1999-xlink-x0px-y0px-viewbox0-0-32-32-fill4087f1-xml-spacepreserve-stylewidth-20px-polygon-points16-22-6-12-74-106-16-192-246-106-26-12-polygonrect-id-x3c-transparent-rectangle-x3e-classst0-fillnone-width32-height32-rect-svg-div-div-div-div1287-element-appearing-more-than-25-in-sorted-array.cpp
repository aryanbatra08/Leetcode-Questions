class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();
        int ans; 
        int count = 1 ; 
        int perc = n/4;
        for (int i = 1 ; i<n;i++)
        {
            if(arr[i]==arr[i-1])
            {
                count++;
                if(count>perc)
                {
                    ans=arr[i];
                    break;
                }
            }
                else
                {
                    count = 1;
                }
            }return ans;
        } 
     };
