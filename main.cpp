#include<iostream>
using namespace std;
void concate(char arr1[], int as, char arr2[], int bs, char* arr3)
{
int i,j=0;
    for (i = 0; i < as-1; i++)
    {
        arr3[i] = arr1[i];
    }
    arr3[i++] = ' ';
    while (arr2[j] != '\0')
    {
        arr3[i++] = arr2[j++];
    }
    arr3[i] = '\0';
}
int main()
{
    char arr1[] = "Hello";
    char arr2[] = "World";
    int as = sizeof(arr1);
    int bs = sizeof(arr2);
    //cout << as << " " << bs;
    char *arr3 = new char[as + bs];
    concate(arr1, as, arr2, bs, arr3);
    for (int i = 0; arr3[i] != '\0'; i++)
        cout << arr3[i];
}