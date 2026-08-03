class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end()) ;
        sort(s.begin(),s.end()) ;

        int ans = 0 , j = 0 ;
        for(int i = 0 ; i < s.size() ; i++){
            if(j < g.size() && s[i] >= g[j]){
                ans++; 
                j++ ;
            }
        }
        return ans ;
    }
};