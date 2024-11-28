#include<iostream>
using namespace std;

class TWO{ //클래스 정의
    int score[2][2]; //배열 생성
public:
    void input(); //행력 입력값
    void show(); //행렬 출력
    TWO operator+(TWO t); //+연산자 오버로딩
};

void TWO::input(){ //행렬을 입력받음
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> score[i][j]; //값을 받아서 배열에 저장
        }
    }
}
void TWO::show(){ //행렬을 출력해줌
    for(int i=0;i<2;i++){ //행
        for(int j=0;j<2;j++){ //렬
            cout<<score[i][j]<<" "; //값 출력
        }
        cout<<endl;
    }
}
TWO TWO::operator+(TWO t){
    TWO result; //저장할 객체 생성
    for(int i=0;i<2;i++){ //행
        for(int j=0;j<2;j++){ //렬
            result.score[i][j] = score[i][j] + t.score[i][j]; //두행렬 원소 더하기
        }
    }
    return result; //결과값 반환

}

int main(){
    TWO a,b, result; //행렬에 객체 선언

    cout<<"첫번째 행렬값입력:";
    a.input();
    cout<<"두번째 행렬값입력:";
    b.input();

    result = a+b; //두 행렬 값 계산
    
    cout<<"연산결과:"<<endl;
    result.show();

}
