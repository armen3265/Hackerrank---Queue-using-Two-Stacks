#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


class Queue
{
public:
    void push(int number)
    {
        while (!stQueue.empty())
        {
            stStack.push(stQueue.top());
            stQueue.pop();
        }
        stStack.push(number);
        while (!stStack.empty())
        {
            stQueue.push(stStack.top());
            stStack.pop();
        }
    }
    int top()
    {
        return stQueue.top();
    }
    void pop()
    {
        stQueue.pop();
    }
private:
    stack<int> stStack, stQueue;
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    cin >> N;
    Queue queue;
    try {

        for (int i = 0; i < N; i++) {
            int query;
            cin >> query;
            switch (query) {
            case 1:
                int number;
                cin >> number;
                queue.push(number);
                break;
            case 2:
                queue.pop();
                break;
            case 3:
                cout << queue.top() << endl;
                break;
            default:
                throw runtime_error("Invalid query number");
            }
        }
    }
    catch (const exception& ex) {
        cout << ex.what();
    }
    return 0;
}
