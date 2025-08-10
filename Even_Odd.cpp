#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter array size:";
    cin >> n;
    cout << "Enter array element:";
    int arr[n];
    int even = 0, odd = 0;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        arr[i]%2 ? odd++ : even++;
    }

    cout << "Odd: " << odd << endl << "Even: " << even << endl;

    return 0;
}
