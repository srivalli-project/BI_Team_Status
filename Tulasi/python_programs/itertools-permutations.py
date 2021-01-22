# Enter your code here. Read input from STDIN. Print output to STDOUT
from itertools import permutations
l=map(None,raw_input().split())
k=int(l[1])
str="".join(l[0])
j=[]
for i in list(permutations(str,k)):
    str="".join(i)
    j.append(str)
j.sort()
for i in j:
    print(i)