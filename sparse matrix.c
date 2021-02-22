main()
{
    int a[3][3]={{0,0,1},{0,3,0},{0,0,0}};
    int b[2][3];
         int i,j,x=0,y=0;
         for(i=0;i<3;i++)
         {
             for(j=0;j<3;j++)
             {
                 printf("%d\t",a[i][j]);
             }
             printf("\n");
         }

         for(i=0;i<3;i++)
         {
             for(j=0;j<3;j++)
             {
                 if(a[i][j]!=0)
                 {
                     b[x][y]=i;
                      b[x][++y]=j;
                      b[x][++y]=a[i][j];
                       x++;
                       y=0;


                 }
                 }

         }

         printf("\nSparse matrix:\n");
         for(i=0;i<2;i++)
         {
             for(j=0;j<3;j++)
             {
                 printf("%d\t",b[i][j]);

             }
             printf("\n");
         }

}


