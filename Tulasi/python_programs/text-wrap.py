import textwrap

def wrap(string, max_width): 
    list=[] 
    
    for i,j in zip(range(0,len(string)),string):
        list.append(j)
        if (i+1)%max_width==0: 
            list.append("\n")
    str="".join(list)    
    return str

if __name__ == '__main__':
    string, max_width = raw_input(), int(raw_input())
    result = wrap(string, max_width)
    print result