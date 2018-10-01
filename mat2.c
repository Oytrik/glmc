#include "glmc.h"
#include<stdio.h>
#include<math.h>
void glmc_mat2f_from_3f(mat2f dest, mat3f src)
{	
	dest[0][0] = src[0][0];
	dest[0][1] = src[0][1];
	dest[1][0] = src[1][0];
	dest[1][1] = src[1][1];
	
}
void glmc_mat2f_from_4f(mat2f dest, mat4f src)
{	
	dest[0][0] = src[0][0];
	dest[0][1] = src[0][1];
	dest[1][0] = src[1][0];
	dest[1][1] = src[1][1];	
}

void glmc_mat2f_copy(mat2f dest, mat2f src)
{
	dest[0][0] = src[0][0];
	dest[0][1] = src[0][1];
	dest[1][0] = src[1][0];
	dest[1][1] = src[1][1];	
}
void glmc_mat2f_add(mat2f dest, mat2f src_a, mat2f src_b)
{
	dest[0][0] = src_a[0][0] + src_b[0][0];
	dest[0][1] = src_a[0][1] + src_b[0][1];
	dest[1][0] = src_a[1][0] + src_b[1][0];
	dest[1][1] = src_a[1][1] + src_b[1][1];
}
void glmc_mat2f_add_dest(mat2f dest, mat2f src_b)
{
	dest[0][0] += src_b[0][0];
	dest[0][1] += src_b[0][1];
	dest[1][0] += src_b[1][0];
	dest[1][1] += src_b[1][1];
}
void glmc_mat2f_sub(mat2f dest, mat2f src_a, mat2f src_b)
{
	dest[0][0] = src_a[0][0] - src_b[0][0];
	dest[0][1] = src_a[0][1] - src_b[0][1];
	dest[1][0] = src_a[1][0] - src_b[1][0];
	dest[1][1] = src_a[1][1] - src_b[1][1];
}
void glmc_mat2f_sub_dest(mat2f dest, mat2f src_b)
{
	dest[0][0] -= src_b[0][0];
	dest[0][1] -= src_b[0][1];
	dest[1][0] -= src_b[1][0];
	dest[1][1] -= src_b[1][1];
}
void glmc_mat2f_mul(mat2f dest, mat2f src_a, mat2f src_b)
{
	dest[0][0] = (src_a[0][0]*src_b[0][0] + src_a[1][0]*src_b[0][1]);
	dest[0][1] = (src_a[0][1]*src_b[0][0] + src_a[1][1]*src_b[0][1]);
	dest[1][0] = (src_a[0][0]*src_b[1][0] + src_a[1][0]*src_b[1][1]);
	dest[1][1] = (src_a[0][1]*src_b[1][0] + src_a[1][1]*src_b[1][1]);
}
void glmc_mat2f_mul_dest(mat2f dest, mat2f src_b)
{
	mat2f t;
	t[0][0] = dest[0][0];
	t[0][1] = dest[0][1];
	t[1][0] = dest[1][0];
	t[1][1] = dest[1][1];
	dest[0][0] = (t[0][0]*src_b[0][0] + t[1][0]*src_b[0][1]);
	dest[0][1] = (t[0][1]*src_b[0][0] + t[1][1]*src_b[0][1]);
	dest[1][0] = (t[0][0]*src_b[1][0] + t[1][0]*src_b[1][1]);
	dest[1][1] = (t[0][1]*src_b[1][0] + t[1][1]*src_b[1][1]);
}
void glmc_mat2f_mul_s(mat2f dest, mat2f src_a, float src_b)
{
	dest[0][0] = src_a[0][0] * src_b;
	dest[0][1] = src_a[0][1] * src_b;
	dest[1][0] = src_a[1][0] * src_b;
	dest[1][1] = src_a[1][1] * src_b;
}
float glmc_mat2f_determinant(mat2f dest)
{	
	return (dest[0][0]*dest[1][1] - dest[1][0]*dest[0][1]);
}
void glmc_mat2f_inverse(mat2f dest, mat2f src)
{
	float inverse;
	inverse = 1/(glmc_mat2f_determinant(src));
	dest[0][0] = (float) src[1][1]*inverse;
	dest[0][1] = (float) (-1*src[0][1]*inverse);
	dest[1][0] = (float) (-1*src[1][0]*inverse);
	dest[1][1] = (float) src[0][0]*inverse;	
}
void glmc_mat2f_div(mat2f dest, mat2f src_a, mat2f src_b)
{
	mat2f src_b_inv;
	glmc_mat2f_inverse(src_b_inv, src_b);
	glmc_mat2f_mul(dest, src_a, src_b_inv);
}
void glmc_mat2f_div_dest(mat2f dest, mat2f src_b)
{
	mat2f t;
	t[0][0] = dest[0][0];
	t[0][1] = dest[0][1];
	t[1][0] = dest[1][0];
	t[1][1] = dest[1][1];
	mat2f inv;
	glmc_mat2f_inverse(inv, src_b);
	glmc_mat2f_mul(dest, t, inv);	
}
void glmc_mat2f_div_s(mat2f dest, mat2f src_a, float src_b)
{
	dest[0][0] = src_a[0][0] / src_b;
	dest[0][1] = src_a[0][1] / src_b;
	dest[1][0] = src_a[1][0] / src_b;
	dest[1][1] = src_a[1][1] / src_b;
}
void glmc_mat2f_madd(mat2f dest, mat2f src_a, mat2f src_b)
{
	dest[0][0] = dest[0][0] + (src_a[0][0]*src_b[0][0] + src_a[1][0]*src_b[0][1]);
	dest[0][1] = dest[0][1] + (src_a[0][1]*src_b[0][0] + src_a[1][1]*src_b[0][1]);
	dest[1][0] = dest[1][0] + (src_a[0][0]*src_b[1][0] + src_a[1][0]*src_b[1][1]);
	dest[1][1] = dest[1][1] + (src_a[0][1]*src_b[1][0] + src_a[1][1]*src_b[1][1]);
}
void glmc_mat2f_msub(mat2f dest, mat2f src_a, mat2f src_b)
{
	dest[0][0] = dest[0][0] - (src_a[0][0]*src_b[0][0] + src_a[1][0]*src_b[0][1]);
	dest[0][1] = dest[0][1] - (src_a[0][1]*src_b[0][0] + src_a[1][1]*src_b[0][1]);
	dest[1][0] = dest[1][0] - (src_a[0][0]*src_b[1][0] + src_a[1][0]*src_b[1][1]);
	dest[1][1] = dest[1][1] - (src_a[0][1]*src_b[1][0] + src_a[1][1]*src_b[1][1]);
}
void glmc_mat2f_transpose(mat2f dest, mat2f src)
{
	dest[0][0] = src[0][0];
	dest[0][1] = src[1][0];
	dest[1][0] = src[0][1];
	dest[1][1] = src[1][1];
}
void glmc_mat2f_transpose_dest(mat2f dest)
{
	float t;
	t = dest[0][1];
	dest[0][1] = dest[1][0];
	dest[1][0] = t;
}
void glmc_mat2f_normlize(mat2f dest, mat2f src)
{
	float det = glmc_mat2f_determinant(src);
	dest[0][0] = src[0][0]/det;
	dest[0][1] = src[0][1]/det;
	dest[1][0] = src[1][0]/det;
	dest[1][1] = src[1][1]/det;
}
void glmc_mat2f_normlize_dest(mat2f dest)
{
	glmc_mat2f_normlize(dest, dest);
}
void glmc_mat2f_scale(mat2f dest, float src_a)
{
	dest[0][0] = src_a;
	dest[0][1] = 0;
	dest[1][0] = 0;
	dest[1][1] = 1;
}
