def mutate_string(string, position, character):
    t=list(string)
    t[position]=character
    #print(t)
    string = ''.join(t)
    return string
    
    #string = string[:5] + "k" + string[6:]
    

if __name__ == '__main__':
    s = raw_input()
    i, c = raw_input().split()
    s_new = mutate_string(s, int(i), c)
    print s_new

#output
'''
Compiler Message
Success
Input (stdin)

Download
abracadabra
5 k
Expected Output

Download
abrackdabra
'''