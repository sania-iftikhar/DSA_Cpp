#include<bits/stdc++.h>
using namespace std;

void printVec(vector<string> &v){
    cout << "Size: "<< v.size() << endl;
    for(int i =0; i< v.size(); i++){
        //v.size -> O(1)
        cout << v[i]<< " ";
    }
    //v.push_back(2);
    cout << endl;
}

int main(){
    //Pair
  //  pair<int, string> p;
   // p = make_pair(2, "abc");
//    p = {2 , "abcd"};
//    pair<int , string> &p1 = p;
//    p1.first = 3;
//    cout << p.first << " " << p.second << endl;
//    int a[] = {1, 2 ,3};
//    int b[] = {2, 3, 4};
//    pair <int , int> p_array[3];
//    p_array[0] = {1,2};
//    p_array[1] = {2,3};
//    p_array[2] = {3,4};
//    swap(p_array[2], p_array[0]);
//    for(int i =0; i<3; i++){
//        cout<< p_array[i].first << " " << p_array[i].second << endl;
//    }
// Vector
// vector<int> v;
// v.push_back(9);
// v.push_back(8);
// int n;
// cin >> n;
// for (int i =0; i<n ; i++){
//     int x;
//     cin >> x;
//     printVec(v);
//     v.push_back(x); //O(1)
// }

//v.pop_back();
//printVec(v);
//  vector<int> v2 = v; // O(n)
//  v2.push_back(5);
//  printVec(v);
//  printVec(v);
//  printVec(v2);
    vector<string> v;
    int n;
    cin >> n;
    for (int i =0; i< n; i++){
        string s;
        cin >> s;
        v.push_back(s);
    }
    printVec(v);


}