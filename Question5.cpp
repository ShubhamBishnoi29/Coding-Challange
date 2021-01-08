#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	int i;
    string str;
    getline(cin, str);
    
    char arr[str.length()];
     
    for (i = 0; i < sizeof(arr); i++) {
        arr[i] = str[i];
        cout << arr[i];
    }
    return 0;
}

 
