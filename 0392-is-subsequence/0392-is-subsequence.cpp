class Solution {
public:
    bool isSubsequence(string s, string t) 
    {
      int i = 0 , j = 0  ; 
      int count = s.size() ; 
      while( j < t.size() )
      {
        if( s[i] == t[j] ){ i++ ; count-- ;  }
        j++ ;   
      }

      return count == 0 ; 

    }
};