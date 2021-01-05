def sortlist(st,n):
    
    index = 0    
   
    for i in range(0, n): 
          
        for j in range(0, i + 1): 
            if (st[i] == st[j]): 
                break
                  
        if (j == i):
            temp = st[i] 
            st[index] = temp#st[i] 
            index += 1
              
    return "".join(st[:index]) 

def merge_the_tools(string, k):
    # your code goes here
    le = [string[i:i+k] for i in range(0, len(string), 3)]
    
    for i in range(len(le)):
        name = sortlist(list(le[i]),len(le[i]))
        print(name)
    
if __name__ == '__main__':


'''
#### test cases output #####

Input (stdin)

Download
AABCAAADA
3
Your Output (stdout)
AB
CA
AD
Expected Output

Download
AB
CA
AD
'''