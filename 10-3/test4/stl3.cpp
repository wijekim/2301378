#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v;//벡터 선언
    int num ; //입력받을 정수
    double sum=0; //합계를 저장할 변수
    
    vector<int>::iterator it; //벡터를 순회하기위한 반복자

    cout <<"숫자를 입력하세요:" ;

    for (int i = 0; i < 5; i++){ //5개의 정수를 입력받아 벡터에 추가
		cin >> num;   
		v.push_back(num);  //벡터에 정수 추가
	}


    cout<<"초기 상태:";
    //벡터 처음 원소부터 마지막원소직전까지 반복 
    for(it = v.begin();it !=v.end();it++){ 
        cout<<*it<<" "; // 벡터의 각 요소를 출력
    }
    cout << endl;

    for(it=v.begin();it !=v.end();){
        if(*it<0){ //음수이면
            it = v.erase(it);//삭제하고 다음으로 이동
        }
        else
            it++; //음수가 아니면 다음으로 이동
    }

    cout<<"음수를 지운후:";

    for (it = v.begin(); it != v.end(); it++){
        cout << *it << " "; // 남은 벡터의 각 요소 출력
    }
    cout << endl;


    for (it = v.begin(); it != v.end(); it++){
        sum += *it; // 삭제되고 남은 벡터의 각 요소를 합산
    }
     cout << endl;

    double avr=0; // 평균을 저장할 변수
    avr = sum/v.size(); //합계를 크기로 나누어 평균을계산

    cout<<"평균값:"<<avr<<endl;

}