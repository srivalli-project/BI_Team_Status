# Enter your code here. Read input from STDIN. Print output to STDOUT
a=int(input())
b=input().split()
c=int(input())
d=input().split()
x=set(b)
y=set(d)
p=y.difference(x)
q=x.difference(y)
r=p.union(q)
print ('\n'.join(sorted(r, key=int)))

'''
output
Compiler Message
Success
Input (stdin)

Download
4
2 4 5 9
4
2 4 11 12
Expected Output

Download
5
9
11
12
'''