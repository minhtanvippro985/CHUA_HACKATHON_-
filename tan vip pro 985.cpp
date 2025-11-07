 #include<stdio.h>
 #include<math.h>
 
 // DE 1 
 
 int main(){
 	int i, j ;
 	int n;
 	int temp;
 	int size;
 	int choice;
 	int showmenu =1;
 	int tong;
 	int position;
 	int value;
 	int didit = 0;
 	int findvalue;
 	printf("xin moi nhap size mang cua ban : ");
 	scanf("%d",&size);
 	int arraytemplate[size];
 	
 	for (i = 0 ; i < size ; i++){
 		printf("\n array %d =  ", i );
 		scanf("%d",&arraytemplate[i]);
	 } 
	
	for ( i = 0 ; i < size ; i++){
		printf("\n -----array %d = %d---- \n", i , arraytemplate[i]);
	}
 	while(showmenu == 1 ){
	 
 		
 		printf("\n ---------------- MENU ---------------- \n ");
 		printf("1.tong cac so trong mang\n");
 		printf("2.Thoat chuong trinh\n");
 		printf("3.Xoa phan tu mang\n ");
 		printf("4.Them phan tu mang\n ");
 		printf("5.nguoc lai\n ");
 		printf("6. sap xep mang bubble sort\n ");
 		printf("7.Linear search \n");
 		printf("8.In ra toan bo so nguyen to \n");
 		//printf("t \n");
 		printf("\n lua chon cua ban la gi??\n \n");
 		
 		scanf("%d",&choice );
 	    if(choice == 1){
 	    	for (i = 0; i < size; i++) {
             tong = tong + arraytemplate[i]; // cong tong so thuong
            }
            printf("tong cac phan tu la %d " ,tong );
            fflush(stdin);
            tong = 0;
 	     
			//-----------------------
		 } else if (choice == 2 ){
		 	printf("\n \n dang thoat chuong trinh....");
		 	return 0;
		 	//-------------------------------
		 } else if (choice == 3) {
            printf("\nnhap vi tri muon xoa 0 -> %d: ", size);
            scanf("%d", &position);

            if (position < 0 || position > size) {
                printf("Vi tri khong hop le! , NHAP LAI...!!!\n");
                continue;
            }

            for (i = position; i < size - 1; i++) {
                arraytemplate[i] = arraytemplate[i + 1];
            }

            size--; 

            printf("\nmang sau khi xoa: ");
            for (i = 0; i < size; i++) {
                printf("%d ", arraytemplate[i]);
         }
     } else if(choice == 4 ) {
     	printf("\nnhap vi tri muon chen 0 -> %d: ", size);
            scanf("%d", &position);

            if (position < 0 || position > size) {
                printf("Vi tri khong hop le! , NHAP LAI!!!\n");
                continue;
            }
           printf("\n nhap gia tri can chen: ");
            scanf("%d", &value);  
//
            for (i = size; i > position; i--) {
                arraytemplate[i] = arraytemplate[i - 1];
            }
                                
            arraytemplate[position] = value;
            size++;

            printf("\nMang sau khi chen: ");
            for (i = 0; i < size; i++) {
                printf("%d ", arraytemplate[i]);
           }
            printf("\n");
       }   //-------------------- dao nguoc -----------
       else if(choice == 5){
       	
	 j =size - 1 ;
	 i = 0 ;
		while(i < j){
			int temp = arraytemplate[i];
			arraytemplate[i] = arraytemplate[j] ;
			arraytemplate[j] = temp ;
			i++;
			j--;
		}
		printf("Mang dao nguoc : ");
		for(int i = 0 ; i < size ; i++){
			printf("%d " , arraytemplate[i]);
		}
}  else if(choice == 6){
	     printf("\n \n Dang thuc hien bubble sort...\n");
            for (i = 0; i < size - 1; i++) {
                for (j = 0; j < size - i - 1; j++) {
                    if (arraytemplate[j] > arraytemplate[j + 1]) {
                        temp = arraytemplate[j];
                        arraytemplate[j] = arraytemplate[j + 1];
                        arraytemplate[j + 1] = temp;
                        didit = 1;
                    }
                }
            }

            if (didit == 1) {
                printf("\nMang sau khi sap xep: ");
                for (i = 0; i < size; i++) {
                    printf("%d ", arraytemplate[i]);
                }
                printf("\n");
                didit = 0;
            }
        } else if ( choice == 7 ){
        	printf("da chon linear! \n ");
        	printf("nhap gia tri ma ban muon tim :  ");
        	scanf("%d", &findvalue );
        	for ( i = 0 ; i < size ; i++){
        		if (arraytemplate[i] == findvalue ){
        			printf(" phan tu %d duoc tim thay o mang %d \n", findvalue  , i );
        		    
				}  
			}
		}  else if ( choice == 8 ){
			printf("dang in toan bo so nguyen to : ");
			
		}
	
}
                
                        
                       // didit = 1;
        }
	 
	 

	 
 

           
	      


 	
 	
 	
 	

