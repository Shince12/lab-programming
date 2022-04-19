#Amstrong
num=int(input("Enter a number:"))
sum=0
temp=num
while temp>0:
    rem=temp%10
    sum=sum+(rem**3)
    temp=temp/10
if num==sum:
    print(num,"Is Amstrong")
else:
    print(num,"Is not Amstrong")
