số nguyên tố bắt đầu từ số 2 -> sqrt(n) // if(n%i==0) return 0;
for (int x : a)
    cout << x << " ";
tương đương với:

for (int i = 0; i < 5; i++) {
    int x = a[i];
    cout << x << " ";
}
không cần chỉ số thì dùng for each 
cần chỉ số thì không dùng for each 
vd : tìm vị trí đầu tiên = 5 -> không dùng for each 
//Khi tìm giá trị nhỏ nhất hoặc lớn nhất trong mảng chỉ cần 1 vòng lặp
int n; cin>>n;
  int a[n];
  for(int &x:a) cin>>x;
  int dem=0,min_val=1e9;
  for(int x:a){
    if(x<min_val){ // khi x<min_val thì min_val cập nhật nếu x < thì bỏ qua > thì cập nhật 
      min_val=x;
      dem=1;
    }
    else if(x==min_val){
      dem++;
    }
  }
  cout<<dem;
