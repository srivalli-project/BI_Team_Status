def split_and_join(line):
    # write your code here
    line=line.split(" ")
    #print(line)
    line="-".join(line)
    return line
    #print(line)
if __name__ == '__main__':
    line = raw_input()
    result = split_and_join(line)
    print result

'''
### output ###
Input (stdin)

Download
this is a string
Your Output (stdout)
this-is-a-string
Expected Output

Download
this-is-a-string

'''





