#include <bits/stdc++.h>

using namespace std;

int main() 
{


}


/*
cookies: 9
min: 1
max: 20
avg: 3.33...
sum: 30
sorted: 1 1 1 1 1 1 2 2 20

0| 2 2 20 1 1 1 1 1 1 -> G:0 O:0 -> score: 0
1| 2 20 1 1 1 1 1     -> G:1 O:2 -> score: 1
2| 2 20 1 1 1 1 1     -> G:0 O:1 -> score: 1
3| 2 20 1 1 1 1       -> G:1 O:0 -> score: 2
4| 20 1 1 1 1         -> G:0 O:2 -> score: 2
5| 20 1 1 1           -> G:1 O:1 -> score: 3
6| 20 1 1 1           -> G:0 O:0 -> score: 3
7| 1 1                -> G:1 O:20 -> score: 4
....
score: 6

0| 2 2 20 1 1 1 1 1 1 -> G:0 O:0 -> score: 0
1| 2 20 1 1 1 1 1     -> G:1 O:2 -> score: 1
2| 2 20 1 1 1 1 1     -> G:0 O:1 -> score: 1
3| 20 1 1 1 1 1       -> G:2 O:0 -> score: 2
4| 1 1 1 1 1          -> G:1 O:20 -> score: 2
...
score: 7

 0| 2 2 20 1 1 1 1 1 1 -> G:0 O:0 -> score: 0
 1| 2 20 1 1 1 1 1     -> G:1 O:2 -> score: 1
 2| 2 20 1 1 1 1 1     -> G:0 O:1 -> score: 1
 3| 20 1 1 1 1 1       -> G:2 O:0 -> score: 2
 4| 1 1 1 1 1          -> G:1 O:20 -> score: 2
 5| 1 1 1 1 1          -> G:0 O:19 -> score: 2
 6| 1 1 1 1            -> G:1 O:18 -> score: 3
 7| 1 1 1 1            -> G:0 O:17 -> score: 3
 8| 1 1 1              -> G:1 O:16 -> score: 4
 9| 1 1 1              -> G:0 O:15 -> score: 4
10| 1 1                -> G:1 O:14 -> score: 5
11| 1 1                -> G:0 O:13 -> score: 5
12| 1                  -> G:1 O:12 -> score: 6
13| 1                  -> G:0 O:11 -> score: 6
14|                    -> G:1 O:10 -> score: 7
15|                    -> G:0 O:9 -> score: 7
score: 7

avg:2.11...
 0| 2 2 9 1 1 1 1 1 1  -> G:0 O:0 -> score: 0
 1| 2 9 1 1 1 1 1      -> G:1 O:2 -> score: 1
 2| 2 9 1 1 1 1 1      -> G:0 O:1 -> score: 1
 3| 9 1 1 1 1 1        -> G:2 O:0 -> score: 2
 4| 1 1 1 1 1          -> G:1 O:9 -> score: 2
 5| 1 1 1 1 1          -> G:0 O:8 -> score: 2
 6| 1 1 1 1            -> G:1 O:7 -> score: 3
 7| 1 1 1 1            -> G:0 O:6 -> score: 3
 8| 1 1 1              -> G:1 O:5 -> score: 4
 9| 1 1 1              -> G:0 O:4 -> score: 4
10| 1 1                -> G:1 O:3 -> score: 5
11| 1 1                -> G:0 O:2 -> score: 5
12| 1                  -> G:1 O:1 -> score: 6
13| 1                  -> G:0 O:0 -> score: 6
14|                    -> G:1 O:0 -> score: 7
15|                    -> G:0 O:0 -> score: 7
score: 7

avg:2
 0| 2 2 8 1 1 1 1 1 1  -> G:0 O:0 -> score: 0
 1| 2 8 1 1 1 1 1      -> G:1 O:2 -> score: 1
 2| 2 8 1 1 1 1 1      -> G:0 O:1 -> score: 1
 3| 8 1 1 1 1 1        -> G:2 O:0 -> score: 2
 4| 1 1 1 1 1          -> G:1 O:8 -> score: 2
 5| 1 1 1 1 1          -> G:0 O:7 -> score: 2
 6| 1 1 1 1            -> G:1 O:6 -> score: 3
 7| 1 1 1 1            -> G:0 O:5 -> score: 3
 8| 1 1 1              -> G:1 O:4 -> score: 4
 9| 1 1 1              -> G:0 O:3 -> score: 4
10| 1 1                -> G:1 O:2 -> score: 5
11| 1 1                -> G:0 O:1 -> score: 5
12| 1                  -> G:1 O:0 -> score: 6
13|                    -> G:0 O:1 -> score: 6
14|                    -> G:0 O:0 -> score: 6
score: 6


*/