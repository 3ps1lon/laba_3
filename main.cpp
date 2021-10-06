// laba_3_1
// variant 18


#include <iostream>
#include <cstdlib>
#include <time.h>



int main() {

    int n;

    int min = -1000; int max = 1000;
    int max_2 = -1001;

    std::cout << "Elements in massive: "; std::cin >> n;

    if ((n == 0) or (n < 1)){
        std::cout << "\nWrong number of elements!!\n";
        return 1;
    }

    int A[n];


    srand(time(NULL));

    std::cout << "Massive: ";
    for (int i = 0; i < n; i++){

        A[i] = min +rand()%(max-min+1);

        std::cout << A[i];
        
        if (i<n-1){
             std::cout << ", ";

        }
    }

    for (int i = 0; i < n; i++){
        if ((A[i] > max_2) and (A[i]%2 == 0)){
            max_2 = A[i];
        }
    }

    std::cout << "\nMax number is divided by 2: " << max_2;
    return 0;
}