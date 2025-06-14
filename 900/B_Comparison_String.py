t=int(input())
for _ in range(t):
    n=int(input())
    s=input()

    longest_substring_length=1
    current_substring_length=1

    for i in range(1,n):
        if s[i]==s[i-1]:
            current_substring_length+=1
        else:
            longest_substring_length=max(longest_substring_length,current_substring_length)

            current_substring_length=1

    longest_substring_length=max(longest_substring_length,current_substring_length)
    print(longest_substring_length+1)