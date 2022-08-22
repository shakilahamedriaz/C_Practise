//         **Basic structure of array in c**



//  *what is array..search it on google lots of details are there

//  *data_type array_name[array_size];
//example :   int id[10];


// *array initialaization:

marks[0]=80;
marks[1]=65;
marks[2]=76;
marks[3]=90;
marks[4]=11;
//int marks[5];     marks[0] marks[1] marks[2] marks[3] marks[4]
//                     80        65          76      90         11

//  *Initialization array during declaration: given below--
int marks[5]={80,65,76,90,11};
//array can be initialize without size.


//  *Print array:
printf("%d",marks[0]);
printf("%d",marks[1]);
printf("%d",marks[2]);
..........etc

//  *print array by using LOOP:

   for(int i=0; i<=4; i++){
      printf("%d",marks[i]);

   }

//  *User input from array/ Taking input in array:
scanf("%d",&marks[0]);
scanf("%d",&marks[1]);   //array indexing 0,1,2,3....
.......etc.

//  *User input using LOOP:

  for(int i=0; i<=4; i++){
    scanf("%d",&marks[i]);
  }





