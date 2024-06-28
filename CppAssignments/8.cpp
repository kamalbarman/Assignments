#include <iostream>
#include <cstring>

using namespace std;

class String
{
private:
    char *p;
    int size;

public:
    
    String() : size(0)
    {
        p = nullptr;
    }

   
    String(const char *str) : size(strlen(str))
    {
        p = new char[size + 1];
        strcpy(p, str);
    }

    
    String(const String &other) : size(other.size)
    {
        p = new char[size + 1];
        strcpy(p, other.p);
    }

    ~String()
    {
        delete[] p;
    }

    String operator+(const String &other) const
    {
        String newString(p);
        newString.size += other.size;
        newString.p = new char[newString.size + 1];
        strcpy(newString.p, p);
        strcat(newString.p, other.p);
        return newString;
    }

   
    friend ostream &operator<<(ostream &out, const String &str)
    {
        return out << str.p;
    }

    void reverse()
    {
        for (int i = 0; i < size / 2; ++i)
        {
            swap(p[i], p[size - i - 1]);
        }
    }
};

int main()
{
    String str1("Hello");
    String str2("World");

    cout << "String 1: " << str1 << '\n';
    cout << "String 2: " << str2 << '\n';

    String str3 = str1 + str2;
    cout << "Concatenated String: " << str3 << '\n';

    
    String str4(str1);
    cout << "Copied String: " << str4 << '\n';

    cout << "Enter a new string: ";
    String str5;
    cin >> str5; 
    cout << "You entered: " << str5 << '\n';

    cout << "Reversing the new string: ";
    str5.reverse();
    cout << str5 << '\n';

    return 0;
}
