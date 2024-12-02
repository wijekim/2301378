#include<iostream>
using namespace std;
#include <vector>


int main(){

    vector<vector<int>> score;

    // 사용자로부터 3x3 행렬 데이터를 입력받기
    cout<<"숫자를 입력하시오:"<<endl;
    for(int i=0;i<3;i++){
        vector<int> tmp;
        int a;
        for(int j=0;j<3;j++){// 각 행에서 3개의 열 입력
            cin>>a;
            tmp.push_back(a);// 임시 벡터에 추가
        }
        score.push_back(tmp); // 완성된 행을 2차원 벡터에 추가
    }
    cout<<endl;
    //출력
    for(int i=0;i<score.size();i++){
        for(int j=0;j<score.at(i).size();j++){
            cout<<score.at(i).at(j)<<"\t";
        }
        cout<<endl;
    }

    int max = score[0][0];// 초기값 설
    int maxi =0; // 최대값의 행 위치 0부
    int maxj =0; // 최대값의 열 위치

    for(int i=0;i<score.size();i++){
        for(int j=0;j<score.at(i).size();j++){
            if(score.at(i).at(j)>max){// 현재 값이 최대값보다 크다면
                max = score.at(i).at(j);// 최대값 갱신

                maxi =i;
                maxj =j;
            }
        }
        cout<<endl;
    }

    cout<<"최대값은"<<max<<endl;
    cout<<"위치는"<<maxi+1<<"열"<<maxj+1<<"번쨰"<<endl;

    return 0;

}
