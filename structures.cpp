#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
#include <ctime>
#include <iomanip>

using namespace std;

/*

How to print smth

int main() {
    cout << "I love pizza" << '\n';  // using '' with /n makes it so its better then endl
    cout << "Its really good" << '\n';

    return 0;
}
*/

/*
int main() {

    // integer (whole number)
    int age = 45;
    int year = 2009;
    int day = 5;


    //double (number including decimal)
    double days = 7.5;
    double GPA = 2.5;
    double temp = 20.2;

    //char (single character)
    char grade = 'A';
    char initial = 'BC'; // doesnt work, will only output 'c'

    // boolean (2 states {true or false})

    bool student = true;
    bool power = true;
    bool forsale = true;

    //strings (object that respresents a sequnce of text)

    std::string name = "Sourish";
    string Day = "Friday";
    string Food = "i like pizza";
    string addree = "13 code lane";

    cout << name;

    return 0;
}

*/
/*

int main() {

    //The const keyword specifies that a variable's value is constant
    // tells the compiler to prevet anything from modifying it
    //(read-Only)

    const double PI = 3.14159;
    double radius = 10;
    double circumference = 2 * PI * radius;

    cout << circumference << "cm"; 

    const int LIGHT_SPEED = 299792458;
    const double PI = 3.14;
    const int WITDTH = 1920;
    const int HIGHT = 1080;
}

*/



    /*
    Name space = provies a solution for preventing name conflicts 
    in latge projects. Each entidty needs a unique name. 
    A namespace allows fror identically named entites 
    as long as the namespaces are different.
    */
// the following namespace is a part of the code below

/*
namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}
int main() {

    int x = 0;

    cout << x; // this will output 0 beucase we didnt tell what namespace 
    // we are using

    cout << first::x; //using 'first::_' allows the code to know we are using
    // the first namespace called first. if we use the second namespace, 
    //then wthe outwput will be 2 

    //when usin 'using name space' in a function [int main() {}] 
    // whatever the name is for the namespace will allow it so we do not 
    // need the prefix. for example 
    
//    int main() {
//        using namespace first;
//
//        int x = 3;
//        cout << x;  // this will output as 3 beucase we are using namepsace
//        // if you want it to output the second namespace you would have to 
//        // do this
//
//        cout << second::x;
//    }
//    
    

   

}

*/
/*
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pairlist_t;  
// {std::vector<std::pair<std::string, int} becomes {pairlist_t}
//typedef std::string text_t;
//typedef int number_t;
//using text_t = std::string;
//using number_t = int;

// the above exmaples will all work with the code below, its just 
// when using 'using' works better w/ templates

int main(){

    //typedef = rreserved keyword used to creat an additional name
    // (alias) for another data type
    // helps with readablity and reduces typos
    // use when there is a clear benefit
    // replaced with 'using' (work better w/ templates)
    text_t firstname = "Sourish";
    number_t age = 21;
    cout << firstname << age;

    return 0;
}

*/

/*

int main() {


    //int students = 20;
    //students = students + 1;
    //students*=3;
    //students++;
    //students-=6;
    //students--;
    //students/=2;
    //students*=2;
    
   // int remainder = students % 3; // gives you the remainder of the numver
    
    //cout << remainder;
    //cout << students;

   
   // brackets
   // X or /
   // + or -


   //int students = (6 - 5) + 4 * 3 / 2;
   //cout << students;
   
   
    return 0;
}

*/
/*

int main() {

//type converstion = convestion a value of one data type to another
//implicit = automatic
//explicit = precede value with new data type (int)

    //double x = (int)3.14;
    //cout << x;
    //char x = 100;  // using this, we euse ASCII table for the value. 
    //cout << x;
    //cout << (char) 100;


    //int correct = 8;
    //int questions = 10;
    //double score = correct/(double)questions * 100;
    //cout << score << "%";
    //return 0;
}

*/

/*
int main() {

    int age;
    string name;
    
    
    cout << "Whats your age ";
    cin >> age;
    
    cout << "Enter your full name: ";
    getline(cin >> ws, name); // use this when having the user intput a sentence (spaces in the sentence / phrase)
// when a cin is followed by a getline,the getline uses the cout as the input.
//the ws (white space) removes that so you  can input both age and name51
    cout << "Hello " << name << '\n';
    cout << "You are " << age << " years old";

    return 0;
}

*/

/*
int main(){

    double x = 3.14;
    double y = 4;
    double a = 5;
    double z;

    //z = max(x, y); //what is the maxumum number (great)
    //z = min (x, y); // what is the minimum number (least)
    //z = pow(2, 3); asumme (x, y)  pow is x to the power of y (2, 3) =8 2*2*2
    //z = sqrt(9); square root
    //z = abs(-3); absolute value
    //z = round(x); rounds
    //z = ceil(x); rounds up
    //z = floor(x); rounds down
    
    cout << z;

    return 0;
}

*/

