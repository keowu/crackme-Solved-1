void generateKEY(){
    unsigned int timecurrent;
    int j, mul_dif;
    char password_storage[13];
    char rotate_key, rotate_key_2;
    timecurrent = time(0);
    srand(timecurrent);
    for (j = 0; j <= 3; ++j) {
        mul_dif = 3 * j;
        password_storage[mul_dif] = rand() % 10 + 48;
        rotate_key = rand() % 26 + 65;
        password_storage[3 * j + 1] = rotate_key;
        rotate_key_2 = rand() % 26 + 97;
        password_storage[3 * j + 2] = rotate_key_2;
    }
    password_storage[3 * j] = 0;
    std::cout << "Generated password: " << password_storage << std::endl;
}

