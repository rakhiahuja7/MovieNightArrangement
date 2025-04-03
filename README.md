# MovieNightArrangement
You are organizing a movie night for your friends. You have n friends, and each friend has a preferred start time for watching the movie. However, your living room can only accommodate k friends at a time.

Each friend i has a preferred start time s[i], and you want to schedule as many friends as possible while ensuring that no two friends watching the movie at the same time have a preferred start time difference greater than d.

Return the maximum number of friends that can be accommodated across all possible batches.

Input:
n (1 ≤ n ≤ 10^5) – Number of friends

k (1 ≤ k ≤ n) – Maximum friends per batch

d (0 ≤ d ≤ 10^9) – Maximum allowed difference in start times within a batch

s (Array of size n, where 1 ≤ s[i] ≤ 10^9) – Preferred start times of friends
Output:
An integer representing the maximum number of friends that can be accommodated across batches
