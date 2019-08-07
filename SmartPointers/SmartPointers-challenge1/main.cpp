#include <iostream>
#include <memory>
#include <vector>

using namespace std;
class Test {


private:
    int data;
public:
    Test(): data{0}{}
    Test(int data): data{data}{}
    int get_data(){return data;}

    ~Test(){}
};

auto make();
void fill(vector<shared_ptr<Test>> &vec, int num);
void display(const vector<shared_ptr<Test>> &vec);

auto make(){
    return make_unique<vector<shared_ptr<Test>>>();
};

int main() {

    unique_ptr<vector<shared_ptr<Test>>> vec_ptr;
    vec_ptr = make();
    cout<<"How many data points you want to enter? : ";
    int num;
    cin >> num;
    fill(*vec_ptr,num);
    display(*vec_ptr);

    return 0;



}


void fill(vector<shared_ptr<Test>> &vec, int num){
    for ( int i = 1; i <=num ; ++ i ) {
        cout<<"Enter data ["<<i<<"] : ";
        int d {0};
        cin >> d;
        vec.push_back(make_shared<Test>(d));
    }
};

std::ostream &operator <<(std::ostream &os,  Test &vec){
    os<< vec.get_data();
    return os;

};

void display(const vector<shared_ptr<Test>> &vec){
    cout<<endl;
    cout<<"Vector's elements"<<endl;

    for (const auto &v: vec){
        cout<<*v<<" ";
    }


};

//By Radosław Skałbania//