/*
// small project
int main() {

    double a;
    double b;
    double c;

    cout << "Enter side A value ";
    cin >> a;
    
    
    cout << "Enter side B value ";
    cin >> b;

    //a = pow (a, 2);
    //3b = pow(b, 2);
    c = sqrt(pow(a, 2) + pow(b, 2));
    //c = round(c);
    cout << "Side c = " << c;


    return 0;
}

*/

/*
int main() {

//if statements = do something if a condition is treu
//                  if not, then dont do it

    int age;

    cout << "Enter your age ";
    cin >> age;

    if(age >= 18){

        cout << "Your are allowed to enter";

    }
    else if(age < 0){   
        cout << "You haven't been born yet";
    }
    else{

        cout << "Your are not allowed to enter";
    }

    if:
    you can add the condition

    else:
    this is if the if statement is false
    else if:
    you can add another condition

NOTE: the order of your if statements matter

    return 0;
}
*/
/*
int main() {

    //switch = alternative to useing 'else if' statments
    // comare one value against matching cases
    int month;
    cout << "enter the month (1-12)";
    cin >> month;

    switch(month){
        case 1:
            cout << "it is january";
            break;
        case 2:
            cout << "it is Febuary";
            break;
        case 3:
            cout << "it is March";
            break;
        case 4:
            cout << "it is April";
            break;
        case 5:
            cout << "it is May";
            break;
        case 6:
            cout << "it is June";
            break;
        case 7:
            cout << "it is July";
            break;
        case 8:
            cout << "it is August";
            break;
        case 9:
            cout << "it is September";
            break;
        case 10:
            cout << "it is October";
            break;
        case 11:
            cout << "it is November";
            break;
        case 12:
            cout << "it is December";
            break;

        default:
            cout << "Please re-enter";
    }

    return 0;
}

you can also do strings by doing 
cse 'A';
    break;
case 'B';
    break;

*/
/*
int main() {

    char op;
    double num1, num2, result;

    cout << "************* CALCULATOR *************\n" ;

    cout << "enter either (+ - * /);\n";
    cin >> op;

    cout << "Enter #1 ";
    cin >> num1;

    cout << "Enter #2 ";
    cin >> num2;

    switch(op){
        case '+':
            result = num1 + num2;
            cout << "result: " << result << '\n';
            break;
        case '-':
            result = num1 - num2;
            cout << "result: " << result << '\n';
            break;
        case '*':
            result = num1 * num2;
            cout << "result: " << result << '\n';
            break;
        case '/':
            result = num1 / num2;
            cout << "result: " << result << '\n';
            break;

        default:
            cout << "That wasn't vaild response";
            break;

    }

    cout << "***************************************\n" ;
    return 0;

}

*/
/*
int main() {

    // ternary operator ?: = Replacement to a if/else statment
    // condition ? expression1 : expression2;
    //int graade = 75;

    // normal way
    //if(grade >= 60){
    //  cout << "You pass";
    //}
    //else{
    //    cout << "you failed";
    //}

    //grade >= 60 ? cout << "You pass" : cout << "you failed";
    
    //int number = 9;

    //number % 2 == 1 ? cout << "ODD" : cout << "EVEN";

    //bool hungry = true;
    //hungry == true ? cout << "You are hungry" : cout << "Your are not hungry";
    //cout << (hungry ? "hungry" : "full");
}
*/

/*
int main() {

    // && = checks if two conditions are true
    // || = check if at least one condition is true
    // ! = reverses the logical state of its operard
        // this means, if the answer is true it becomes false
        // and vise versa

    // &&
    //int temp;
    //cout << "Enter the Temp: ";
    //cin >> temp;

    //if(temp > 0 && temp < 30){
        //cout << "The remp is good";

    //}
    //lse{
        //cout << "The temp is not good";
    //}

    //return 0;

    // ||
    //int temp;
    //cout << "Enter the Temp: ";
    //cin >> temp;

    //if(temp <= 0 || temp >= 30) {
    //    cout << "The temp is bad";
    //} else {
     //   cout << "The temp is good";
    //}

//return 0;

// !
    int temp;
    bool sunny = false;
    cout << "Enter the Temp: ";
    cin >> temp;

    if(temp > 0 && temp < 30) {
        cout << "The temp is good";
    } else {
        cout << "The temp is not good";
    }

    if(!sunny == true){
        cout << "Today is cloudy";
    }
    else{
        cout << "It is sunny";
    }

    return 0;


}

*/

