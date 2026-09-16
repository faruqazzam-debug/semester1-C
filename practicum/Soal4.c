#include <stdio.h>

int main() {
    int d, h, m;
    int in, out;
    char t, o;

    scanf("%d %d:%d", &d, &h, &m);
    in = d * 1440 + h * 60 + m;

    scanf("%d %d:%d", &d, &h, &m);
    out = d * 1440 + h * 60 + m;

    scanf(" %c", &t);
    scanf(" %c", &o);

    if (out < in) {
        printf("Tidak mungkin\n");
        return 0;
    }

    int dur = out - in;
    int days = dur / 1440;
    int rem  = dur % 1440;
    int hrs  = rem / 60;
    int mins = rem % 60;

    int cost = 0;

    if (t == 'M') {
        if (dur <= 180) {
            cost = 10000;
        } else if (dur <= 1440) {
            int extra = dur - 180;
            int add = extra / 60;
            if (extra % 60) add++;
            cost = 10000 + add * 2000;
        } else {
            int full = dur / 1440;
            int left = dur % 1440;
            cost = 10000 + full * 150000;
            if (left > 0) {
                int add = left / 60;
                if (left % 60) add++;
                cost += add * 2000;
            }
        }
    } else if (t == 'S') {
        if (dur <= 1440) {
            cost = 3000;
        } else {
            int full = dur / 1440;
            cost = 3000 + full * 50000;
        }
    }

    if (o == 'b') {
        int disc = cost * 20 / 100;
        if (disc > 10000) disc = 10000;
        cost -= disc;
    } else if (o == 'c') {
        int disc = cost * 10 / 100;
        if (disc > 20000) disc = 20000;
        cost -= disc;
    }

    printf("Anda telah berada di sini selama %d hari, %d jam, dan %d menit. ", days, hrs, mins);
    printf("Anda harus membayar sebesar %d rupiah\n", cost);

    return 0;
}