//Author:Abdulaziz Alhadbah
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
        ifstream in("example.txt");
        char first = ' ', last = ' ', current;

        while(!(in.eof()))
        {
                if(first == ' ')
                {
                        in>>first;
                }

                in>>current;
                if((current >= 'a' && current <= 'z') || (current >= 'A' && current <= 'Z'))
                {
                        last = current;
                }
        }



        //Read from the file opened by in, and the first letter (either upper or
        //lower case) should be assigned to first and the last letter (again in
        //either case) from the file to the variable last



        //Then, finally, this displays the censored version:
        cout<<first<<"**"<<last<<endl;

        return 0;
}