/*
// C++ Temperature conversion program 
nt main()
{
    double temp;
    char unit;

    std::cout << "*** Temperature conversion *****\n";
    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celsius\n";
    std::cout << "What unit would you like to convert to: ";
    std::cin >> unit;

    if(unit == 'F' || unit == 'f'){
        std::cout << "Enter the temperature in Celsius: ";
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0;
        std::cout << "Temperature is: " << temp << "°F\n";
    }
    else if(unit == 'C' || unit == 'c'){
        std::cout << "Enter the temperature in Fahrenheit: ";
        std::cin >> temp;

        temp = (temp - 32) / 1.8;
        std::cout << "Temperature is: " << temp << "°C\n";
    }
    else{
        std::cout << "Please enter in only C or F\n";
    }

    std::cout << "**********************************";

    return 0;
}
*/
/*

// useful string methods

int main() {
    string name;
    cout << "Enter your name: ";
    getline(cin, name); // captures the full name including spaces

    //if(name.length() > 12) { // checks if the name exceeds 12 characters
    //    cout << "Your name cannot be over 12 characters.";
    //}
    //else{
    //    cout << "Welcome " << name;
    //}
    //if(name.empty()){ // checks if no name was entered
    //    cout << "You didn't enter your name.";
    //}
    //else{
    //    cout << "Hello " << name;
    //}

    //name.clear(); // clears the input
    //cout << "Hello " << name;

    //name.append("@gmail.com"); // appends "@gmail.com" to the name
    //cout << "Your email address is now " << name;
    // answer would be (sourish = imput) sourish@gmail.com

    //cout << name.at(0); // outputs the first character of the name
    //name.insert(0, "Mr. "); // inserts "Mr. " at the beginning of the name (0 is the beginning)
    //cout << name;

    //cout << name.find(" "); // finds the position of the first space
    //name.erase(0, 3); // erases the first three characters
    // (x, y) x = beginning y = end
    //cout << name;

    // go to string class if u want to learn more

    return 0;
}

*/

/*
// while loops
int main() {

    string name;
    while(namne.empty()) { // repeates intil the condition is false bc we want to have their name to be able to cout
        cout << "Enter your name";
        getline(cin, name);
    }

    cout << "Hello " << name;


    return 0;
}
*/

/*
// do dhile loop
int main(){

    // do while loop = do some block of code first, 
    //                  THEN repeat again if condition is true

    int num;

    //while(num > 0){ // this will not work, becuase your are assiging the num in the while loop, 
                    //and after it reapeats the code again, numb is set to 0 
        //cout << "Enter Positive number";
       // cin >> num;
   // }


    //cout << num;

    do{
        cout << "Enter a pos number ";
        cin >> num;
    } while(num < 0);
    cout << num;

    return 0;
}
*/

/*
for loop
int main() {
    
    // for loop = repeats a section of code a limited amount of times

    for(int i = 1; i <= 10; i++) { // i+=2 = count in 2s   in-=2 subtrack by 2
        cout << i << '\n';
    }
    cout << "HAPPY NEW YEAR";

    return 0;
}
*/
/*
break and continue
int main() {

    // break = break out of a loop
    // continue = skip current itertion

    for(int i =1; int <= 20, i++){
        if(i == 13){
            //break; // tthis will stop the for loop
            //continue; // skips the number 13
        }
        cout << i << \='\n';
    }

    return 0;
}

*/

/*
int main() {

    // nested loop (loop inside a loop)

        //loop() {
          //  loop() {


            //}
        //}
    for(int i = 1; i <= 3; i++){
        for(int j = 1; j <=10; j++){ // normal to use j for the secondary looop
            cout << j <<" ";
        }
        cout << '\n';
    }


    return 0;
}
*/

/*
//game for nested loop

int main() {
    
    // for loop = repeats a section of code a limited amount of times

    for(int i = 1; i <= 10; i++) {  // loop from 1 to 10
        cout << i << '\n';  // print the current value of i
    }

    // nested for loop = a loop inside another loop
    int rows;
    int columns;
    char symbol;

    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> columns;

    cout << "Enter a symbol to use: ";
    cin >> symbol;

    for(int i = 0; i < rows; i++) {  // outer loop for rows
        for(int j = 0; j < columns; j++) {  // inner loop for columns
            cout << symbol << " ";  // print the symbol
        }
        cout << '\n';  // move to the next line after each row
    }

    return 0;
}
*/
/*
int main() {
    // need #include <ctime>
    // pseudo-random = NOT truly random (but close)

    srand(time(NULL));

    //int num1 = (rand() % 6) + 1; // % allows the remainder of num / 6. we added 1 to the whole function
                                // so we dont include 0


    int num1 = (rand() % 6) + 1;
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;

    cout << num1 << '\n';
    cout << num2 << '\n';
    cout << num3 << '\n';


    return 0;
}
*/

/*

// random number gen
int main() {

    srand(time(0));

    int randNUM = (rand() % 5) + 1;

    switch(randNUM){
        case 1:
            cout << "You win a bunnper sticker! \n";
            break;
        case 2:
            cout << "You win a tshirt\n";
            break;
        case 3:
            cout << "You win a free lunch! \n";
            break;
        case 4:
            cout << "You win a gift card! \n";
            break;
        case 5:
            cout << "You win a concert tickets! \n";
            break;
    }

    return 0;
}
*/

