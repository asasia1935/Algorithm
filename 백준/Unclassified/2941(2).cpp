#include <iostream>
#include <vector>

using namespace std;

int main() {
    // 미리 변환할 크로아티안 알파벳을 벡터에 입력
    vector<string> croatian = {"c=","c-","dz=","d-","lj","nj","s=","z="};
    // 벡터를 찾을 인덱스를 미리 선언
    int idx;

    string str;
    cin >> str;

    for(int i = 0; i < croatian.size(); i++)
    {
        while(true){
            // str의 크로아티안 알파벳을 find 함수로 찾기
            idx = str.find(croatian[i]);
            // 찾는 것이 없는 경우 string::npos 반환 -> while문을 빠져나감
            if(idx == string::npos)
                break;
            // 찾은 경우 해당 알파벳을 #으로 처리하여 하나의 알파벳으로 세도록 변경
            str.replace(idx,croatian[i].length(),"#");
        }
    }
    // 알파벳의 수 체크
    cout << str.length() << "\n";
    return 0;
}
