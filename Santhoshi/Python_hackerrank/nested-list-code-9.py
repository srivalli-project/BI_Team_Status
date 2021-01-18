if __name__ == '__main__':
    studentlist = []
    mainlist = []
    for _ in range(int(input())):
        studentlist = []
        name = input()
        score = float(input())
        studentlist.append(name)
        studentlist.append(score)
        mainlist.append(studentlist)
        
    #print(mainlist)
    
    marklist = []
    for i in range(len(mainlist)):
    
        marklist.append(mainlist[i][1])
    
    marklist.sort()    
    b = list(dict.fromkeys(marklist))
    #print(b)
    #b[-2]
    names = []
    for i in range(len(mainlist)):
        
        if mainlist[i][1] == b[1]:
            #print(mainlist[i][1])
            names.append(mainlist[i][0])
            
    names.sort()
    for i in names:
        print(i)

''' output

Compiler Message
Success
Input (stdin)

Download
4
Prashant
32
Pallavi
36
Dheeraj
39
Shivam
40
Expected Output

Download
Pallavi

'''