/*
number guessing game
int main(){

    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    do {
        cout << "Enter a gues betwween 1-100: ";
        cin >> guess;
        tries++;

        if(guess > num){
            cout << "Too high\n";
        }
        else if(guess < num){
            cout << "Too low\n";
        }
        else{
            cout << "CORRECT! # of tries: " << tries << '\n';
            
        }

    }while(guess != num);

    return 0;
}
*/


/*
// Function prototype with a string parameter
void happyBirthday(string name, int age);

int main() {

    // function = a block of reusable code P.S.must be before the main function, or have it before the main function. ex
    // void HB(); 
    // int main() { }
    // void HB() { }
    string name = "bro"; // you cannot call a variable outside of your function / house P.S functions can't see what's going on inside
                        // other functions. 
    happyBirthday(name, age); // calls happy birthday. meaning, whatever is in the function, it will do
                // ^ calls the name, so you can say happy bday name
    int age = 21;

    return 0;
    
}
//                 vv gotta use this parameter so this function can use name  P.S remember to do the same outside any functions
// Function definition
void happyBirthday(string name, int age) {
    cout << "Happy birthday to " << name << '\n';
    cout << "Happy birthday to you\n";
    cout << "Happy birthday to " << name << '\n'; 
    cout << "Happy birthday to you\n";
    cout << age;
}
*/

/*
return stuff

double square(double length);
double cube(double length);

int main() {

    // return = return a value back to the spot
    //          where you called the encompassing funcition

    double length = 5.0;
    double volume = cube(length);
    double area = square(length);
    cout << volume << '\n';
    cout << "Area: " << area << "cm2\n";
    

    return 0;
}
double square(double length){
    double result = length * length;
    return result; // if you want to return the result, change VOID to the declearction to what the carible is set to (dobule)
}
double cube(double length){
    double result = length * length * length;
    return result; // if you want to return the result, change VOID to the declearction to what the carible is set to (dobule)
}

*/

/*
void bakePizza(string topping1);
void bakepizza();

int main() {

    
    bakePizza(chesse);
    
    return 0;
}

void bakePizza() {
    cout << "Here is your pizza \n"
}
void bakePizza(string topping1) {
    cout << "Here is your" << topping1 << "pizza \n";
}
// guncition can have the same name, but should have different parameters
*/


/*
int mynum = 3;
void printNum();

int main() {
    NOTE: use ::(varible name) if you want the code to use global value
    // local varibles = declared inside a funciton or block {}
    // Global varibles = declared outside of all functions

    
    cout << mynum;

    return 0;
}

void printNum() {
    
    cout << mynum; // this funcition cannot print becuase it doesnot know what varible myNum is. BC it it a local varible
}

*/


/*
// #include <iomanip>
void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
    double balance = 0;
    int choice = 0;

    do{
        std::cout << "******************\n";
        std::cout << "Enter your choice:\n";
        std::cout << "******************\n";
        std::cout << "1. Show Balance\n";
        std::cout << "2. Deposit Money\n";
        std::cout << "3. Withdraw Money\n";
        std::cout << "4. Exit\n";
        std::cin >> choice;
        sin.clear(); // this will not break the while loop
        fflush(stdin); // flush input

        std::cin.clear(); 
        fflush(stdin);

        switch(choice){
            case 1: showBalance(balance);
                    break;
            case 2: balance += deposit();
                    showBalance(balance);
                    break;
            case 3: balance -= withdraw(balance);
                    showBalance(balance);
                    break;
            case 4: std::cout << "Thanks for visiting!\n";
                    break;
            default:std::cout << "Invalid choice\n";
        }
    }while(choice != 4);

    return 0;
}
void showBalance(double balance){
    
    std::cout << "Your balance is: $"<< std::setprecision(2) << std::fixed << balance << '\n';
}
double deposit(){
    
    double amount = 0;

    std::cout << "Enter amount to be deposited: ";
    std::cin >> amount;

    if(amount > 0){
        return amount;
    }
    else{
        std::cout << "That's not a valid amount:\n";
        return 0;
    }
}
double withdraw(double balance){

    double amount = 0;

    std::cout << "Enter amount to be withdrawn: ";
    std::cin >> amount;

    if(amount > balance){
        std::cout << "insufficient funds\n";
        return 0;
    }
    else if(amount < 0){
        std::cout << "That's not a valid amount\n";
        return 0;
    }
    else{
        return amount;
    }

}

*/

