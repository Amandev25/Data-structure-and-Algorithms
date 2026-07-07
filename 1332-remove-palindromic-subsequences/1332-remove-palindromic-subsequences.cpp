class Solution {
public:
    int removePalindromeSub(string s) 
    {
        string pa = s ;
         reverse( pa.begin() , pa.end() ) ;  
        if( s == pa ) return 1 ; 
        else return 2 ; 
    }
};