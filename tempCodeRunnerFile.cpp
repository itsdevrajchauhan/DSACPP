===================================================

 int n;
 cout<<"abcd printning : "<<endl;
 cin>>n;
 for(int i=0;i<n;i++){
    char ch ='A';
    for(int j=0;j6
        <n;j++){

        cout<<ch;
        ch=ch+1;

    }
    cout<<endl;
 }


return 0;



==================================================================
 int n;
 cout<<"enter the Number you wanted to print: "<<endl;
 cin>>n;

char ch='A';
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<ch;
        ch++;
    }
    cout<<endl;
}

*/

int main()
{

    int n;
    cout << "enter the number " << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << j;