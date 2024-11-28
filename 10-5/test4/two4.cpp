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

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<score[i][j]<<' ';
        }
        cout<<endl;
    }
    cout<<endl;

    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(score[i][j]<0){
                score[i][j] = 0;
            }
            else
                score[i][j] =255;
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<score[i][j]<<' ';
        }
        cout<<endl;
    }
    cout<<endl;

    
}