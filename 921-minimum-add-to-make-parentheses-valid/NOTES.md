```
class Solution {
public:
int minAddToMakeValid(string s) {
stack<char> st;
int count=0;
for(int i=0;i<s.size();i++)
{
if(s[i]==')')
{
if(st.empty())
count++;
else if(st.top()=='(')
st.pop();
else
st.push(s[i]);
}
else if(s[i]=='(')
st.push(s[i]);
}
return st.size()+count;
}
};
​
/*
// Iterative Approach -
int n=s.size();
int res=0;
int balance=0;
for (int i = 0; i < n; i++)
{
balance+=s[i]=='(' ? 1 : -1;
if(balance==-1)
{
res++;
balance++;
}