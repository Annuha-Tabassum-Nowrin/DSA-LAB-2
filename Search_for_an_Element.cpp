#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter array size:";
    cin >> n;
    cout << "Enter array element:";
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    
    bool ck = false;
    int found;
    cout << "Enter Found Value:";
    cin >> found;
    for (int i = 0; i < n; i++){
        if(arr[i]==found){
            ck = true;
            break;
        }
    }

    ck == true ? cout << "Found" : cout << "Not Found";

    return 0;
}
