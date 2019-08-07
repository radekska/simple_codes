#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void print_header();
void print_footer(double);
int process_response(const string &correct, const string &answer_key);
int file_check(ifstream in);

int main() {

    ifstream in_file;
    in_file.open("/Users/admin/CLionProjects/FileStreamsChallenge/responses.txt");
    string name,answer;
    string correct {"ABCDE"};
    int total_students {0};
    double avg {0};
    double sum {0};

    if(!in_file){
        cerr<<"File opening error"<<endl;
        return 1;
    }

    print_header();

    while(in_file >> answer >> name ){
        ++total_students;
        sum += process_response(correct,answer);
        cout<<setw(15)<<left<<name;
        cout<<setw(5)<<right<<process_response(correct,answer)<<endl;

    }

    if(total_students!=0) {
        avg += (sum / total_students);
    }

    print_footer(avg);
    in_file.close();

    return 0;
}

int process_response(const string &correct, const string &answer_key){
    int score {0};
    for ( int i = 0; i <correct.size() ; ++ i ) {
        if(answer_key[i]==correct[i]){
            score++;
        }
    }
    return score;
}
void print_header(){
    cout<<setw(15)<<left<<"Student"
        <<setw(10)<<"Score"<<endl;
    cout<<setfill('-')<<setw(20)<<"\0"<<endl;
    cout<<setfill(' ');
}
void print_footer(double avg){
    cout<<setfill('-')<<setw(20)<<"\0"<<endl;
    cout<<setfill(' ');
    cout<<"Average score "<<setw(6)
        <<right<<setprecision(2)
        <<fixed<<avg<<endl;

}