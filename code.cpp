// FOR ANY NEW FILE 
//TO RUN THE CODE
//TYPE COMMAND "g++ fileName.cpp" in the terminal 
//AND THEN TYPE "./a.exe or ./code.exe" TO EXECUTE THE CODE 
//it depends which file it creates after compilation whether a.exe or code.exe or any else


// #include <iostream>
// using namespace std;

// int main() {
//     double price;
//     cout << " Enter the price : "; 
//     cin >> price;                    // Input price from user

//     cout << "you entered price = " << price << endl;
//     return 0;
// }



//operators 
//1. arithematic operators like +, -, *, /, %

// #include <iostream>
// using namespace std;

// int main(){
//     int a = 2 , b = 3;
//     int sum = a + b;

//     cout << sum << endl; // here we can also use cout << a + b << endl; to print the sum directly
//     return 0;
// }



// #include <iostream>
// using namespace std;
// int main() {
//     int a = 100, b = 50;
//     cout << "sum  = " << (a + b) << endl;
//     cout << "difference = " <<( a - b) << endl;
//     cout << "product = " << (a * b) << endl; 
//     cout << "division = " << (a / b )<< endl;
//     cout << "modulus = " << (a % b) << endl;
//     return 0;
// }


//to compile and execute the code, use the following commands in the terminal:
//g++ code.cpp -o a.exe ; ./a.exe    ---------yayyyyy i got it !!!!




//more on division operator
// #include <iostream>
// using namespace std;

// int main() {
//     int a = 5;
//     double b = 2;   //int/int = int ; float/int= int; double/int = double

//     cout << (5 / (double)2)<< endl; // type casting int to double
//     return 0 ;
// }
//to compile and execute the code, use the following commands in the terminal:
//g++ code.cpp -o a.exe ; ./a.exe




// #include <iostream>
// using namespace std;

// int main() {


//         int ans = (5 / (double)2);      //this print 2 because value is stored in int variable ans which can only store integer values
//         cout << ans << endl;
//         return 0;

//     }








// RELATIONAL OPERATORS
// < , >, <=, >=,
// != IS NOT EQUAL TO OPERATOR
// == IS EQUAL TO OPERATOR
// "=" IS USED FOR ASSIGNMENT, NOT COMPARISON
//THEY RETURN TRUE(1) OR FALSE(0) AS OUTPUT


// #include <iostream>
// using namespace std;

// int main(){

//     cout << (3<5) << endl;
//     cout << (3>5) << endl;
//     cout << (3<=5) << endl;
//     cout << (3>=5) << endl;
//     cout << (3!=5) << endl;
//     cout << (3==5) << endl;
//     return 0;
// }







// LOGICAL OPERATORS
// && (AND) , || (OR) pipe operator,
//! (NOT)  
// THEY RETURN TRUE(1) OR FALSE(0) AS OUTPUT


// #include <iostream>
// using namespace std;

// int main() {

//     cout << (3 > 1) << endl;    //print 1 (true)
//     cout << !(3 < 1) << endl;  //print opposite of output of (3 < 1) which is false, so it prints true (1)
//     return 0;
// }





// #include <iostream>
// using namespace std;

// int main(){
//     cout << (3 > 1 && 5 < 10) << endl; // it will print 1 (true) only if both conditions are true
//     return 0;
// }




// unary operators
//1. increment operator ++
//2. decrement operator --
//3. unary minus operator -
//4. unary plus operator +





