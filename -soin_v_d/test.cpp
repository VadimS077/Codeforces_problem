#include <iostream>
#include <cmath>


double max(double lhs, double rhs) {
    return (lhs > rhs) ? lhs : rhs;
}

double sign(double num) {
    if (num > 0) {
        return 1.0;
    }
    if (num < 0) {
        return -1.0;
    }
    return 0;
}

struct phys {
    const double dt = 0.001, g = 9.8;
    double m, k, mu;
    double x_stable, x, v = 0, f = 0, a = 0;
    double t = 0;
};







void get_model(phys& model) {
    std::cin >> model.m >> model.k >> model.mu >> model.x >> model.x_stable;
}

void movement(phys& model) {
    //model.x_stable = model.x + 1;
    model.t += model.dt;
    model.f = model.k * (model.x_stable - model.x) - sign(model.v) * model.mu * model.m * model.g;
    model.a = model.f / model.m;
    model.v += model.a * model.dt;
    model.x += model.v * model.dt;
}

void print_model(phys model) {
    for (int i = -30; i < round(model.x/10); ++i) {
        std::cout << '.';
    }
    std::cout << '@';
    for (int i = round(model.x/10) + 1; i <= 70; ++i) {
        std::cout << '.';
    }
    std::cout << std::endl;
}

void work_with(phys cm) {
    while (cm.t <= 100) {
        for (int i = 0; i < 100; ++i) {
            movement(cm);
        }
        print_model(cm);
    }
}

int main() {
    state model;
    get_model(model);
    work_with(model);
    return 0;
}
