#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    vector<int> v;
    vector<int>::iterator it;

    cout<<"정수4개를 입력하시오:";

    for(int i=0;i<4;i++){ //정수 4개 입력
        int n;
        cin >> n;
        v.push_back(n);
    }

    it = max_element(v.begin(),v.end()); //최대값 구하기
    cout<<"최대 값은 "<<distance(v.begin(), it)+1<<"번째 값:";
    cout<<*it;
    cout<<endl;

    it = min_element(v.begin(),v.end()); //최소값 구하기
    cout<<"최소 값은"<< distance(v.begin(), it)+1<<"번째 값:";
    cout<<*it;
    cout<<endl;

    cout<<"오름차순 결과";
    sort<vector<int>::iterator>(v.begin(),v.end()); //오름차순으로 정렬
    for(it =v.begin();it<v.end();it++){ //처음부터 끝까지 출력
        cout<<*it<<' ';
    }
    cout<<endl;
    

    cout<<"내림차순 결과";
    sort(v.begin(), v.end(), std::greater<int>()); //내림차순으로 정렬

    for(it =v.begin();it<v.end();it++){
        cout<<*it<<' ';
    }
    cout<<endl;


}