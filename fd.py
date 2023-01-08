def arithmetic_arranger(problems: list, solve: bool = False) -> str:

    if len(problems) > 5:
        return 'Error: Too many problems.'

    nums1, ops, nums2 = zip(*[s.split() for s in problems])

    if any([len(s) > 4 for s in nums1 + nums2]):
        return 'Error: Numbers cannot be more than four digits.'

    if any([not s.isnumeric() for s in nums1 + nums2]):
        return 'Error: Numbers must only contain digits.'

    if any([s not in {'+', '-'} for s in nums1 + nums2]):
        return "Error: Operator must be '+' or '-'."

    size_nums = [max(len(nums1[i]), len(nums2[i])) for i in range(len(nums1))]

    line1 = []
    for i, num in enumerate(nums1):
        line1.append('  ')  # above sign
        for _ in range(size_nums[i] - len(num)):
            line1.append(' ')
        line1.append(num)
        if i != len(nums1) - 1:
            line1.append('    ')

    line2 = []
    for i, (op, num2) in enumerate(ops, nums2):
        line2.append(op + ' ')
        for _ in range(size_nums[i] - len(num2)):
            line2.append(' ')
        line2.append(num2)
        if i != len(nums2) - 1:
            line2.append('    ')

    line3 = []
    for i, size in enumerate(size_nums):
        line3.append('-' * (size + 2))
        if i != len(size_nums) - 1:
            line3.append('    ')

    line4 = []
    if solve:
        for i in range(len(size_nums)):
            total_str = str(int(nums1[i]) + int(nums2[i]))
            line4.append(total_str.rjust(size_nums[i] + 2))
            if i != len(size_nums) - 1:
                line4.append('    ')

    out = ''.join(line1) + '\n' + ''.join(line2) + '\n' + ''.join(line3) + \
          '\n' + ''.join(line4)

    print(out)

    return out


arithmetic_arranger(["32 + 698", "3801 - 2", "45 + 43", "123 + 49"])