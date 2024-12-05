#include <stdio.h>
int main(){
	int chose;
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int n = 0, m = 0;
	do{
		printf(".menu\n");
		printf("1.nhap so phan tu va gia tri cho mang\n");
		printf("2.in gia cac phan tu trong mang theo dang\n");
		printf("3.tim gia tri nho nhat va lon nhat trong mang\n");
		printf("4.in ra tong cua cac phan tu\n");
		printf("5.them mot phan tu vao cuoi mang phan tu moi\n");
		printf("6.xoa phan tu tai 1 vi tri cu the \n");
		printf("7.sap xep mang theo thu tu giam dan\n");	
		printf("8.tim kiem xem phan tu do co ton tai trong mang khong\n");
		printf("9.in ra toan bo so nguyen to trong mang\n");
		printf("10.sap xep mang theo thu tu tang dan\n");
		scanf("%d",&chose);
	switch(chose) {
	    case 1:{
                printf("Nhap so phan tu: ");
                scanf("%d", &n);
                printf("nhap cac gia tri cua mang:\n");
                for (int i = 0; i < n; i++) {
                    printf("arr[%d] = ", i);
                    scanf("%d", &arr[i]);
                }
			break;
		  }
        case 2:{
         	  	printf("Mang hien tai:\n");
                for (int i = 0; i < n; i++) {
                    printf("arr[%d] = %d\n", i, arr[i]);
                }
	        break;
	    }
	      case 3:{
                int min = arr[0], max = arr[0];
                for (int i = 1; i < n; i++) {
                    if (arr[i] < min) min = arr[i];
                    if (arr[i] > max) max = arr[i];
                }
                printf("gia tri nho nhat trong mang: %d\n", min);
                printf("gia tri lon nhat trong mang: %d\n", max);
                break;
            }
		  case 4:{
                int sum = 0;
                for (int i = 0; i < n; i++) {
                    sum += arr[i];
                }
                printf("tong phan tu trong mang la: %d\n", sum);
			break;
		  }
		  case 5:{
			break;
		  }
		  case 6:{
			break;
		  }
		  case 7:{
		  	 for (int i = 0; i < n - 1; i++) {
                    for (int j = 0; j < n - i - 1; j++) {
                        if (arr[j] < arr[j + 1]) {
                            int temp = arr[j];
                            arr[j] = arr[j + 1];
                            arr[j + 1] = temp;
                        }
                    }
                }
                printf("mang dc sap sep giam dan");
		   break;
		  }
		  case 8:{
			break;
		  }
		  case 9:{
		  	
			break;
		  }
		  case 10:{ 
		     case 10: {
                for (int i = 0; i < n - 1; i++) {
                    int minindex = i;
                    for (int j = i + 1; j < n; j++) {
                        if (arr[j] < arr[minindex]){
                    } minindex = j;
                    
                    
                printf("mang sap xep tang dan.\n");
                break;
            }
			break;
		  }
      }
    } while(chose =! 11);
 return 0;
}




