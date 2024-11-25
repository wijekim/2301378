#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

int main(){

    vector<string> v; //문자열을 저장할 벡터

    string s;

    for(int i=0; i<5; i++){ //문자열입력받기
        cout<<"문자열을 입력하시오:";

        getline(cin,s); 

        v.push_back(s); //벡터 에 저장
    }
   

    vector<string>::iterator it;

    it = max_element(v.begin(),v.end()); //사전순으로 가장 뒤에 오는 문자열

    cout<<"사전에 뒤에 나오는 단어는"<<*it<<endl;


}