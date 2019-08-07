#include <iostream>
#include <fstream>

using namespace std;

int main() {


    string filename;

    cout<<"Type your filename: "<<endl;
    getline(cin,filename);
    ofstream out_file{filename,ios::app} ;

    if(!out_file){
        cerr<<"Error creating file"<<endl;
        return 1;
    }

    string line;
    cout<<"Type text to yout file: "<<endl;
    getline(cin,line);
    out_file << line << endl;

    out_file.close();

    return 0;
}

//By Radosław Skałbania//