// Deque  - Doubly-ended queues ---------> Similar to vector but it provides push_front as well
// DEQUE => container_type <data_type> var;

#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> dq;

//All the following functions are possible in deque
    //push_back()
    //push_front()
    //pop_back()
    //pop_front()
    //.begin() , .end() , .rbegin() , .rend()
    //.size()
    //.clear()
    //.empty()
    //.at()

    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);
    dq.push_front(4);
    dq.push_front(5);

    for(auto it: dq)
        cout << it << " ";
    //Output:- 5 4 1 2 3

    //To find the number of elements in deque
    cout << '\n' << dq.size() << endl; // 5 

    //To remove first or last use .pop_front .pop_back()
    dq.pop_back(); //removes 3
    dq.pop_front(); //removes 5
    // dq = {4,1,2}

    //To find value at particular iterator
    cout << dq.at(1) << endl; // 1
    

    //To clear whole container
    dq.clear(); // removes everything
    cout << dq.size() << endl; // 0

    return 0;
}