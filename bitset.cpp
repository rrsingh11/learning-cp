/*
    int ---------> 16 bit
    char --------> 8 bits

    int a[100] --------> 100 * 16
    bitset -------> 1 bit
Bitset=> container_type <size> var;
It only stores 1 or 0

Set bit -> 1
Unset bit -> 0
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int index = 2;
    bitset<5> bt;
    bitset<5> bt1;
    bitset<5> bt2;
    cin >> bt; //11111
    cin >> bt1; //11010
    cin >> bt2; //00000

    //since all the bits are set in bt --------------> 11111
    cout << bt.all() << endl; //It returns true         //1

    //since all bits are not set in bt1
    cout << bt1.all() << endl; //It returns false       //0

    //if any one bit is set
    cout << bt.any() << endl; //It will return true or otherwise false          //1


    //To find the set bits or number of 1s
    cout << bt.count() << endl; // 5


    //To unset the set bit of given position
    // bt -> 11111
    bt.flip(index); // bt -> 11011

    //If none bit is set ------------> 00000
    cout << bt2.none() << endl; //It returns true or otherwise false            //1





    //To set a bit or the entire bits
    bt.set(); // 11111
    //or
    bt.set(index,0); //It set the bit at given index doesen't matter whether it's a 0 or 1
    
    

    // To reset a bit or all index
    bt1.reset(); //00000
    //or
    bt1.reset(index); //It reset the bit at given index doesen't matter whether it's a 0 or 1




    //To check if the given bit is set or not at given index
    cout << bt1.test(index) << endl; // It will return false as we reset the bit to 0. If the bit was set (1) it would return true
    //0
    return 0;
}