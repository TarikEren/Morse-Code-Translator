#include "Alphabet.hpp"

Node::Node(char val) {
    this->value = val;
}
void Node::set_dot(Node* node) {
    this->dot = node;
}
void Node::set_dash(Node* node) {
    this->dash = node;
}
Node* Node::get_dot() {
    return this->dot;
}
Node* Node::get_dash() {
    return this->dash;
}
[[nodiscard]] char Node::get_value() const {
    return this->value;
}

Alphabet::Alphabet(Node* node) {
    this->root = node;
}

class Node* Alphabet::get_root() {
    return this->root;
}
class Node* Alphabet::get_current() {
    return this->current;
}
void Alphabet::set_root(Node* node) {
    this->root = node;
}
void Alphabet::reset_current() {
    this->current = this->root;
}
void Alphabet::traverse(Dir direction) {
    if (direction == DOT) {
        this->current = current->get_dot();
    }
    else if (direction == DASH) {
        this->current = this->current->get_dash();
    }
    else {
        std::cerr << "What\n";
        return;
    }
}
