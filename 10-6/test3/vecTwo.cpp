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

    int max = score[0][0];
    int maxi =0;
    int maxj =0;

    for(int i=0;i<score.size();i++){
        for(int j=0;j<score.at(i).size();j++){
            if(score.at(i).at(j)>max){
                max = score.at(i).at(j);

                maxi =i;
                maxj =j;
            }
        }
        cout<<endl;
    }

    cout<<"최대값은"<<max<<endl;
    cout<<"위치는"<<maxi+1<<"열"<<maxj+1<<"번쨰"<<endl;


}