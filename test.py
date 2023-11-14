# print("test")


def can_sort_array(n, arr):
    if sorted(arr) == arr:
        return "YES"

    m = 1
    while m * 2 <= n:
        m *= 2

    if m == n:
        return "NO"

    return "NO"

t = int(input())
for _ in range(t):
    n = int(input())
    arr = list(map(int, input().split()))
    result = can_sort_array(n, arr)
    print(result)
