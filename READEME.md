<h1 align='center'><u><b> Arithmetic Slices</b> </u></h1>

<h2> <u>Problem Link:</u> https://leetcode.com/problems/arithmetic-slices/</h2>

<h1 ><u> Idea Used: </u></h1>

## Here simply take first 3 elements with looping i from 1 not 0, i.e{a[1],a[2],a[0]} and check if they are in AP,

## if so then increase the count of a subarray. If the next set , i.e {a[2],a[3],a[1]} are also in AP then,

## there will exist 2 AP's one from a[0] to a[3] and the other a[1] to a[3], similarly if the next subarrayt is

## in AP then surely 3 subarrays in AP. this is the idea.

<h1 ><u> Time and Space Analysis </u></h1>

## Time-Complexity: O(N)

## Space-Compexity: O(1)
