#include <iostream>
#include <vector>
#include <list>

using namespace std;

void merge_sort(vector<int>& vec, list<list<int> >& result) {
    result.clear();
    for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        list<int> new_list;
        new_list.push_back(*it);
        bool inserted = false;
        for (list<list<int> >::iterator result_it = result.begin(); result_it != result.end(); ++result_it) {
            if (new_list.front() < result_it->front()) {
                result.insert(result_it, new_list);
                inserted = true;
                break;
            }
            else if (new_list.front() == result_it->front()) {
                result_it->push_back(*it);
                inserted = true;
                break;
            }
        }
        if (!inserted) {
            result.push_back(new_list);
        }
    }
}

int main() {
    vector<int> vec = {3, 7, 2, 1, 6, 5, 4};
    list<list<int> > result;
    merge_sort(vec, result);
    for (list<list<int> >::iterator it = result.begin(); it != result.end(); ++it) {
        for (list<int>::iterator inner_it = it->begin(); inner_it != it->end(); ++inner_it) {
            cout << *inner_it << " ";
        }
        cout << endl;
    }
    return 0;
}
