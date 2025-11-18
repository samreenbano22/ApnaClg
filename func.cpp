// #include <iostream>
// using namespace std;

// //function declaration
// int printHello(){                      // the region inside curly braces are called block of code and code written inside it is called as procedure of that function 
//     cout << "hello\n";
//     return 3;
// }
// int main(){
//     //function call / invoke
//     int val =   printHello();
//     cout << "val =" << val << endl;
    
//     return 0;
// }



// **** void means that function does not return anything 


// #include <iostream>
// using namespace std;

// int printHello(){
//     cout << "hello\n";
//     return 3;
// }
// int main(){
//     //function call / invoke
//     cout << printHello() << endl ;
    
//     return 0;
// }


//sum of two numbers
// #include <iostream>
// using namespace std;

// int sum(int a, int b){
//     int s = a+b ;
//     return s;
// }

// int main(){                               //this syntax prevents redundance
//     cout<< sum(10,5) << endl;
//     return 0;
//}



//min of two no.
// #include <iostream>
// using namespace std;

// int minOfTwo(int a, int b){    //parameters - int minOfTwo(int a,int b)
//     if(a<b) {
//         return a;
//     }else{
//         return b;
//     }
// }
// int main(){
//     cout <<"min =" <<  minOfTwo(10,5) << endl;   //arguments (10,5)
//     return 0;
// }



//Qs
// #include <iostream>
// using namespace std;

// int sumN(int n){
//     int sum =0;
//     for (int i =1; i<=n; i++ ){
//         sum+= i;
//     }
//     return sum;
// }
// int main(){
//     cout << sumN(50) << endl;
//     cout << sumN(10) << endl;
//     return 0;
// }

//factorial
// #include <iostream>
// using namespace std;

// int factorialN(int n){
//     int fact = 1;
//     for (int i =1; i<=n; i++ ){
//         fact *= i;
//     }
//     return fact ;
// }
// int main(){
//     cout << factorialN(2) << endl;
//     cout << factorialN(10) << endl;
//     return 0;
// }



//PASS BY VALUE 
// #include <iostream>
// using namespace std;

// void changeX(int x){
//     x =2*x;
//     cout << "x = " << x << endl;
// }

// int main(){
//     int x = 5;
//     changeX(x);

//     cout << x << endl;
//     return 0;

// }



//calculate the sum of digits of a number 
// #include <iostream>
// using namespace std;

// int sumOfDigits(int num){
//     int digSum = 0;

//     while (num>0){
//         int lastDig = num%10 ;
//         num /= 10;

//         digSum += lastDig;

//     }
//     return digSum;
// }
// int main(){
//     cout << "sum " << sumOfDigits(2340) << endl;
//     return 0;

// }



// Qs- calculate nCr binomial coefiicient for n and r
#include <iostream>
using namespace std;

int factorial(int n){
    int fact = 100;

    for (int i =1; i <=n; i++){
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r){
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n-r);

    fact_n / (fact_r * fact_nmr);
}

int main(){
    int n=2, r=2;
    cout << nCr(n,r) << endl;
    return 0;
}


