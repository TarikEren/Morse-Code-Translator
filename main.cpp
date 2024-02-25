#include "Alphabet.hpp"

int main() {

    Node root = Node('\0');
    Alphabet alphabet(&root);
    alphabet.reset_current();
    Node a = Node('a');
    Node b = Node('b');
    Node c = Node('c');
    Node d = Node('d');
    Node e = Node('e');
    Node f = Node('f');
    Node g = Node('g');
    Node h = Node('h');
    Node i = Node('i');
    Node j = Node('j');
    Node k = Node('k');
    Node l = Node('l');
    Node m = Node('m');
    Node n = Node('n');
    Node o = Node('o');
    Node p = Node('p');
    Node q = Node('q');
    Node r = Node('r');
    Node s = Node('s');
    Node t = Node('t');
    Node u = Node('u');
    Node v = Node('v');
    Node w = Node('w');
    Node x = Node('x');
    Node y = Node('y');
    Node z = Node('z');

    root.set_dot(&e);
    root.set_dash(&t);

    e.set_dot(&i);
    e.set_dash(&a);
    t.set_dot(&n);
    t.set_dash(&m);

    i.set_dot(&s);
    i.set_dash(&u);
    a.set_dot(&r);
    a.set_dash(&w);
    n.set_dot(&d);
    n.set_dash(&k);
    m.set_dot(&g);
    m.set_dash(&o);

    s.set_dot(&h);
    s.set_dash(&v);
    u.set_dot(&f);
    r.set_dot(&l);
    w.set_dot(&p);
    w.set_dash(&j);
    d.set_dot(&b);
    d.set_dash(&x);
    k.set_dot(&c);
    k.set_dash(&y);
    g.set_dot(&z);
    g.set_dash(&q);

    //....,.,._..,._..,___,;.__,___,._.,._..,_..,! = hello world

    std::string input;
    std::string buffer;
    std::cin >> input;
    int index = 0;
    char current = input[index];
    while (current != '\0') {
        if (alphabet.get_current() == nullptr) {
            std::cerr << "Current node is nullptr\n";
            break;
        }
        if (current == '.') {
            alphabet.traverse(DOT);
        }
        else if (current == '_') {
            alphabet.traverse(DASH);
        }
        else if (current == ',') {
            buffer += alphabet.get_current()->get_value();
            alphabet.reset_current();
        }
        else if (current == ';') { //Add space
            buffer += ' ';
        }
        index++;
        current = input[index];
    }

    std::cout << "Word: " << buffer << std::endl;
    return 0;
}