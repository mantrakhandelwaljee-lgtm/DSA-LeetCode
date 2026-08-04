class Solution {
public:
    int majorityElement(vector<int>& a) {
        sort(a.begin(),a.end()) ;
        int mid = (a.size()-1)/2 ;
        return a[mid] ;
    }
};