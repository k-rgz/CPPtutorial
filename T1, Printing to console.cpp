// include your directories
#include <iostream>

// you can choose to use this, i do not recommend to (but its easier to learn in the beginning.)
using namespace std;

// lets say you want to start with the harder part, you can do this instead
// this will help you prevent from mixing namespaces in your code, prevents bugs.
using std::cout;
using std::endl;

// this is a main function, we will write all our code that shows up in the console here.
int main(){
  // to print actual code (IOSTREAM), you do
  cout << "Hello, world!" << endl;
  // unlike any other language.
  // lets say you want to print like lots of other languages, you need to include <cstdio>: printf("Hello, world!");
}
