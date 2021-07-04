class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        int peak = -1 ;
        
        int max = INT_MIN ;
        
        for(int i=0; i<arr.size(); i++) {
            
            if(arr[i]>max) {
                max = arr[i] ;
                peak = i ;
            }
            
        }
        
    return peak ;
    }
};
