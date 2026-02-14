// TotalAmount ≤ 1000, 5% discount
// TotalAmount between 1000 and 5000, 15% discount
// TotalAmount > 5000, 20% discount
#include<stdio.h>
int main(){
    int numberOfBooks;
    float rateOfBook, totalPrice, discountAmount, netAmount;
    printf("Enter the number of books: ");
    scanf("%d", &numberOfBooks);
    printf("Enter the rate of book: ");
    scanf("%f", &rateOfBook);

    totalPrice = numberOfBooks * rateOfBook;
    printf("Total Price is %f\n", totalPrice);

    if (totalPrice<=1000){
        discountAmount = (5/100.0)*totalPrice;
        netAmount = totalPrice - discountAmount;
        printf("1. Discout Amount is %f and Net Amount is %f", discountAmount, netAmount);
    }else if(totalPrice<5000 && totalPrice>1000){
        discountAmount = (15/100.0)*totalPrice;
        netAmount = totalPrice - discountAmount;
        printf("2. Discout Amount is %f and Net Amount is %f", discountAmount, netAmount);
    }else if (totalPrice>=5000){
        discountAmount = (20/100.0)*totalPrice;
        netAmount = totalPrice - discountAmount;
        printf("3. Discout Amount is %f and Net Amount is %f", discountAmount, netAmount);
    }
    return 0;
}