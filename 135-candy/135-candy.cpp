class Solution {
public:
    int candy(vector<int>& v) {
        
        int n=v.size();
        if(n<=1)
            return n;
        
        vector<int> num(n,1);
        
        for(int i=1;i<n;i++){
            if(v[i]>v[i-1]){
                num[i]=num[i-1]+1;
            }
        }
        
      for(int i=n-1;i>0;i--){
          if(v[i-1]>v[i]){
              num[i-1]=max(num[i]+1,num[i-1]);
          }
      }
        
        int candy=0;
        for(int i=0;i<n;i++){
            candy+=num[i];
        }
        
        return candy;
    }
};

/*
class Solution {
public:
    int candy(vector<int>& r) {
        int n=r.size();
        int count=0;
        
        for(int i=0;i<n;i++)
        {
            if(r[i]<r[i+1] && r[i]<r[i-1])
                count+=2;
            else if(r[i]>r[i+1] && r[i]>r[i-1])
                count+=2;
            else if(r[i]>r[i-1])
                count++;
            else if(r[i]<r[i+1])
                count++;
        }
        return count+n;
        
    }
};


*/