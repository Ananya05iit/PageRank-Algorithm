#include<iostream>
using namespace std;

struct node
{
    float rank;
    int in_no, out_no;
    node **in;
    node **out;
};

node *A = new node;
node *B = new node;
node *C = new node;
node *D = new node;
node *E = new node;
node *F = new node;
node *G = new node;
node *H = new node;
node *I = new node;
node *J = new node;

node **all = new node *[10];

void initialise()
{
    A->rank = 0.1;
    B->rank = 0.1;
    C->rank = 0.1;
    D->rank = 0.1;
    E->rank = 0.1;
    F->rank = 0.1;
    G->rank = 0.1;
    H->rank = 0.1;
    I->rank = 0.1;
    J->rank = 0.1;

    A->in_no = 1;
    A->out_no = 2;
    A->in = new node *[A->in_no];
    A->out = new node *[A->out_no];
    A->in[0] = J;
    A->out[0] = C;
    A->out[1] = B;

    B->in_no = 1;
    B->out_no = 2;
    B->in = new node *[B->in_no];
    B->out = new node *[B->out_no];
    B->in[0] = A;
    B->out[0] = C;
    B->out[1] = E;

    C->in_no = 4;
    C->out_no = 3;
    C->in = new node *[C->in_no];
    C->out = new node *[C->out_no];
    C->in[0] = A;
    C->in[1] = B;
    C->in[2] = D;
    C->in[3] = J;
    C->out[0] = D;
    C->out[1] = H;
    C->out[2] = J;

    D->in_no = 5;
    D->out_no = 3;
    D->in = new node *[D->in_no];
    D->out = new node *[D->out_no];
    D->in[0] = C;
    D->in[1] = E;
    D->in[2] = G;
    D->in[3] = I;
    D->in[3] = J;
    D->out[0] = C;
    D->out[1] = H;
    D->out[2] = J;

    E->in_no = 2;
    E->out_no = 2;
    E->in = new node *[E->in_no];
    E->out = new node *[E->out_no];
    E->in[0] = B;
    E->in[1] = F;
    E->out[0] = D;
    E->out[1] = F;

    F->in_no = 2;
    F->out_no = 1;
    F->in = new node *[F->in_no];
    F->out = new node *[F->out_no];
    F->in[0] = E;
    F->in[1] = G;
    F->out[0] = E;

    G->in_no = 1;
    G->out_no = 2;
    G->in = new node *[G->in_no];
    G->out = new node *[G->out_no];
    G->in[0] = H;
    G->out[0] = D;
    G->out[1] = F;

    H->in_no = 3;
    H->out_no = 1;
    H->in = new node *[H->in_no];
    H->out = new node *[H->out_no];
    H->in[0] = C;
    H->in[1] = D;
    H->in[2] = I;
    H->out[0] = G;

    I->in_no = 1;
    I->out_no = 2;
    I->in = new node *[I->in_no];
    I->out = new node *[I->out_no];
    I->in[0] = J;
    I->out[0] = D;
    I->out[1] = H;

    J->in_no = 2;
    J->out_no = 4;
    J->in = new node *[J->in_no];
    J->out = new node *[J->out_no];
    J->in[0] = C;
    J->in[0] = D;
    J->out[0] = A;
    J->out[1] = C;
    J->out[2] = D;
    J->out[3] = I;

    all[0] = A;
    all[1] = B;
    all[2] = C;
    all[3] = D;
    all[4] = E;
    all[5] = F;
    all[6] = G;
    all[7] = H;
    all[8] = I;
    all[9] = J;
}

int main()
{
    initialise();
    float new_ranks[10];
    float sum = 0;
    cout<<"ak";

    for(int  x= 0; x < 10; x++)
    {
        for(int j = 0; j < 10; j++)
        {
            new_ranks[j] = 0;
            for(int k = 0; k < all[j]->in_no; k++)
            {
                new_ranks[j] += (all[j]->in[k]->rank) / (all[j]->in[k]->out_no);
            }
        }
        for(int l = 0; l < 10; l++)
        {
            all[l]->rank = new_ranks[l];
        }
        cout << "////////////////////////////////////////////////////" <<endl;
        sum = 0;
        for(int i = 0; i < 10; i++)
        {
            cout<<all[i]->rank<<endl;
        }
        for(int i = 0; i < 10; i++)
        {
            sum += all[i]->rank;
        }

        cout<<sum<<endl;
        cout<<"//////////////////////////////////////////////////////"<<endl;
    }
    return 0;
}