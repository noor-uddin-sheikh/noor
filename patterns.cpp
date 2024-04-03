/*
/////////////////// CODE TO PRINT HALF TRIANGLE AT RIGHT SIDE //////
#include <iostream>
using namespace std;

int main()
{
    int i, j, row, space;
    cout << "Enter no. of rows" << endl;
    cin >> row;
    i = 1;
    while (i <= row)
    {
        space = row - i;
        while (space)
        {
            cout << " ";
            space--;
        }
        int j = 1;
        while (j <= i)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}

//////////////// TO PRINT INVERSE HALF TRIANGLE /////////////////

#include <iostream>
using namespace std;

int main()
{
    int i, j, row, space;
    cout << "Enter no. of rows" << endl;
    cin >> row;
    i = 1;
    while (i <= row)
    {
        int j = 1;
        while (j <= (row + 1 - i))
        {
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}


///////////// TO PRINT INVERSE HALF TRIANGLE AT RIGHT SIDE ///////////

#include <iostream>
using namespace std;

int main()
{
    int i, j, row, space;
    cout << "Enter no. of rows" << endl;
    cin >> row;
    i = 1;
    while (i <= row)
    {
        space = i - 1;
        while (space)
        {
            cout << " ";
            space--;
        }
        int j = i;
        while (j <= row)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}
////////////////////// TO PRINT PATTERN LIKE //////////
1234
 234
  34
   4

   #include <iostream>
using namespace std;

int main()
{
    int i, j, row, space;
    cout << "Enter no. of rows" << endl;
    cin >> row;
    i = 1;
    while (i <= row)
    {
        space = i - 1;
        while (space)
        {
            cout << " ";
            space--;
        }
        int j = 1;
        while (j <= row - i + 1)
        {
            cout << i + j - 1;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}
///////////////////////////// TO PRINT ///////////
    1
   121
  12321
 1234321

 #include <iostream>
using namespace std;

int main()
{
    int i, j, row, space;
    cout << "Enter no. of rows" << endl;
    cin >> row;
    i = 1;
    while (i <= row)
    {
        space = row - i;
        while (space)
        {
            cout << " ";
            space--;
        }
        int j = 1;
        while (j <= i)
        {
            cout << j;
            j++;
        }
        int first = i-1;
        while (first)
        {
            cout<< first;
            first--;
        }
        
        cout << endl;
        i++;
    }
    return 0;
}

/////////////// TO PRINT(my code) ////////////

12345**********54321
1234************4321
123**************321
12****************21
1******************1

#include <iostream>
using namespace std;

int main()
{
    int i, j, row, temp;
    cout << "Enter no. of rows" << endl;
    cin >> row;
    i = 1;

    while (i <= row)
    {
        int j = 1;
        while (j <= row + 1 - i)
        {
            cout << j;
            j++;
        }

        j = 2;
        while (j <= i)
        {
            cout << "**";
            j++;
        }
        j = row + 1 - i;
        while (j >= 1)
        {
            cout << j;
            j--;
        }
        cout << endl;
        i++;
    }

    return 0;
}


*/