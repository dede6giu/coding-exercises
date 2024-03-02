# -*- coding: utf-8 -*-

# start day
s_day = input().split(' ')
s_day = int(s_day[1])

# start time (seconds)
s_time = input().split(' : ')
s_time = int(s_time[0])*3600 + int(s_time[1])*60 + int(s_time[2])
s_time = s_day*86400 + s_time

# ending day
e_day = input().split(' ')
e_day = int(e_day[1])

# ending time (seconds)
e_time = input().split(' : ')
e_time = int(e_time[0])*3600 + int(e_time[1])*60 + int(e_time[2])
e_time = e_day*86400 + e_time

# total time (seconds)
t_time = e_time - s_time

# output
print(f'{t_time // 86400} dia(s)')
t_time %= 86400

print(f'{t_time // 3600} hora(s)')
t_time %= 3600

print(f'{t_time // 60} minuto(s)')
t_time %= 60

print(f'{t_time} segundo(s)')