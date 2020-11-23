def find_largest_area(prev_largest_area, height, current_index, prev_smallest_index=-1):
    width = current_index - (prev_smallest_index + 1)
    return max(width * height, prev_largest_area)


def largestRectangle(h):
    largest = i = 0
    positions = []
    while i < len(h):
        if len(positions) == 0 or h[positions[-1]] <= h[i]:
            positions.append(i)
            i += 1
        else:
            largest = find_largest_area(largest, h[positions.pop()], i, positions[-1] if len(positions) > 0 else -1)
    while len(positions) > 0:
        largest = find_largest_area(largest, h[positions.pop()], i, positions[-1] if len(positions) > 0 else -1)
    return largest
