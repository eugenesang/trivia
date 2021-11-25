class Job:
    def __init__(self, exact, less, extra):
        self.exact=exact
        self.less=less
        self.extra=extra

    def pay(self, days):
        if days<20:
            return days*self.less
        elif days==20:
            return days*self.exact
        else :
            return 20*self.exact+(days%20)*self.extra


class Worker:
    def __init__(self, days, job):
        self.days=days
        self.job=job
    
    def salary(self):
        return self.job.pay(self.days)


A= Job(800, 600, 1200)
B=Job(700, 500, 1100)
c=Job(500, 250, 1000)

a=Worker(23, A)
print(a.salary())