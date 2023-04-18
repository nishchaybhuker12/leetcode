class Solution{
        string mergeAlternately(string word1, string word2) {
            string ans = "";
            int i = 0,j = 0;

            while(i < word1.length() && j < word2.length()){
                ans += word1[i];
                ans += word2[j];
                i++;
                j++;
            }
            ans += word1.substr(i);
            ans += word2.substr(j);

            return ans;
        }
};