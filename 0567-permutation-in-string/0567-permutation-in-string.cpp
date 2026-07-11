class Solution {
public:
    bool checkInclusion(string s1, string s2) 
    {
      int n = s1.size() , m = s2.size() ;
      if( n > m ) return false ;  
      vector<int>target(26 , 0 ) ; 
      vector<int>window(26 , 0 ) ; 

      for( char c : s1 )
      {
        target[ c -'a' ]++ ; 
      } 
      int right = 0  , left = 0 ; 
      for( ; right < n ; right++ )
      {
         window[s2[right] -'a']++ ; 
      }
      if( window == target ) return true ; 

      for( ; right < m ;right++ )
      {
        window[s2[right] -'a']++ ; 
        window[s2[left++] -'a']-- ; 

        if( window == target ) return true ; 
        
      }
      return false ; 
    }
};