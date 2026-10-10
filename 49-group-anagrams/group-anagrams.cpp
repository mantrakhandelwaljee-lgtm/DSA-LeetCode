class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
        map<string, int> m;
        int n = s.size();

        vector<vector<string>> ans;

        int k = 0;
        for(int i = 0 ; i < n ; i++){
            string t = s[i];
            sort(t.begin(), t.end());

            if(m.find(t) == m.end()){
                m[t] = k;
                k++;

                vector<string> temp = {s[i]};
                ans.push_back(temp);
            }else{
                int idx = m[t];
                ans[idx].push_back(s[i]);
            }
        }
        return ans;
    }
};