/*
ROCK PAPER SCISSOR GAME

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main(){

    char player;
    char computer;

    player = getUserChoice();
    cout << "Your choice: ";
    showChoice(player);

    computer = getComputerChoice();
    cout << "Computers' choice: ";
    showChoice(computer);

    chooseWinner(player, computer);


    return 0;
}

char getUserChoice(){


    char player;
    cout << "Rock Paper Scissor Game \n";
    do {
        cout << "Choose one of the following\n";
        cout << "***************************\n";
        cout << "'r' for Rock\n";
        cout << "'p' for Paper\n";
        cout << "'s' for Scissor\n";
        cin >> player;
    }while(player != 'r' && player != 'p' && player != 's');
    
    return player;

}
char getComputerChoice(){

    srand(time(NULL));
    int num = rand() % 3 + 1;
    switch(num){
        case 1:
            return 'r';
        case 2:
            return 'p';
        case 3:
            return 's';
    }
    
}
void showChoice(char choice){
    switch(choice){
        case 'r':
            cout << "Rock\n";
            break;
        case 'p':
            cout << "Paper\n";
            break;
        case 's':
            cout << "Scissors\n";
            break;
    }
}
void chooseWinner(char player, char computer){

    switch(player){
		case 'r': 	if(computer == 'r'){
						std::cout << "It's a tie!\n";
					}
					else if(computer == 'p'){
						std::cout << "You lose!\n";
					}
					else{
						std::cout << "You win!\n";
					}
					break;
		case 'p': 	if(computer == 'r'){
						std::cout << "You win!\n";
					}
					else if(computer == 'p'){
						std::cout << "It's a tie!\n";
					}
					else{
						std::cout << "You lose!\n";
					}
					break;
		case 's': 	if(computer == 'r'){
						std::cout << "You lose!\n";
					}
					else if(computer == 'p'){
						std::cout << "You win!\n";
					}
					else{
						std::cout << "It's a tie!\n";
					}
					break;
	}

}

*/
/*
int main(){

    // arrary = a data structure that can hold multiple values
    //          values are accessed by an index number
    //          "kind of like a varible that holds multiple vlues"

    string car[3]; // NOTE set size of array

    car[0] = "1";
    car[1] = "2";
    car[2] = "3";
    
    cout << car[0];
    cout << car[1];
    cout << car[2];


}
*/
/*

int main(){

    // sizeof() = determines the size in bytes of a:
    //          varible, data type, class, objects etc.

    int num = 4; // 4 bytes
    string name = "Sourish"; // 32 bytes
    int GPA = 5; // 8 bytes
    bool TRUE = false; // 1 bytes
    char grade = 'F'; // 1 bytes
    char grades[] = {'A', 'B', 'C', 'D', 'F'}; // 1 char is 1 byte, so 5 char is 5 bytes
    // cout << sizeof(grades) / sizeof(char) << "elements\n" 
    // ^ will allow us to know how many elements are in an array for char

    cout << sizeof(grades) << " bytes\n";


    return 0;
}

*/

/*

int main() {
    // one way to print all data is the array without changing the for loop
    string students[] = {"SpongBob", "Patrick", "Squidward", "Sandy"};
    for(int i = 0; i < sizeof(students) / sizeof(string); i++){
        cout << students[i] << '\n';
    }


    return 0;
}
*/

/*

int main(){

    //foreach loop = loop that eases the traversal over an 
    //              iterable data set

    string students[] = {"SpongBob", "Patrick", "Squidward", "Sandy"};
    
    for(string student : students){
        cout << student << "\n";

    }

    int grades[] = {65, 75, 85, 95, 99, 100};
    
    for(int grade : grades){
        cout << grade << "\n";

    }

    return 0;
}

*/



/*
// pass array to a function
double getTotal(double prices[], int size);
int main() {

    double prices[] = {49.99, 15.05, 75, 9.99,};
    int size = sizeof(prices) / sizeof(prices[0]);
    double total = getTotal(prices, size);
   

    cout << "$" << total << '\n';
    return 0;
}

double getTotal(double prices[], int size){
    double total = 0;

    for(int i = 0; i < size; i++){
        total += prices[i];

        
    }
    return total;
}
NOTE: when pasing arraies to functions, they do not know the size or data, they become a pointer
*/



/*
seaching an array for an element

int searchArray(int array[], int size, int element);

int main() {

    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9 ,10};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int index;
    int myNum;

    cout << "Enter element to search for\n";
    cin >> myNum;

    index = searchArray(numbers, size, myNum);

    if(index != -1){
        cout << myNum << " is at index " << index;
    }
    else{
        cout << "Your number was not found";
    }
    

    return 0;
}

int searchArray(int array[], int size, int element){

    for(int i = 0; i < size; i++){
        if(array[i] == element){
            return i;
        }
    }
    return -1;

}

*/ 

/*

bubble sort
void sort(int array[], int size);
int main() {

    int array[] = {10, 1, 9, 2, 8, 4, 7, 5, 6, 3};
    int size = sizeof(array) / sizeof(array[0]); 
    sort(array, size);

    for(int element : array){
        cout << element << " ";
    }

    return 0;
}

void sort(int array[], int size){

    int temp;

    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(array[j] > array[j + 1]){ // use less than for desending
                temp = array[j];
                array[j] = array [j + 1];
                array [j + 1] = temp;
            }

        }
    }

}
*/

