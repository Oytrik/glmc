#include "glmc.h"
#include<stdio>
#include<math.h>
void glmc_mat3f_from_4f(mat3f dest, mat4f src)
{	
	dest[0][0] = src[0][0];
	dest[0][1] = src[0][1];
	dest[0][2] = src[0][2];
	dest[1][0] = src[1][0];
	dest[1][1] = src[1][1];
	dest[1][2] = src[1][2];
	dest[2][0] = src[2][0];
	dest[2][1] = src[2][1];
	dest[2][2] = src[2][2];
}
void glmc_mat3f_copy(mat3f dest, mat3f src)
{	
	dest[0][0] = src[0][0];
	dest[0][1] = src[0][1];
	dest[0][2] = src[0][2];
	dest[1][0] = src[1][0];
	dest[1][1] = src[1][1];
	dest[1][2] = src[1][2];
	dest[2][0] = src[2][0];
	dest[2][1] = src[2][1];
	dest[2][2] = src[2][2];	
}
void glmc_mat3f_add(mat3f dest, mat3f src_a, mat3f src_b)
{
	dest[0][0] = src_a[0][0] + src_b[0][0];
	dest[0][1] = src_a[0][1] + src_b[0][1];
	dest[0][2] = src_a[0][2] + src_b[0][2];
	dest[1][0] = src_a[1][0] + src_b[1][0];
	dest[1][1] = src_a[1][1] + src_b[1][1];
	dest[1][2] = src_a[1][2] + src_b[1][2];
	dest[2][0] = src_a[2][0] + src_b[2][0];
	dest[2][1] = src_a[2][1] + src_b[2][1];
	dest[2][2] = src_a[2][2] + src_b[2][2];
}
void glmc_mat3f_add_dest(mat3f dest, mat3f src_b)
{
	dest[0][0] = dest[0][0] + src_b[0][0];
	dest[0][1] = dest[0][1] + src_b[0][1];
	dest[0][2] = dest[0][2] + src_b[0][2];
	dest[1][0] = dest[1][0] + src_b[1][0];
	dest[1][1] = dest[1][1] + src_b[1][1];
	dest[1][2] = dest[1][2] + src_b[1][2];
	dest[2][0] = dest[2][0] + src_b[2][0];
	dest[2][1] = dest[2][1] + src_b[2][1];
	dest[2][2] = dest[2][2] + src_b[2][2];
}
void glmc_mat3f_sub(mat3f dest, mat3f src_a, mat3f src_b)
{
	dest[0][0] = src_a[0][0] - src_b[0][0];
	dest[0][1] = src_a[0][1] - src_b[0][1];
	dest[0][2] = src_a[0][2] - src_b[0][2];
	dest[1][0] = src_a[1][0] - src_b[1][0];
	dest[1][1] = src_a[1][1] - src_b[1][1];
	dest[1][2] = src_a[1][2] - src_b[1][2];
	dest[2][0] = src_a[2][0] - src_b[2][0];
	dest[2][1] = src_a[2][1] - src_b[2][1];
	dest[2][2] = src_a[2][2] - src_b[2][2];
}
void glmc_mat3f_sub_dest(mat3f dest, mat3f src_b)
{
	dest[0][0] = dest[0][0] - src_b[0][0];
	dest[0][1] = dest[0][1] - src_b[0][1];
	dest[0][2] = dest[0][2] - src_b[0][2];
	dest[1][0] = dest[1][0] - src_b[1][0];
	dest[1][1] = dest[1][1] - src_b[1][1];
	dest[1][2] = dest[1][2] - src_b[1][2];
	dest[2][0] = dest[2][0] - src_b[2][0];
	dest[2][1] = dest[2][1] - src_b[2][1];
	dest[2][2] = dest[2][2] - src_b[2][2];
}
void glmc_mat3f_mul(mat3f dest, mat3f src_a, mat3f src_b)
{
	dest[0][0] = (src_a[0][0]*src_b[0][0] + src_a[1][0]*src_b[0][1] + src_a[2][0]*src_b[0][2]);
	dest[0][1] = (src_a[0][1]*src_b[0][0] + src_a[1][1]*src_b[0][1] + src_a[2][1]*src_b[0][2]);
	dest[0][2] = (src_a[0][2]*src_b[0][0] + src_a[1][2]*src_b[0][1] + src_a[2][2]*src_b[0][2]);
	dest[1][0] = (src_a[0][0]*src_b[1][0] + src_a[1][0]*src_b[1][1] + src_a[2][0]*src_b[1][2]);
	dest[1][1] = (src_a[0][1]*src_b[1][0] + src_a[1][1]*src_b[1][1] + src_a[2][1]*src_b[1][2]);
	dest[1][2] = (src_a[0][2]*src_b[1][0] + src_a[1][2]*src_b[1][1] + src_a[2][2]*src_b[1][2]);
	dest[2][0] = (src_a[0][0]*src_b[2][0] + src_a[1][0]*src_b[2][1] + src_a[2][0]*src_b[2][2]);
	dest[2][1] = (src_a[0][1]*src_b[2][0] + src_a[1][1]*src_b[2][1] + src_a[2][1]*src_b[2][2]);
	dest[2][2] = (src_a[0][2]*src_b[2][0] + src_a[1][2]*src_b[2][1] + src_a[2][2]*src_b[2][2]);
}
void glmc_mat3f_mul_dest(mat3f dest, mat3f src_b)
{
	mat3f temp;
	t[0][0] = dest[0][0];
	t[0][1] = dest[0][1];
	t[0][2] = dest[0][2];
	t[1][0] = dest[1][0];
	t[1][1] = dest[1][1];
	t[1][2] = dest[1][2];
	t[2][0] = dest[2][0];
	t[2][1] = dest[2][1];
	t[2][2] = dest[2][2];
	dest[0][0] = (t[0][0]*src_b[0][0] + t[1][0]*src_b[0][1] + t[2][0]*src_b[0][2]);
	dest[0][1] = (t[0][1]*src_b[0][0] + t[1][1]*src_b[0][1] + t[2][1]*src_b[0][2]);
	dest[0][2] = (t[0][2]*src_b[0][0] + t[1][2]*src_b[0][1] + t[2][2]*src_b[0][2]);
	dest[1][0] = (t[0][0]*src_b[1][0] + t[1][0]*src_b[1][1] + t[2][0]*src_b[1][2]);
	dest[1][1] = (t[0][1]*src_b[1][0] + t[1][1]*src_b[1][1] + t[2][1]*src_b[1][2]);
	dest[1][2] = (t[0][2]*src_b[1][0] + t[1][2]*src_b[1][1] + t[2][2]*src_b[1][2]);
	dest[2][0] = (t[0][0]*src_b[2][0] + t[1][0]*src_b[2][1] + t[2][0]*src_b[2][2]);
	dest[2][1] = (t[0][1]*src_b[2][0] + t[1][1]*src_b[2][1] + t[2][1]*src_b[2][2]);
	dest[2][2] = (t[0][2]*src_b[2][0] + t[1][2]*src_b[2][1] + t[2][2]*src_b[2][2]);
}
void glmc_mat3f_mul_s(mat3f dest, mat3f src_a, float src_b)
{
	dest[0][0] = src_a[0][0] * src_b;
	dest[0][1] = src_a[0][1] * src_b;
	dest[0][2] = src_a[0][2] * src_b;
	dest[1][0] = src_a[1][0] * src_b;
	dest[1][1] = src_a[1][1] * src_b;
	dest[1][2] = src_a[1][2] * src_b;
	dest[2][0] = src_a[2][0] * src_b;
	dest[2][1] = src_a[2][1] * src_b;
	dest[2][2] = src_a[2][2] * src_b;
}
float glmc_mat3f_determinant(mat3f dest)
{
	float det;
	det= (dest[0][0]*((dest[1][1]*dest[2][2])-(dest[2][1]*dest[1][2]))) - (dest[1][0]*((dest[0][1]*dest[2][2])-(dest[2][1]*dest[0][2]))) + (dest[2][0]*((dest[0][1]*dest[1][2])-(dest[1][1]*dest[0][2])));
	return det;
}
void glmc_mat3f_inverse(mat3f dest, mat3f src)
{
  float det = glmc_mat3f_determinant(src);
	dest[0][0] = (src[1][1]*src[2][2] - src[2][1]*src[1][2])/det;
	dest[0][1] = -1*(src[0][1]*src[2][2] - src[2][1]*src[0][2])/det;
	dest[0][2] = (src[0][1]*src[1][2] - src[1][1]*src[0][2])/det;
	dest[1][0] = -1*(src[1][0]*src[2][2] - src[2][0]*src[1][2])/det;
	dest[1][1] = (src[0][0]*src[2][2] - src[2][0]*src[0][2])/det;
	dest[1][2] = -1*(src[0][0]*src[1][2] - src[1][0]*src[0][2])/det;
	dest[2][0] = (src[1][0]*src[2][1] - src[2][0]*src[1][1])/det;
	dest[2][1] = -1*(src[0][0]*src[2][1] - src[2][0]*src[0][1])/det;
	dest[2][2] = (src[0][0]*src[1][1] - src[1][0]*src[0][1])/det;	
}
void glmc_mat3f_div(mat3f dest, mat3f src_a, mat3f src_b)
{
	mat3f inv;
	glmc_mat3f_inverse(inv, src_b);
	glmc_mat3f_mul(dest, src_a, inv);
}
void glmc_mat3f_div_dest(mat3f dest, mat3f src_b)
{
	mat3f t;
	t[0][0] = dest[0][0];
	t[0][1] = dest[0][1];
	t[0][2] = dest[0][2];
	t[1][0] = dest[1][0];
	t[1][1] = dest[1][1];
	t[1][2] = dest[1][2];
	t[2][0] = dest[2][0];
	t[2][1] = dest[2][1];
	t[2][2] = dest[2][2];
	mat3f inv;
	glmc_mat3f_inverse(inv, src_b);
	glmc_mat3f_mul(dest, t, inv);	
}
void glmc_mat3f_div_s(mat3f dest, mat3f src_a, float src_b)
{	
	dest[0][0] = src_a[0][0] / src_b;
	dest[0][1] = src_a[0][1] / src_b;
	dest[0][2] = src_a[0][2] / src_b;
	dest[1][0] = src_a[1][0] / src_b;
	dest[1][1] = src_a[1][1] / src_b;
	dest[1][2] = src_a[1][2] / src_b;
	dest[2][0] = src_a[2][0] / src_b;
	dest[2][1] = src_a[2][1] / src_b;
	dest[2][2] = src_a[2][2] / src_b;
}
void glmc_mat3f_madd(mat3f dest, mat3f src_a, mat3f src_b)
{
	dest[0][0] = dest[0][0] + (src_a[0][0]*src_b[0][0] + src_a[1][0]*src_b[0][1] + src_a[2][0]*src_b[0][2]);
	dest[0][1] = dest[0][1] + (src_a[0][1]*src_b[0][0] + src_a[1][1]*src_b[0][1] + src_a[2][1]*src_b[0][2]);
	dest[0][2] = dest[0][2] + (src_a[0][2]*src_b[0][0] + src_a[1][2]*src_b[0][1] + src_a[2][2]*src_b[0][2]);
	dest[1][0] = dest[1][0] + (src_a[0][0]*src_b[1][0] + src_a[1][0]*src_b[1][1] + src_a[2][0]*src_b[1][2]);
	dest[1][1] = dest[1][1] + (src_a[0][1]*src_b[1][0] + src_a[1][1]*src_b[1][1] + src_a[2][1]*src_b[1][2]);
	dest[1][2] = dest[1][2] + (src_a[0][2]*src_b[1][0] + src_a[1][2]*src_b[1][1] + src_a[2][2]*src_b[1][2]);
	dest[2][0] = dest[2][0] + (src_a[0][0]*src_b[2][0] + src_a[1][0]*src_b[2][1] + src_a[2][0]*src_b[2][2]);
	dest[2][1] = dest[2][1] + (src_a[0][1]*src_b[2][0] + src_a[1][1]*src_b[2][1] + src_a[2][1]*src_b[2][2]);
	dest[2][2] = dest[2][2] + (src_a[0][2]*src_b[2][0] + src_a[1][2]*src_b[2][1] + src_a[2][2]*src_b[2][2]);
}
void glmc_mat3f_msub(mat3f dest, mat3f src_a, mat3f src_b)
{
	dest[0][0] = dest[0][0] - (src_a[0][0]*src_b[0][0] + src_a[1][0]*src_b[0][1] + src_a[2][0]*src_b[0][2]);
	dest[0][1] = dest[0][1] - (src_a[0][1]*src_b[0][0] + src_a[1][1]*src_b[0][1] + src_a[2][1]*src_b[0][2]);
	dest[0][2] = dest[0][2] - (src_a[0][2]*src_b[0][0] + src_a[1][2]*src_b[0][1] + src_a[2][2]*src_b[0][2]);
	dest[1][0] = dest[1][0] - (src_a[0][0]*src_b[1][0] + src_a[1][0]*src_b[1][1] + src_a[2][0]*src_b[1][2]);
	dest[1][1] = dest[1][1] - (src_a[0][1]*src_b[1][0] + src_a[1][1]*src_b[1][1] + src_a[2][1]*src_b[1][2]);
	dest[1][2] = dest[1][2] - (src_a[0][2]*src_b[1][0] + src_a[1][2]*src_b[1][1] + src_a[2][2]*src_b[1][2]);
	dest[2][0] = dest[2][0] - (src_a[0][0]*src_b[2][0] + src_a[1][0]*src_b[2][1] + src_a[2][0]*src_b[2][2]);
	dest[2][1] = dest[2][1] - (src_a[0][1]*src_b[2][0] + src_a[1][1]*src_b[2][1] + src_a[2][1]*src_b[2][2]);
	dest[2][2] = dest[2][2] - (src_a[0][2]*src_b[2][0] + src_a[1][2]*src_b[2][1] + src_a[2][2]*src_b[2][2]);
}
void glmc_mat3f_transpose(mat3f dest, mat3f src)
{
	dest[0][0] = src[0][0];
	dest[0][1] = src[1][0];
	dest[0][2] = src[2][0];
	dest[1][0] = src[0][1];
	dest[1][1] = src[1][1];
	dest[1][2] = src[2][1];
	dest[2][0] = src[0][2];
	dest[2][1] = src[1][2];
	dest[2][2] = src[2][2];
}

