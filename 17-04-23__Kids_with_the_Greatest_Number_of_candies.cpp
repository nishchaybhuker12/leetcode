class Solution{
    vector<bool> ans(vector<int> candies, int specific){
        vector<bool> ans;

        for(auto i : candies){
            int x = i + specific;
            int y = 1;

            for(auto j : candies){
                if(x<j){
                    y = 0;
                }
            }
        if(y == 1){
            ans.push_back(1);
        }    
        else{
            ans.push_back(0);
        }
        }
        return ans;
    }
};