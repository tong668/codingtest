//
// Created by Administrator on 2022/9/11.
//
#include <vector>
#include <string>
#include <iostream>
#include <iterator>
#include <algorithm>

using namespace std;

void VectorTest() {
    // create empty vector for strings
    vector <string> strVec;

    // reserve memory for five elements to avoid reallocation
    strVec.reserve(5);

    // append some elements
    strVec.push_back("Hello,");
    strVec.insert(strVec.end(), {"how", "are", "you", "?"});

    // print elements separated with spaces
    copy(strVec.begin(), strVec.end(), ostream_iterator<string>(cout, " "));
    cout << endl;
    // 输出
    for (const auto &e:strVec) {
        cout << e << " ";
    }
    cout << endl;

//    // print "technical data"
//    cout << "  max_size(): " << sentence.max_size() << endl;
//    cout << "  size():     " << sentence.size()     << endl;
//    cout << "  capacity(): " << sentence.capacity() << endl;
//
//    // swap second and fourth element
//    swap (sentence[1], sentence[3]);
//
//    // insert element "always" before element "?"
//    sentence.insert (find(sentence.begin(),sentence.end(),"?"),
//                     "always");
//
//    // assign "!" to the last element
//    sentence.back() = "!";
//
//    // print elements separated with spaces
//    copy (sentence.cbegin(), sentence.cend(),
//          ostream_iterator<string>(cout," "));
//    cout << endl;
//
//    // print some "technical data" again
//    cout << "  size():     " << sentence.size()     << endl;
//    cout << "  capacity(): " << sentence.capacity() << endl;
//
//    // delete last two elements
//    sentence.pop_back();
//    sentence.pop_back();
//    // shrink capacity (since C++11)
//    sentence.shrink_to_fit();
//
//    // print some "technical data" again
//    cout << "  size():     " << sentence.size()     << endl;
//    cout << "  capacity(): " << sentence.capacity() << endl;
}