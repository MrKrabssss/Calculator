#include <iostream>
#include <string>
using namespace std;


int main()
{
    string arithmetic_example;
    getline(cin, arithmetic_example);


    for (int i = 0; i <= size(arithmetic_example); i++)
    {
        if (arithmetic_example[i] == 43)
        {
            string first = "";
            string second = "";
            int c = i - 1;
            int x = i + 1;
            do
            {
                if (arithmetic_example[c] > 47 and arithmetic_example[c] < 58)
                {
                    first += arithmetic_example[c];
                    c--;
                }
                else
                    break;
            } while (c >= 0);
            do
            {
                if (arithmetic_example[x] > 47 and arithmetic_example[x] < 58)
                {
                    second += arithmetic_example[x];
                    x++;

                }
                else
                    break;
            } while (true);

            cout << stoi(first) + stoi(second);
        }
               
        if (arithmetic_example[i] == 45)
        {
            string first = "";
            string second = "";
            int c = i - 1;
            int x = i + 1;
            do
            {
                if (arithmetic_example[c] > 47 and arithmetic_example[c] < 58)
                {
                    first += arithmetic_example[c];
                    c--;
                }
                else
                    break;
            } while (c >= 0);
            do
            {
                if (arithmetic_example[x] > 47 and arithmetic_example[x] < 58)
                {
                    second += arithmetic_example[x];
                    x++;

                }
                else
                    break;
            } while (true);

            cout << stoi(first) - stoi(second);
        } 

        if (arithmetic_example[i] == 42)
        {
            string first = "";
            string second = "";
            int c = i - 1;
            int x = i + 1;
            do
            {
                if (arithmetic_example[c] > 47 and arithmetic_example[c] < 58)
                {
                    first += arithmetic_example[c];
                    c--;
                }
                else
                    break;
            } while (c >= 0);
            do
            {
                if (arithmetic_example[x] > 47 and arithmetic_example[x] < 58)
                {
                    second += arithmetic_example[x];
                    x++;

                }
                else
                    break;
            } while (true);

            cout << stoi(first) * stoi(second);
        }

        if (arithmetic_example[i] == 58)
        {
            string first = "";
            string second = "";
            int c = i - 1;
            int x = i + 1;
            do
            {
                if (arithmetic_example[c] > 47 and arithmetic_example[c] < 58)
                {
                    first += arithmetic_example[c];
                    c--;
                }
                else
                    break;
            } while (c >= 0);
            do
            {
                if (arithmetic_example[x] > 47 and arithmetic_example[x] < 58)
                {
                    second += arithmetic_example[x];
                    x++;

                }
                else
                    break;
            } while (true);

            cout << stoi(first) / stoi(second);
        }
    }
}