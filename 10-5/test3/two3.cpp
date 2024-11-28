#include<iostream>
using namespace std;

int main(){
    int score[3][3]; //이차원 배열 생성


    cout<<"아홉개 정수를 입력하시오:";
    for(int i=0;i<3;i++){ //행
        for(int j=0;j<3;j++){//렬
            cin>>score[i][j]; //각 위치에 정수 입력
        }
    }
    cout<<endl;

    int smax = score[0][0];//최대값을 0으로 초기화

    int si =0;//최대값 행 위치 0
    int sj =0; //최대값 열 위치 0

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(score[i][j]>smax){
                smax = score[i][j]; //최대값 저장

                si= i; //최대값의 행위치
                sj= j; //최대값 열위치

            }
        }
    }

    for(int i=0;i<3;i++){ //입력된 배열 출력
        for(int j=0;j<3;j++){
            cout<<score[i][j]<<' ';
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"최대값:"<<smax<<endl;
    cout<<"위치는"<<si+1<<"행"<<sj+1<<"열"<<endl;
}
