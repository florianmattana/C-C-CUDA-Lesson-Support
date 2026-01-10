#include <cuda.h>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

__global__ void add_matrix(int* d_vector1, int* d_vector2, int* d_result, int nb_element)
{
    int index = blockIdx.x * blockDim.x + threadIdx.x;
    if(index < nb_element)
    {
        d_result[index] = d_vector1[index] + d_vector2[index];
    }
}

int main()
{
    int nb_element = pow(10, 3); 
    size_t bytes_size = sizeof(int) * nb_element;
    cout << "Taille en bytes: " << bytes_size << endl;

    vector<int> vector1(nb_element);
    vector<int> vector2(nb_element);
    vector<int> result(nb_element);

    // Initialiser les vecteurs avec des valeurs
    for (int i = 0; i < nb_element; i++)
    {
        vector1[i] = i * 2;
        vector2[i] = i * 3;
    }

    // Déclaration des pointeurs device
    int* d_vector1;
    int* d_vector2;
    int* d_result;

    // Allocation mémoire GPU
    cudaMalloc((void**)&d_vector1, bytes_size);
    cudaMalloc((void**)&d_vector2, bytes_size);
    cudaMalloc((void**)&d_result, bytes_size);

    // Copie Host → Device
    cudaMemcpy(d_vector1, vector1.data(), bytes_size, cudaMemcpyHostToDevice);
    cudaMemcpy(d_vector2, vector2.data(), bytes_size, cudaMemcpyHostToDevice);

    // Configuration du kernel
    int NB_THREADS = 256;
    int NB_BLOCKS = (nb_element + NB_THREADS - 1) / NB_THREADS;

    // Lancement du kernel
    add_matrix<<<NB_BLOCKS, NB_THREADS>>>(d_vector1, d_vector2, d_result, nb_element);

    // Copie Device → Host
    cudaMemcpy(result.data(), d_result, bytes_size, cudaMemcpyDeviceToHost);

    // Vérification (optionnel)
    cout << "Premiers résultats: " << endl;
    for(int i = 0; i < 5; i++)
    {
        cout << vector1[i] << " + " << vector2[i] << " = " << result[i] << endl;
    }

    // Libération mémoire GPU
    cudaFree(d_vector1);
    cudaFree(d_vector2);
    cudaFree(d_result);

    return 0;
}