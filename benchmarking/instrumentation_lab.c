#include <stdio.h>
#include <time.h>

#define DATASET_SIZE 50000
#define SEED_VALUE 42u

static int dataset[DATASET_SIZE];

static unsigned int next_value(unsigned int *state)
{
    *state = (*state * 1103515245u) + 12345u;
    return *state;
}

static void build_dataset(void)
{
    unsigned int state;
    int i;

    state = SEED_VALUE;

    for (i = 0; i < DATASET_SIZE; i++)
        dataset[i] = (int)(next_value(&state) % 100000);
}

static void process_dataset(void)
{
    int i;
    int v;

    for (i = 0; i < DATASET_SIZE; i++)
    {
        v = dataset[i];
        v = (v * 3) + (v / 7) - (v % 11);
        if (v < 0)
            v = -v;
        dataset[i] = v;
    }
}

static unsigned long reduce_checksum(void)
{
    unsigned long sum;
    int i;

    sum = 0;
    for (i = 0; i < DATASET_SIZE; i++)
        sum = (sum * 131ul) + (unsigned long)dataset[i];

    return sum;
}

int main(void)
{
    unsigned long checksum;


    /* Students must add clock-based timing and print required lines. */
	clock_t time0, time1, time2, time3;

	double build_data_seconds, process_seconds, reduce_seconds, total_seconds;

	time0 = clock();
	build_dataset();

	time1 = clock();
	process_dataset();

	time2 = clock();
	checksum = reduce_checksum();

    	time3 = clock();

    	if (checksum == 0ul)
	{
        	printf("impossible\n");
	}

	build_data_seconds = (double)(time1 - time0) / CLOCKS_PER_SEC;

	process_seconds = (double)(time2 - time1) / CLOCKS_PER_SEC;

	reduce_seconds = (double)(time3 - time2) / CLOCKS_PER_SEC;

	total_seconds = (double)(time3 - time0) / CLOCKS_PER_SEC;

	printf("TOTAL seconds: %.6f\n", total_seconds);
	printf("BUILD_DATA seconds: %.6f\n", build_data_seconds);
	printf("PROCESS seconds: %.6f\n", process_seconds);
	printf("REDUCE seconds: %.6f\n", reduce_seconds);


    /* Required output (exact format, no extra lines):
     * TOTAL seconds: <float>
     * BUILD_DATA seconds: <float>
     * PROCESS seconds: <float>
     * REDUCE seconds: <float>
     */

    return 0;
}
