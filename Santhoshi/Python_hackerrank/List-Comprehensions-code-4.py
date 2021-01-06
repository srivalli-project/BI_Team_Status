if __name__ == '__main__':
    x = int(input())
    y = int(input())
    z = int(input())
    n = int(input())
    li = []
    li = [[i,j,k] for i in range(x+1) for j in range(y+1) for k in range(z+1) if((i+j+k)!=n)]
    print(li)
    

'''
output

Compiler Message
Success
Input (stdin)

Download
1
1
1
2
Expected Output

Download
[[0, 0, 0], [0, 0, 1], [0, 1, 0], [1, 0, 0], [1, 1, 1]]

'''