/*


int main(){

    // fill() = fills a range of elements with a specified value
    //          fill(begine, end, value);

    const int size = 100;
    string foods[size];

    fill(foods, foods + size/2, "pizza");
    fill(foods + size/2, foods + size, "Hambuger" );
    for(string food : foods){

        cout << food << " \n";
    }

    return 0;
}
*/

/*
//USER IMPUT WITH ARRAY
int main(){

    string foods[5];
    int size = sizeof(foods) / sizeof(foods[0]); 
    string temp;

    for(int i = 0; i < size; i++){
        cout << "Enter a food you like or 'q' to quit #" << i + 1 << ": ";
        getline(cin, temp);
        if(temp == "q" || temp == "Q"){
            break;
        }
        else{
            foods[i] = temp;
        }
        
    }
    cout << "You like the following food:\n";
    for(int i = 0; !foods[i].empty(); i++){
        cout << foods[i] << '\n';
    }

    return 0;
}

*/

/*
2D array (,artix)

int main() {

    string cars[][3] = {{"Mustange", " Escape", "F-150"},         // first brackets is rows second is columes
                        {"Corveete", "Equinox", " Silveroda"},
                        {"Challenger", "Durango", "Ram 1500"}};
    //cout << cars[1][0];
    
    int sizeR = sizeof(cars) / sizeof(cars[0]);
    int sizeC = sizeof(cars[0]) / sizeof(cars[0][0]);
    

   
    
    for(int i = 0; i < sizeR; i++){
        //cout << cars[i] << '\n';
        cout << cars[i] << " ";
        for(int j = 0; j < sizeC; j++){
            cout << cars[i][j] << " ";            
            
        }
        cout << '\n';
        
    }
    
    
    
    return 0;
}

*/



/*
//QUIZ GAME


int main() {

    std::string questions[] = 	{"1. What year was C++ created?: ",
								 "2. Who invented C++?: ",
								 "3. What is the predecessor of C++?: ",
								 "4. Is the Earth flat?"};

	std::string options[][4] = 	{{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
								{"A. Guido van Rossum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Mark Zuckerburg"},
								{"A. C", "B. C+", "C. C--", "D. B++"},
								{"A. yes", "B. no", "C. sometimes", "D. what's Earth?"}};
    
    char answerKey[] = {'C', 'B', 'A', 'B'};

    int size = sizeof(questions) / sizeof(questions[0]);
    char guess;
    int score;

    for(int i = 0; i < size; i++){
        cout << "******************************\n";
        cout << questions[i] << '\n';
        cout << "******************************\n";
        for(int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++){
            cout << options[i][j] << '\n';

        }

        cin >> guess;
        guess = toupper(guess);

        if(guess == answerKey[i]){
            cout << "CORRECT\n";
            score++;

        }
        else{
            cout << "WRONG\n";
            cout << "Answer: " << answerKey[i] << '\n';
        }
            
    }
    cout << "******************************\n";
    cout << "Results\n";
    cout << "******************************\n";
    cout << "CORRECT GUESS: " << score << '\n';
    cout << "# of QUESTIONS: " << size << '\n';
    cout << "SCORE: " << score/(double)size * 100 << "%" << '\n';



    return 0;
}

*/

/*
int main(){

    // memory address = a location in memory where data is storied
    //  a memory addree can accessed with & (address-of operatior)

    string name = "Sourish";
    int age = 15;
    bool student = true;
    // hexadecimal memory ------ always changes
    cout << &name << '\n';
    cout << &student << '\n';
    cout << &age << '\n';

    return 0;
}

*/
/*
// pass by VALUE
// pass by REFERENCE

void swap(string &x, string &y)
int main(){

    string x = "Kool-Aid";
    string y = "Water";
    
    swap(x, y);

    cout << x << " " << y;

    return 0;
}

void swap(string &x, string &y){ // this creats a copy of the two vairbles -- after removing the &
                                // by adding the &, it is saved by the memory of the PC so then it can channce values
    string temp;

    temp = x;
    x = y;
    y = temp;
}
*/



/*
void print(const string name, const int age);
int main() {

    // const parameter = parameter that is effectively read-only
    //                   code is more secure & convrys intent
    //                  useful for refernces and pointers

    string name = "Sourish";
    int age = 15;

    print(name, age);

    return 0;
}

void print(const string name, const int age){ // this allows you to make a copy of the normal varibles, 
                                                //but then make it read only, so you cannot change it
    cout << name << " " << age '\n';
}
*/


