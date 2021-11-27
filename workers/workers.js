class Job{
    constructor(exact, less, extra){
        this.exact=exact;
        this.extra=extra;
        this.less=less;
    }
    pay=(days)=>{
        if(days<20) return days*this.less; 
        else if(days===20) return days*this.exact;
        else return this.exact*20+this.extra*(days%20);
    }
}
class worker{
    constructor(days, job){
        this.days=days;
        this.job=job;
    }
    salary=()=> this.job.pay(this.days);
};
let A=new Job(800, 600, 1200);
let B=new Job(700, 500, 1100);
let C=new Job(500, 250, 1000);
let a=new worker(23, A);
console.log(a.salary());
