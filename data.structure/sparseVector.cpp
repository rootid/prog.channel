#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;
//Create sparse vectors using the hash table

class SparseVector {

    private :
    unordered_map <int,double> row;

    public :    
    SparseVector();
    int getSize();
    void putElement(int i,double v);
    double getElement(int i);
    double dot(vector<double>& other);
};

SparseVector::SparseVector  () {

}

int SparseVector::getSize () {
    return row.size();
}


void SparseVector::putElement(int i,double v) {
    row[i] = v;
}

double SparseVector::getElement(int i) {
    if (row.find(i) == row.end() ) {
        return 0.00;
    } 
    return row[i];
}

double SparseVector :: dot (vector<double> &other) {
    int len = other.size();
    double sum = 0;


    for (auto &i:row) {
        int idx = i.first;
        double val = i.second;
        sum += other [idx] *  val;
    }
    //for (int i=0;i<len;i++) {
    //    sum +=  getElement(i) * other[i];
    //}
    return sum;
}



////////////////////////////////////////////////////////////////////////
// sparse vector client
////////////////////////////////////////////////////////////////////////

void sparseMultclient (int n) {

    double x_ [] = {0.5,0.4,.36,.37,.19}; 

    n = sizeof(x_)/sizeof(x_[0]);
    
    double sum = 0.0;
    vector< vector <double> > a(n,vector<double> (n,0.0) );
    vector<double> b (n,0.0);
    vector<double> x(x_,x_+sizeof(x_)/sizeof(x_[0]));

    double a1[] = {0,.90,0,0,0};
    vector<double> a1v(a1,a1+sizeof(a1)/sizeof(a1[0]));
    double a2[] = {0,0,.36,.36,.18};
    vector<double> a2v(a2,a2+sizeof(a2)/sizeof(a2[0]));
    double a3[] = {0,0,0,.90,0};
    vector<double> a3v(a3,a3+sizeof(a3)/sizeof(a3[0]));
    double a4[] = {.90,0,0,0,0};
    vector<double> a4v(a4,a4+sizeof(a4)/sizeof(a4[0]));
    double a5[] = {.47,0,.47,0,0};
    vector<double> a5v(a5,a5+sizeof(a5)/sizeof(a5[0]));

    a[0] = a1v;
    a[1] = a2v;
    a[2] = a3v;
    a[3] = a4v;
    a[4] = a5v;

    for (int i=0;i<n;i++) {
        sum = 0.0;
        for (int j=0;j<n;j++) {
            sum += a[i][j] * x[j];
        }
        b[i] = sum;
        cout << b[i] << " ";
    }
    cout << endl;


    //Sparse Vector 
    SparseVector spV[3];
    
    spV[0].putElement (1,0.90);
    sum = spV[0].dot(x);
    cout << sum << endl;



}




int main () {

    sparseMultclient (3);

    

}
