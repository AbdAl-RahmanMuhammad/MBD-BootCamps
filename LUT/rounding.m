X = [2.11 3.5; -3.5 0.78];
Y = round(X)
Y = nearest(X)
%%
a = ([-3.5:3.5]')

y = [a convergent(a) nearest(a) round(a)]