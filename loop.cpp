//LOOPS (for loop , while , do-while)
//question - print numbers 1 to 5 using loop

// #include <iostream>
// using namespace std;
// int main(){
//     int count = 1;
    
//     while(count <=5)
//     {
//         cout<< count << endl;
//         count++;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int n = 20;
//     int i =1;
//
//      while (i <=n){
//          cout << i <<endl;
//          i++;
//      }
//      cout<<endl;
//      return 0;
// }


//INFINITE LOOPS
// #include <iostream>
// using namespace std;
// int main(){
//     while(true){
//         cout<<"Infinite Loop"<<endl;
//     }
//     return 0;
// }





//CAMEL CASE - we write the name of variable(age,marks ,name) in camel case like 
// int myVariableName = 10;   (first word's first letter is lowercase and second word's first letter is uppercase)
// #include <iostream>
// using namespace std;
// int main(){
//     int myVariableName = 10;
//     cout << myVariableName << endl;
//     return 0;
// }




//FOR LOOP - for(initialization; condition; increment/decrement)
// #include <iostream>
// using namespace std;
// int main(){
//     int i = 1;              //initialization
//     while ( i <= n){       //condition 
//         cout << i <<        
//         i++;               //increment/decrement(updation)
//     }
//     return 0;
// }



//above code can also be implemented using for loop
// #include <iostream>
// using namespace std;
// int main(){
//     int n = 5;
//     for(int i = 1; i <= n; i++){
//         cout << i <<" ";
//     }
//     cout << endl;
//     return 0;
// }

//to print sum of  all odds starting from one
// #include <iostream>
// using namespace std;
// int main(){
//     int n = 1000;
//     int sum = 0;
//     for(int i = 1; i <= n; i = i+2){
//         sum += i;
//     }
//     cout << "sum = " << sum << endl;
//     return 0;
// }

// //question - sum of numbers from 1 to n
// // #include <iostream>
// using namespace std;
// int main(){
//     int n =100;
//     int sum = 0;
//     for(int i = 1; i <= n ; i++ ){
//         sum += i ;
//     }
//     cout<< "ans = " <<sum <<endl;
//     return 0 ;
// }



//break
// #include <iostream>
// using namespace std;
// int main(){
//     int sum = 0;
//     int n =9;
//     for(int i = 1; i <= n; i++){
//         sum += i;
//         if(i == 8){
//             break;
//         }  
//     }
//     cout <<"sum = " << sum <<endl;
//     return 0;
// }

//print odd numbers sum
// #include <iostream>
// using namespace std;
// int main(){
//     int n = 1000;
//     int oddSum = 0;
//     for(int i = 1; i <= n; i++){
//         if( i % 2 != 0 )
//         oddSum += i ;

//     }
//     cout << "oddSum = " << oddSum << endl ;
//     return 0;
// }


//do the above oddsum question using while loop
//question sum of even till 20 using for loop



//DO WHILE LOOP
// #include <iostream>
// using namespace std;
// int main(){
//     while (3>5){
//         cout << "This will not print" << endl;   //here this will not print anything because the while condition is universally false
//     }
// return 0 ;
// }


// #include <iostream>
// using namespace std;
// int main(){
//     do {
//         cout <<"hello world \n";
//     } while (4 >5 );
//     return 0;
// }


//to print numbers 1 to 5 using do-while loop
// #include <iostream>
// using namespace std;
// int main(){
//     int n = 10 ;
//     int i = 1;

//     do {
//         cout << i << " ";
//         i ++;
//     } while (i <= n);

//     cout << endl;
//     return 0;
// }






//check if a number is prime or not 
// #include <iostream>
// using namespace std;
// int main(){
//     long long n = 576746879956678900976543329;
//     bool isPrime = true;

//     for ( long long i = 2 ; i <=n-1 ; i++ ){

//         if ( n % i == 0){
//         isPrime = false;
//         break;
//     }
// }
    
//     if (isPrime == true){
//         cout << "prime no. \n";
//     }else{
//         cout << "not prime no.\n";
//     }
//     return 0 ;
// }

            //Or
// #include <iostream>
// using namespace std;
// int main (){
//     int i;
//     int n = 33;
//     bool isPrime = true;

//     for (i = 2 ; i*i <= n ; i++) {         //using i*i<=n instead  of i <= n-1 
//         if( n % i == 0 ){
//             isPrime = false;
//             break;
//         }
//     }
//     if(isPrime ==  true){
//         cout << "prime number\n";
//     }else{
//         cout << "not a prime number\n";
//     }
//     return 0;
// }  




//question - to find the factorial of number from 1 to n which are divivsible by 3
//question - print factorial of a number n .