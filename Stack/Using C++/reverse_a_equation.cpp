class Solution
{
  public:
    string reverseEqn (string s)
        {
            stack<string>st;
            for(int i=0;i<s.size();i++){
                string word="";
                while((s[i]>=48 && s[i]<=57) || (s[i]>=97 && s[i]<=122) && i<s.size()){
                    word+=s[i];
                    i++;
                }
                st.push(word);
                if(s[i]=='+'|| s[i]=='-' || s[i]=='*'|| s[i]=='/'){
                    word="";
                    word+=s[i];
                    st.push(word);
                }
            }
            //code here.
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
        }
};
/*
Input-S = "20-3+5*2"
Output: 2*5+3-20
*/
