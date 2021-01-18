def count_substring(string, sub_string):
    cnt=0
    ostring = list(string)
    osub_string=list(sub_string)
    string2 = []
    #print(ostring,osub_string)
    for i in range((len(ostring)-len(osub_string))+1):
        j=i 
        string2 = []
        #print(j)
        k=0
        while k < len(osub_string):#for j in range(i,len(ostring)):            
            #j=i
            #print(ostring[0])
            string2.append(ostring[j])
            j=j+1
            k=k+1
        
        #print(string2)
        if string2 == osub_string:
            cnt = cnt+1
    return cnt

if __name__ == '__main__':
    string = raw_input().strip()
    sub_string = raw_input().strip()
    
    count = count_substring(string, sub_string)
    print count

'''
#output

Compiler Message
Success
Input (stdin)

Download
ABCDCDC
CDC
Expected Output

Download
2
'''