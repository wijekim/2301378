#include <iostream>
using namespace std;

int main(){
    int score[3][3]; //이차원 배열생성

    double avr[3]; //평균값을 저장하는 배열

    int sum;

    for(int i=0;i<3;i++){ //3명
        sum = 0; //학생마다 합계를 초기화
        cout<<i+1<<"번째 학생의 국어 영어 수학 성적을 입력:";
        for(int j=0;j<3;j++){ //3과목
            cin>>score[i][j]; //성적입력
            sum += score[i][j]; //성적을 합산
        }
        avr[i] = sum/3.0; //평균을 계산
    }

    double maxs =0; //최고 평균값을 저장

    int si = 0; //큰 평균값을 가진 학생

    for(int i=0;i<3;i++){
        if(avr[i]>maxs){ //학생 평균이 기존 최고값보다 크면
            maxs = avr[i]; //최고값 저장

            si = i; //학생이 몇번쨰 학생인지
        }
    }

    cout<<"최우수 학생은 "<<si+1<<"번째 학생이고 평균점수는"<<maxs<<"점이다."<<endl;


    
}
