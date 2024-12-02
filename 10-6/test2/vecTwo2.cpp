#include <iostream>
using namespace std;
#include<vector>

int main(){
    vector<vector<int>> score;// 2차원 벡터 선언

    int avr[3];// 각 학생의 평균 점수를 저장할 배열
    int sum; // 각 학생의 총합 점수를 저장할 변수

    for(int i=0;i<3;i++){ 
        vector<int> tmp; // 임시 벡터 생성 
        int a;// 입력받을 변수
        sum = 0;// 각 학생의 점수 합계 초기화
        cout<<i+1<<"번째 학생의 국어 영어 수학 성적을 입력:";
        for(int j=0;j<3;j++){ 
            cin>>a;
            tmp.push_back(a); // 임시 벡터에 추가
            sum += a;// 점수를 총합에 더하기
        }
        avr[i] = sum/3.0; // 평균 점수를 계산하여 avr 배열에 저장
        score.push_back(tmp); // 입력된 점수를 2차원 벡터에 추가
    }

    double max =0;// 최고 평균 점수

    int maxi = 0;

    for(int i=0;i<3;i++){
        if(avr[i]>max){// 현재 학생의 평균 점수가 최고 점수보다 크다면
            max =avr[i];// 최고 점수 갱신

            maxi =i;// 해당 학생의 인덱스 저장
        }
    }

      cout<<"최우수 학생은 "<<maxi+1<<"번째 학생이고 평균점수는"<<
      max<<"점이다."<<endl;
    return 0;
}
