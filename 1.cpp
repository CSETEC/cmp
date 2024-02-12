#include<bits/stdc++.h>

using namespace std;


int main()
{

    freopen("1.input.txt", "r", stdin);
    string word;

    while (getline(cin, word))
    {
        bool isValid = true;

        cout << word << " : ";

        int ln = word.size();

        if (word.size() >= 4 && ((word.substr(0, 3) == "ch_")))
        {
            for(int i = 4; i < word.size(); i++)
            {
                if(!isalnum(word[i]))
                {
                    isValid = false;
                    break;
                }
            }
            if(isValid)
            {
                if(word.substr(0, 3) == "ch_") cout << "Character variable\n";
            }
        }

        else if(word.size() >= 2 && word[0] == '0' && (word[1] == '1' || word[1] == '0'))
        {
            for(int i = 2; i < word.size(); i++)
            {
                if(word[i] != '0' && word[i] != '1')
                {
                    isValid = false;
                    break;
                }
            }
            if(isValid) cout << "Binary Number\n";
        }

        else if (tolower(word[0]) >= 'i' && tolower(word[0]) <= 'n')
        {
            for (int i = 1; i < word.size(); i++)
            {
                if (!isalnum(word[i]) && word[i] != '_')
                {
                    isValid = false;
                    break;
                }
            }
            if(isValid) cout <<"Integer variable\n";
        }
        else if(word[0] <= '9' && word[0] >= '1') {
            for(int i = 1; i < word.size(); i++) {
                if(!isdigit(word[i])) {
                    isValid = false;
                    break;
                }
            }
            if(isValid) {
                cout<<"Integer Number\n";
            }
        }


        else isValid = false;
        if(!isValid) cout << "Undefined\n";
    }

    return 0;
}
