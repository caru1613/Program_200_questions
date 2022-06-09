#include <iostream>
#include <string>

using namespace std;

int main()
{
    string sentence = "I like coding.";
    /* remove() returns all offsets of ' ' in the sentence, from sentence.begin() to sentence.end() */
    /* erase() erases offsets which is returned by remove() */
    sentence.erase(remove(sentence.begin(), sentence.end(), ' '), sentence.end());

    cout << sentence << endl;

    string s = "This is an example.";
    cout << s << endl;

    s.erase(0, 5);
    cout << s << endl;

    /* It removes first ' ' only */
    s.erase(find(s.begin(), s.end(), ' '));
    cout << s << endl;

    /* It removes all sentence from ' ' by find() */
    s.erase(s.find(' '));
    cout << s << endl;

    return 0;
}
