class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();

        unordered_map<int,int> nextGreater;
        vector<int> ans;
            stack<int> st;
            for(int j=m-1;j>=0;j--){
                while(!st.empty() && st.top()<nums2[j]){
                    st.pop();
                }
                if(st.empty()){
                    nextGreater[nums2[j]]=-1;
                }
                else{
                    nextGreater[nums2[j]]=st.top();
                }
                st.push(nums2[j]);
            }
        
            for(int num : nums1){
                ans.push_back(nextGreater[num]);
            }
            return ans;
    }
};