//to compile and execute this file
//simultaneously compile and execute this file using g++ pattern.cpp -o pattern.exe ; ./pattern.exe



//SQUARE PATTERN N*N

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 10;

//     for (int i = 1; i <= n; i++) {       //outer loop 
        
//         for (int j = 1; j <= n; j++) {       //inner loop 
//             cout << "*" << " ";      
//         }
//         cout << endl;
//     }

//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
//     int n = 10;

//     for (int i = 0; i <= n; i++) {        //RUN FROM 0 TO 10 == 11 TIMES 
        
//         for (int j = 0; j <= n; j++) {       
//             cout << "*" << " ";      
//         }
//         cout << endl;
//     }

//     return 0;
// }



//TO PRINT CHARACTERS
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 10 ;

//     for (int i = 0; i < n; i++) {       //outer loop 
//         char ch = 'A';
//         for (int j = 0; j < n; j++) {       //inner loop 
//             cout << ch ;    
//             ch++;                         //ch = ch +1

//         }
//         cout << endl;
//     }

//     return 0;
// } 




// #include <iostream>
// using namespace std;

// int main() {
//     int n = 7;

//     int num = 1;

//     for (int i = 0; i < n; i++) {      //outer loop 
    
//         for (int j = 0; j < n; j++) {       //inner loop 
//             cout << num << " ";
//             num++;

//         }
//         cout << endl;
//     }
//     cout<< "after pattern :"<< num << endl;
//     return 0;
// }


//Triangle pattern
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5;

//     for(int i = 0 ; i<n ; i++){
//         for (int j = 0 ; j< i+1 ; j ++ ){              //imp part inner loop 
//             cout << " * ";                            //space matters 
//         }
//         cout << endl;
//     }
    
//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
//     int n = 6;

//     for(int i = 0 ; i<n ; i++){
//         for (int j = 0 ; j< i+1 ; j ++ ){
//             cout << (i+1) <<" ";
//         }
//         cout << endl;
//     }

//     return 0;
// }


//using characters 
// #include <iostream>
// using namespace std ;
// int main (){

// }



//different numbers 
// #include  <iostream>
// using namespace std ;
// int main (){
//     int n = 6 ;

//     for (int i = 0 ; i < n ; i++ ){
//         for (int j = 1 ; j<=i+1 ; j++) {
//             cout << j << " ";
//         }
//         cout << endl ;
//     }
//     return 0 ;
// }



// #include<iostream>
// using namespace std;
// int main (){
//     int n =5 ;
//     for (int i = 0 ; i<n ; i++){
//         for (int j = 0 ; j<i+1; j++){
//             cout << (i+1);
//         }
//         cout << endl ;
//     }
// }


//HOMEWORK
//print   A
//        BB
//        CCC
//        DDDD



//REVERSE TRIANGLE PATTERN
// #include <iostream>
// using namespace std;
// int main (){
//     int n = 5;
//     for( int i=0; i<n ; i++){
//         for( int j = i+1 ; j>0 ; j--){
//             cout<< j << " ";
//         } 
//     cout<< endl;
//     }
// return 0 ;
// }


// #include <iostream>
// using namespace std;
// int main (){
//     int n = 5;
//     for( int i=n; i>0 ; i--){
//         for( int j = i ; j>0 ; j--){
//             cout<< j << " ";
//         } 
//     cout<< endl;
//     }
// return 0 ;
// }

//FLOYD'S TRIANGLE
// #include <iostream>
// using namespace std;
// int main (){
//     int n = 4;
//     int num = 1;
//     for(int i =0 ; i <n ; i++){
//         for(int j =i+1 ; j >0 ; j--){    //backwards but runs i+1 times 
//             cout << num << " ";
//             num++;
//         }
//         cout << endl ;
//     }
// return 0 ;
// }



//solve its character version also 



// #include <iostream>
// using namespace std; 
// int main (){
//     int n = 4;
//     for (int i =0 ; i <n ; i++){
//         //FOR SPACES 
//         for(int j =0 ; j <i ; j++){                    
//             cout << " ";
//         }
//         //for numbers 
//         for (int j = 0; j<n-i ; j++){
//             cout << (i + 1);
//         }
//         cout << endl ;
//     }
//     return 0 ;

// }




//PYRAMID PATTERN
// #include <iostream>
// using namespace std;
// int main (){
//     int n=8;
//     for(int i=0; i<n ; i++ ){
//         //spaces : n-i-1
//         for (int j=0 ; j<n-i-1 ; j++){
//             cout << " ";
//         }
//         //numbers : i+1
//         for (int j=1; j<=i+1 ; j++){
//             cout << j;
//         }
//         //numbers 2 
//         for( int j=i; j>=1 ;j--){
//             cout << j ;
//         }
//         cout << endl ;
//     }
//     return 0 ;

// }


//HOLLOW DIAMOND PATTERN 
// #include <iostream>
// using namespace std;
// int main (){
//     int n = 4;
//         //top part                                           //first outer loop(uppper half of diamond)
//         for(int i=0; i<n; i++){
//             //spaces
//             for(int j=0 ; j<n-i-1 ; j++){
//                 cout<< " ";
//             }

//             cout<< "*";

//                 if( i !=0){
//                     //spaces 
//                     for(int j=0 ; j<2*i-1 ; j++){
//                         cout<< " ";
//                     }
//                 cout<< "*";
//                 }
//                 cout << endl;
//         }
//         //bottom part                                     //second outer loop(second half of diamond pattern)
//         for(int i=0; i<n-1; i++){
//             //spaces
//             for(int j=0 ; j<i+1 ; j++){
//                 cout<< " ";
//             }
//             cout << "*";
        
//             if(i != n-2){
//                 //spaces
//                 for(int j=0 ; j<2*(n-i)-5 ; j++){
//                     cout<< " ";
//                 }
//                 cout<< "*";
//             }
//             cout << endl;
//         }
//     return 0 ;
// }






//BUTTERFLY
//BUTTERFLY
// #include <iostream>
// using namespace std;
// int main (){
//     int n = 5;
//     //upper part
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//             cout<< "*";
//         }
//         cout<< endl;
//     }
//     //lower part
//     for(int i=n; i>0; i--){
//         for(int j=0; j<i; j++){
//             cout<< "*";
//         }
//         cout<< endl;
//     }
//     return 0;
// }