#include <iostream>
#include <vector>
#include <string>

using namespace std;

/* it strongly recommend to use "typename" instead of "class".
 * But as "class" is in sample code, I use "class" here.
 * */
template <class T>
class TemplateData
{
    public:
        void Add(T arg) { data_.push_back(arg); };
        int Size() { return data_.size(); }
        void print_data()
        {
            for (int i = 0; i < Size(); i++)
                cout << "data_ : " << data_.at(i) << endl;
        }
        void print_size()
        {
            cout << data_.size() << endl;
        }

    private:
        vector<T> data_;
};

int main()
{
    TemplateData<int> data_int;
    data_int.Add(1);
    data_int.Add(2);
    data_int.print_size();
    data_int.print_data();

    TemplateData<string> data_string;
    data_string.Add("Hello");
    data_string.Add("World");
    data_string.Add("!!");
    data_string.print_size();
    data_string.print_data();

    return 0;
}
