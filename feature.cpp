#include <iostream>
using namespace std;
int main()
{
        int num;
        cout << "Enter * count lines to make: ";
        cin >> num;
        cout<<"\t* Pattern: \n";
        for (int i = 0; i <num ; i++)
        {
                if (num > 0)
                {
                        for (int j = i; j < num; j++)
                        {
                                cout << "* ";
                        }
                        cout << "\n";
                }
        }
        return 0;
}