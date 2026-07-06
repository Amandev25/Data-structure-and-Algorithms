class Solution {
public:

    string reverseVowels(string s) 
    {
         unordered_set<char>st = { 'a' , 'e' , 'i' , 'o' , 'u' , 'A' , 'E' , 'I' , 'O' , 'U'} ;  
          int n = s.size(); 
          int left = 0 ; 
          int right = n-1 ; 

          while( left < right )
          {
            while( left < right && st.find(s[left]) == st.end() ) left++ ; 
            while( left < right && st.find(s[right]) == st.end() ) right-- ; 

            if( st.find(s[left]) != st.end() && st.find(s[right]) != st.end() ) {{
                swap( s[left] , s[right] ) ;
                left++ ; 
                right-- ;  
            }} 

           
          }  
           return s ;      
    }
};