#include <iostream>
using namespace std;

int main(){
    int score[3][3];

    double avr[3];

    int sum;

    for(int i=0;i<3;i++){
        sum = 0;
        cout<<i+1<<"번째 학생의 국어 영어 수학 성적을 입력:";
        for(int j=0;j<3;j++){
            cin>>score[i][j];
            sum += score[i][j];
        }
        avr[i] = sum/3.0;
    }

    double maxs =0;

    int si = 0;

    for(int i=0;i<3;i++){
        if(avr[i]>maxs){
            maxs = avr[i];

            si = i;
        }
    }

    cout<<"최우수 학생은 "<<si+1<<"번째 학생이고 평균점수는"
    <<maxs<<"점이다."<<endl;


    
}