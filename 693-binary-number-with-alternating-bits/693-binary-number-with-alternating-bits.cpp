class Solution {
public:
    bool hasAlternatingBits(int n) {
        bool flag=false;
        if(n&1==1)
            flag=true;
        n>>=1;
        
        while(n>0)
        {
            if(n&1==1)
            {
                if(flag==true)
                    return false;
            }
            else
            {
                if(flag==false)
                    return false;
            }
            flag=(n&1);
            n>>=1;
        }
        return true;
    }
};