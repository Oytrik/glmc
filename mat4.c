#include "glmc.h"
#include<stdio.h>
#include<math.h>
void glmc_mat4f_copy(mat4f dest, mat4f src)
{
	dest[0][0] = src[0][0];
	dest[0][1] = src[0][1];
	dest[0][2] = src[0][2];
	dest[0][3] = src[0][3];
	dest[1][0] = src[1][0];
	dest[1][1] = src[1][1];
	dest[1][2] = src[1][2];
	dest[1][3] = src[1][3];
	dest[2][0] = src[2][0];
	dest[2][1] = src[2][1];
	dest[2][2] = src[2][2];
	dest[2][3] = src[2][3];
	dest[3][0] = src[3][0];
	dest[3][1] = src[3][1];
	dest[3][2] = src[3][2];
	dest[3][3] = src[3][3];	
}
void glmc_mat4f_add(mat4f dest, mat4f src_a, mat4f src_b)
{
	dest[0][0] = src_a[0][0] + src_b[0][0];
	dest[0][1] = src_a[0][1] + src_b[0][1];
	dest[0][2] = src_a[0][2] + src_b[0][2];
	dest[0][3] = src_a[0][3] + src_b[0][3];
	dest[1][0] = src_a[1][0] + src_b[1][0];
	dest[1][1] = src_a[1][1] + src_b[1][1];
	dest[1][2] = src_a[1][2] + src_b[1][2];
	dest[1][3] = src_a[1][3] + src_b[1][3];
	dest[2][0] = src_a[2][0] + src_b[2][0];
	dest[2][1] = src_a[2][1] + src_b[2][1];
	dest[2][2] = src_a[2][2] + src_b[2][2];
	dest[2][3] = src_a[2][3] + src_b[2][3];	
	dest[3][0] = src_a[3][0] + src_b[3][0];
	dest[3][1] = src_a[3][1] + src_b[3][1];
	dest[3][2] = src_a[3][2] + src_b[3][2];
	dest[3][3] = src_a[3][3] + src_b[3][3];
}
void glmc_mat4f_add_dest(mat4f src, mat4f src_b)
{
	src[0][0] = src[0][0] + src_b[0][0];
	src[0][1] = src[0][1] + src_b[0][1];
	src[0][2] = src[0][2] + src_b[0][2];
	src[0][3] = src[0][3] + src_b[0][3];
	src[1][0] = src[1][0] + src_b[1][0];
	src[1][1] = src[1][1] + src_b[1][1];
	src[1][2] = src[1][2] + src_b[1][2];
	src[1][3] = src[1][3] + src_b[1][3];
	src[2][0] = src[2][0] + src_b[2][0];
	src[2][1] = src[2][1] + src_b[2][1];
	src[2][2] = src[2][2] + src_b[2][2];
	src[2][3] = src[2][3] + src_b[2][3];	
	src[3][0] = src[3][0] + src_b[3][0];
	src[3][1] = src[3][1] + src_b[3][1];
	src[3][2] = src[3][2] + src_b[3][2];
	src[3][3] = src[3][3] + src_b[3][3];	
}
void glmc_mat4f_sub(mat4f dest, mat4f src_a, mat4f src_b)
{
	dest[0][0] = src_a[0][0] - src_b[0][0];
	dest[0][1] = src_a[0][1] - src_b[0][1];
	dest[0][2] = src_a[0][2] - src_b[0][2];
	dest[0][3] = src_a[0][3] - src_b[0][3];
	dest[1][0] = src_a[1][0] - src_b[1][0];
	dest[1][1] = src_a[1][1] - src_b[1][1];
	dest[1][2] = src_a[1][2] - src_b[1][2];
	dest[1][3] = src_a[1][3] - src_b[1][3];
	dest[2][0] = src_a[2][0] - src_b[2][0];
	dest[2][1] = src_a[2][1] - src_b[2][1];
	dest[2][2] = src_a[2][2] - src_b[2][2];
	dest[2][3] = src_a[2][3] - src_b[2][3];
	dest[3][0] = src_a[3][0] - src_b[3][0];
	dest[3][1] = src_a[3][1] - src_b[3][1];
	dest[3][2] = src_a[3][2] - src_b[3][2];
	dest[3][3] = src_a[3][3] - src_b[3][3];
}
void glmc_mat4f_sub_dest(mat4f dest, mat4f src_b)
{
	dest[0][0] = dest[0][0] - src_b[0][0];
	dest[0][1] = dest[0][1] - src_b[0][1];
	dest[0][2] = dest[0][2] - src_b[0][2];
	dest[0][3] = dest[0][3] - src_b[0][3];
	dest[1][0] = dest[1][0] - src_b[1][0];
	dest[1][1] = dest[1][1] - src_b[1][1];
	dest[1][2] = dest[1][2] - src_b[1][2];
	dest[1][3] = dest[1][3] - src_b[1][3];
	dest[2][0] = dest[2][0] - src_b[2][0];
	dest[2][1] = dest[2][1] - src_b[2][1];
	dest[2][2] = dest[2][2] - src_b[2][2];
	dest[2][3] = dest[2][3] - src_b[2][3];
	dest[3][0] = dest[3][0] - src_b[3][0];
	dest[3][1] = dest[3][1] - src_b[3][1];
	dest[3][2] = dest[3][2] - src_b[3][2];
	dest[3][3] = dest[3][3] - src_b[3][3];		
}
void glmc_mat4f_mul(mat4f dest, mat4f src_a, mat4f src_b)
{
	dest[0][0] = (src_a[0][0]*src_b[0][0] + src_a[1][0]*src_b[0][1] + src_a[2][0]*src_b[0][2] + src_a[3][0]*src_b[0][3]);
	dest[0][1] = (src_a[0][1]*src_b[0][0] + src_a[1][1]*src_b[0][1] + src_a[2][1]*src_b[0][2] + src_a[3][1]*src_b[0][3]);
	dest[0][2] = (src_a[0][2]*src_b[0][0] + src_a[1][2]*src_b[0][1] + src_a[2][2]*src_b[0][2] + src_a[3][2]*src_b[0][3]);
	dest[0][3] = (src_a[0][3]*src_b[0][0] + src_a[1][3]*src_b[0][1] + src_a[2][3]*src_b[0][2] + src_a[3][3]*src_b[0][3]);
	dest[1][0] = (src_a[0][0]*src_b[1][0] + src_a[1][0]*src_b[1][1] + src_a[2][0]*src_b[1][2] + src_a[3][0]*src_b[1][3]);
	dest[1][1] = (src_a[0][1]*src_b[1][0] + src_a[1][1]*src_b[1][1] + src_a[2][1]*src_b[1][2] + src_a[3][1]*src_b[1][3]);
	dest[1][2] = (src_a[0][2]*src_b[1][0] + src_a[1][2]*src_b[1][1] + src_a[2][2]*src_b[1][2] + src_a[3][2]*src_b[1][3]);
	dest[1][3] = (src_a[0][3]*src_b[1][0] + src_a[1][3]*src_b[1][1] + src_a[2][3]*src_b[1][2] + src_a[3][3]*src_b[1][3]);
	dest[2][0] = (src_a[0][0]*src_b[2][0] + src_a[1][0]*src_b[2][1] + src_a[2][0]*src_b[2][2] + src_a[3][0]*src_b[2][3]);
	dest[2][1] = (src_a[0][1]*src_b[2][0] + src_a[1][1]*src_b[2][1] + src_a[2][1]*src_b[2][2] + src_a[3][1]*src_b[2][3]);
	dest[2][2] = (src_a[0][2]*src_b[2][0] + src_a[1][2]*src_b[2][1] + src_a[2][2]*src_b[2][2] + src_a[3][2]*src_b[2][3]);
	dest[2][3] = (src_a[0][3]*src_b[2][0] + src_a[1][3]*src_b[2][1] + src_a[2][3]*src_b[2][2] + src_a[3][3]*src_b[2][3]);
	dest[3][0] = (src_a[0][0]*src_b[3][0] + src_a[1][0]*src_b[3][1] + src_a[2][0]*src_b[3][2] + src_a[3][0]*src_b[3][3]);
	dest[3][1] = (src_a[0][1]*src_b[3][0] + src_a[1][1]*src_b[3][1] + src_a[2][1]*src_b[3][2] + src_a[3][1]*src_b[3][3]);
	dest[3][2] = (src_a[0][2]*src_b[3][0] + src_a[1][2]*src_b[3][1] + src_a[2][2]*src_b[3][2] + src_a[3][2]*src_b[3][3]);
	dest[3][3] = (src_a[0][3]*src_b[3][0] + src_a[1][3]*src_b[3][1] + src_a[2][3]*src_b[3][2] + src_a[3][3]*src_b[3][3]);
}
 void glmc_mat4f_mul_dest(mat4f dest, mat4f src_b)
{
	mat4f t;
	t[0][0] = dest[0][0];
	t[0][1] = dest[0][1];
	t[0][2] = dest[0][2];
	t[0][3] = dest[0][3];
	t[1][0] = dest[1][0];
	t[1][1] = dest[1][1];
	t[1][2] = dest[1][2];
	t[1][3] = dest[1][3];
	t[2][0] = dest[2][0];
	t[2][1] = dest[2][1];
	t[2][2] = dest[2][2];
	t[2][3] = dest[2][3];
	t[3][0] = dest[3][0];
	t[3][1] = dest[3][1];
	t[3][2] = dest[3][2];
	t[3][3] = dest[3][3];
	dest[0][0] = (t[0][0]*src_b[0][0] + t[1][0]*src_b[0][1] + t[2][0]*src_b[0][2] + t[3][0]*src_b[0][3]);
	dest[0][1] = (t[0][1]*src_b[0][0] + t[1][1]*src_b[0][1] + t[2][1]*src_b[0][2] + t[3][1]*src_b[0][3]);
	dest[0][2] = (t[0][2]*src_b[0][0] + t[1][2]*src_b[0][1] + t[2][2]*src_b[0][2] + t[3][2]*src_b[0][3]);
	dest[0][3] = (t[0][3]*src_b[0][0] + t[1][3]*src_b[0][1] + t[2][3]*src_b[0][2] + t[3][3]*src_b[0][3]);
	dest[1][0] = (t[0][0]*src_b[1][0] + t[1][0]*src_b[1][1] + t[2][0]*src_b[1][2] + t[3][0]*src_b[1][3]);
	dest[1][1] = (t[0][1]*src_b[1][0] + t[1][1]*src_b[1][1] + t[2][1]*src_b[1][2] + t[3][1]*src_b[1][3]);
	dest[1][2] = (t[0][2]*src_b[1][0] + t[1][2]*src_b[1][1] + t[2][2]*src_b[1][2] + t[3][2]*src_b[1][3]);
	dest[1][3] = (t[0][3]*src_b[1][0] + t[1][3]*src_b[1][1] + t[2][3]*src_b[1][2] + t[3][3]*src_b[1][3]);
	dest[2][0] = (t[0][0]*src_b[2][0] + t[1][0]*src_b[2][1] + t[2][0]*src_b[2][2] + t[3][0]*src_b[2][3]);
	dest[2][1] = (t[0][1]*src_b[2][0] + t[1][1]*src_b[2][1] + t[2][1]*src_b[2][2] + t[3][1]*src_b[2][3]);
	dest[2][2] = (t[0][2]*src_b[2][0] + t[1][2]*src_b[2][1] + t[2][2]*src_b[2][2] + t[3][2]*src_b[2][3]);
	dest[2][3] = (t[0][3]*src_b[2][0] + t[1][3]*src_b[2][1] + t[2][3]*src_b[2][2] + t[3][3]*src_b[2][3]);
	dest[3][0] = (t[0][0]*src_b[3][0] + t[1][0]*src_b[3][1] + t[2][0]*src_b[3][2] + t[3][0]*src_b[3][3]);
	dest[3][1] = (t[0][1]*src_b[3][0] + t[1][1]*src_b[3][1] + t[2][1]*src_b[3][2] + t[3][1]*src_b[3][3]);
	dest[3][2] = (t[0][2]*src_b[3][0] + t[1][2]*src_b[3][1] + t[2][2]*src_b[3][2] + t[3][2]*src_b[3][3]);
	dest[3][3] = (t[0][3]*src_b[3][0] + t[1][3]*src_b[3][1] + t[2][3]*src_b[3][2] + t[3][3]*src_b[3][3]);
}
void glmc_mat4f_mul_s(mat4f dest, mat4f src_a, float src_b)
{
	dest[0][0] = src_a[0][0] * src_b;
	dest[0][1] = src_a[0][1] * src_b;
	dest[0][2] = src_a[0][2] * src_b;
	dest[0][3] = src_a[0][3] * src_b;
	dest[1][0] = src_a[1][0] * src_b;
	dest[1][1] = src_a[1][1] * src_b;
	dest[1][2] = src_a[1][2] * src_b;
	dest[1][3] = src_a[1][3] * src_b;
	dest[2][0] = src_a[2][0] * src_b;
	dest[2][1] = src_a[2][1] * src_b;
	dest[2][2] = src_a[2][2] * src_b;
	dest[2][3] = src_a[2][3] * src_b;
	dest[3][0] = src_a[3][0] * src_b;
	dest[3][1] = src_a[3][1] * src_b;
	dest[3][2] = src_a[3][2] * src_b;
	dest[3][3] = src_a[3][3] * src_b;
}
float glmc_mat4f_determinant(mat4f mat)
{
	float det;
	det =  mat[0][0]*((mat[1][1]*((mat[2][2]*mat[3][3])-(mat[3][2]*mat[2][3]))) - (mat[2][1]*((mat[1][2]*mat[3][3])-(mat[3][2]*mat[1][3]))) + (mat[3][1]*((mat[1][2]*mat[2][3])-(mat[2][2]*mat[1][3])))) 
        - mat[1][0]*((mat[0][1]*((mat[2][2]*mat[3][3])-(mat[3][2]*mat[2][3]))) - (mat[2][1]*((mat[0][2]*mat[3][3])-(mat[3][2]*mat[0][3]))) + (mat[3][1]*((mat[0][2]*mat[2][3])-(mat[2][2]*mat[0][3]))))
				+ mat[2][0]*((mat[0][1]*((mat[1][2]*mat[3][3])-(mat[3][2]*mat[1][3]))) - (mat[1][1]*((mat[0][2]*mat[3][3])-(mat[3][2]*mat[0][3]))) + (mat[3][1]*((mat[0][2]*mat[1][3])-(mat[1][2]*mat[0][3]))))
				- mat[3][0]*((mat[0][1]*((mat[1][2]*mat[2][3])-(mat[2][2]*mat[1][3]))) - (mat[1][1]*((mat[0][2]*mat[2][3])-(mat[2][2]*mat[0][3]))) + (mat[2][1]*((mat[0][2]*mat[1][3])-(mat[1][2]*mat[0][3]))));
	return det;
}
void glmc_mat4f_inverse(mat4f dest, mat4f src)
{
	float det = glmc_mat4f_determinant(src);
	dest[0][0] = ((src[1][1]*((src[2][2]*src[3][3])-(src[3][2]*src[2][3]))) - (src[2][1]*((src[1][2]*src[3][3])-(src[3][2]*src[1][3]))) + (src[3][1]*((src[1][2]*src[2][3])-(src[2][2]*src[1][3]))))/det;
	dest[0][1] = -1*((src[0][1]*((src[2][2]*src[3][3])-(src[3][2]*src[2][3]))) - (src[2][1]*((src[0][2]*src[3][3])-(src[3][2]*src[0][3]))) + (src[3][1]*((src[0][2]*src[2][3])-(src[2][2]*src[0][3]))))/det;
	dest[0][2] = ((src[0][1]*((src[1][2]*src[3][3])-(src[3][2]*src[1][3]))) - (src[1][1]*((src[0][2]*src[3][3])-(src[3][2]*src[0][3]))) + (src[3][1]*((src[0][2]*src[1][3])-(src[1][2]*src[0][3]))))/det;
	dest[0][3] = -1*((src[0][1]*((src[1][2]*src[2][3])-(src[2][2]*src[1][3]))) - (src[1][1]*((src[0][2]*src[2][3])-(src[2][2]*src[0][3]))) + (src[2][1]*((src[0][2]*src[1][3])-(src[1][2]*src[0][3]))))/det;
	dest[1][0] = -1*((src[1][0]*((src[2][2]*src[3][3])-(src[3][2]*src[2][3]))) - (src[2][0]*((src[1][2]*src[3][3])-(src[3][2]*src[1][3]))) + (src[3][0]*((src[1][2]*src[2][3])-(src[2][2]*src[1][3]))))/det;
	dest[1][1] = ((src[0][0]*((src[2][2]*src[3][3])-(src[3][2]*src[2][3]))) - (src[2][0]*((src[0][2]*src[3][3])-(src[3][2]*src[0][3]))) + (src[3][0]*((src[0][2]*src[2][3])-(src[2][2]*src[0][3]))))/det;
	dest[1][2] = -1*((src[0][0]*((src[1][2]*src[3][3])-(src[3][2]*src[1][3]))) - (src[1][0]*((src[0][2]*src[3][3])-(src[3][2]*src[0][3]))) + (src[3][0]*((src[0][2]*src[1][3])-(src[1][2]*src[0][3]))))/det;
	dest[1][3] = ((src[0][0]*((src[1][2]*src[2][3])-(src[2][2]*src[1][3]))) - (src[1][0]*((src[0][2]*src[2][3])-(src[2][2]*src[0][3]))) + (src[2][0]*((src[0][2]*src[1][3])-(src[1][2]*src[0][3]))))/det;
	dest[2][0] = ((src[1][0]*((src[2][1]*src[3][3])-(src[3][1]*src[2][3]))) - (src[2][0]*((src[1][1]*src[3][3])-(src[3][1]*src[1][3]))) + (src[3][0]*((src[1][1]*src[2][3])-(src[2][1]*src[1][3]))))/det;
	dest[2][1] = -1*((src[0][0]*((src[2][1]*src[3][3])-(src[3][1]*src[2][3]))) - (src[2][0]*((src[0][1]*src[3][3])-(src[3][1]*src[0][3]))) + (src[3][0]*((src[0][1]*src[2][3])-(src[2][1]*src[0][3]))))/det;
	dest[2][2] = ((src[0][0]*((src[1][1]*src[3][3])-(src[3][1]*src[1][3]))) - (src[1][0]*((src[0][1]*src[3][3])-(src[3][1]*src[0][3]))) + (src[3][0]*((src[0][1]*src[1][3])-(src[1][1]*src[0][3]))))/det;
	dest[2][3] = -1*((src[0][0]*((src[1][1]*src[2][3])-(src[2][1]*src[1][3]))) - (src[1][0]*((src[0][1]*src[2][3])-(src[2][1]*src[0][3]))) + (src[2][0]*((src[0][1]*src[1][3])-(src[1][1]*src[0][3]))))/det;
	dest[3][0] = -1*((src[1][0]*((src[2][1]*src[3][2])-(src[3][1]*src[2][2]))) - (src[2][0]*((src[1][1]*src[3][2])-(src[3][1]*src[1][2]))) + (src[3][0]*((src[1][1]*src[2][2])-(src[2][1]*src[1][2]))))/det;
	dest[3][1] = ((src[0][0]*((src[2][1]*src[3][2])-(src[3][1]*src[2][2]))) - (src[2][0]*((src[0][1]*src[3][2])-(src[3][1]*src[0][2]))) + (src[3][0]*((src[0][1]*src[2][2])-(src[2][1]*src[0][2]))))/det;
	dest[3][2] = -1*((src[0][0]*((src[1][1]*src[3][2])-(src[3][1]*src[1][2]))) - (src[1][0]*((src[0][1]*src[3][2])-(src[3][1]*src[0][2]))) + (src[3][0]*((src[0][1]*src[1][2])-(src[1][1]*src[0][2]))))/det;
	dest[3][3] = ((src[0][0]*((src[1][1]*src[2][2])-(src[2][1]*src[1][2]))) - (src[1][0]*((src[0][1]*src[2][2])-(src[2][1]*src[0][2]))) + (src[2][0]*((src[0][1]*src[1][2])-(src[1][1]*src[0][2]))))/det;
}
void glmc_mat4f_div(mat4f dest, mat4f src_a, mat4f src_b)
{
	mat4f inv;
	glmc_mat4f_inverse(inv, src_b);
	glmc_mat4f_mul(dest, src_a, inv);
}
void glmc_mat4f_div_dest(mat4f dest, mat4f src_b)
{
  mat4f t;
	t[0][0] = dest[0][0];
	t[0][1] = dest[0][1];
	t[0][2] = dest[0][2];
	t[0][3] = dest[0][3];
	t[1][0] = dest[1][0];
	t[1][1] = dest[1][1];
	t[1][2] = dest[1][2];
	t[1][3] = dest[1][3];
	t[2][0] = dest[2][0];
	t[2][1] = dest[2][1];
	t[2][2] = dest[2][2];
	t[2][3] = dest[2][3];
	t[3][0] = dest[3][0];
	t[3][1] = dest[3][1];
	t[3][2] = dest[3][2];
	t[3][3] = dest[3][3];
  mat4f inv;
	glmc_mat4f_inverse(inv, src_b);
	glmc_mat4f_mul(dest, t, inv);
}
void glmc_mat4f_div_s(mat4f dest, mat4f src_a, float src_b)
{

	dest[0][0] = src_a[0][0] / src_b;
	dest[0][1] = src_a[0][1] / src_b;
	dest[0][2] = src_a[0][2] / src_b;
	dest[0][3] = src_a[0][3] / src_b;
	dest[1][0] = src_a[1][0] / src_b;
	dest[1][1] = src_a[1][1] / src_b;
	dest[1][2] = src_a[1][2] / src_b;
	dest[1][3] = src_a[1][3] / src_b;
	dest[2][0] = src_a[2][0] / src_b;
	dest[2][1] = src_a[2][1] / src_b;
	dest[2][2] = src_a[2][2] / src_b;
	dest[2][3] = src_a[2][3] / src_b;
	dest[3][0] = src_a[3][0] / src_b;
	dest[3][1] = src_a[3][1] / src_b;
	dest[3][2] = src_a[3][2] / src_b;
	dest[3][3] = src_a[3][3] / src_b;
}
void glmc_mat4f_madd(mat4f dest, mat4f src_a, mat4f src_b)
{
	dest[0][0] = dest[0][0] + (src_a[0][0]*src_b[0][0] + src_a[1][0]*src_b[0][1] + src_a[2][0]*src_b[0][2] + src_a[3][0]*src_b[0][3]);
	dest[0][1] = dest[0][1] + (src_a[0][1]*src_b[0][0] + src_a[1][1]*src_b[0][1] + src_a[2][1]*src_b[0][2] + src_a[3][1]*src_b[0][3]);
	dest[0][2] = dest[0][2] + (src_a[0][2]*src_b[0][0] + src_a[1][2]*src_b[0][1] + src_a[2][2]*src_b[0][2] + src_a[3][2]*src_b[0][3]);
	dest[0][3] = dest[0][3] + (src_a[0][3]*src_b[0][0] + src_a[1][3]*src_b[0][1] + src_a[2][3]*src_b[0][2] + src_a[3][3]*src_b[0][3]);
	dest[1][0] = dest[1][0] + (src_a[0][0]*src_b[1][0] + src_a[1][0]*src_b[1][1] + src_a[2][0]*src_b[1][2] + src_a[3][0]*src_b[1][3]);
	dest[1][1] = dest[1][1] + (src_a[0][1]*src_b[1][0] + src_a[1][1]*src_b[1][1] + src_a[2][1]*src_b[1][2] + src_a[3][1]*src_b[1][3]);
	dest[1][2] = dest[1][2] + (src_a[0][2]*src_b[1][0] + src_a[1][2]*src_b[1][1] + src_a[2][2]*src_b[1][2] + src_a[3][2]*src_b[1][3]);
	dest[1][3] = dest[1][3] + (src_a[0][3]*src_b[1][0] + src_a[1][3]*src_b[1][1] + src_a[2][3]*src_b[1][2] + src_a[3][3]*src_b[1][3]);
	dest[2][0] = dest[2][0] + (src_a[0][0]*src_b[2][0] + src_a[1][0]*src_b[2][1] + src_a[2][0]*src_b[2][2] + src_a[3][0]*src_b[2][3]);
	dest[2][1] = dest[2][1] + (src_a[0][1]*src_b[2][0] + src_a[1][1]*src_b[2][1] + src_a[2][1]*src_b[2][2] + src_a[3][1]*src_b[2][3]);
	dest[2][2] = dest[2][2] + (src_a[0][2]*src_b[2][0] + src_a[1][2]*src_b[2][1] + src_a[2][2]*src_b[2][2] + src_a[3][2]*src_b[2][3]);
	dest[2][3] = dest[2][3] + (src_a[0][3]*src_b[2][0] + src_a[1][3]*src_b[2][1] + src_a[2][3]*src_b[2][2] + src_a[3][3]*src_b[2][3]);
	dest[3][0] = dest[3][0] + (src_a[0][0]*src_b[3][0] + src_a[1][0]*src_b[3][1] + src_a[2][0]*src_b[3][2] + src_a[3][0]*src_b[3][3]);
	dest[3][1] = dest[3][1] + (src_a[0][1]*src_b[3][0] + src_a[1][1]*src_b[3][1] + src_a[2][1]*src_b[3][2] + src_a[3][1]*src_b[3][3]);
	dest[3][2] = dest[3][2] + (src_a[0][2]*src_b[3][0] + src_a[1][2]*src_b[3][1] + src_a[2][2]*src_b[3][2] + src_a[3][2]*src_b[3][3]);
	dest[3][3] = dest[3][3] + (src_a[0][3]*src_b[3][0] + src_a[1][3]*src_b[3][1] + src_a[2][3]*src_b[3][2] + src_a[3][3]*src_b[3][3]);
}
void glmc_mat4f_msub(mat4f dest, mat4f src_a, mat4f src_b)
{
	dest[0][0] = dest[0][0] - (src_a[0][0]*src_b[0][0] + src_a[1][0]*src_b[0][1] + src_a[2][0]*src_b[0][2] + src_a[3][0]*src_b[0][3]);
	dest[0][1] = dest[0][1] - (src_a[0][1]*src_b[0][0] + src_a[1][1]*src_b[0][1] + src_a[2][1]*src_b[0][2] + src_a[3][1]*src_b[0][3]);
	dest[0][2] = dest[0][2] - (src_a[0][2]*src_b[0][0] + src_a[1][2]*src_b[0][1] + src_a[2][2]*src_b[0][2] + src_a[3][2]*src_b[0][3]);
	dest[0][3] = dest[0][3] - (src_a[0][3]*src_b[0][0] + src_a[1][3]*src_b[0][1] + src_a[2][3]*src_b[0][2] + src_a[3][3]*src_b[0][3]);
	dest[1][0] = dest[1][0] - (src_a[0][0]*src_b[1][0] + src_a[1][0]*src_b[1][1] + src_a[2][0]*src_b[1][2] + src_a[3][0]*src_b[1][3]);
	dest[1][1] = dest[1][1] - (src_a[0][1]*src_b[1][0] + src_a[1][1]*src_b[1][1] + src_a[2][1]*src_b[1][2] + src_a[3][1]*src_b[1][3]);
	dest[1][2] = dest[1][2] - (src_a[0][2]*src_b[1][0] + src_a[1][2]*src_b[1][1] + src_a[2][2]*src_b[1][2] + src_a[3][2]*src_b[1][3]);
	dest[1][3] = dest[1][3] - (src_a[0][3]*src_b[1][0] + src_a[1][3]*src_b[1][1] + src_a[2][3]*src_b[1][2] + src_a[3][3]*src_b[1][3]);
	dest[2][0] = dest[2][0] - (src_a[0][0]*src_b[2][0] + src_a[1][0]*src_b[2][1] + src_a[2][0]*src_b[2][2] + src_a[3][0]*src_b[2][3]);
	dest[2][1] = dest[2][1] - (src_a[0][1]*src_b[2][0] + src_a[1][1]*src_b[2][1] + src_a[2][1]*src_b[2][2] + src_a[3][1]*src_b[2][3]);
	dest[2][2] = dest[2][2] - (src_a[0][2]*src_b[2][0] + src_a[1][2]*src_b[2][1] + src_a[2][2]*src_b[2][2] + src_a[3][2]*src_b[2][3]);
	dest[2][3] = dest[2][3] - (src_a[0][3]*src_b[2][0] + src_a[1][3]*src_b[2][1] + src_a[2][3]*src_b[2][2] + src_a[3][3]*src_b[2][3]);
	dest[3][0] = dest[3][0] - (src_a[0][0]*src_b[3][0] + src_a[1][0]*src_b[3][1] + src_a[2][0]*src_b[3][2] + src_a[3][0]*src_b[3][3]);
	dest[3][1] = dest[3][1] - (src_a[0][1]*src_b[3][0] + src_a[1][1]*src_b[3][1] + src_a[2][1]*src_b[3][2] + src_a[3][1]*src_b[3][3]);
	dest[3][2] = dest[3][2] - (src_a[0][2]*src_b[3][0] + src_a[1][2]*src_b[3][1] + src_a[2][2]*src_b[3][2] + src_a[3][2]*src_b[3][3]);
	dest[3][3] = dest[3][3] - (src_a[0][3]*src_b[3][0] + src_a[1][3]*src_b[3][1] + src_a[2][3]*src_b[3][2] + src_a[3][3]*src_b[3][3]);	
}
void glmc_mat4f_transpose(mat4f dest, mat4f src)
{
	dest[0][0] = src[0][0];
	dest[0][1] = src[1][0];
	dest[0][2] = src[2][0];
	dest[0][3] = src[3][0];
	dest[1][0] = src[0][1];
	dest[1][1] = src[1][1];
	dest[1][2] = src[2][1];
	dest[1][3] = src[3][1];
	dest[2][0] = src[0][2];
	dest[2][1] = src[1][2];
	dest[2][2] = src[2][2];
	dest[2][3] = src[3][2];
	dest[3][0] = src[0][3];
	dest[3][1] = src[1][3];
	dest[3][2] = src[2][3];
	dest[3][3] = src[3][3];	
}
void glmc_mat4f_transpose_dest(mat4f dest)
{
	float temp1,temp2,temp3,temp4,temp5,temp6;
	t1 = dest[0][1];
	t2 = dest[0][2];
	t3 = dest[0][3];
	t4 = dest[1][2];
	t5 = dest[1][2];
	t6 = dest[2][3];
	dest[0][1] = dest[1][0];
	dest[1][0] = t1;
	dest[0][2] = dest[2][0];
	dest[2][0] = t2;
	dest[0][3] = dest[3][0];
	dest[3][0] = t3;
	dest[1][2] = dest[2][1];
	dest[2][1] = t4;
	dest[1][3] = dest[3][1];
	dest[3][1] = t5;
	dest[2][3] = dest[3][2];
	dest[3][2] = t6;
}
void glmc_mat4f_normlize(mat4f dest, mat4f src)
{
  float det = glmc_mat4f_determinant(src);
	dest[0][0] = src[0][0] / det;
	dest[0][1] = src[0][1] / det;
	dest[0][2] = src[0][2] / det;
	dest[0][3] = src[0][3] / det;
	dest[1][0] = src[1][0] / det;
	dest[1][1] = src[1][1] / det;
	dest[1][2] = src[1][2] / det;
	dest[1][3] = src[1][3] / det;
	dest[2][0] = src[2][0] / det;
	dest[2][1] = src[2][1] / det;
	dest[2][2] = src[2][2] / det;
	dest[2][3] = src[2][3] / det;
	dest[3][0] = src[3][0] / det;
	dest[3][1] = src[3][1] / det;
	dest[3][2] = src[3][2] / det;
	dest[3][3] = src[3][3] / det;
}
void glmc_mat4f_normlize_dest(mat4f dest)
{
	glmc_mat4f_normlize(dest,dest);
}
void glmc_mat4f_translation(mat4f dest, float src_a, float src_b, float src_c)
{
	dest[0][0] = 1.0;
	dest[0][1] = 0;
	dest[0][2] = 0;
	dest[0][3] = 0;
	dest[1][0] = 0;
	dest[1][1] = 1.0;
	dest[1][2] = 0;
	dest[1][3] = 0;
	dest[2][0] = 0;
	dest[2][1] = 0;
	dest[2][2] = 1.0;
	dest[2][3] = 0;
	dest[3][0] = src_a;
	dest[3][1] = src_b;
	dest[3][2] = src_c;
	dest[3][3] = 1.0;
}
void glmc_mat4f_rotation(mat4f dest, float ux, float uy, float uz, float theta)
{
	float c = cos(theta);
	float s = sin(theta);
	dest[0][0] = c + ux*ux*(1-c);
	dest[0][1] = uy*ux*(1-c) + uz*s;
	dest[0][2] = uz*ux*(1-c) - uy*s;
	dest[0][3] = 0;
	dest[1][0] = ux*uy*(1-c) - uz*s;
	dest[1][1] = c + uy*uy*(1-c);
	dest[1][2] = uz*uy*(1-c) + ux*(s);
	dest[1][3] = 0;
	dest[2][0] = ux*uz*(1-c) + uy*s;
	dest[2][1] = uy*uz*(1-c) - ux*s;
	dest[2][2] = c + uz*uz*(1-c);
	dest[2][3] = 0;
	dest[3][0] = 0;
	dest[3][1] = 0;
	dest[3][2] = 0;
	dest[3][3] = 1;
}
void glmc_mat4_scale(mat4f dest , float src_a, float src_b, float src_c)
{
	dest[0][0] = src_a;
	dest[0][1] = 0;
	dest[0][2] = 0;
	dest[0][3] = 0;
	dest[1][0] = 0;
	dest[1][1] = src_b;
	dest[1][2] = 0;
	dest[1][3] = 0;
	dest[2][0] = 0;
	dest[2][1] = 0;
	dest[2][2] = src_c;
	dest[2][3] = 0;
	dest[3][0] = 0;
	dest[3][1] = 0;
	dest[3][2] = 0;
	dest[3][3] = 1;
}
void glmc_mat4f_ortho_projection(mat4f dest, float t, float b, float r, float l)
{
	dest[0][0] = 2/(r - l);
	dest[0][1] = 1;
	dest[0][2] = 1;
	dest[0][3] = 1;
	dest[1][0] = 1;
	dest[1][1] = 2/(t - b);
	dest[1][2] = 1;
	dest[1][3] = 1;
	dest[2][0] = 1;
	dest[2][1] = 1;
	dest[2][2] = 1;
	dest[2][3] = 1;
	dest[3][0] = -1*(r + l)/(r - l);
	dest[3][1] = -1*(t + b)/(t - b);
	dest[3][2] = 1;
	dest[3][3] = 1;
}
 void glmc_mat4f_perspective_projection(mat4f dest, float alpha, float aspect, float near, float far)
{
	float tan_val = tan(alpha/2);

	dest[0][0] = 1/(aspect*tan_val);
	dest[0][1] = 0;
	dest[0][2] = 0;
	dest[0][3] = 0;
	dest[1][0] = 0;
	dest[1][1] = 1/tan_val;
	dest[1][2] = 0;
	dest[1][3] = 0;
	dest[2][0] = 0;
	dest[2][1] = 0;
	dest[2][2] = far/(far - near);
	dest[2][3] = 1;
	dest[3][0] = 0;
	dest[3][1] = 0;
	dest[3][2] = 0;
	dest[3][3] = -1*(far*near)/(far - near);
}

