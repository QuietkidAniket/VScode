class Solution:
  

    for x in range(len(nums)):
        try:
            y = nums[x+1:].index(target - nums[x])
            return [x,y]
        except ValueError:
            continue
            
    return [-1,-1]