// Ax에 대한 식으로 만든 뒤 해결

import sys, math

def binarySearch(left, right, A, B, C):
    gap = 1 / (10 ** 12)
    counter = 50000
    
    while left < right and counter:
        mid = (left + right) / 2
        temp = (C - (B * math.sin(mid))) / A
        
        if mid > temp: right = mid - gap
        elif mid < temp: left = mid + gap
        else: left = right = mid
        
        counter -= 1
    
    return mid
        

A, B, C = list(map(int, sys.stdin.readline().split()))

X = binarySearch((C - B) / A, (C + B) / A, A, B, C)
print(format(X, ".19f"))
