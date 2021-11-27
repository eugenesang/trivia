# Programming Q n A
## Questions
### 1. Tutorial by [Code Beauty](https://youtu.be/9j5KkOC_goQ)
### Solution
trivia.cpp
### 2. Workers
### Question
Northern Construction Company has 200 casual workers categorized A, B, and C.
The company computes their wages in the following manner:

A worker in category **A** gets paid `Ksh. 800` per day if he/she works for  `20 days` and `Ksh. 650` per day if he/she worked for `less than 20 days`. 

A worker in category **B** gets paid `Ksh. 500` per day if he/she works for `20 days` and `Ksh. 350` per day if he/she works for `less than 20 days`.

A worker in category **C** gets paid `Ksh. 250` per day if he/she works for `20 days` and `Ksh. 100` per day if he/she works for `less than 20 days`.

In order to motivate the workers, if any of them had worked for `more than 20 days`, an additional pay of `Ksh. 1400`, `Ksh. 1100` and `Ksh. 800` is paid to workers of category **A**, **B** and **C** respectively for each additional day

1. Generate a program flowchart for the company to be used to solve the problem.
2. Formulate  a pseudo code
3. Translate your flowchart int a source code using a suitable high level langage

### Solution
| Job Category | pay for < 20 days | pay for 20 days | pay for extra days |
|--------------|-------------------|-----------------|--------------------|
| A            | 650               | 800             | 1400               |
| B            | 350               | 500             | 1100               |
| C            | 100               | 250             | 800                |

### Pseudo code
```
JobCategory{
    less
    extra
    exact
} 

worker{
    JobCategory
    daysWorked
}

JobCategory A, B, C

A={
    less=650
    extra=1400
    exact=800
}
B={
    less=350
    extra=1100
    exact=500
}
C={
    less=100
    extra=800
    exact=250
}
Worker one, two, three
one={
    JobCategory=A
    daysWorked=23
}
two={
    JobCategory=B
    daysWorked=17
}
three={
    JobCategory=C
    daysWorked=20
}

subroutine workersPay( worker)
    if worker.daysWorked>20 then
        return 20*worker.JobCategory.exact*(worker.daysWorked-20)*worker.JobCategory.extra
    else if worker.daysWorked == 20 then
        return worker.daysWorked*worker.JobCategory.exact
    else 
        return worker.daysWorked*worker.JobCategory.less
    end if
end subroutine

print (workersPay(one))
```
### Suitable high level programming languages
> workers
>> C -structures
>> 
>> C++ -oop
>> 
>> Java -oop
>> 
>> Javascritp -oop
>> 
>> Python -oop
