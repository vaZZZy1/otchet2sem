import sys

for i in sys.stdin:
    k = len(i)
    for j in range(k):
        if j + 3 < k:
            if i[j:j+4] == "iPod" or i[j:j+4] == "iPad":
                print("MAI MAI MAI!")
            if i[j:j+4] == "Sony":
                print("SONY DAFA IS GOOD!")
            if j + 4 < k:
                if i[j:j+5] == "Apple":
                    print("MAI MAI MAI!")
                if j + 5 < k:
                    if i[j:j+6] == "iPhone":
                        print("MAI MAI MAI!")