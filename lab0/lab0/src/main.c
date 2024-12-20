int x;
int y; 

void main() {
    while (1) {
        x++; 
        if (x == 10) {
            y++;
            x = 0; 
        }
    }
}