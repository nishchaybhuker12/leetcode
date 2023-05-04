class Solution {
public:
    string predictPartyVictory(string senate) {
        int val=0;
        int n=senate.length();
        bool ar[n+1];
        memset(ar,false,sizeof(ar));
        string ans;
        while(true)
        {
            for(int i=0;i<n;i++)
            {
                if(!ar[i])
                {
                    if(senate[i]=='D')
                    {
                        if(val>0)
                        {
                            ar[i]=true;
                        }
                        val--;
                    }
                    else
                    {
                        if(val<0)
                        {
                            ar[i]=true;
                        }
                        val++;
                    }
                }
            }
            bool r=false,d=false;
            for(int i=0;i<n;i++)
            {
                if(!ar[i])
                {
                    if(senate[i]=='D')
                    {
                        d=true;
                    }
                    else
                    {
                        r=true;
                    }
                }
            }
            if(r&&!d)
            {
                ans="Radiant";
                break ;
            }
            else if(!r&&d)
            {
                ans="Dire";
                break ;
            }
        }
        return ans;
    }
};