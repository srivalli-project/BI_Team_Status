n=int(input())
for i in range(0,n):
    x=input()
    c=x.split(" ")  
    try:
        a=int(c[0])
        b=int(c[1]) 
        print(a//b)
    except ZeroDivisionError  as e:
        print("Error Code:",e)
    except ValueError as e:
        print("Error Code:",e)
    except any as e:
        print("Error Code:",e)
"""
        Input (stdin)

Download
3
1 0
2 $
3 1
Expected Output

Download
Error Code: integer division or modulo by zero
Error Code: invalid literal for int() with base 10: '$'
3"""