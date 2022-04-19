#fibonnaci
num=int(input("Enter number of terms:"))
a,b=0,1
if num==1:
    print(a)
if num==2:
    print(a)
    print(b)
else:
    print(a)
    print(b)
    for i in range(3,num+1):
        c=a+b
        a=b
        b=c
        print(c)
