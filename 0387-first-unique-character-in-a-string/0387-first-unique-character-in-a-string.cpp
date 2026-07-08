class Solution {
public:
    int firstUniqChar(string s) 
    {
        vector<int>mp(26,0) ; 

        for( char it : s )
        {
            mp[it - 'a']++ ; 
        }
       int it = 0 ; 
        while( it < s.size() )
        {
            if( mp[ s[it]- 'a'] == 1 ) return it ; 
            it++ ; 
        }
        return -1 ; 
    }
};