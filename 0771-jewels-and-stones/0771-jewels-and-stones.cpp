class Solution {
public:
    int numJewelsInStones(string jewels, string stones) 
    {
        int ans = 0 ; 
        unordered_map<char ,int > mp ; 
        for( char c : jewels )
        {
            mp[c]++ ; 
        } 

        for( char c : stones )
        {
            if( mp.find(c) != mp.end() ) ans++ ; 
            
        }

        return ans ; 
    }
};