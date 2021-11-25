#include <iostream>
class Job{
    private:
    int less, extra, exact;
    public:
    Job(int ls, int eq, int xt){
        less=ls;
        exact=eq;
        extra=xt;
    }
    int pay(int days){
        if(days<20){
            return days*less;
        }else if(days==20){
            return days*exact;
        }else{
            return 20*exact+(days%20)*extra;
        }
    }
};
Job A(600, 800, 1200);
Job B(500, 700, 1100);
Job C(250, 500, 1000);
class Worker
{
    private:
    char job;
    int days;
    public:
    Worker(char j, int d)
    {
        job=j;
        days=d;
    }
    int salary(){
        if(job=='A') return A.pay(days);
        else if (job=='B') return B.pay(days);
        else return C.pay(days);
    }
};

int main(){
    Worker a('A', 23);
    std::cout<<a.salary()<<std::endl;
    return 0;
}