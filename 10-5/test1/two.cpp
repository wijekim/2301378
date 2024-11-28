#include <iostream>
using namespace std;

int main() {
    int a[2][2]; //이차원 배열 생성
    cout<<"첫번째 행렬값입력:"; 
    for (int i = 0; i < 2; i++) { //행렬에 정수입력
        for (int j = 0; j < 2; j++) {
            cin >> a[i][j];
        }
    }


    int b[2][2];
    cout<<"두번째 행렬값입력:"; 
    for (int i = 0; i < 2; i++) { //행렬에 정수입력
        for (int j = 0; j < 2; j++) {
            cin >> b[i][j];
        }
    }
    cout<<endl;


    int result[2][2]; //결과값 이차원 배열 생성

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
    cout<<endl;

    for (int i = 0; i < 2; i++) { //a이차원 배열 출력
        for (int j = 0; j < 2; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < 2; i++) { //b이차원 배열 출력
        for (int j = 0; j < 2; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout<<"연산결과:"<<endl;
    for (int i = 0; i < 2; i++) { //연산 결과값을 출력
        for (int j = 0; j < 2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
