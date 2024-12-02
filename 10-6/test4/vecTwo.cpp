#include<iostream>
using namespace std;
#include <vector>

int main(){

    vector<vector<int>> score;


    cout<<"숫자를 입력하시오:"<<endl;
    for(int i=0;i<3;i++){
        vector<int> tmp;
        int a;
        for(int j=0;j<3;j++){
            cin>>a;
            tmp.push_back(a);
        }
        score.push_back(tmp);
    }
    cout<<endl;


    
    for(int i=0;i<score.size();i++){
        for(int j=0;j<score.at(i).size();j++){
            cout<<score.at(i).at(j)<<"\t";
        }
        cout<<endl;
    }

    for(int i=0;i<score.size();i++){
        for(int j=0;j<score.at(i).size();j++){
            if(score.at(i).at(j)<0){
                score.at(i).at(j) = 0;
            }
            else
                score.at(i).at(j) = 255;
        }
        cout<<endl;
    }

    cout<<"수정된 행렬"<<endl;
    for(int i=0;i<score.size();i++){
        for(int j=0;j<score.at(i).size();j++){
            cout<<score.at(i).at(j)<<"\t";
        }
        cout<<endl;
    }


}