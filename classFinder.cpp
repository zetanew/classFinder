#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream infile;
    infile.open("input.txt");
    ofstream out("output.txt");
    // checking error :
    if(infile.fail()){
        cerr<< "failed to read input.txt" << endl;
        return 0;
    }
    int lineCounter=1;
    string currentLine;
    while(!infile.eof()){
        getline(infile,currentLine);
// class="
        for(int i=0 ; i<currentLine.length()+1 ; i++){
           if(currentLine[i]=='c' && currentLine[i+1]== 'l' && currentLine[i+2]== 'a' && currentLine[i+3]== 's'&& currentLine[i+4]== 's'&& currentLine[i+5]== '='&& currentLine[i+6]== '\"'){
                int tempi=i;
                out<< "." ;
                while(currentLine[tempi+7]!='\"'){
                    out << currentLine[tempi+7];
                    tempi++;
                }
                out << "{" << endl << "}";
                out << endl;

           }

        }


        lineCounter++;
    }

    cout << "cikti output.txt dosyasina kaydedildi" << endl;
    return 0;
}
