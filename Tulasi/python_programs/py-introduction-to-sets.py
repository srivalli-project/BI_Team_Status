from __future__ import division

def average(array):
    sec_array=[]
    sum=0
    for i in array:
        if i not in sec_array:
            sec_array.append(i)
            sum+=i
    k=sum/len(sec_array)
    return k
    # your code goes here

if __name__ == '__main__':
    n = int(raw_input())
    arr = map(int, raw_input().split())
    result = average(arr)
    print result