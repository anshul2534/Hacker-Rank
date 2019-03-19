#include <set>
#include <iostream>
#include <iterator>

using namespace std;

int main()
{
    int no_of_elements;
    cin >> no_of_elements;

    set <int> S;
    for(int i = 1; i <= no_of_elements; i++)
    {
        int x;
        cin >> x;
        S.insert(x);
    }

    int answer = 0;

    int counter = 0;
    for(set <int> :: reverse_iterator it = S.rbegin(); it != S.rend(); it++)
    {
        counter++;

        if(counter == 2)
            answer = *it;
    }

    cout << answer;
    return 0;
}
