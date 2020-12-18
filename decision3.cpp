#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    stack<int> stStack, stDeq;
    int N;
    cin >> N;
    while (N--)
    {
        int query;
        cin >> query;
        if (query == 1)
        {
            int x;
            cin >> x;
            stStack.push(x);
        }
        else
        {
            if (stDeq.empty())
            {
                while (!stStack.empty()) {
                    stDeq.push(stStack.top());
                    stStack.pop();
                }
            }
            if (!stDeq.empty())
            {
                if (query == 2) { stDeq.pop(); };
                if (query == 3) { cout << stDeq.top() << endl; }
            }
        }
    }
    return 0;
}
