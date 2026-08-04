class Solution {
public:
    vector<int> majorityElement(vector<int>& a) {
        int n = a.size() ;
        sort(a.begin(),a.end()) ;


        vector<int> ans ;
        int target = a[0] , count = 1;
        for(int i = 1 ; i < n ; i++){ 
            if(i < n && a[i] == target){
                while(i < n && a[i] == target){
                    count++ ;
                    i++ ;
                }
            }
            if(count > (n/3)){
                ans.push_back(target) ;
            }
                if(i < n){
                target = a[i] ;
                count = 1 ;
                }else{
                    return ans ;
                }

        }
        if(count > (n/3)){
                ans.push_back(target) ;
            }
        
        
        return ans ;
    }
};