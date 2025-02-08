## Median of Two Sorted Array

def solve(num1,num2):
    ans=num1+num2
    ans.sort()
    n=len(ans)

    if n%2==0:
        a=ans[n//2]
        b=ans[n//2-1]
        result=(a+b)/2.0
    else:
        result=ans[n//2]

    return result

num1=[1,2]
num2=[3]
ans=solve(num1,num2)
print(ans)