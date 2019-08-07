#include <iostream>
#include <fstream>

using namespace std;



int main() {

    ifstream in_file ;
    in_file.open("/Users/admin/CLionProjects/File&StreamChallenge2/romeoandjuliet.txt");
    string search_word {};
    string read_word {};
    int count {0} , counter{0};
    size_t found{0};

    if (!in_file){
        cerr<<"Loading file error"<<endl;
        return 1;
    }
    cout<<"Enter substring to search for: ";
    cin >> search_word;

    while(in_file >> read_word){

        found = read_word.find(search_word);
        if (found !=string::npos){
            count++;
            cout<<read_word<<endl;
        }
        counter++;
    }

    cout<<counter<<" words were searched."<<endl;
    cout<<"The subtring "<<search_word<<" was found " <<count<<" times."<<endl;


    return 0;
}