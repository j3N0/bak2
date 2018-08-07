cpdomains = ["900 google.mail.com", "50 yahoo.com", "1 intel.mail.com", "5 wiki.org"]

dict = {}
for items in cpdomains:
    times, domain = items.split()
    ls = domain.split('.')
    for i in range(len(ls)):
        sub = '.'.join(ls[i:])
        dict[sub] = dict.get(sub, 0) + int(times)


#return [' '.join([str(v), k]) for k, v in dict.items()]


print(dict) 
print(ls)        