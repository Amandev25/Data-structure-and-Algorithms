#include<bits/stdc++.h>
using namespace std;

void printVector(const vector<int>& v) {
    for (int i=0 ; i < v.size() ; i++ ) {
        cout << v[i]<< " ";
    }
}
void printvector(const vector<pair<int,int>> & v) {
    for (int i=0 ; i < v.size() ; i++ ) {
        cout << v[i].first << " " << v[i].second ;
    }
        
}

int main() {
    // Initializing a vector of integers .. 
     vector<int> v1 = {2,4,5,3,2,4};
     vector<int>v2(5, 10); // vector of size 5, initialized with 10
    printVector(v1);
    cout << endl ;
    printVector(v2); 
    cout << endl ;

    v1.push_back(5);
    printVector(v1);
    cout << endl ;
    
    v2.push_back(30);
    printVector(v2);
    cout << endl ;
  // Nesting a vectors .... 

  vector<pair< int , int>>v ;

  int n ;
  cin >> n;

  for(int i=0 ; i< n; i++)
  {
    int x,y;
    cout << "Enter input :";
    cin >> x >> y ;
    v.push_back({x,y});

  }
 printvector(v);
  
}