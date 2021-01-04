# Enter your code here. Read input from STDIN. Print output to STDOUT

x= input()
#print(x)
f = []
j = list(x)
#print(j)
count =0
'''
for index in range(len(j)):
    l=index
    count = 0
'''   
for l in range(len(j)):
    
    if l ==0 :
        count =1
    if l+1 >= len(j):
        f.append(j[l])
        f.append(count)
        #f[j[l]] = count
        break
    if j[l] == j[l+1]: 
        
            
        count = count + 1
        
    else:
        f.append(j[l])
        f.append(count)
        #f[j[l]]=count
        
        #print("f[j[l] ={} for l==5".format(f[j[l]]))
        count = 1
        
        
        
#print(f)
for i in range(len(f)):
    if i+1 >= len(f):
        break
    if(i==0 or i%2 == 0):
        print("({}, {}) ".format(f[i+1],f[i]),end ='')
    