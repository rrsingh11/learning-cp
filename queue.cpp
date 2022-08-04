//Queue - FIFo {First in First Out}
//QUEUE => container_type <data_type> var;

#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    //To insert i queue
    q.push(2);
    q.push(1);
    q.push(3);
    q.push(4);
    q.push(5);

    /*
    Queue:-
        |   5   | 
        |   4   |
        |   3   |
        |   1   |           
        |___2___| <- front 
    */

    //.front() gives the first element entered
    cout << q.front() << endl;

    //.pop() removes the front element
    q.pop();

    //Print stack
    while(!q.empty())
    {
        cout << q.front();
        q.pop();
    }

    //To delete entire queue, .clear() cannot be used
    while(!q.empty())
        q.pop();


    //To find the number of elemnts in queue
    cout << '\n' << q.size() << endl;

    return 0;
}
//No .begin() .end() operation. Only .front() is possible.
//All the operation is O(1), Except deletion of queue i.e O(n)