#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> asize; // 첫 번째 2x2 벡터 생성
    cout << "첫번째 행렬값입력:";  // 첫 번째 행렬값 입력
    for (int i = 0; i < 2; i++) {
        vector<int> tmp; // 한 행을 임시로 저장할 벡터
        int a;
        for (int j = 0; j < 2; j++) {
            cin >> a;
            tmp.push_back(a);// 현재 행에 요소 추가
        }
        asize.push_back(tmp);// 현재 행을 첫 번째 행렬에 추가
    }
    cout << endl;

    vector<vector<int>> bsize; // 두 번째 2x2 벡터 생성
    cout << "두번째 행렬값입력:"; 
    for (int i = 0; i < 2; i++) {
        vector<int> tmp;
        int b;
        for (int j = 0; j < 2; j++) {
            cin >> b;
            tmp.push_back(b);// 현재 행에 요소 추가
        }
        bsize.push_back(tmp);// 현재 행을 두 번째 행렬에 추가
    }
    cout << endl;

    // 연산 결과를 저장할 2x2 행렬. 초기값은 0으로 설정
    //행의 개수를 2개로 지정하고 각행마다 열도 2개 모든 요소의 초기값을 0으로
    vector<vector<int>> result(2, vector<int>(2, 0)); 

    // 각 요소의 합을 계산
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result.at(i).at(j) = asize.at(i).at(j) + bsize.at(i).at(j);
        }
    }

    cout << "첫 번째 행렬:" << endl; // 첫 번째 벡터 출력
    for (int i = 0; i < asize.size(); i++) {
        for (int j = 0; j < asize.at(i).size(); j++) {
            cout << asize.at(i).at(j) << "\t";
        }
        cout << endl;
    }
    cout << endl;

    cout << "두 번째 행렬:" << endl; // 두 번째 벡터 출력
    for (int i = 0; i < bsize.size(); i++) {
        for (int j = 0; j < bsize.at(i).size(); j++) {
            cout << bsize.at(i).at(j) << "\t";
        }
        cout << endl;
    }
    cout << endl;

    cout << "연산결과:" << endl; // 결과 벡터 출력
    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result.at(i).size(); j++) {
            cout << result.at(i).at(j) << " ";
        }
        cout << endl;
    }

    return 0;
}
