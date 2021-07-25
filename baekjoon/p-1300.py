import sys

def binarySearch(left, right, K, N):
    while left <= right:
        mid = (left + right) // 2
        
        count = 0
        for i in range(1, N + 1):
            count += min(N, mid // i)
        
        if count >= K:
            right = mid - 1
            answer = mid
        elif count < K: left = mid + 1
    
    return answer

N = int(sys.stdin.readline())
K = int(sys.stdin.readline())

print(binarySearch(1, K, K, N))