void glmc_mat3f_transpose_dest(mat3f dest)
{
	float t1 = dest[0][1];
	float t2 = dest[0][2];
	float t3 = dest[1][2];
	dest[0][1] = dest[1][0];
	dest[1][0] = t1;
	dest[0][2] = dest[2][0];
	dest[2][0] = t2;
	dest[1][2] = dest[2][1];
	dest[2][1] = t3;
}
void glmc_mat3f_normlize(mat3f dest, mat3f src)
{
	float det = glmc_mat3f_determinant(src);
	dest[0][0] = src[0][0]/det;
	dest[0][1] = src[0][1]/det;
	dest[0][2] = src[0][2]/det;
	dest[1][0] = src[1][0]/det;
	dest[1][1] = src[1][1]/det;
	dest[1][2] = src[1][2]/det;
	dest[2][0] = src[2][0]/det;
	dest[2][1] = src[2][1]/det;
	dest[2][2] = src[2][2]/det;
}
void glmc_mat3f_normlize_dest(mat3f dest)
{
  glmc_mat3f_normlize(dest,dest);
}	
void glmc_mat3f_translation(mat3f dest, float src_a, float src_b)
{
	dest[0][0] = 1.0;
	dest[0][1] = 0;
	dest[0][2] = 0;
	dest[1][0] = 0;
	dest[1][1] = 1.0;
	dest[1][2] = 0;
	dest[2][0] = src_a;
	dest[2][1] = src_b;
	dest[2][2] = 1.0;
}
void glmc_mat3f_scale(mat3f dest, float src_a, float src_b)
{
	dest[0][0] = src_a;
	dest[0][1] = 0;
	dest[0][2] = 0;
	dest[1][0] = 0;
	dest[1][1] = src_b;
	dest[1][2] = 0;
	dest[2][0] = 0;
	dest[2][1] = 0;
	dest[2][2] = 1;
}
