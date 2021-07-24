#include <iostream>
#include <vector>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;

struct Question{
    string question;
    vector <string> answers;
    int answer;
};
int start_trivia(Question q){
    int response;
    cout<<q.question<<endl;
    for(int i=0; i<3; i++){
        cout<< i+1<<". "<<q.answers[i]<<endl;
    };
    cout<<"answer with 1-3"<<endl;
    cin>>response;
    if(response==q.answer){
        cout<<"Correct!"<<endl;
        return 1;
    }else{
        cout<<"Not quite. The answer should be"<<endl;
        cout<<q.answers[q.answer-1]<<endl;
        return 0;
    }
};
int main(){
    vector <Question> exam;
    int count=0;
   Question question1,question2, question3, question4,question5;
   question1.question="Which is greater? ";
   question1.answers={"Zero", "-1", "-2"};
   question1.answer=1;
    question2.question="Who is the president of Kenya ";
   question2.answers={"William Ruto", "Raila Odinga", "Uhuru Kenyata"};
   question2.answer=3;
   question3.question="Which one of the following is not a programming language ";
   question3.answers={"C++", "HTML", "Ada"};
   question3.answer=2;
   question4.question="Which one of the following is not a European country ";
   question4.answers={"Vatican-city", "Seacheles", "Georgia"};
   question4.answer=2;
   question5.question="how many metres is one killometre ";
   question5.answers={"100", "10000", "1000"};
   question5.answer=3;
   exam={question1,question2, question3, question4, question5};
   int score=0;
   for(Question quiz: exam){
       score+=start_trivia(quiz);
   };
   cout<<"You got "<<score<<" Out of 5"<<endl;
    return 0;
}