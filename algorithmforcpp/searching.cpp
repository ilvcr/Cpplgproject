/*************************************************************************
> File Name: searching.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月17日 星期二 21时01分15秒
> Description: 
 ************************************************************************/

#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

char paragraph;

int main(int argc, char* argv[]){

    string paragraph;
    cout << "Please enter your paragraph: \n";
    getline(cin, paragraph);
    cout << "\nHello, your paragraph is:\n " << paragraph << "!\n";
    cout << "\nThe size of your paragraph = " << paragraph.size() << " character. \n\n";

    if(paragraph.empty()){
        cout << "\nThe paragraph is empty" << endl;
    }
    else{
        while(true){
            string word;
            cout << "Please enter the word you are searching for: ";
            getline(cin, word);
            cout << "Hello, your word is " << word << "!\n";
            if(paragraph.find(word) == string::npos){
                cout << word << " does not exist in the sentence" << endl;
            }
            else{
                cout << "The word " << word << " is now found at location " << paragraph.find(word) << endl << endl;
            }
            system("pause");
        }
    }
}



