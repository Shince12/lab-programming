num=int(input("Enter a number:"))
print("prime upto",num,"are")
for i in range(2,num+1):
    if i>1:
        for j in range(2,i):
            if(i%j==0):
                break
            else:
                print(i)
