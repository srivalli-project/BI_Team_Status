if __name__ == '__main__':
    N = int(raw_input())
    ans = []
    for i in range(N):
        d=raw_input().strip().split(" ")
        
        if d[0] == "append":
            ans.append(int(d[1]))
        elif d[0] == "insert":
            ans.insert(int(d[1]), int(d[2]))
        elif d[0] == "remove":
            ans.remove(int(d[1]))
        elif d[0] == "pop":
            ans.pop()
        elif d[0] == "sort":
            ans.sort()
        elif d[0] == "reverse":
            ans.reverse()
        elif d[0] == "print":
            print ans

'''
Output

Compiler Message
Success
Input (stdin)

Download
12
insert 0 5
insert 1 10
insert 0 6
print
remove 6
append 9
append 1
sort
print
pop
reverse
print
Expected Output

Download
[6, 5, 10]
[1, 5, 9, 10]
[9, 5, 1]

'''