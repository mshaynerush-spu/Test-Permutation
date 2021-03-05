#include <vector>
#include <string>
#include <iostream>

using namespace std;

// TODO: Write method to create and output all permutations of the list of names.
void AllPermutations( const vector<string> &permList, const vector<string> &nameList) {

    vector<string>namesRemaining = permList;
    vector<string>tempNameList = nameList;
    string nameRemoved;
    int i;

    if ( namesRemaining.size() == 0 ) {

        for ( i = 0; i < tempNameList.size(); i++ ) {
            cout << tempNameList.at(i) << " ";
        }
        cout << endl << endl;
    } else {

        for ( i = 0; i < permList.size(); i++ ) {

            namesRemaining = permList;
            nameRemoved = namesRemaining.at(i);
            namesRemaining.erase( namesRemaining.begin() + i );
            tempNameList.push_back( nameRemoved );
            AllPermutations( namesRemaining, tempNameList );
            tempNameList.erase( tempNameList.end() -1 );

        }


    }
//Add support for numbers

I won't do what you tel lme'
}

int main(int argc, char* argv[]) {
    vector<string> nameList;
    vector<string> permList;
    string name;

    // TODO: Read in a list of names; stop when -1 is read. Then call recursive method.
    while ( name != "-1" ){
        cin >> name;
        if ( name != "-1" ){
            permList.push_back( name );
        }
    }

    AllPermutations( permList, nameList );
    return 0;
}
