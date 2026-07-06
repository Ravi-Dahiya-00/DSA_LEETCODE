class Solution {
public:
    void merge(vector<vector<int>>& intervals, int left, int mid, int right) {
        int n1 = mid - left + 1;
        int n2 = right - mid;
        
        vector<vector<int>> L(n1), R(n2);
        
        for (int i = 0; i < n1; i++)
            L[i] = intervals[left + i];
        for (int j = 0; j < n2; j++)
            R[j] = intervals[mid + 1 + j];
        
        int i = 0, j = 0, k = left;
        
        while (i < n1 && j < n2) {
         
            if (L[i][0] < R[j][0] || 
                (L[i][0] == R[j][0] && L[i][1] >= R[j][1])) {
                intervals[k] = L[i];
                i++;
            } else {
                intervals[k] = R[j];
                j++;
            }
            k++;
        }
        
        while (i < n1) {
            intervals[k] = L[i];
            i++;
            k++;
        }
        
        while (j < n2) {
            intervals[k] = R[j];
            j++;
            k++;
        }
    }
    
    void mergeSort(vector<vector<int>>& intervals, int left, int right) {
        if (left < right) {
            int mid = left + (right - left) / 2;
            mergeSort(intervals, left, mid);
            mergeSort(intervals, mid + 1, right);
            merge(intervals, left, mid, right);
        }
    }

    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        mergeSort(intervals, 0, intervals.size() - 1);
        int low = intervals[0][0];
        int high = intervals[0][1];
        int n = intervals.size();
        int ans = n;
        
        for (int i = 1; i < n; i++) {
            if (intervals[i][0] >= low && intervals[i][1] <= high) {
                ans--;
            } else {
                low = intervals[i][0];
                high = intervals[i][1];
            }
        }
        return ans;
    }
};