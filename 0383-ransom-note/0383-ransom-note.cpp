class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) 
    {
      vector<int>vec( 26 , 0 ) ; 

      for( char c : ransomNote )
      {
        vec[ c - 'a' ]++ ; 
      }
      for( char c : magazine )
      {
        vec[ c - 'a' ]-- ; 
      }
      for( int i=0 ; i<26 ; i++ )
      {
        if( vec[i] > 0 )
        {
            return false ; 
        }
      }

      return  true ; 

    }
};