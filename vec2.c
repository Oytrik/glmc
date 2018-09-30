#include "glmc.h"
#include <math.h>
#include <stdio.h>
void glmc_vec2f_from_3f(vec2f dest, vec3f src)
{
	dest[0]=src[0];
	dest[1]=src[1];
}
void glmc_vec2f_from_4f(vec2f dest, vec4f src)
{
	dest[0]=src[0];
	dest[1]=src[1];	
}
void glmc_vec2f_copy(vec2f dest, vec2f src)
{
	dest[0]=src[0];
	dest[1]=src[1];
}
float glmc_vec2f_sqrlength(vec2f vec)
{
	float sqlen = (vec[0]*vec[0])+(vec[1]*vec[1]));
	return sqlen;
}
float glmc_vec2f_length(vec2f vec)
{
	return sqrt(glmc_vec2f_sqrlength(vec));
}
int  glmc_vec2f_is_normalized(vec2f src)
{
	if(glmc_vec2f_length(src)==1)
		return 1;
	return 0;
}
void glmc_vec2f_normlize(vec2f dest, vec2f src)
{
	float mod=glmc_vec2f_length(src);
	dest[0]=src[0]/mod;
	dest[1]=src[1]/mod;
}
void glmc_vec2f_add(vec2f dest, vec2f src_a, vec2f src_b) // dest = src_a + src_b;
{
	dest[0]=src_a[0]+src_b[0];
	dest[1]=src_a[1]+src_b[1];
}
void glmc_vec2f_add_dest(vec2f src_dest, vec2f src_b) // dest += src_a;
{
	dest[0]+=src_b[0];
	dest[1]+=src_b[1];
}
void glmc_vec2f_sub(vec2f dest, vec2f src_a, vec2f src_b)// dest = src_a - src_b;
{
	dest[0]=src_a[0]-src_b[0];
	dest[1]=src_a[1]-src_b[1];
}
void glmc_vec2f_sub_dest(vec2f src_dest, vec2f src_b)// dest -= src_a;
{
	dest[0]-=src_b[0];
	dest[1]-=src_b[1];
}
void glmc_vec2f_mul(vec2f dest, vec2f src_a, vec2f src_b) // dest = src_a * src_b;
{
	dest[0]=src_a[0]*src_b[0];
	dest[1]=src_a[1]*src_b[1];
}
void glmc_vec2f_mul_dest(vec2f src_dest, vec2f src_b) // dest *= src_a;
{
	dest[0]*=src_b[0];
	dest[1]*=src_b[1];
}
void glmc_vec2f_mul_s(vec2f dest, vec2f src_a, float src_b) // dest = src_a * scalar
{
	dest[0]=src_a[0]*src_b;
	dest[1]=src_a[1]*src_b;
}
void glmc_vec2f_div(vec2f dest, vec2f src_a, vec2f src_b) // dest = src_a / src_b;
{
	dest[0]=src_a[0]/src_b[0];
	dest[1]=src_a[1]/src_b[1];
}
void glmc_vec2f_div_dest(vec2f src_dest, vec2f src_b)// dest /= src_a;
{
	dest[0]/=src_b;
	dest[1]/=src_b;
}
void glmc_vec2f_div_s(vec2f dest, vec2f src_a, float src_b) // dest = src_a / scalar
{
	dest[0]=src_a[0]/src_b;
	dest[1]=src_a[1]/src_b;
}
void glmc_vec2f_addadd(vec2f dest, vec2f src_a, vec2f src_b) // dest += src_a + src_b;
{
	dest[0]+=src_a[0]+src_b[0];
	dest[1]+=src_a[1]+src_b[1];
}
void glmc_vec2f_subadd(vec2f dest, vec2f src_a, vec2f src_b) // dest += src_a - src_b;
{
	dest[0]+=src_a[0]-src_b[0];
	dest[1]+=src_a[1]-src_b[1];
}
void glmc_vec2f_madd(vec2f dest, vec2f src_a, vec2f src_b) // dest += src_a * src_b;
{
	dest[0]+=src_a[0]*src_b[0];
	dest[1]+=src_a[1]*src_b[1];
}
void glmc_vec2f_msub(vec2f dest, vec2f src_a, vec2f src_b) // dest -= src_a * src_b;
{
	dest[0]-=src_a[0]*src_b[0];
	dest[1]-=src_a[1]*src_b[1];
}
float glmc_vec2f_dot(vec2f src_a, vec2f src_b)
{
	float dot = src_a[0]*src_b[0] + src_a[1]*src_b[1];
	return dot;
}
