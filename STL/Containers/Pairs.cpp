#include <bits/stdc++.h>
using namespace std;

int main() {
    // Initializing a pair with one integer and one string
    pair<int ,string> p1 ;

    // first method to create a pair :
     p1 = make_pair(1, "one");
     cout << "First method: " << p1.first << " " << p1.second << endl;

    // Second Method to create a pair :
    p1 = make_pair(2, "two");
    cout << "Second method: " << p1.first << " " << p1.second << endl;

    // Copy of a previous pair 
     pair<int , string> p2 = p1;
     cout << "Copy of previous pair: " << p2.first << " " << p2.second << endl;

    // References of a pair
    pair<int ,string> &p3 = p1;
    p3 ={ 3, "three"}; 
    cout << "Refrences of a pair: "<< p3.first << " " << p3.second << endl;

    cout << "After references,p1: " << p1.first << " " << p1.second << endl;

    // array of pairs 
    pair <int , int> arr[3] ;
    arr[0] = {1,2};
    arr[1] = {3,4};
    arr[2] = {5,6};
    for(int i = 0 ; i <= 2 ; i++){
        cout <<"Array of pairs: " << arr[i].first << " " << arr[i].second << endl;
    }


}
