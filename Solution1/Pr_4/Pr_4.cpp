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
    cout << "Введiть елемент масиву під №"<< i <<": ";
    cin >> arr[i];
    }

    cout << "Введiть шуканий елемент:";
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

    if (result == -1) cout << "Елемент не знайдено";
    else  cout << "Елемент знайдено на позиції " << result;
    
    cout << endl;

    bool a = true;

    for (int i = 1; i < n; ++i) {
        
        if (arr[i-1] > arr[i]) {
            a = false;
        }
    }
    
    if (a) {
        cout << "Масив впорядкований";
    }
    

    else {
        cout << "Масив не впорядкований";
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

    cout << "Лiвий елемент: " << arr[0] << endl;
    cout << "Правий елемент: " << arr[n-1] << endl;

    if (n%2 == 0) {
        cout << "Середнiй елемент 0: " << arr[n / 2 - 1] << endl;
    }
    cout << "Середнiй елемент 1: " << arr[n / 2];

    
    
    
    return 0;

}
