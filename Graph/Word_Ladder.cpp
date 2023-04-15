class Solution {
public:
    int ladderLength(string startWord, string targetWord,vector<string>& wordList) {
          queue<pair<string,int>>q;
        q.push({startWord,1});
        unordered_set<string>st(wordList.begin(),wordList.end());
        while(!q.empty()){
            string node=q.front().first;
            int steps=q.front().second;
            q.pop();
            if(node==targetWord)
            return steps;
            
            for(int i=0;i<node.size();i++){
                char ch=node[i];
                for(char j='a' ; j<='z';j++){
                    node[i]=j;
                    if(st.find(node)!=st.end()){
                        st.erase(node);
                        q.push({node,steps+1});
                    }
                }
                node[i]=ch;
            }
        }
        return 0;
    }
};
