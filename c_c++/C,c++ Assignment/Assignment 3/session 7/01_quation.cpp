#include<iostream>
#include<fstream>
using namespace std;

int main(){
	ofstream file("my_fav_songs.txt");

    file << "Dark Arise" << endl;
    file << "la casa de papel" << endl;
    file << "Indila Love" << endl;
    file << "Tokyo Drift" << endl;
    file << "see you again" << endl;

    file.close();
	
	cout << "Songs saved successfully!" << endl;	
	
	return 0;
}
