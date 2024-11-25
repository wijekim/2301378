#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){

    vector<string> v;

    string s;

    for(int i=0; i<5; i++){ //5개 문자열 입력
        cout<<"문자열을 입력하시오:";

        getline(cin,s);

        v.push_back(s); //벡터에 저장
    }

    vector<string>::iterator it;
    cout<<"사전에 나오는 순서:"<<endl;
    sort<vector<string>::iterator>(v.begin(),v.end()); //오름차순으로 정렬
    for(it =v.begin();it<v.end();it++){ //문자열 출력
        cout<<*it<<' '; 
        cout<<endl;
    }




}
