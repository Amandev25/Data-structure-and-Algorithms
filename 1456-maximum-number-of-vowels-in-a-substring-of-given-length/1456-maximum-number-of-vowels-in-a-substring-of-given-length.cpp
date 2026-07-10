class Solution {
public:
    int maxVowels(string s, int k) 
    {
       string vowels = "aeiou" ; 
       int left = 0 , right = 0 ; 
        int count = 0 , max_count = 0  ; 
       for( ; right-left + 1 <=k ; right++ )
       {
        if( vowels.find(s[right]) != string::npos )
        {
            count++ ; 
        }
       }
       max_count = count ; 
       for( ; right < s.size() ; right++ )
       {
        if( vowels.find(s[right]) != string::npos )
        {
            count++ ; 
        }
        if( vowels.find(s[left]) != string::npos )
        {
            count-- ;
            left++ ;  
        }else {
            left++ ; 
        } 
        max_count = max( max_count , count ) ; 

       }

       return max_count ; 

    }
};