#include <iostream>
#include <locale>
using namespace std;

void z3() {

}

int main()
{
    setlocale(LC_CTYPE, "ukr");

    const int n = 10;
    int arr[n];
    int x;
    int result = -1;

    for(int i = 0;i < n;++i){
    cout << "����i�� ������� ������ �� �"<< i <<": ";
    cin >> arr[i];
    }

    cout << "����i�� ������� �������:";
    cin >> x;

    int l = 0, r = n - 1;
    while (l <= r) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x) {
            result = mid;
            break;
        }

        if (arr[mid] < x)
            l = mid + 1;
        else
            r = mid - 1;
    }

    if (result == -1) cout << "������� �� ��������";
    else  cout << "������� �������� �� ������� " << result;
    
    cout << endl;

    bool a = true;

    for (int i = 1; i < n; ++i) {
        
        if (arr[i-1] > arr[i]) {
            a = false;
        }
    }
    
    if (a) {
        cout << "����� �������������";
    }
    

    else {
        cout << "����� �� �������������";
    }
   
    cout << endl;

    for (int i = 0; i < n/2; ++i) {
        int j = arr[i];
        arr[i] = arr[n-1-i];
        arr[n - 1 - i] = j;

    }

    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }

    cout << endl;

    cout << "�i��� �������: " << arr[0] << endl;
    cout << "������ �������: " << arr[n-1] << endl;

    if (n%2 == 0) {
        cout << "������i� ������� 0: " << arr[n / 2 - 1] << endl;
    }
    cout << "������i� ������� 1: " << arr[n / 2];

    
    
    
    return 0;

}
