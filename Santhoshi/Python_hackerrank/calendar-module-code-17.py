# Enter your code here. Read input from STDIN. Print output to STDOUT
import calendar as c
#d,m,y = ([int(i) for i in input().split(' ')])
F=[]

for i in input().split(' '):
    #g = i.split(' ')
    F.append(int(i))
x=F[0]
d=int(x)
x=F[1]
m=int(x)
x=F[2]
y=int(x)

  
a = c.weekday(y,d,m)
n = ['MONDAY','TUESDAY','WEDNESDAY','THURSDAY','FRIDAY','SATURDAY','SUNDAY']
print (n[a])

'''
output

Compiler Message
Success
Input (stdin)

Download
08 05 2015
Expected Output

Download
WEDNESDAY
'''