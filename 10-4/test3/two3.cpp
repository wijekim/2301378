#include<iostream>
using namespace std;

int main(){
    int score[3][3];


    cout<<"아홉개 정수를 입력하시오:";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>score[i][j];
        }
    }
    cout<<endl;

    int smax = score[0][0];

    int si =0;
    int sj =0;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(score[i][j]>smax){
                smax = score[i][j];

                si= i;
                sj= j;

            }
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<score[i][j]<<' ';
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"최대값:"<<smax<<endl;
    cout<<"위치는"<<si+1<<"행"<<sj+1<<"열"<<endl;
}