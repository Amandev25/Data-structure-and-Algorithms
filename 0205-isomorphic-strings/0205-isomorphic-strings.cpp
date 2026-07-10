class Solution {
public:
    bool isIsomorphic(string s, string t) \
    {
      if( s.size() != t.size() ) return false ; 
      vector<int>mp1( 256 , -1 ) ; 
      vector<int>mp2( 256 , -1 ) ; 

      for( int i=0 ; i<s.size() ;i++ )
      {
        if( mp1[s[i]] == -1 && mp2[t[i]] ==-1 )
        {
            mp1[s[i]] = t[i] ; 
            mp2[t[i]] = s[i] ; 
        }
        else if( mp1[s[i]] != t[i] || mp2[t[i]] != s[i] ) return false ; 
      }

      return true ; 

         
    }
};