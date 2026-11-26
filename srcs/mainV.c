//#include "../include/push_swap.h"

//#define GREEN "\033[0;32m"
//#define BOLD_GREEN "\033[1;32m"
//#define CYAN "\033[0;36m"
//#define RESET "\033[0m"
//#define RED "\033[0;31m"
//#define PURPLE "\033[0;35m"

//int	main(void)
//{
//	t_all	all;

//	all.stack_a = malloc(sizeof(int) * 10);
//	all.stack_b = malloc(sizeof(int) * 10);
//	all.fa = 0;
//	all.fb = 10;
//	all.tsa = 10;
//	all.tsb = 0;
//	all.n_args = 10;
//	all.counterp = 0;
//	int	i = 0;

//	all.stack_a[0] = 5;
//	all.stack_a[1] = 3;
//	all.stack_a[2] = 0;
//	all.stack_a[3] = 2;
//	all.stack_a[4] = 8;
//	all.stack_a[5] = 6;
//	all.stack_a[6] = 7;
//	all.stack_a[7] = 9;
//	all.stack_a[8] = 1;
//	all.stack_a[9] = 4;
//	//all.stack_a[10] = -39;
//	//all.stack_a[11] = -40;
//	//all.stack_a[12] = -37;
//	//all.stack_a[13] = -38;
//	//all.stack_a[14] = -35;
//	//all.stack_a[15] = -36;
//	//all.stack_a[16] = -33;
//	//all.stack_a[17] = -34;
//	//all.stack_a[18] = -32;
//	//all.stack_a[19] = -31;
//	//all.stack_a[20] = -30;
//	//all.stack_a[21] = -29;
//	//all.stack_a[22] = -28;
//	//all.stack_a[23] = -27;
//	//all.stack_a[24] = -26;
//	//all.stack_a[25] = -25;
//	//all.stack_a[26] = -24;
//	//all.stack_a[27] = -23;
//	//all.stack_a[28] = -21;
//	//all.stack_a[29] = -22;
//	//all.stack_a[30] = -19;
//	//all.stack_a[31] = -20;
//	//all.stack_a[32] = -18;
//	//all.stack_a[33] = -17;
//	//all.stack_a[34] = -15;
//	//all.stack_a[35] = -16;
//	//all.stack_a[36] = -14;
//	//all.stack_a[37] = -13;
//	//all.stack_a[38] = -12;
//	//all.stack_a[39] = -11;
//	//all.stack_a[40] = -10;
//	//all.stack_a[41] = -9;
//	//all.stack_a[42] = -8;
//	//all.stack_a[43] = -7;
//	//all.stack_a[44] = -6;
//	//all.stack_a[45] = -5;
//	//all.stack_a[46] = -4;
//	//all.stack_a[47] = -3;
//	//all.stack_a[48] = -2;
//	//all.stack_a[49] = -1;
//	//all.stack_a[50] = 0;
//	//all.stack_a[51] = 1;
//	//all.stack_a[52] = 2;
//	//all.stack_a[53] = 3;
//	//all.stack_a[54] = 5;
//	//all.stack_a[55] = 4;
//	//all.stack_a[56] = 6;
//	//all.stack_a[57] = 7;
//	//all.stack_a[58] = 8;
//	//all.stack_a[59] = 9;
//	//all.stack_a[60] = 10;
//	//all.stack_a[61] = 11;
//	//all.stack_a[62] = 12;
//	//all.stack_a[63] = 13;
//	//all.stack_a[64] = 14;
//	//all.stack_a[65] = 15;
//	//all.stack_a[66] = 16;
//	//all.stack_a[67] = 17;
//	//all.stack_a[68] = 19;
//	//all.stack_a[69] = 18;
//	//all.stack_a[70] = 20;
//	//all.stack_a[71] = 21;
//	//all.stack_a[72] = 22;
//	//all.stack_a[73] = 23;
//	//all.stack_a[74] = 25;
//	//all.stack_a[75] = 24;
//	//all.stack_a[76] = 26;
//	//all.stack_a[77] = 27;
//	//all.stack_a[78] = 28;
//	//all.stack_a[79] = 29;
//	//all.stack_a[80] = 31;
//	//all.stack_a[81] = 30;
//	//all.stack_a[82] = 32;
//	//all.stack_a[83] = 33;
//	//all.stack_a[84] = 34;
//	//all.stack_a[85] = 35;
//	//all.stack_a[86] = 36;
//	//all.stack_a[87] = 37;
//	//all.stack_a[88] = 38;
//	//all.stack_a[89] = 39;
//	//all.stack_a[90] = 40;
//	//all.stack_a[91] = 41;
//	//all.stack_a[92] = 42;
//	//all.stack_a[93] = 43;
//	//all.stack_a[94] = 45;
//	//all.stack_a[95] = 44;
//	//all.stack_a[96] = 46;
//	//all.stack_a[97] = 47;
//	//all.stack_a[98] = 49;
//	//all.stack_a[99] = 48;

//	printf("Disorder %0.2f\n", compute_disorder(&all));
//	//while (i < 100)
//	//{
//	//	printf("all.stack_a[i] = %d\n", all.stack_a[i]);
//	//	i++;
//	//}
//	medium_algo_chunks_based(&all);
//	printf("Disorder %0.2f\n", compute_disorder(&all));
//}