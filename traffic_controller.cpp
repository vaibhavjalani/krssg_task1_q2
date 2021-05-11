#include <iostream>

using namespace std;

int main()
{
    cout<<"n = ";
    int n;
    cin >> n;
    int arr[8]={0,0,0,0,0,0,0,0};

    int t1[8]={1,1,0,0,0,0,0,0};        //a1a2
    int t2[8]={0,0,0,0,0,0,1,1};        //d1d2
    int t3[8]={0,0,1,1,0,0,0,0};        //b1b2
    int t4[8]={0,0,0,0,1,1,0,0};        //c1c2
    int t5[8]={1,0,1,0,0,0,0,0};             //a1b1
    int t6[8]={0,0,0,0,1,0,1,0};             //c1d1

    int t7[8]={0,1,0,0,1,0,0,0};                  //a2c1
    int t8[8]={1,0,0,0,0,0,0,1};                  //d2a1
    int t9[8]={0,0,0,1,0,0,1,0};                 //b2d1
    int t10[8]={0,0,1,0,0,1,0,0};                  //c2b1
    

    int t11[8]={1,0,0,0,0,0,0,0};
    int t12[8]={0,1,0,0,0,0,0,0};
    int t13[8]={0,0,0,0,0,0,1,0};
    int t14[8]={0,0,0,0,0,0,0,1};
    int t15[8]={0,0,1,0,0,0,0,0};
    int t16[8]={0,0,0,1,0,0,0,0};
    int t17[8]={0,0,0,0,1,0,0,0};
    int t18[8]={0,0,0,0,0,1,0,0};

    int t19[8]={0,1,0,1,0,0,0,0};       //a2b2
    int t20[8]={0,0,0,0,0,1,0,1};       //c2d2

    int a[n][8];

    int p[8];

    int count=0;

    int w=0;

    for(int i=0;i<n;i++)
    {
        count++;
        cout<<endl<<"Round "<<count<<":"<<endl;
        cout<<"Input "<<count<<" : ";
        for (int j=0;j<8;j++)
        {
            cin>>a[i][j];
        }

        for (int j=0;j<8;j++)
        {
            arr[j]+=a[i][j];
        }

        for(int j=0;j<8;j++)
        {
            p[j]=arr[j];
        }

        if(arr[0]!=0)
        {
            if(arr[1]!=0)
            {
                for(int k=0;k<8;k++)
                {
                    arr[k]=arr[k]-t1[k];
                }
                w=1;
                
            }
            else if(arr[7]!=0)
            {
                for(int k=0;k<8;k++)
                {
                    arr[k]=arr[k]-t8[k];
                }
                w=8;
                

            }
            else if(arr[2]!=0)
            {
                for(int k=0;k<8;k++)
                {
                    arr[k]=arr[k]-t5[k];
                }
                w=5;

            }
            else
            {
                for(int k=0;k<8;k++)
                {
                    arr[k]=arr[k]-t11[k];
                }
                w=11;

            }
        }

        else if(arr[6]!=0)
        {
            if(arr[7]!=0)
            {
                for(int k=0;k<8;k++)
                {
                    arr[k]=arr[k]-t2[k];
                }
                w=2;

            }
            else if(arr[3]!=0)
            {
                for(int k=0;k<8;k++)
                {
                    arr[k]=arr[k]-t9[k];
                }
                w=9;
                

            }
            else if(arr[4]!=0)
            {
                for(int k=0;k<8;k++)
                {
                    arr[k]=arr[k]-t6[k];
                }
                w=6;

            }
            else
            {
                for(int k=0;k<8;k++)
                {
                    arr[k]=arr[k]-t13[k];
                }
                w=12;
                
            }
        }

        else if(arr[2]!=0)
        {
            if(arr[3]!=0)
            {
                for(int k=0;k<8;k++)
                {
                    arr[k]=arr[k]-t3[k];
                }
                w=3;

            }
            else if(arr[5]!=0)
            {
                for(int k=0;k<8;k++)
                {
                    arr[k]=arr[k]-t10[k];
                }
                w=10;

            }
            else
            {
                for(int k=0;k<8;k++)
                {
                    arr[k]=arr[k]-t15[k];
                }
                w=13;
                
            }
        }

        else if(arr[4]!=0)
        {
            if(arr[5]!=0)
            {
                for(int k=0;k<8;k++)
                {
                    arr[k]=arr[k]-t4[k];
                }
                w=4;

            }
            else if(arr[1]!=0)
            {
                for(int k=0;k<8;k++)
                {
                    arr[k]=arr[k]-t7[k];
                }
                w=7;

            }
            else
            {
                for(int k=0;k<8;k++)
                {
                    arr[k]=arr[k]-t17[k];
                }
                w=14;
                
            }
        }

        else if(arr[1]!=0)
        {
            if(arr[3]!=0)
            {
                for(int k=0;k<8;k++)
                    {
                        arr[k]=arr[k]-t19[k];
                    }
                    w=19;

            }
            else
            {
            for(int k=0;k<8;k++)
                {
                    arr[k]=arr[k]-t12[k];
                }
                w=15;
            }
        }
        else if(arr[7]!=0)
        {
            if(arr[5]!=0)
            {
                for(int k=0;k<8;k++)
                    {
                        arr[k]=arr[k]-t20[k];
                    }
                    w=20;

            }
            else
            {
            for(int k=0;k<8;k++)
                {
                    arr[k]=arr[k]-t14[k];
                }
                w=16;
            }
        }
        else if(arr[3]!=0)
        {
            for(int k=0;k<8;k++)
                {
                    arr[k]=arr[k]-t16[k];
                }
                w=17;
            
        }
        else if(arr[5]!=0)
        {
            for(int k=0;k<8;k++)
                {
                    arr[k]=arr[k]-t18[k];
                }
                w=18;
        }

        switch (w)
        {
            case 1:
            cout<<"A : go straight, go right"<<endl<<"B : off"<<endl<<"C : off"<<endl<<"D : off"<<endl;
            break;
            case 2:
            cout<<"A : off"<<endl<<"B : off"<<endl<<"C : off"<<endl<<"D : go straight, go right"<<endl;
            break;
            case 3:
            cout<<"A : off"<<endl<<"B : go straight, go right"<<endl<<"C : off"<<endl<<"D : off"<<endl;
            break;
            case 4:
            cout<<"A : off"<<endl<<"B : off"<<endl<<"C : go straight, go right"<<endl<<"D : off"<<endl;
            break;
            case 5:
            cout<<"A : go straight"<<endl<<"B : go straight"<<endl<<"C : off"<<endl<<"D : off"<<endl;
            break;
            case 6: 
            cout<<"A : off"<<endl<<"B : off"<<endl<<"C : go straight"<<endl<<"D : go straight"<<endl;
            break;
            case 7:
            cout<<"A : go right"<<endl<<"B : off"<<endl<<"C : go straight"<<endl<<"D : off"<<endl;
            break;
            case 8:
            cout<<"A : go straight"<<endl<<"B : off"<<endl<<"C : off"<<endl<<"D : go right"<<endl;
            break;
            case 9:
            cout<<"A : off"<<endl<<"B : go right"<<endl<<"C : off"<<endl<<"D : go straight"<<endl;
            break;
            case 10:
            cout<<"A : off"<<endl<<"B : go straight"<<endl<<"C : go right"<<endl<<"D : off"<<endl;
            break;
            case 11:
            cout<<"A : go straight"<<endl<<"B : off"<<endl<<"C : off"<<endl<<"D : off"<<endl;
            break;
            case 12:
            cout<<"A : off"<<endl<<"B : off"<<endl<<"C : off"<<endl<<"D : go straight"<<endl;
            break;
            case 13:
            cout<<"A : off"<<endl<<"B : go straight"<<endl<<"C : off"<<endl<<"D : off"<<endl;
            break;
            case 14:
            cout<<"A : off"<<endl<<"B : off"<<endl<<"C : go straight"<<endl<<"D : off"<<endl;
            break;
            case 15:
            cout<<"A : go right"<<endl<<"B : off"<<endl<<"C : off"<<endl<<"D : off"<<endl;
            break;
            case 16:
            cout<<"A : off"<<endl<<"B : off"<<endl<<"C : off"<<endl<<"D : go right"<<endl;
            break;
            case 17:
            cout<<"A : off"<<endl<<"B : go right"<<endl<<"C : off"<<endl<<"D : off"<<endl;
            break;
            case 18:
            cout<<"A : off"<<endl<<"B : off"<<endl<<"C : go right"<<endl<<"D : off"<<endl;
            break;
            case 19:
            cout<<"A : go right"<<endl<<"B : go right"<<endl<<"C : off"<<endl<<"D : off"<<endl;
            break;
            case 20:
            cout<<"A : off"<<endl<<"B : off"<<endl<<"C : go right"<<endl<<"D : go right"<<endl;
            break;
        }



        cout<<"Initial Queue : ";
        for (int l = 0; l < 8; l++)
                {
                    cout << p[l]<<" "; 
                }

        cout<<endl<<"Final Queue : ";
        for (int l = 0; l < 8; l++)
                {
                    cout << arr[l]<<" "; 
                }
                cout<<endl;
        cout<<endl;
        

        
    }

    int t=0;
    while(t==0)
    {
        count++;
        cout<<endl<<"Round "<<count<<":"<<endl;

        for(int j=0;j<8;j++)
        {
            p[j]=arr[j];
        }

        if(arr[0]!=0)
        {
            if(arr[1]!=0)
            {
                for(int k=0;k<8;k++)
                {
                    arr[k]=arr[k]-t1[k];
                }
                w=1;
                
            }
            else if(arr[7]!=0)
            {
                for(int k=0;k<8;k++)
                {
                    arr[k]=arr[k]-t8[k];
                }
                w=8;
                

            }
            else if(arr[2]!=0)
            {
                for(int k=0;k<8;k++)
                {
                    arr[k]=arr[k]-t5[k];
                }
                w=5;

            }
            else
            {
                for(int k=0;k<8;k++)
                {
                    arr[k]=arr[k]-t11[k];
                }
                w=11;

            }
        }

        else if(arr[6]!=0)
        {
            if(arr[7]!=0)
            {
                for(int k=0;k<8;k++)
                {
                    arr[k]=arr[k]-t2[k];
                }
                w=2;

            }
            else if(arr[3]!=0)
            {
                for(int k=0;k<8;k++)
                {
                    arr[k]=arr[k]-t9[k];
                }
                w=9;
                

            }
            else if(arr[4]!=0)
            {
                for(int k=0;k<8;k++)
                {
                    arr[k]=arr[k]-t6[k];
                }
                w=6;

            }
            else
            {
                for(int k=0;k<8;k++)
                {
                    arr[k]=arr[k]-t13[k];
                }
                w=12;
                
            }
        }

        else if(arr[2]!=0)
        {
            if(arr[3]!=0)
            {
                for(int k=0;k<8;k++)
                {
                    arr[k]=arr[k]-t3[k];
                }
                w=3;

            }
            else if(arr[5]!=0)
            {
                for(int k=0;k<8;k++)
                {
                    arr[k]=arr[k]-t10[k];
                }
                w=10;

            }
            else
            {
                for(int k=0;k<8;k++)
                {
                    arr[k]=arr[k]-t15[k];
                }
                w=13;
                
            }
        }

        else if(arr[4]!=0)
        {
            if(arr[5]!=0)
            {
                for(int k=0;k<8;k++)
                {
                    arr[k]=arr[k]-t4[k];
                }
                w=4;

            }
            else if(arr[1]!=0)
            {
                for(int k=0;k<8;k++)
                {
                    arr[k]=arr[k]-t7[k];
                }
                w=7;

            }
            else
            {
                for(int k=0;k<8;k++)
                {
                    arr[k]=arr[k]-t17[k];
                }
                w=14;
                
            }
        }

        else if(arr[1]!=0)
        {
            if(arr[3]!=0)
            {
                for(int k=0;k<8;k++)
                    {
                        arr[k]=arr[k]-t19[k];
                    }
                    w=19;

            }
            else
            {
                for(int k=0;k<8;k++)
                    {
                        arr[k]=arr[k]-t12[k];
                    }
                    w=15;
            }

        }
        else if(arr[7]!=0)
        {
            if(arr[5]!=0)
            {
                for(int k=0;k<8;k++)
                    {
                        arr[k]=arr[k]-t20[k];
                    }
                    w=20;

            }
            else
            {
            for(int k=0;k<8;k++)
                {
                    arr[k]=arr[k]-t14[k];
                }
                w=16;
            }
            
        }
        else if(arr[3]!=0)
        {
            for(int k=0;k<8;k++)
                {
                    arr[k]=arr[k]-t16[k];
                }
                w=17;
            
        }
        else if(arr[5]!=0)
        {
            for(int k=0;k<8;k++)
                {
                    arr[k]=arr[k]-t18[k];
                }
                w=18;
            
        }
        else
        {
            cout<<"Solved"<<endl;
            break;
        }


        switch (w)
        {
            case 1:
            cout<<"A : go straight, go right"<<endl<<"B : off"<<endl<<"C : off"<<endl<<"D : off"<<endl;
            break;
            case 2:
            cout<<"A : off"<<endl<<"B : off"<<endl<<"C : off"<<endl<<"D : go straight, go right"<<endl;
            break;
            case 3:
            cout<<"A : off"<<endl<<"B : go straight, go right"<<endl<<"C : off"<<endl<<"D : off"<<endl;
            break;
            case 4:
            cout<<"A : off"<<endl<<"B : off"<<endl<<"C : go straight, go right"<<endl<<"D : off"<<endl;
            break;
            case 5:
            cout<<"A : go straight"<<endl<<"B : go straight"<<endl<<"C : off"<<endl<<"D : off"<<endl;
            break;
            case 6: 
            cout<<"A : off"<<endl<<"B : off"<<endl<<"C : go straight"<<endl<<"D : go straight"<<endl;
            break;
            case 7:
            cout<<"A : go right"<<endl<<"B : off"<<endl<<"C : go straight"<<endl<<"D : off"<<endl;
            break;
            case 8:
            cout<<"A : go straight"<<endl<<"B : off"<<endl<<"C : off"<<endl<<"D : go right"<<endl;
            break;
            case 9:
            cout<<"A : off"<<endl<<"B : go right"<<endl<<"C : off"<<endl<<"D : go straight"<<endl;
            break;
            case 10:
            cout<<"A : off"<<endl<<"B : go straight"<<endl<<"C : go right"<<endl<<"D : off"<<endl;
            break;
            case 11:
            cout<<"A : go straight"<<endl<<"B : off"<<endl<<"C : off"<<endl<<"D : off"<<endl;
            break;
            case 12:
            cout<<"A : off"<<endl<<"B : off"<<endl<<"C : off"<<endl<<"D : go straight"<<endl;
            break;
            case 13:
            cout<<"A : off"<<endl<<"B : go straight"<<endl<<"C : off"<<endl<<"D : off"<<endl;
            break;
            case 14:
            cout<<"A : off"<<endl<<"B : off"<<endl<<"C : go straight"<<endl<<"D : off"<<endl;
            break;
            case 15:
            cout<<"A : go right"<<endl<<"B : off"<<endl<<"C : off"<<endl<<"D : off"<<endl;
            break;
            case 16:
            cout<<"A : off"<<endl<<"B : off"<<endl<<"C : off"<<endl<<"D : go right"<<endl;
            break;
            case 17:
            cout<<"A : off"<<endl<<"B : go right"<<endl<<"C : off"<<endl<<"D : off"<<endl;
            break;
            case 18:
            cout<<"A : off"<<endl<<"B : off"<<endl<<"C : go right"<<endl<<"D : off"<<endl;
            break;
            case 19:
            cout<<"A : go right"<<endl<<"B : go right"<<endl<<"C : off"<<endl<<"D : off"<<endl;
            break;
            case 20:
            cout<<"A : off"<<endl<<"B : off"<<endl<<"C : go right"<<endl<<"D : go right"<<endl;
            break;

        }


        cout<<"Initial Queue : ";
        for (int l = 0; l < 8; l++)
                {
                    cout << p[l]<<" "; 
                }

        cout<<endl<<"Final Queue : ";
        for (int l = 0; l < 8; l++)
                {
                    cout << arr[l]<<" "; 
                }
                cout<<endl;
        cout<<endl;

    }

    

}