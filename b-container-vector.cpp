//DYNAMIC ARRAY
// container_type <data_type> var(`size`,`value`) = { ?,?,?,?...};
#include <bits/stdc++.h>
using namespace std;

int main()
{
 // Segmentation fault => push_back 10^7 times
    vector<int> v; // {}
    cout << v.size() << endl; // print -> 0
    v.push_back(0); // {0}
    v.push_back(2); // {0,2} -> add one element back of last element
    cout << v.size() << endl; // print -> 2
    v.pop_back(); // {0} -> remove one element from back
    cout << v.size() << endl; // print -> 1
    v.clear(); // {} -> erase all the elemets at once



//creating vector with initial size '4' will all elements '7' 
    vector<int> v1(4,7); // {7,7,7,7} 
    //Still I can push back, this is not limited to 4




//copy elements of one vector to other
    vector<int> v2(v1.begin(),v1.end()); // -> [} 
    vector<int> v3(v1); 
    Example:
    vector<char> ritu;
    ritu.push_back('s'); //{'s'}
    ritu.push_back('i'); //{'s', 'i'}
    ritu.push_back('n'); //{'s', 'i' , 'n'}
    ritu.push_back('g'); //{'s', 'i' , 'n' , 'g'}
    ritu.push_back('h'); //{'s', 'i' , 'n' , 'g' , 'h'}
    vector<char>raj(ritu.begin() , ritu.begin()+2); // {'s' , 'i'}

// Note: push_back() and emplace_back() are identical but emplace_back is slightly faster than push_back





// Functions
// lower bound & upper bound
// swap







//2D Vectors
    vector<vector<int>> vec; // {{}}
    vector<int>v1 = {1,2,3}; //1D vector
    vector<int>v2 = {10,20,30,40}; //1D vector
    vec.push_back(v1); // {{1,2,3}}
    vec.push_back(v2); // {{1,2,3},{10,20,30,40}}

  //Cool way
    for(auto it: vec) // it will determine vector
    {
        for(auto jt: it) // jt will determine int
        {
            cout << jt << " ";
        } 
        cout << endl;   
    }
  //Traditional way
    for(int i=0 ; i<vec.size();i++)
    {
        for(int j=0; j< vec[i].size();j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }




//define 30 x 40
    vector<vector<int>> vec2(30, vector<int>(40,0)); // 30x40 2D vector with all value 0

//Array of vectors
    vector<int>arr[10];
//Vector of arrays
    vector<int[10]> va;


// 3D Vectors
    vector<vector<vector<int>>> vec;

//define 10x20x30 
    vector<vector<vector<int>>> vec3(10,vector<vector<int>>(20,vector<int>(30,0)));
    

//For sorting
    sort(vec.begin(),vec.end());
    return 0;
}