// #include<iostream>
// #include<cstring>
// using namespace std;
// int main(){
// char ch [20],ch1[40];
// int i,j;

// cout <<"enter the string :-";
// cin.getline(ch,20);
// cout <<"\n enter the second string :-";
// cin.getline(ch1,20);
// i=0;
// j=0;
// while (ch1[i]!='\0')
// {
//     i++;
// }
// while(ch[j]!='\0')
// {
//     ch[i]=ch[j];
//     i++;
//     j++;

// }
// ch1[i]='\0';
// cout<<"\n string after concatenation is :-"<<ch1;
//  return 0;
// }


#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char ch[20], ch1[40];
    int i, j;

    cout << "Enter the first string: ";
    cin.getline(ch, 20);  // Read the first string

    cout << "\nEnter the second string: ";
    cin.getline(ch1, 40);  // Read the second string

    // Find the length of ch1 (i.e., where to append the first string)
    i = 0;
    while (ch[i] != '\0') {
        i++;
    }

    // Append the characters of ch to ch1
    j = 0;
    while (ch1[j] != '\0') {
        ch1[i] = ch[j];  // Append ch[j] to ch1[i]
        i++;
        j++;
    }

    // Null-terminate the concatenated string
    ch1[i] = '\0';

    cout << "\nString after concatenation is: " << ch1 << endl;  // Print ch1 (the concatenated string)

    return 0;
}



  