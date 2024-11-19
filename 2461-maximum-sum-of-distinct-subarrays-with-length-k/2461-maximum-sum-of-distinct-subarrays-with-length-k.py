class Solution:
    def maximumSubarraySum(self, nums: List[int], k: int) -> int:
        mp = defaultdict(int)
        currentSum = 0
        maxSum = 0
        n = len(nums)
        left = 0
        i = 0

        # Iterating for length k
        while i < k and i < n:
            currentSum += nums[i]
            mp[nums[i]] += 1

            i += 1

        # If distinct elements present in map
        # equal to k
        if len(mp) == k:
            maxSum = currentSum

        # Iterating over the left array
        for i in range(k, n):
            mp[nums[i]] += 1
            mp[nums[left]] -= 1
            if mp[nums[left]] == 0:
                del mp[nums[left]]
            currentSum += nums[i]
            currentSum -= nums[left]
            if len(mp) == k:
                maxSum = max(maxSum, currentSum)
            left += 1

        # Returning the maximum sum
        return maxSum
