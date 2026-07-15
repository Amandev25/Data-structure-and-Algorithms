class Solution {
public:
    int characterReplacement(string s, int k) 
    {
      int n = s.size(); 
      int left = 0 , right = 0 ; 
      int window = 0 , max_freq = 0 ; 
      vector<int>freq( 26 , 0 ) ; 

      for(  ; right<n ; right++ )
      {
        freq[ s[right] - 'A']++ ; 

      
      max_freq = max( max_freq , freq[ s[right] - 'A'] ) ; 
      while( (right - left + 1) - max_freq > k ) {
         freq[ s[left] - 'A']-- ; 
         left++ ; 
         
      }
      window = max( window , right - left + 1) ;
      
      }  
      return window ; 
    }


};