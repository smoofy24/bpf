

/*
 *
 *
 */

int main() {
    char buf[11] = {0};
    int bpf = 0;

    for (int i=0; i<99; i++) {
        sprintf(buf, "/dev/bpf%i", i);
        bpf = open(buf, O_RDWR);

        if (bpf != -1)
            break;
    }
}