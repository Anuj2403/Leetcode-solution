int count=0;
for(int i=0;i<n;i++)
{
if(s[i]=='(' && s[i+1]==')')
i=i+1;
else
st.push(s[i]);
}
return st.size();
}
// 3rd wrong approach -
int n=s.size();
stack<char>st1;
stack<char>st2;
int count=0;
for(int i=0;i<n;i++)
{
if(s[i]=='(' && st2.size()==0)
st1.push(s[i]);
else if(s[i]==')' && st1.size()==0)
st2.push(s[i]);
else
st1.pop();
}
return st2.size();
​
​
*/