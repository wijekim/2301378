#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<string> v; //벡터 선언

    string s; //문자열을 저장하기 위한 변수 선언

    for(int i=0;i<5;i++){ //다섯개 문자열 입력 받음
        cout<<"문자열을 입력하시오:";
        getline(cin,s); //공백 포함한 문자열 입력


        v.push_back(s);//벡터에 입력받은 문자열 추가
    }

    s = v.at(0); //벡터의 첫번째 문자열로 초기화

    for(int i=1;i<v.size();i++){
        if(s<v[i]) //s가 v보다 크면
            s =v[i]; // s에 v[i]저장
    }

     cout << "사전에서 제일 뒤에 나오는 단어는 " << s << "입니다." << endl;

}