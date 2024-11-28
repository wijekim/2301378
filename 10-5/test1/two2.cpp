#include<iostream>
using namespace std;

class TWO{
    int score[2][2];
public:
    void input();
    void show();
    TWO operator+(TWO t);
};

void TWO::input(){
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> score[i][j];
        }
    }
}
void TWO::show(){
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<score[i][j]<<" ";
        }
        cout<<endl;
    }
}
TWO TWO::operator+(TWO t){
    TWO result;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            result.score[i][j] = score[i][j] + t.score[i][j];
        }
    }
    return result;

}

int main(){
    TWO a,b, result;

    cout<<"첫번째 행렬값입력:";
    a.input();
    cout<<"두번째 행렬값입력:";
    b.input();

    result = a+b;
    cout<<"연산결과:"<<endl;
    result.show();

}