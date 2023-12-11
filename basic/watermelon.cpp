/*
A. Watermelon
time limit per test1 second
memory limit per test64 megabytes
inputstandard input
outputstandard output
One hot summer day Pete and his friend Billy decided to buy a watermelon. They chose the biggest and the ripest one, in their opinion. After that the watermelon was weighed, and the scales showed w kilos. They rushed home, dying of thirst, and decided to divide the berry, however they faced a hard problem.

Pete and Billy are great fans of even numbers, that's why they want to divide the watermelon in such a way that each of the two parts weighs even number of kilos, at the same time it is not obligatory that the parts are equal. The boys are extremely tired and want to start their meal as soon as possible, that's why you should help them and find out, if they can divide the watermelon in the way they want. For sure, each of them should get a part of positive weight.

Input
The first (and the only) input line contains integer number w (1 ≤ w ≤ 100) — the weight of the watermelon bought by the boys.

Output
Print YES, if the boys can divide the watermelon into two parts, each of them weighing even number of kilos; and NO in the opposite case.

Examples
inputCopy
8
outputCopy
YES
*/


#include <iostream>
 
int main() {
    int w;
    std::cin >> w;
 
    if (w % 2 == 0 && w != 2) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
 
    return 0;
}
/*
→Judgement Protocol
Test: #1, time: 30 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
8
Output
YES
Answer
YES
Checker Log
ok answer is YES
Test: #2, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
5
Output
NO
Answer
NO
Checker Log
ok answer is NO
Test: #3, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
4
Output
YES
Answer
YES
Checker Log
ok answer is YES
Test: #4, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3
Output
NO
Answer
NO
Checker Log
ok answer is NO
Test: #5, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2
Output
NO
Answer
NO
Checker Log
ok answer is NO
Test: #6, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1
Output
NO
Answer
NO
Checker Log
ok answer is NO
Test: #7, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
7
Output
NO
Answer
NO
Checker Log
ok answer is NO
Test: #8, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
6
Output
YES
Answer
YES
Checker Log
ok answer is YES
Test: #9, time: 30 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
10
Output
YES
Answer
YES
Checker Log
ok answer is YES
Test: #10, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
9
Output
NO
Answer
NO
Checker Log
ok answer is NO
Test: #11, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
53
Output
NO
Answer
NO
Checker Log
ok answer is NO
Test: #12, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
77
Output
NO
Answer
NO
Checker Log
ok answer is NO
Test: #13, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
32
Output
YES
Answer
YES
Checker Log
ok answer is YES
Test: #14, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
44
Output
YES
Answer
YES
Checker Log
ok answer is YES
Test: #15, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
98
Output
YES
Answer
YES
Checker Log
ok answer is YES
Test: #16, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
99
Output
NO
Answer
NO
Checker Log
ok answer is NO
Test: #17, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
90
Output
YES
Answer
YES
Checker Log
ok answer is YES
Test: #18, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
67
Output
NO
Answer
NO
Checker Log
ok answer is NO
Test: #19, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100
Output
YES
Answer
YES
Checker Log
ok answer is YES
Test: #20, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
88
Output
YES
Answer
YES
Checker Log
ok answer is YES
*/
