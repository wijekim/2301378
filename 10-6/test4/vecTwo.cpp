#include<iostream>
using namespace std;
#include <vector>

int main(){

    vector<vector<int>> score;


    cout<<"숫자를 입력하시오:"<<endl;
    for(int i=0;i<3;i++){
        vector<int> tmp;
        int a;
        for(int j=0;j<3;j++){// 각 행에서 3개의 열 입력
            cin>>a;
            tmp.push_back(a);// 임시 벡터에 추가
        }
        score.push_back(tmp);// 완성된 행을 2차원 벡터에 추가
    }
    cout<<endl;

    
    //수정되기전 입력된 행렬 출력
    for(int i=0;i<score.size();i++){
        for(int j=0;j<score.at(i).size();j++){
            cout<<score.at(i).at(j)<<"\t";
        }
        cout<<endl;
    }
    
    for(int i=0;i<score.size();i++){
        for(int j=0;j<score.at(i).size();j++){
            if(score.at(i).at(j)<0){ //행렬속 원소가 0보다 작으면 
                score.at(i).at(j) = 0; //원소는 0
            }
            else
                score.at(i).at(j) = 255; //아니면 원소는 255
        }
        cout<<endl;
    }

    cout<<"수정된 행렬"<<endl;
    for(int i=0;i<score.size();i++){ //수정된 행렬 출력
        for(int j=0;j<score.at(i).size();j++){
            cout<<score.at(i).at(j)<<"\t";
        }
        cout<<endl;
    }


}
