#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0, sum = 0;
    if (num_list.size() > 10)
    {
        for(int i = 0; i < num_list.size(); i++)
        {
            sum += num_list[i];
        }
    }
    else
    {
        sum = 1;
        for(int i = 0; i < num_list.size(); i++)
        {
            sum *= num_list[i];
        }
    }
    return sum;
}