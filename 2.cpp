#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("myfile.dat");
    fout<<"Hello";
    fout.close();
    return 0;
}
