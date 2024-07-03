#include <iostream>

using namespace std;
int mistrcmp(char *str1, char *str2)
 {
    for (int i = 0; ; i++)
	 {
        if (str1[i] > str2[i]) 
		{
            return 1;
        } else if (str1[i] < str2[i]) 
		{
            return -1;
        } else if (str1[i] == '\0' && str2[i] == '\0') 
		{
            return 0;
        }
    }
}

int main() {
    const int max=100;
    char str1[max];
    char str2[max];

    cout << "introdusca la primera cadena: ";
    cin.getline(str1, max);

    cout << "introdusca la segunda cadena: ";
    cin.getline(str2, max);

    int result=mistrcmp(str1, str2);

    cout<<"Resultado de la comparacion: "<<result<<endl;

    return 0;
}

