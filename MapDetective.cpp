#include <iostream>
#include <vector>
#define _USE_MATH_DEFINES
#include <math.h>
#include <chrono>
#include <fstream>

#include "Entity.h"
#include "Field2D.h"
#include "LineOfSight.h"
#include "SightSectore.h"
#include "HelpFunc.h"

using namespace std;
double dist = 2;
double degrees= 135;


bool CheckVisible(Entity& A, Entity& B) {
    return A.line->VisibleEntity(A, B);
}

void foo1() {
    Field2D& M = Field2D::GetMap();
    M.CreateEntity(1, 1, 0, 1, degrees, dist);
    M.CreateEntity(1, 2, 1, 0, degrees, dist);
    M.CreateEntity(-5, -1, 0.707, 0.707, degrees, dist);
    auto v = M.GetCountVis();
    int i{ 1 };
    for (auto it : v)
        cout << "Юнит " << i++ << " видит: " << it << " существ" << endl;

}

void foo2() {
    int Entity_Count = 100;
    Field2D& M = Field2D::GetMap();
    auto start = chrono::high_resolution_clock::now();
    ofstream fout("foo2.txt");
    
    for (int i = 0; i < Entity_Count; ++i) {
        M.CreateEntity(rand()%10, rand() % 10, rand() % 10, rand() % 10, degrees, dist);
    }

    auto create_entity = chrono::high_resolution_clock::now();
    cout << "Время создания: " << (create_entity - start).count() << endl;

    auto v = M.GetCountVis();
    auto calc = chrono::high_resolution_clock::now();
    cout << "Время подсчета: " << (calc - create_entity).count() << endl;

    int i{ 1 };
    for (auto it : v)
        fout << "Юнит " << i++ << " видит: " << it << " существ" << endl;
    auto output = chrono::high_resolution_clock::now();
    cout << "Время вывода: " << (output - calc).count() << endl;
    auto end = chrono::high_resolution_clock::now();
    cout <<"Все время: " << (end - start).count() << endl;
}


int main()
{
    srand(time(0));
    system("chcp 1251");
    foo2();
    
    return 0;
}