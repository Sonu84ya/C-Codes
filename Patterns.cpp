#include <iostream>
using namespace std;

int main()
{
    // 4*4 Square pattern
    int n = 4;

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            cout << j + 1;
        }
        cout << endl;
    }

    // Character pattern
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 'A'; j < 'E'; j++)
        {
            cout << ch << " ";
            ch = ch + 1;
        }
        cout << endl;
    }
    char heart = 6;
    cout << endl
         << "heart " << heart << endl;
    for (int i = 0; i < n; i++)
        char ch = 'a';
    for (int j = 0; j < n; j++)
    {
        cout << ch << " ";
        ch = ch + 1;

        cout << endl;
    }
    cout << endl;
    // * Triangle pattern
    n = 10;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // Numbers triangle pattern
    n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << i + 1 << " ";
        }
        cout << endl;
    }

    // Alphabet triangle pattern

    char ch2 = 'A';
    n = 8;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << ch2 << " ";
        }
        ch2++;
        cout << endl;
    }

    // Reverse triangle
    n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {
            cout << j;
        }
        cout << endl;
    }

    // Floyd`s Triangle Pattern
    n = 4;
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    // Floyad`s Captital Letter Triangle Pattern

    n = 4;
    char new_ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << new_ch << " ";
            new_ch = new_ch + 1; // Here implicit type cate is performed
        }
        cout << endl;
    }

    // Floyad`s Small Letter Triangle Pattern
    n = 4;
    new_ch = 'a';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << new_ch << " ";
            new_ch = new_ch + 1; // Here implicit type cate is performed
        }
        cout << endl;
    }
    cout << endl;
    // Inverted Triangle Pattern

    n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 5; j > i + 1; j--)
        {
            cout << i + 1 << " ";
        }
        cout << endl;
    }

    // Mountain pattern for myself
    cout << endl
         << "preparing for mountain pattern" << endl;
    n = 10;
    for (int i = 0; i < n; i++)
    {
        num = 1;
        for (int j = n - (i + 1); j > 0; j--)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << num << "";
            num++;
        }
        num = i + 1;
        for (int j = 0; j < i + 1; j++)
        {
            cout << num << "";
            num--;
        }
        for (int j = 0; j < n - (i + 1); j++)
        {
            cout << " ";
        }
        cout << endl;
    }

    // By youtube
    n = 4;
    for (int i = 0; i < n; i++)
    {

        // spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << j + 1;
        }
        for (int j = i; j > 0; j--)
        {
            cout << j;
        }
        cout << endl;
    }

    // Hollow Diamond Pattern
    n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            if (i == j)
            {
                cout << "*";
            }
        }
        for (int j = 0; j < 2 * i - 1; j++)
        {
            cout << " ";
        }
        for (int j = i; j > 0; j--)
        {
            if (j == i)
            {
                cout << "*";
            }
        }

        cout << endl;
    }

    cout << endl
         << "This is another method: " << endl;
    n = 7;
    for (int i = 0; i < n; i++)
    {
        if (i < 4)
        {
                for (int j = 0; j < n - i - 1; j++)
                {
                    cout << " ";
                }
                for (int j = 0; j < i + 1; j++)
                {
                    if (i == j)
                    {
                        cout << "*";
                    }
                }
                for (int j = 0; j < 2 * i - 1; j++)
                {
                    cout << " ";
                }
                for (int j = i; j > 0; j--)
                {
                    if (j == i)
                    {
                        cout << "*";
                    }
                }
        }
        else
        {
            for (int j = 0; j < i; j++)
            {

                cout << " ";
            }
            for (int j = 0; j < i + 1; j++)
            {
                if (j == i)
                {
                    cout << "*";
                }
            }
            for (int j=0; j<n-i; j++){
                cout<<" ";
            }
            for(int j=0 ; j<n-i ; j++ ){
                if(j==i){
                cout <<"*";
                }
            }
        }
        cout << endl;
    }
}
