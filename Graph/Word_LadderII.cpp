//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    vector<vector<string>> findSequences(string beginWord, string endWord, vector<string>& wordList) {
        // code here
        unordered_set<string>st(wordList.begin(),wordList.end());
        queue<vector<string>>q;
        q.push({beginWord});
        int ans_level=-1;
        vector<string>usedOnLevel;
        usedOnLevel.push_back(beginWord);
        
        int level=0;
        vector<vector<string>>ans;
        
        while(!q.empty()){
            vector<string>vec=q.front();
            q.pop();
            if(vec.size()>level){
                if(ans_level==level)
                break;
                level++;
                for(auto it:usedOnLevel){
                    st.erase(it);
                }
            }
            string word=vec.back();
            
            if(word==endWord){
                ans_level=level;
                if(ans.size()==0){
                    ans.push_back(vec);
                }
                else if(ans[0].size()==vec.size()){
                    ans.push_back(vec);
                }
            }
            for(int i=0;i<word.size();i++){
                char original=word[i];
                
                for(char c='a';c<='z';c++){
                    word[i]=c;
                    
                    if(st.count(word)>0){
                        
                        vec.push_back(word);
                        q.push(vec);
                        usedOnLevel.push_back(word);
                        vec.pop_back();
                    }
                }
                word[i]=original;
            }
        }
      
        return ans;
        
    }
};

