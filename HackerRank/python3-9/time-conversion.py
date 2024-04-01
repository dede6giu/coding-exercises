ampm_t = '';

ampm_t = input();

if ampm_t[-2] == 'A':
    if ampm_t[0:2] == '12':
        print("00:", end='');
        print(ampm_t[3:8]);
    else:
        print(ampm_t[0:8]);
else:
    if ampm_t[0:2] != '12':
        print(int(ampm_t[0:2]) + 12, end=':');
        print(ampm_t[3:8]);
    else:
        print(ampm_t[0:8]);