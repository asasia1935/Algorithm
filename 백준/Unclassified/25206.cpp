#include <iostream>

using namespace std;

int main() {
	string subject;
	double avg = 0;
	float sum = 0;
	double score[20];
	float grade[20];
	string scr;
	for (int i = 0; i < 20; ++i)
	{
		cin >> subject >> grade[i] >> scr;
		if (scr == "A+") score[i] = 4.5;
		else if (scr == "A0") score[i] = 4.0;
		else if (scr == "B+") score[i] = 3.5;
		else if (scr == "B0") score[i] = 3.0;
		else if (scr == "C+") score[i] = 2.5;
		else if (scr == "C0") score[i] = 2.0;
		else if (scr == "D+") score[i] = 1.5;
		else if (scr == "D0") score[i] = 1.0;
		else if (scr == "F") score[i] = 0.0;
		else if (scr == "P") { score[i] = 0.0; grade[i] = 0; }
		avg += (score[i] * grade[i]);
		sum += grade[i];
	}
	avg = avg / sum;
	cout << avg;
}
