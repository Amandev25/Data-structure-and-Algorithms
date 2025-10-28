#include <bits/stdc++.h>
using namespace std ;

int main() {
   map<int , string> m;
   
   m[1] = "abc"; // O(log n) time complexity
   m[2] = "cdc";
   m[3] = "acd";
   m.insert({4, "afg"}); //  m.insert(pair<int, string>(4, "afg"));

   map<int,string> :: iterator it ;
   // for (it = m.begin(); it != m.end() ; ++it){
   //    cout << (*it).first << " " << (*it).second << endl;
   //    cout << it->first << " " << it->second << " "; // both are equivalent 
   // }
   for(auto &map : m) { // &  used to avoid copying the pair

      cout << map.first << " " << map.second << endl;
   }
   

   auto it1 = m.find(7); // O(log n) time complexity
   if(it1 == m.end())
   {
      cout << "No Element Found";
   }
   else{
      cout << "Element found: " << it1->first << " " << it1->second << " ";
   }

   // Comparing two maps
    
}