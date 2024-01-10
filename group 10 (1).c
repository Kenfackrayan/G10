int main(void){
 float amount = 0;
 int cents = 0;
int count = 0;
int amount_left = 0;
int coin_values[] = {25, 10, 5, 1}; // an array of ints that hold the values of the coins in cents.
int i;
amount = .30;
cents = (int)round(amount * 100);
printf("%d", cents);
amount_left = cents;
for(i=0; i<4; i++) {
while(amount_left >= coin_values[i]) {
count++;
amount_left -= coin_values[i];
  }
}
printf("You get %d coins\n", count);
}