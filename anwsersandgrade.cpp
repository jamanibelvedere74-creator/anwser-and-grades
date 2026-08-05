#include <iostream>
using namespace std;

int main(){

int score = 0;


int answer1;
int answer2;

cout << "welcome to anwsers and grade:" << '\n';

cout << "whats 1+1";
cin >> answer1;
if (answer1 == 2)
{
    score++;
}

cout << "whats 6 - 4" << '\n';
cin >> answer2;
if (answer2 == 2)
{
    score++;
}


if (score == 2)
{
    cout << "ok im done grading your work and you got 100%";
} 
else if (score == 1)
{
    cout << "ok im done grading your work and you got 50%";
}
else if (score == 0)
{
    cout << "im done grading your work and you got 0% would you like me to tell your parents or well you do it";
}




    return 0;
}