// https://leetcode.com/problems/search-insert-position/

class Solution {
public:
    int searchInsert(vector<int>& a, int target) {
        int n=a.size();
        int ans=0,l=0,r=n-1;
        while(l<=r){
            int m=(l+r)/2;
            if(a[m]==target) return m;
            if(a[m]<target) l=m+1;
            else r=m-1;
        }
        return l;
    }
};
