# include <iostream> 

using namespace std;

int main()

{
    string name = "Bob";

    int age;
    age = 80;
    
    int ageofdeath;
    ageofdeath = 100;

    string mom = "Rebecca";
    string father = "Jeff";
    string pronounofbob = "His";

    cout  << "There was once a man named " << name << endl;
    cout  << "He was " << age << " years old" << endl;
    cout  << "He liked the name " << name << endl;
    cout  << "But did not like being old" << endl;
    cout  << pronounofbob << " mom is " << mom << endl;
    cout  << pronounofbob << " father is " << father << endl; 
    cout  << pronounofbob << " death will happen in 2042 at the age of " << ageofdeath << endl;

    return 0;
}
