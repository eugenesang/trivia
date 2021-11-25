#include <stdio.h>
struct Job
{
    int less;
    int exact;
    int more;
};
struct Worker
{
    struct Job job;
    int days;
};
int worker_pay(struct Worker worker){
    if(worker.days<20){
        return worker.days * worker.job.less;
    }else if(worker.days ==20){
        return worker.days*worker.job.exact;
    }else{
        return 20*worker.job.exact+(worker.days-20)*worker.job.more;
    }
}
int main(){
    struct Job A, B, C;
    A.exact=800; A.less=650; A.more=1400;
    B.exact=600; B.less=450; B.more=1200;
    C.exact=500; C.less=250; C.more=1000;
    struct Worker a;
    a.job=C;
    a.days=23;
    printf("%d \n", worker_pay(a));
    return 0;
}
