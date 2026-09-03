class Solution {
public:
    bool uniformArray(vector<int>& nums1){
        int minEl= *min_element(begin(nums1),end(nums1));
        if(minEl % 2==1){
            //if it is odd then we can convert all even to odd hence in that case
            return true;//all nums2will be odd
        }
        //check if we can make all even in nums2
        for(int &num:nums1){
            if(num % 2==1 ){
                return false;
            }
        }
        return true;    
    }
};