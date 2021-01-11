# Enter your code here. Read input from STDIN. Print output to STDOUT
englishpplno = input()
englishroll = input()
frenchpplno = input()
frenchroll = input()

englishroll = set(englishroll.split())
frenchroll = set(frenchroll.split())

print(len(englishroll.difference(frenchroll)))

'''
output
Success
Input (stdin)

Download
9
1 2 3 4 5 6 7 8 9
9
10 1 2 3 11 21 55 6 8
Expected Output

Download
4
'''