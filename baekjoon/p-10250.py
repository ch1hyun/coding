import sys

T = int(sys.stdin.readline())

for i in range(T):
    H, W, N= list(map(int, sys.stdin.readline().split()))
    
    layer = H if N % H == 0 else N % H
    rNum = N // H if N % H == 0 else N // H + 1

    print("{layer}{rNum:02d}".format(N = N, layer = layer, rNum = rNum))