/*

//CREDIT CARD VALIDATOR PROGRAM
int getDigit(const int number);
int sumOddDigit(const string cardNumber);
int sumEvenDigit(const string cardNumber);

int main(){
    string cardNumber;
    int result = 0;

    cout << "Enter a credit card number: ";
    cin >> cardNumber;

    // Sum the digits at odd and even positions and add them
    result = sumEvenDigit(cardNumber) + sumOddDigit(cardNumber);

    // Check if the sum is divisible by 10
    if(result % 10 == 0){
        cout << "VALID CARD";
    }  
    else{
        cout << "INVALID CARD";
    }

    return 0;
}

// This function returns the sum of the digits in a number
int getDigit(const int number){
    return number % 10 + (number / 10 % 10);
}

// This function returns the sum of digits at odd positions in the card number
int sumOddDigit(const string cardNumber){
    int sum = 0;  // Initialize sum to 0

    for(int i = cardNumber.size() - 1; i >= 0; i -= 2){
        sum += cardNumber[i] - '0';
    }
    return sum;
}

// This function returns the sum of digits at even positions in the card number
int sumEvenDigit(const string cardNumber){
    int sum = 0;  // Initialize sum to 0

    for(int i = cardNumber.size() - 2; i >= 0; i -= 2){
        sum += getDigit((cardNumber[i] - '0') * 2); // Get the digit sum
    }
    return sum;
}
*/



/*
int main(){

    // pointers = varible that stores a memory address of another variable
    //              sometimes its easier to work with an address

    // &address-of operator
    // * derefernce operator

    string name = "Sourish";
    int age = 15;
    string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"}; 

    string *pName = &name; // this is a pointer
    int *pAge = &age;
    string *pFreePizzas = freePizzas; // you dont need &freePizza becuase an array alr has an address
    

    cout << *pName << '\n'; // will show the value of the varible
    cout << pName; // will show address
 
    cout << pAge << '\n';
    cout << *pAge << '\n';
    cout << *pFreePizzas << '\n';



    return 0;
}

*/

/*

int main(){

    // Null value = a special value that means something has no value.
    //              when a pointer is holding a null value
    //              that pointer is not pointing at anything (null pointer)

    // nullptr = keyboard represents a null pointer literal

    // nullptrs are helpful when determining if an address 
    // was successfully assigned to a pointer

    int *pointer = nullptr;
    int x = 123;
    pointer = &x;
    



    return 0;
}

*/   


/*

TIC TAC TOE GAME

void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char player, char computer);
bool checkTie(char *spaces);

int main(){

    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;


    drawBoard(spaces);
    
    while(running){
        playerMove(spaces, player);
        drawBoard(spaces);
        if (checkWinner(spaces, player, computer)){
            running = false;
            break;
        }

        else if(checkTie(spaces) == true){
            running = false;
            break;
        }

        computerMove(spaces, computer);
        drawBoard(spaces);
        if (checkWinner(spaces, player, computer)){
            running = false;
            break;
        }
        else if(checkTie(spaces) == true){
            running = false;
            break;
        }
    }
    cout << "Thanks for playing\n";


    
    
    return 0;
}

void drawBoard(char *spaces){
    cout << '\n';
    cout << "     |     |     " << '\n';
    cout << "   " << spaces[0] << " |  " << spaces[1] << "  |   " << spaces[2] << "  " << '\n';
    cout << "_____|_____|_____" << '\n';
    cout << "     |     |     " << '\n';
    cout << "   " << spaces[3] << " |  " << spaces[4] << "  |   " << spaces[5] << "  " << '\n';
    cout << "_____|_____|_____" << '\n';
    cout << "     |     |     " << '\n';
    cout << "   " << spaces[6] << " |  " << spaces[7] << "  |   " << spaces[8] << "  " << '\n';
    cout << '\n';

    
}
void playerMove(char *spaces, char player){
    int number;
    
    do{
        cout << "Enter a spot to place a marker (1-9): ";
        cin >> number;
        number--;
        if(spaces[number] == ' '){
            spaces[number] = player;
            break;
        }
    }while(!number > 0 || !number < 8);
    
}
void computerMove(char *spaces, char computer){
    int number;
    srand(time(NULL));

    while(true){
        number = rand() % 9;
        if(spaces[number] == ' '){
            spaces[number] = computer;
            break;
        }
    }
    
}
bool checkWinner(char *spaces, char player, char computer){
    // *******************************LEFT TO RIGHT *********************************************
    if(spaces[0] != ' ' && spaces[0] == spaces[1] && spaces[1] == spaces[2]){
        spaces[0] == player ? cout << "YOU WIN\n" : cout << "YOU LOSE\n";
        
    }
    else if(spaces[3] != ' ' && spaces[3] == spaces[4] && spaces[4] == spaces[5]){
        spaces[3] == player ? cout << "YOU WIN\n" : cout << "YOU LOSE\n";
        
    }
    else if(spaces[6] != ' ' && spaces[6] == spaces[7] && spaces[7] == spaces[8]){
        spaces[6] == player ? cout << "YOU WIN\n" : cout << "YOU LOSE\n";
        
    }
    // *******************************TOP TO BOTTOM *********************************************
    else if(spaces[0] != ' ' && spaces[0] == spaces[3] && spaces[3] == spaces[6]){
        spaces[0] == player ? cout << "YOU WIN\n" : cout << "YOU LOSE\n";
        
    }
    else if(spaces[1] != ' ' && spaces[1] == spaces[4] && spaces[7] == spaces[5]){
        spaces[1] == player ? cout << "YOU WIN\n" : cout << "YOU LOSE\n";
        
    }
    else if(spaces[2] != ' ' && spaces[2] == spaces[5] && spaces[5] == spaces[8]){
        spaces[2] == player ? cout << "YOU WIN\n" : cout << "YOU LOSE\n";
        
    }
    

    // ******************************* diagonally *********************************************

    else if(spaces[0] != ' ' && spaces[0] == spaces[4] && spaces[4] == spaces[8]){
        spaces[0] == player ? cout << "YOU WIN\n" : cout << "YOU LOSE\n";
        
    }
    else if(spaces[2] != ' ' && spaces[2] == spaces[4] && spaces[4] == spaces[6]){
        spaces[2] == player ? cout << "YOU WIN\n" : cout << "YOU LOSE\n";
        
    }
    else{
        return false;
    }
     
    



    return true;
}
bool checkTie(char *spaces){

    for(int i = 0; i < 9; i++){
        if(spaces[i] == ' '){
            return false;
        }

    }
    cout << "IT IS A TIE!\n";

    return true;
}


*/


