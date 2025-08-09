#include <iostream>
using namespace std;

void add(int a, int b) {
    cout << a + b << endl;
}

void sub(int a, int b) {
    cout << a - b << endl;
}

void fun(void (*ptr)(int, int)) { // Function pointer accepting void-returning function
    ptr(10, 5); // Calling the function pointer with example values
}

int main() {
    fun(add);
    fun(sub);
    return 0;
}


// how to return function pointer

/*  
#include <iostream>
using namespace std;

typedef int (*mathfun)(int,int);   // alias for function-pointer type

int add(int a,int b){ return a+b; }
int sub(int a,int b){ return a-b; }

 mathfun fun(int type) {
    if (type == 1) return add;
    if (type == 2) return sub;
    return nullptr; // handle other cases safely
}

int main() {
    mathfun sumfun = fun(1);
    if (sumfun) {
        cout << sumfun(1,2) << endl; // prints 3
    }
    return 0;
}

*/

/*
// Array of function pointer

#include <iostream>
using namespace std;

int add(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}

typedef int (*mathfun)(int,int);

int main()
{
    // Array of function pointers
    int (*arr[2])(int,int) = { add, sub };
    
    int c = arr[0](1,2);  // Calls add(1,2)
    int d = arr[1](2,1);  // Calls sub(2,1)

    cout << c << endl << d << endl;
    return 0;
}

*/


/*
// where is use function pointer

#include <iostream>
#include <cstdlib>
using namespace std;

int compare(const void *p, const void *q) {
    int l = *(const int*)p; // Get first number
    int r = *(const int*)q; // Get second number
    return l - r;           // Compare
}

int main() {
    int arr[5] = {3, 2, 4, 1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    qsort(arr, size, sizeof(arr[0]), compare);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

*/
