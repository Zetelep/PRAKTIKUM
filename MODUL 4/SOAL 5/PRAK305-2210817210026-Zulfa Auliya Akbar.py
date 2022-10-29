TD = float(input())

if TD >= 86400:
        H = TD/(24*3600);
        TD = TD % (24 * 3600);
        J = TD/3600;
        TD %= 3600;
        M = TD / 60;
        TD %= 60;
        D = TD;

        print("%d hari %02d:%02d:%02d"%(H,J,M,D))

elif TD < 86400:
        J = TD/3600;
        TD %= 3600;
        M = TD / 60;
        TD %= 60;
        D = TD;

        print("%02d:%02d:%02d"%(J,M,D))
