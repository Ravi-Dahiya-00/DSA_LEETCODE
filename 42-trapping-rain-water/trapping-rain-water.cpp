class Solution {
public:
    int trap(vector<int>& height) {
        int ans=0;
        int n=height.size();
      
        int leftmax=0;
        int rightmax=0;
        int left=0, right=n-1;
        while(left<=right){
            if(height[left]<=height[right]){
                if(leftmax>height[left]){
                    ans+=leftmax-height[left];
                }else{
                    leftmax=height[left];
                }
                left++;
            }
            else{
                if(rightmax>height[right]){
                    ans+=rightmax-height[right];
                }else{
                    rightmax=height[right];
                }
                right--;
            }
        }
        return ans;
    }
};