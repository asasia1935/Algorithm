#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, min = 1000001, max = -10000001;
    cin >> n;
    for(int i = 0; i < n; ++i)
    {
        int num;
        cin >> num;
        if(min > num) min = num;
        if(max < num) max = num;
    }

    cout << min << " " << max;
    
    return 0;
}