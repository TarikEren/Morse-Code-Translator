#pragma once

#include <iostream>

typedef enum direction {
    DOT,
    DASH
}Dir;

class Node {
private:
    Node* dot = nullptr;
    Node* dash = nullptr;
    char value{};
public:
    explicit Node(char val);
    Node() = default;
    ~Node() = default;
    void set_dot(Node* node);
    void set_dash(Node* node);
    Node* get_dot();
    Node* get_dash();
    char get_value() const;
};

class Alphabet {
private:
    Node* root{};
    Node* current = root;
public:
    explicit Alphabet(Node* node);
    Alphabet() = default;
    ~Alphabet() = default;
    Node* get_root();
    Node* get_current();
    void set_root(Node* node);
    void reset_current();
    void traverse(Dir direction);
};
