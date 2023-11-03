import numpy as np

str = open("insert.log", "r").read()
nums = str.split()

num = []
for n in nums:
	num.append(int(n))
print('insert')
print('最小: {}\n最大: {}\n中央: {}\n平均: {}\n'.format(np.min(num), np.max(num), np.median(num), np.mean(num)))


str = open("select.log", "r").read()
nums = str.split()

num = []
for n in nums:
	num.append(int(n))
print('select')
print('最小: {}\n最大: {}\n中央: {}\n平均: {}\n'.format(np.min(num), np.max(num), np.median(num), np.mean(num)))


str = open("merge.log", "r").read()
nums = str.split()

num = []
for n in nums:
	num.append(int(n))
print('merge')
print('最小: {}\n最大: {}\n中央: {}\n平均: {}\n'.format(np.min(num), np.max(num), np.median(num), np.mean(num)))

str = open("quick.log", "r").read()
nums = str.split()

num = []
for n in nums:
	num.append(int(n))
print('quick')
print('最小: {}\n最大: {}\n中央: {}\n平均: {}\n'.format(np.min(num), np.max(num), np.median(num), np.mean(num)))

str = open("quick_random.log", "r").read()
nums = str.split()

num = []
for n in nums:
	num.append(int(n))
print('quick_random')
print('最小: {}\n最大: {}\n中央: {}\n平均: {}\n'.format(np.min(num), np.max(num), np.median(num), np.mean(num)))
