class Solution {
public:
    int numberOfMatches(int n) {
        int totalmatches = 0 ;
        while(n!=1)
        { 
            int matches ;
            if(n%2==0)
            {
                matches=n/2;
                n=n/2;
                totalmatches+=matches;

            }  
            else
            {
                matches=(n-1)/2;
                n=(n-1)/2+1;
                totalmatches+=matches;
            }
        } return totalmatches;
        
    }
};