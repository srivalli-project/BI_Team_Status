if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())
    #print(arr)
    arr = list(arr)
    flist = sorted(arr)
    flist = list(dict.fromkeys(flist))
    print(flist[-2])

'''
output

Compiler Message
Success
Input (stdin)

Download
5
2 3 6 6 5
Expected Output

Download
5

