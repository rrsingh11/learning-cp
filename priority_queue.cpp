//Priority Queue
//All in sorted order and does the operation in O(log n)
// =>  container_type <data-typr> var;
#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> pq;
    //To insert in the priority queue.
    pq.push(1);
    pq.push(5);
    pq.push(3);
    pq.push(2);
    pq.push(4);
    pq.push(6);

    /*
    Priority queue: {maximum element on top} / Maximum Priority queue
    Stored in sorted order---> Lowest to Highest but printed Highest to lowest
        |   6   |  <- top
        |   5   | 
        |   4   |
        |   3   |
        |   2   |           
        |___1___|
    */

   //.top() gives the element on the top
   cout << pq.top() << endl; //Prints 6

    //To remove element from top
    pq.pop(); //removes 6

    //Print Priority queue ----> prints in descending order
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout<<endl;
    // 5 4 3 2 1






    // To print in the ascending order. Do negation (convert into its negative) and insert or create a minimum priority queue

    // greater<int> matlab ulta.


    //Minimum priority queue
    priority_queue<int , vector<int> , greater<int>> pq1;
    pq1.push(1);
    pq1.push(5);
    pq1.push(3);
    pq1.push(2);
    pq1.push(4);
    pq1.push(6);
    //Printing the priority_queue
    while (!pq1.empty())
    {
        cout << pq1.top() << " ";
        pq1.pop();
    }
    // 1 2 3 4 5 6


    //To remove all the elements from  the queue
    while(!pq1.empty())
        pq1.pop();

    //To determine the number of elemnts in priority queue
    cout << '\n' << pq1.size() << endl;
    return 0;
}