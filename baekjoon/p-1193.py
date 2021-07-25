import sys

X = int(sys.stdin.readline())
buffer = 1

for i in range(1, X + 1):
    if X <= i:
        buffer = i
        break
    X -= i

if buffer % 2 == 0:
    f, s = X, buffer - X + 1
else:
    f, s = buffer - X + 1, X

print("{f}/{s}".format(f=f,s=s))
