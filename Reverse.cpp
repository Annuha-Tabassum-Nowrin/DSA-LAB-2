#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter array size:";
    cin >> n;
    cout << "Enter array element:";
    int a[n];
    for (int i = 0; i < n;i++)
        cin >> a[i];
    cout << "Reverse: ";
    for (int i = n - 1; i >= 0; i--)
        cout << a[i] << " ";

        return 0;
}
