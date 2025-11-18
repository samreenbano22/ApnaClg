// sum of two numbers 
// #include <iostream>
// using namespace std;

// int main() {
//     int a, b;
//     cout << "Enter a : ";
//     cin >> a;
//     cout << "Enter b : ";
//     cin >> b;


//     int sum = a + b;
//     cout << "sum =" << sum << endl;    return 0;
// }





// #include <iostream>
//  using namespace std;

//  int main() {
//     int a = 10;

//     int b = a++;
//     cout << " b = " << b << endl;  //prints 10, because a is incremented after this line
//     cout << " a = " << a << endl; //prints 11, because a is incremented after the previous line
//     return 0;
// }




// pre-increment operator  ++a
//post-increment operator a++
// pre-decrement operator --a
// post-decrement operator a--  





// #include <iostream>
// using namespace std;

// int main() {
//     int a = 29;
//     int b = ++a;  // pre-increment, a is incremented before this line
//     cout << "b = " << b << endl;  // prints 11, because a is incremented before this line
//     cout << "a = " << a << endl; // prints 11, because a is incremented before the previous line
//     return 0;
// }




// #include <iostream>
// using namespace std;

// int main() {
//     int a = 10;

//     int b = --a;  // pre-decrement, a is decremented before this line
//     cout << "b = " << b << endl;  // prints 44, because a is decremented before this line
//     cout << "a = " << a << endl; // prints 44, because a is decremented before the previous line
//     return 0;
// }



// #include <iostream>
// using namespace std;    


// int main() {
//     int a = 10;

//     int b = a--;                 // post-decrement, a is decremented after this line

//     cout << "b = " << b << endl; // prints 10, because a is decremented after this line
//     cout << "a = " << a << endl; // prints 9, because a is decremented after the previous line
//     return 0;
// }





//question -- to make a CALCULATOR that takes two numbers as input and prints their sum, difference, product, division and modulus


// #include <iostream>
// using namespace std;

// int main(){
//     int a, b;
//     cout << "Enter a: ";
//     cin >> a;
//     cout << "Enter b: ";
//     cin >> b;
//     cout << "Sum = " << (a + b) << endl;
//     cout << "Difference = " << (a - b) << endl;
//     cout << "Product = " << (a * b) << endl;
//     cout << "Division = " << (a / b) << endl;
//     cout << "Modulus = " << (a % b) << endl;
//     return 0;
// }




//CONDITIONAL STATEMENTS 
//IF - ELSE 
// #include <iostream>
// using namespace std;

// int main() {
//         int n = -25;

//         if (n>=0){
//             cout << " n is positive\n";
//         } else {
//             cout << " n is negative\n";
//         }

//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main(){
//         int age ;
//         cout << " Enter age :";
//         cin  >> age ;

//         if (age >=18){
//             cout << " you can vote\n";
//         }else {
//             cout << "you can't vote\n";
//         }   
//         return 0; 
//         }


// #include <iostream>
// using namespace std;
// int main() {
//     int n ;
//     cout << " Enter a number : ";
//     cin >> n;

//     if (n % 2 == 0) {
//         cout << " n is even\n";
//         cout << "byeeeeeeeeee";
//     } else {
//         cout << " n is odd\n";
//     }   
//     return 0;
// }





//if- else if - else statements

// #include <iostream>
// using namespace std;    

// int main() {
//     int age;
//     cout << " Enter age : ";
//     cin >> age;
//     if (age < 0) {
//         cout << " Invalid age\n";
//     } else if (age < 18) {
//         cout << " You are a minor\n";
//     }
//     else if (age < 60) {
//         cout << " You are an adult\n";
//     }
//     else {
//         cout << " You are a senior citizen\n";
//     }
//     return 0;
// }



// NESTED IF STATEMENTS
// #include <iostream>
// using namespace std;

// int main() {
//     using namespace std;
//     int marks;
//     cout << "Enter marks: ";
//     cin >> marks;

//     if (marks >= 90) {
//         cout << "Grade: A\n";
//     } else if (marks >= 80 && marks < 90) {
//         cout << "Grade: B\n";
//     } else if (marks >= 70 && marks < 80) {
//         cout << "Grade: C\n";
//     } else {
//         cout << "Grade: D\n";
//     }

//     return 0;
// }




//find character lowercase or uppercase
// #include <iostream>
// using namespace std;
// int main(){
//     char ch;
//     cout<< "Enter char:";
//     cin>> ch;

//     if(ch >= 'a' && ch <= 'z')
//     {
//         cout<< "lowercase\n";
//     } else {
//         cout<< "uppercase\n";
//     }
//     return 0;
// }



///ASCII value
// MADE A WORD FILE ON THIS
// In ascii number from 64 to 90 are A-Z (uppercase)
// NUMBER from 96 to 122 are a-z (lowercase)

// #include <iostream>
// using namespace std;
// int main (){
//     char ch ;
//     cout << "Enter char :";
//     cin >> ch;

//     if (ch >= 'a' && ch <= 'z') {     //ALSO USE - (ch >= 96 && ch <= 122)
//         cout << "lowercase";
    
//     } else {
//         cout << "uppercase" << endl;
//     }
// }




//TERNARY STATEMENT - THREE( condition? stt1 : strr2 ; )
// #include <iostream>
// using namespace std;
// int main(){
//     int n = 44;
//     cout<<(n >=0 ? "positive" : "negative") <<endl;
//     return 0;
// }

