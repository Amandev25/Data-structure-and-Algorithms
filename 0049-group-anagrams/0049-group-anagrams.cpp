class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
       unordered_map< string , vector<string>> mp ;  

       for( string s : strs )
       {
        vector<int> count( 26 , -1) ; 
        for( char c : s )
        {
            count[c-'a']++ ; 
        }
        string key = "" ; 
        for( int n  : count )
        { 
          key += to_string(n) + '#' ;   
        }
        mp[key].push_back(s) ;      
   
       } 

       vector<vector<string>>res ; 

       for( auto it : mp )
       {
         res.push_back( it.second ) ; 
       }

       return res ; 

    }
};