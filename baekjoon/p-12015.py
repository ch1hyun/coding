def binarySearch(left, right, target):
    
    while left < right:
        mid = (left + right) // 2
        #print("left={left}\nright={right}\nmid={mid}\nanswer[mid]={answer}\ntarget={target}\n".format(left=left, right=right, mid=mid, answer=answer[mid], target=target)) # debug

        if answer[mid] > target: right = mid
        elif answer[mid] < target: left = mid + 1
        else: left = right = mid
    
    return right

input()
arr = list(map(int, input().split()))
answer = [arr[0]]

for a in arr:
    if answer[-1] < a: answer.append(a)
    else:
        answer[binarySearch(0, len(answer) - 1, a)] = a
    #print(answer)

print(len(answer))
