#include <stdio.h>

//----------------------Begin--------------------------
int partition(int arr[], int low, int high) {
	int pivot = arr[high];
	int i = low - 1;
	for (int j = low; j < high; j++)
	{
		if (arr[j] < pivot)
		{
			i++;
			int t = arr[i];
			arr[i] = arr[j];
			arr[j] = t;	
		}
	}
	int t = arr[i + 1];
	arr[i + 1] = arr[high];
	arr[high] = t;
	return i + 1;
}
void quickSort(int arr[], int low, int high) {
	if (low < high)
	{
		int j = partition(arr, low, high);
		quickSort(arr, low, j - 1);
		quickSort(arr, j + 1, high);
	}
}
void printArray(int arr[], int size) {
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
void arrSort() {
	int arr[1000];
	int n;
	printf("Ban muon nhap bao nhieu so: \n");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("Nhap so thu: %d\n", i + 1);
		scanf_s("%d", &arr[i]);
	}
	quickSort(arr, 0, n - 1);
	printf("Sorted array: \n");
	printArray(arr, n);
}
//----------------------End--------------------------
void menu() {
	printf("1. Thong tin sinh vien\n");
	printf("2. Thong so san pham\n");
	printf("3. Cong tong cac so\n");
	printf("4. Cong tong cac index le\n");
	printf("5. Nhap khoang so 1 den 10\n");
	printf("6. Sap xep tu lon den be\n");
	printf("7. Xep loai hoc luc\n");
	printf("8. Thoat\n");
	printf("Nhap lua chon cua ban ! \n");
}
void stuInfo() {
	int mssv;
	char name[30];
	int birtDate;
	int age;
	float point;

	printf("Moi ban nhap MSSV\n");
	scanf_s("%d", &mssv);

	printf("Moi ban nhap ten\n");
	getchar();
	gets(name);
	printf("Moi ban nhap nam sinh\n");
	scanf_s("%d", &birtDate);
	printf("Moi ban nhap tuoi\n");
	scanf_s("%d", &age);
	printf("Moi ban nhap diem\n");
	scanf_s("%f", &point);

	printf("-------------------------------------------------------------->\n");
	printf("%-10s %-20s %-10s %-10s %-10s\n", "MSSV", "Ten", "Nam sinh", "Tuoi","Diem");
	printf("%-10d %-20s %-10d %-10d %-10f\n", mssv,name,birtDate,age,point);
	printf("-------------------------------------------------------------->\n");
}
char qualityCheck(float weight) {
	if (weight < 10)
	{
		return printf("Nhe\n");
	}
	else
	{
		return printf("Nang\n");
	}
	
}

void productsInfo() {
	char prodName[30];
	float prodWeight;

	printf("Moi ban nhap ten san pham\n");
	scanf_s("%s", prodName,30);
	printf("Moi ban nhap trong luong\n");
	scanf_s("%f", &prodWeight);
	
	printf("-------------------------------------------------------------->\n");
	printf("Ten cua san pham la: %s\n", prodName);
	printf("Trong luong cua san pham la: %f\n", prodWeight);
	printf("Chat luong cua san pham la: ");
	qualityCheck(prodWeight);
	printf("-------------------------------------------------------------->\n");
}


void sumArr() {
	int n;
	int arr[100];
	printf("Ban muon nhap bao nhieu so: ");
	scanf_s("%d", &n);
	int sum = 0;
	for (int i = 1; i <= n ; i++)
	{
		printf("Nhap so thu %d:\n", i);
		scanf_s("%d", &arr[i]);
		
	}
	for (int i = 1; i <= n ; i++)
	{
		printf("So thu %d la %d\n", i, arr[i]);
		sum += arr[i];
	}
	printf("Tong cua mang so do la: %d\n", sum);

}
void sumOfOddArr() {
	int n;
	int arr[100];
	printf("Ban muon nhap bao nhieu so: ");
	scanf_s("%d", &n);
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		printf("Nhap so thu %d:\n", i);
		scanf_s("%d", &arr[i]);

	}
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 != 0)
		{
			printf("So index le la: %d\n", i);
			sum += i;
		}
	}
	printf("Tong cua index le trong mang la: %d\n", sum);
}


int compare(int num1[10], int num2[10]) {
	for (int i = 0; i < 10; i++)
	{
		if (num1[i] != num2[i]) {
			return 0;
		}
	}
	return 1;
}

void compareString() {
	/*int num1[10] = {1,2,3,4,5,6,7,8,9,10};
	int num2[10];
	
	for (int i = 0; i < 10; i++)
	{
		printf("So thu %d\n", i+1);
		scanf_s("%d", &num2[i], 10);
	}

	if (compare(num1,num2) == 1 )
	{
		printf("Chuc mung ban da nhap dung\n");
	}
	else
	{
		printf("ban da nhap sai\n");
	}*/
	int n;
	printf("Moi ban nhap\n");
	scanf_s("%d", &n);
	while ( n < 0 || n > 10)
	{
		printf("moi ban nhap lai\n");
		scanf_s("%d", &n);
	}
	printf("Ban nhap vao %d\n", n);
}
void avaragePoint() {
	float diemThi;
	float diemTP;
	float diemYThuc;

	printf("Moi ban nhap diem thi\n");
	scanf_s("%f", &diemThi);
	printf("Moi ban nhap diem thanh phan\n");
	scanf_s("%f", &diemTP);
	printf("Moi ban nhap y thuc\n");
	scanf_s("%f", &diemYThuc);

	float total = ((diemThi + diemTP + diemYThuc) / 3 );
	

	printf("-------------------------------------------------------------->\n");
	printf("%-10s %-10s %-10s %-10s\n", "diemThi", "diemTP", "diemYThuc", "DiemTB");
	printf("%-10f %-10f %-10f %-10f\n", diemThi, diemTP, diemYThuc, total);
	printf("-------------------------------------------------------------->\n");
	if (total < 5)
	{
		printf("Ong luoi\n");
	}
	else if (total < 6 && total >= 5)
	{
		printf("Ong chua cham\n");
	}
	else if (total >= 6 &&  total < 8)
	{
		printf("Ong linh\n");
	}
	else if (total >= 8 && total < 9)
	{
		printf("Ong tho\n");
	}
	else
	{
		printf("Ong vang\n");
	}
}

int main() {
	int choice;
	do
	{
		menu();
		scanf_s("%d", &choice);
		switch (choice)
		{
		case 1:
			stuInfo();
			break;
		case 2:
			productsInfo();
			break;
		case 3:
			sumArr();
			break;
		case 4:
			sumOfOddArr();
			break;
		case 5:
			compareString();
			break;
		case 6:
			arrSort();
			break;
		case 7:
			avaragePoint();
			break;
		case 8: 
			printf("Bye !");
			exit();
		default:
			break;
		}
	} while (1);



}