/*
int main() {

    // Dynamic memory = Memory that is alocated after the program
    //                  is alreadt compiled & running
    //                  Use the 'new' operator to allocate
    //                  memory in the heap rater than the stack


    //                  useful when we dont know much memory
    //                  we will need. Makes our program more flexible,
    //                  especially when accepting user input.
    
    int *pNum = NULL;

    pNum = new int;

    *pNum = 21;
    cout << pNum << '\n';
    cout << *pNum << '\n';

    delete pNum;

    return 0;
}
*/


/*
THIS IS NORMAL I GUESS
//void walk(int step); // 1
int main(){

    // Recursion = a programming technique  where a funcition 
    //              invokes itself from within 
    //              break a complex concept into a repeatable single step

    // (iterative vs recurcive)

    //ADJ : less code and is cleaner
    //      use ful for sorting and searching algorithms

    //dis- ADJ : uses more memory and slower
    //walk(100); // 1
    //NOTE:: 1 is iterative and no number is recursive
    work(100)


    return 0;
}
void walk(int step){
    //for(int i = 0; i < step; i++){       // 1
    //    cout << "You take a step. \n";   // 1
    //}                                    // 1
    if(step > 0){
        cout << "Take a step, \n";
        walk(step - 1);
    }
}

*/

//STILL IN THE ABOVE TOPIC
//FACTORIAL VERSION

// ITERATIVE
/*
int factorial(int num);

int main(){

    cout << factorial(10);

    return 0;
}

int factorial(int num){
    int result = 1;
    for(int i = 0; i <= num; i++){
        result = result * i;

    }
    return result;
}

*/


//RECURCIVE
/*
int factorial(int num);
int main(){

    cout << factorial(10);

    return 0;
}
int factorial(int num){

    if (num > 1){
        return num * factorial(num - 1);
    }
    else{
        return 1;
    }

}
*/

/*
template <typename T, typename U>
T max(T x, T y){
    return(x > y) ? x : y;
}
// V using AUTO instead of U, can alllow v
U max(U x, T y){  // allows you to mix and match data types
    return(x > y) ? x : y
}

int main(){

    // function template = decribles what a function looks like.
    //                    can be used to generate as many overload is_function
    //                    as needed, each using different data types
    cout << max(1, 2);
    cout << max(1.1, 2.1);
    cout << max('1.1', '2.1');

    return 0;
}
*/


/*
struct student{
    string name;
    double GPA;
    bool enrolled;
};

int main(){

    // struct = A structure that group related varibles under one name
    //          struct can contain many different data types (string, int, double, bool, etc)
    //          varibles in a struct are known as 'Members'
    //          members can be access with ."Class Member access operator"

    
    student student1;
    student student2;

    student1.name = "SpongeBob";
    student1.GPA = 3.1;
    student1.enrolled = true;

    student2.name = "Patrick";
    student2.GPA = 2.1;
    student2.enrolled = true;

    cout << student1.name << '\n';
    cout << student1.GPA << '\n';
    cout << student1.enrolled << '\n';

    cout << student2.name << '\n';
    cout << student2.GPA << '\n';
    cout << student2.enrolled << '\n';
    

    return 0;
}

*/


/*
struct cars{
    string model;
    int year;
    string colour;
};

void printCar(cars car);
int main(){

    cars car1;
    cars car2;

    car1.model = "Mustang";
    car1.year = 2024;
    car1.colour = "Red";
    car2.model = "GTR";
    car2.year = 2024;
    car2.colour = "Blue";

    printCar(car2);

    return 0;
}

void printCar(cars car){
    cout << car.model << '\n';
    cout << car.year << '\n';
    cout << car.colour << '\n';
    
}

*/


int main(){

//5:14
    return 0;
}




