public class main{
    public static void main(String[] Args){
        Job A=new Job(800, 600, 1200);
        Job B=new Job(700, 500, 1100);
        Job C=new Job(500, 250, 1000);
        Worker a=new Worker(23, A);
        System.out.println(a.salary());
    }
}
public class Job{
    private int less, extra, exact;
    public Job(int exact, int less, int extra)
    {
        this.less=less;
        this.exact=exact;
        this.extra=extra;
    };
    public int pay(int days){
        if(days<20){
            return days*this.less;
        }else if(days==20){
            return days*this.exact;
        }else{
            return (20*exact)+(days%20)*extra;
        }
    }
}
public class Worker{
    private int days;
    private Job job;
    public Worker(int days, Job job){
        this.job=job;
        this.days=days;
    }
    public int salary(){
        return this.job.pay(this.days);
    }
}
