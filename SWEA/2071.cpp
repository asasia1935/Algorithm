#include<iostream>
#include<cmath>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin>>T;
	for(test_case = 1; test_case <= T; ++test_case)
	{
		int num, sum = 0;
    double avg = 0.0;
    for(int i = 0; i < 10; i++) {
        cin >> num;
        sum += num;
    }
    avg = round(sum / 10.0); // 반올림 하기 위해 round 함수 사용 -> C++11 문법
		cout << "#" << test_case << " " << avg << "\n";
	}
	return 0;
}
