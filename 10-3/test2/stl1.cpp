#include <iostream>
#include <vector>
using namespace std;


int main(){
    vector<int> v;

    int max , min; //최대 최소 변수선언
    int num; // 최대최소 저장할 변수 선언
    cout<<"정수 4개를 입력하시오:"; 

    for(int i=0;i<4;i++){
        cin>>num; //정수 입력받기

        v.push_back(num); //벡터에 입력받은 정수 추가
    }
     max = min = v[0]; //벡터애서 0번째 값으로 초기화

    //i가 1부터 벡터 크기만큼 -> 4개의 정수 v.size() = 4
    for(int i=1;i<v.size();i++){
        if(max < v.at(i))//i번째 요소가 max보다 크면
            max = v[i];//max에 값을 저장한다
        if(min > v.at(i))//i번째 요소가 min보다 작음
            min = v[i];//min에 값을 저장한다
    }

    cout <<"최대값은"<<max<<",최소값은"<<min<<"입니다."<<endl;
   
}