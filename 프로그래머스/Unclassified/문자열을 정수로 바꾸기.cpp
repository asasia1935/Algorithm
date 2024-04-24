#include <string>
#include <vector>

using namespace std;

int solution(string s)
{
    int answer = 0;
    if (s.front() == '+')
    {
        s = s.substr(1);
        answer = stoi(s);
    }
    else if (s.front() == '-')
    {
        s = s.substr(1);
        answer = -stoi(s);
    }
    else
    {
        answer = stoi(s);
    }
    return answer;
}