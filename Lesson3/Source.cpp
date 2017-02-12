    #include "TV.h"

void swap(TV* a, TV* b){

    TV c(*a);
    *a = *b;
    *b = c;

}

void sort(TV* arr[], const int&len){

    for (int i=0; i < len-1;++i){

        int nMin = i;

        for(int j=i+1; j<len; ++j){

            if(*arr[nMin]>*arr[j])
                nMin=j;
        }

        if (nMin!=i)
            swap(arr[nMin], arr[i]);

    }
}

int main(){

    int len=5;
    TV* mag[len] = { new TV, new TV("Toshiba"), new TV(100000), new TV("LG", 152000), new TV("Toshiba", 5000) };

    TV tempTV(*mag[2]);

    tempTV = *mag[1];

    sort(mag, len);

    int nMax = 4;

    std::cout << "Object with max price: \n";
    mag[nMax]->PrintAll();

    std::cout << "Elements:"<< TV::CountAll()<<"\n";
    std::cout << "Summary:"<<TV::SumAll()<<"\n\n";

    int delElem = 2;

    for (int i = delElem; i < len-1; ++i){

        std::cout<<"Deleting TV number "<<delElem<<" ...\n";
        *mag[i]=*mag[i+1];
        delete mag[len-1];
        nMax--;
        len--;

    }

    for (int i = 0; i < len; ++i) {

        delete mag[i];

    }

    return 0;

}
