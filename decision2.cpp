#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    cin >> N;
    queue<int> queue;
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
                cout<<queue.front()<<endl;
                break;
            default:
                throw runtime_error("Invalid query number");
    
        }
    }
    } catch (const exception &ex) {
        cout<< ex.what();
    }   
    return 0;
}
