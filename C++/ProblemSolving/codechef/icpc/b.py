def minimum_time(n, r, d):
    sum_of_time = 0
    roads_left = r
    for i in range(1, n):
        if i == 1:
            sum_of_time += d[i]
            roads_left -= 1
        else:
            if roads_left > 0:
                sum_of_time += d[i]
                roads_left -= 1
            else:
                sum_of_time += 0
    if roads_left == 0:
        return sum_of_time
    else:
        return -1

t = int(input().strip())
for i in range(t):
    n, r = map(int, input().strip().split())
    d = list(map(int, input().strip().split()))
    print(minimum_time(n, r, d))
