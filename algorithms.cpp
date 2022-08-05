#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=5;
    int a[n]={ 3 , 4 , 7 , 2 , 1} ;
    array<int,5> b = { 2 , 3 , 6 , 5 , 4};
    //Only constant required, n cannot be used. Maybe because of this we use a[n] notation not array<int,size>

    vector<int> vec = { 9 , 5 , 8 , 3 , 1};
    
//Sorting -------------->O(nlog n)          =>[)
    sort(a , a+n); //{1 , 2 , 3 , 4, 7}
    sort(b.begin() , b.end()); // {2 ,3 , 4 , 5 , 6}
    sort(vec.begin(),vec.end()); // { 1 , 3 , 5 , 8 , 9}

    for(int i=0;i<n;i++)
    {
        cout << a[i] << "|";
        cout << b[i] << "|";
        cout << vec[i] << "|";
        cout << endl; 
    }
    //Suppose you need to sort from index 2 to 5
    vector<int> vec = {3, 4, 9, 1, 5};
    sort(vec.begin()+2 , vec.begin()+6); // [2 , 6)  => { 3 , 4 , 1 , 5 , 9}

    for(auto it:vec)
        cout << "[2,6) => " <<  it << " ";
    cout << endl;




//Reverse   => [)
    reverse(a , a+n);
    reverse(b.begin() , b.end());
    reverse(vec.begin() , vec.end());
    //Same thing like sorting for a particular range of reversing
    
    for(int i=0;i<n;i++)
    {
        cout << a[i] << "|";
        cout << b[i] << "|";
        cout << vec[i] << "|";
        cout << endl; 
    }




//Maximum / Minimum element => max_element & min_element are iterators
    int el = *max_element(a , a+n); //  lly (b.begin(),b.end()) & (vec.begin() , vec.end())
    cout << el << endl;

    int el = *min_element(a,a+n); // lly (b.begin(),b.end()) & (vec.begin() , vec.end())
    cout << el << endl;





//To find the sum of the range 
//accumulate(first-iterator , last-iterator , inital-sum  )
    int sum = accumulate(a ,a+n , 0);  // lly (b.begin(),b.end(), inital-sum ) & (vec.begin() , vec.end(), inital-sum)
    cout << sum << endl;





// To find the number of times a particular value 'x'  occured.
// count(first-iterator , last-iterator , x )
    int x = 3;
    int a[5] = {3,3,3,1,4};
    int cnt = count(a,a+5,x); //lly (b.begin(),b.end(),x) & (vec.begin() , vec.end(),x)
    cout << cnt << endl;




//To find the first occurance of  'x' 
// find(first-iterator , last-iterator , x )
    int x = 2;
    int a[5] = {1,3,2,4,2};
    auto it = find(a,a+5,x); // It return an iterator over first occurance of the number and if not present it return end()
    //lly (b.begin(),b.end(),x) & (vec.begin() , vec.end(),x)

    cout << it-a << endl; // (a-b) / distance(a,b) mostly used to get index => a=iterator b=.begin()
    //lly (it-b.begin()) & (it-vec.begin())

    
    return 0;
}





