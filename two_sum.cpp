//https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& ar, int target) {
        int n=ar.size();
        vector<pair<int,int>> a;
        for(int i=0;i<n;i++){
            a.push_back({ar[i],i});
        }
        sort(a.begin(),a.end());
        
        int l=0,r=n-1;
        while(l<r){
            if(a[l].first+a[r].first==target){
                vector<int> ans={a[l].second,a[r].second};
                return ans;
            }
            if(a[l].first+a[r].first<target) l++;
            else r--;
        }
        vector<int> ans;
        return ans;
    }
};
