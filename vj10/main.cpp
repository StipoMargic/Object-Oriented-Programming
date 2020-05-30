#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>
#include <algorithm>

using namespace std;

void function()
{
    vector<int> fileVector;

    ifstream f("numbers.txt");

    if (!f)
    {
        throw "File dosen't exist!";
    }

    istream_iterator<int> is(f), eos;
    copy(is, eos, back_inserter(fileVector));

    auto lambda = [](int i) { return i > 500; };

    int countGreaterThan500 = count_if(fileVector.begin(), fileVector.end(), lambda);

    // cout << countGreaterThan500;

    int min = *std::min_element(fileVector.begin(), fileVector.end());
    int max = *std::max_element(fileVector.begin(), fileVector.end());

    cout << "Min is: " << min << ". \n"
         << "Max is: " << max << ". \n";

    auto lessThan300 = [](int i) { return i < 300; };

    vector<int>::iterator it = remove_if(fileVector.begin(), fileVector.end(), lessThan300);

    //     // New vetor
    //     ostream_iterator<int> os(cout, ",");
    //     copy(fileVector.begin(), it, os);

    sort(fileVector.begin(), it, greater<int>());

    //  Sorted Vector
    ostream_iterator<int> os(cout, ",");
    copy(fileVector.begin(), it, os);
}
int main()
{
    try
    {
        function();
    }
    catch (const char *err)
    {
        cout << err << endl;
    }

    return 0;
}
