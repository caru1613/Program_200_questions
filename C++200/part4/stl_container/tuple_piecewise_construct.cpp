#include <iostream>
#include <tuple>

using namespace std;

struct TupleExam {
    TupleExam(tuple<int, string>) {
        cout << "Send argument with Tuple" << endl;
    }

    TupleExam(int n, string s) {
        cout << "Send argument with  piecewis_construct" << endl;
    }
};

int main()
{
    tuple<int, string> data(1, "str");
    
    pair<TupleExam, TupleExam> data1(data, data);
    cout << endl;
    pair<TupleExam, TupleExam> data2(piecewise_construct, data, data);
    cout << endl;
    pair<TupleExam, TupleExam> data3(make_tuple(2, "str"), make_tuple(2, "str"));
    cout << endl;
    pair<TupleExam, TupleExam> data4(piecewise_construct, make_tuple(2, "str"), make_tuple(2, "str"));
    cout << endl;
        
    return 0;
}
