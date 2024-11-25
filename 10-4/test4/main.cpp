#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Student{
    int a;
    string s;
public:
    Student(string s="", int a=0);
    void show();
    bool operator<(Student kim);

};

Student::Student(string s ,int a){ //이름하고 성적을 초기화
    this -> s =s;
    this -> a =a;

}
void Student::show(){ //정보를 출력해주는 함수
    cout<<"최우수 학생은"<<endl;
    cout<<"이름:"<< s << endl;
    cout<<"성적:"<< a << endl;
}

bool Student::operator < (Student kim){ //<연산자 사용
    return a < kim.a; //성적을 비교
}

int main(){
    string s;
    int a;

    vector<Student> st; //벡터

    for(int i=0;i<3;i++){
        cout<<"이름과 성적 입력:";
        cin>>s;
        cin>>a;

        st.push_back(Student(s,a));
    }

    vector<Student>::iterator it; //벡터 포인터
    it = max_element(st.begin(), st.end()); //최대 값을 찾는다
    
    it -> show(); //벡터 포인터를 가르키는 student객체 show호출

}