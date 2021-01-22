# Enter your code here. Read input from STDIN. Print output to STDOUT
from collections import Counter
l=[]
n = int(raw_input())
integer_list = map(int, raw_input().split())
no_of_customers=input()
sum=0
for i in range(0,no_of_customers):
    l = map(int, raw_input().split())
    for j in Counter(integer_list).keys():
        if l[0]==j:
            integer_list.remove(l[0])
            sum+=l[1]
print(sum)
            
    
    
