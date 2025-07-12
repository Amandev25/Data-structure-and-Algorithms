#include <bits/stdc++.h>
using namespace std ;

int main() {
    vector<int> v ={2,3,5,6,7};
    for(int i=0 ; i < v.size() ; i++){
        cout << v[i] << " ";
    }
    cout << endl;
    vector<int> ::iterator it = v.begin();
    // cout << (*(it+3)) << endl; // output fourth element
    
    for( it = v.begin() ; it != v.end() ; ++it){
        cout << *it << endl ;
    }  
    vector<pair<int, int>> v1 = {{1,2}, {4,5}, {6,7}};
    
    vector<pair<int,int>> :: iterator it1;
    for(it1 = v1.begin(); it1 != v1.end() ; ++it1){
        cout << (*it1).first << " " << (*it1).second << endl;
    }

    // (*it).first <=> (it->first) // both are equivalent


// Shorthand for iterators !! 
// Range based loops : -using range based loops we can access elements of a container without using iterators explicitly.
// auto key words

for(int value : v){ // value will take copy of each element , doesn't modify them
    cout << value << " ";
}


vector<pair<int, int>> v2 = {{1,2},{4,5},{7,8}};
 
for(auto &p : v2){
    p.first +=1;
    cout << p.first << " " << p.second << " ";
}

} 



 
 