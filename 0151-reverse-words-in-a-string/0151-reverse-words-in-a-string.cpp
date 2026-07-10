class Solution {
public:
    string reverseWords(string s) 
    {
      reverse( s.begin() , s.end() ) ; 
      int n = s.size() ; 
      int left = 0 , right ; 
      string ans ="" ; 
      while( left < n )
      {
        while( left < n && s[left] == ' ')
        {
            left++ ; 
        }

        if( left >= n ) break ; 
        right = left ; 
        while( right < n && s[right] != ' ')
        {
            right++ ;
        }

        reverse( s.begin()+left , s.begin()+right ) ; 

        if( !ans.empty() )
        {
            ans += ' ' ; 
        }
        ans += s.substr( left , right - left ) ; 

        left = right ; 

      }

      return ans ; 

    }
};