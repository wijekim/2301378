#include <iostream>
using namespace std;
#include<vector>

int main(){
    vector<vector<int>> score;

    int avr[3];
    int sum;

    for(int i=0;i<3;i++){ 
        vector<int> tmp;
        int a;
        sum = 0;
        cout<<i+1<<"번째 학생의 국어 영어 수학 성적을 입력:";
        for(int j=0;j<3;j++){ 
            cin>>a;
            tmp.push_back(a);
            sum += a;
        }
        avr[i] = sum/3.0;
        score.push_back(tmp); 
    }

    double max =0;

    int maxi = 0;

    for(int i=0;i<3;i++){
        if(avr[i]>max){
            max =avr[i];

            maxi =i;
        }
    }

      cout<<"최우수 학생은 "<<maxi+1<<"번째 학생이고 평균점수는"<<
      max<<"점이다."<<endl;

}