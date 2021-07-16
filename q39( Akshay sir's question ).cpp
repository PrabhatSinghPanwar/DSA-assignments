class Solution {
public:
    int triangleNumber(vector<int>& n) {
        //naive method TC is O(n^3) :
//         int count=0 ;
        
//         for(int i=0; i<nums.size()-2; i++) {
//             for(int j=i+1; j<nums.size()-1; j++) {
//                 for(int k=j+1; k<nums.size(); k++) {
//                     if(nums[i]+nums[j]>nums[k] && nums[j]+nums[k]>nums[i] && nums[k]+nums[i]>nums[j])
//                         count++ ;
//                 }
//             }
//         }
    
        
        int count = 0 ;
        sort(n.begin(), n.end()) ;
        
        for(int i=2; i<n.size(); i++) {
            int left=0, right=i-1 ;
            
            while(left<right) {
             if(n[left]+n[right]>n[i]) {
                    count += right-left ;
                    right-- ;
                }
             else 
                 left++ ;
            }
        }

    return count ; 
    }
};
