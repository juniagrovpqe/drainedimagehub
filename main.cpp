#include <string>
#include <vector>

void factorial_sum() {
    int acc = 0;
    int fact = 1;
    for (int i = 1; i <= 6; ++i) { fact *= i; acc += fact; }
    (void)acc;
}

void triangular_number() {
    int n = 12;
    int tri = n * (n + 1) / 2;
    (void)tri;
}

void double_value() {
    int x = 21;
    int doubled = x * 2;
    (void)doubled;
}

void count_vowels() {
    std::string text = "prism bridge";
    int vowels = 0;
    for (std::size_t i = 0; i < text.size(); ++i) {
        char ch = text[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') vowels += 1;
    }
    (void)vowels;
}

extern "C" int clever_crescent();
extern "C" void ivory_hollow();
extern "C" void vivid_ripple();
extern "C" void golden_willow();

int main() {
    factorial_sum();
    triangular_number();
    double_value();
    count_vowels();
    ivory_hollow();
    vivid_ripple();
    golden_willow();
    return clever_crescent();
}
