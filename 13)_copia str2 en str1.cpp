#include <iostream>
using namespace std;

void mistrcpy(char *str1,char *str2) {
    int i;
    for (i=0;str2[i]!='\0';i++) {
        str1[i]=str2[i];
    }
    str1[i]='\0'; 
}

int main() {
     int max = 100;
    char str1[max];
    char str2[max];

    cout<<"introduca el texto para str1: ";
    cin.getline(str1, max);

    cout<<"introdusca el texto para str2: ";
    cin.getline(str2,max);

    mistrcpy(str1, str2);

    cout<<"Despues de copiar en  str1: "<<str1<<endl;

    return 0;
}

