class Solution {
public: 
    typedef vector<int> V ; 
    vector<int> findAnagrams(string s, string p) 
    {
      int n = s.size() , m = p.size() ;
      V target(26 , 0) , window( 26 , 0 ) , ans ;  
      if(  m > n ) return {} ; 

      // building target vector.... 
      int right = 0 ; 
      for( char c : p )
      {
        target[c- 'a']++ ; 
      }
      // building window ... 
      for( ; right < m ; right++ )
      {
        window[s[right] - 'a']++ ; 
      }
      if( window == target ) ans.push_back(0) ; 
      int left = 0 ; 
      for( ; right < n ; right++ )
      {
         window[s[right] -'a']++ ; 
         window[s[left] -'a']--; 
         left++;
         if(window == target) ans.push_back( right - m +1 ) ; 
      }

      return ans ; 


    }
};