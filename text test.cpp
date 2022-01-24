#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

using namespace std;
int main ()
{

    //Clock starts running

    clock_t start, end;
    start = clock();
    cout<< "Enter the following words: \n \n";
    string sentence;

    //Program "reads" test.text, clock still running

    string line;
    ifstream myfile ("test.txt");
    if (myfile.is_open())
    {
    while ( myfile.good() )
    {
      getline (myfile,line);
      cout << line << endl;

    //Code for data input
      cout<<"\n";
      cin >> sentence;

    //Code to determine input accuracy

    }
    myfile.close();
    }

    //Clock ends running

    end = clock();
    double seconds = (double)(end - start) / CLOCKS_PER_SEC;
    cout << "\nTyping the sentence took " << seconds << " seconds.\n \n";
    cout<<"Your typing speed is "<<(seconds/6) <<" words per  second or "<< (seconds/6)*60<< " words per minute. \n \n";
    cout<<"Your typing accuracy though is unknown. \n \n";

    system("PAUSE");
    return EXIT_SUCCESS;
}