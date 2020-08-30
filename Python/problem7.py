def ecd(a,b):
    c=a%b
    if(c==0):
        return b
    elif(c==b):
        return 1
    else:
        return ecd(b,c)

def findprime(limit):
    i=1
    counter=0
    product=1
    while(counter != limit):
        if(ecd(product,i)==1):
            counter+=1
            product*=i
        else:
            pass
        i+=1
    return i-1
print(findprime(10000))


