#include <iostream>
#include<deque>
#include<queue>
#include<stack>
using namespace std;

/********************************************************
question 4
int main()
{
    int arr[100],n,k,temp,i;
    deque<int> deque_;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>temp;
        arr[i]=temp;
    }
    for(i=0;i<k;i++)
    {
        while((!deque_.empty())&&(arr[i]>arr[deque_.back()]))
        {
            deque_.pop_back();

        }

        deque_.push_back(i);
    }

    for(;i<n;i++)
    {

        cout<<arr[deque_.front()]<<" ";
        while(!deque_.empty()&&deque_.front()<=i-k)
            deque_.pop_front();
        while(!deque_.empty()&&arr[i]>arr[deque_.back()])
        deque_.pop_back();
        deque_.push_back(i);

    }
    cout<<" "<<arr[deque_.front()];
    return 0;
}
*///////////////////////////////
/*************************
question 10
int main()
{
    int temp,i,n;
    deque<int> queue1,queue2;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>temp;
        queue1.push_back(temp);
    }
    for(i=0;i<n/2;i++)
    {
        queue2.push_back(queue1.front());
        queue1.pop_front();
    }
    for(;i<n;i++)
    {

        queue1.push_back(queue2.front());
        queue2.pop_front();
          queue1.push_back(queue1.front());
        queue1.pop_front();
    }
    for(auto it:queue1)
        cout<<it<<" ";


}


*////////////////////////////////////////
/**********************************
question 9
int main()
{
    int n,temp1,temp2,temp,i;
    stack<int> sta,stack_;
    cin>>n;
    int res=1;
    for(i=0;i<n;i++)
    {
        cin>>temp;
        sta.push(temp);
    }
    while(!sta.empty())
    {
        stack_.push(sta.top());
        sta.pop();
    }
    while(!stack_.empty())
    {
        temp1=stack_.top();
        sta.push(temp1);
        stack_.pop();
        if(stack_.empty())
            break;
        else{
          temp2=stack_.top();
        sta.push(temp2);
        stack_.pop();
        }
        if(abs(temp1-temp2)!=1)
        {
            res=0;
            break;
        }

    }
    if(res)
        cout<<"\nyes";
        else
        cout<<"\nNo";
}
*/
/*********************************************
class Queue
{
    stack<int> s1;
    stack<int> s2;
public:
    void push(int data)
    {
        s1.push(data);
    }
    int pop()
    {
        int temp;
        if(s2.empty())
        {
            while(!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
            temp=s2.top();
            s2.pop();
        }
        else
        {
            temp=s2.top();
            s2.pop();
        }
        return temp;
    }
    bool isEmpty()
    {
        return (s1.empty()&&s2.empty());
    }
};
int main()
{
    Queue q;
    q.push(5);
    q.push(9);
    q.push(50);
    q.push(80);
    int i=4;
    while(i--)
    {
        cout<<q.pop();
    }
}
*////////////////////////////////
