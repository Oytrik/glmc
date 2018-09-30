#include "glmc.h"
#include <math.h>
#include <stdio.h>
void glmc_vec4f_from_2f(vec3f dest, vec2f src_a, float src_b, float src_c)
{
	dest[0]=src_a[0];
	dest[1]=src_a[1];
	dest[2]=src_b;
  dest[3]=src_c;
}
void glmc_vec4f_from_3f(vec3f dest, vec4f src, float src_b)
{
	dest[0]=src[0];
	dest[1]=src[1];
	dest[2]=src[2];
  dest[3]=src_b;
}
void glmc_vec4f_copy(vec4f dest, vec4f src)
{
	dest[0]=src[0];
	dest[1]=src[1];
	dest[2]=src[2];
  dest[3]=src[3];
}
float glmc_vec4f_sqrlength(vec4f vec)
{
	float sqlen = (vec[0]*vec[0])+(vec[1]*vec[1])+(vec[2]*vec[2]+(vec[3]*vec[3]));
	return sqlen;
}
float glmc_vec4f_length(vec4f vec)
{
	return sqrt(glmc_vec4f_sqrlength(vec));
}
int  glmc_vec4f_is_normalized(vec4f src)
{
	if(glmc_vec4f_length(src)==1)
		return 1;
	return 0;
}
void glmc_vec4f_normlize(vec4f dest, vec4f src)
{
	float mod=glmc_vec4f_length(src);
	dest[0]=src[0]/mod;
	dest[1]=src[1]/mod;
	dest[2]=src[2]/mod;
  dest[3]=src[3]/mod;
}
void glmc_vec4f_add(vec4f dest, vec4f src_a, vec4f src_b) // dest = src_a + src_b;
{
	dest[0]=src_a[0]+src_b[0];
	dest[1]=src_a[1]+src_b[1];
	dest[2]=src_a[2]+src_b[2];
  dest[3]=src_a[3]+src_b[3];
}
void glmc_vec4f_add_dest(vec4f src_dest, vec4f src_b) // dest += src_a;
{
	dest[0]+=src_b[0];
	dest[1]+=src_b[1];
	dest[2]+=src_b[2];
  dest[3]+=src_b[3];
}
void glmc_vec4f_sub(vec4f dest, vec4f src_a, vec4f src_b)// dest = src_a - src_b;
{
	dest[0]=src_a[0]-src_b[0];
	dest[1]=src_a[1]-src_b[1];
	dest[2]=src_a[2]-src_b[2];
  dest[3]=src_a[3]-src_b[3];
}
void glmc_vec4f_sub_dest(vec4f src_dest, vec4f src_b)// dest -= src_a;
{
	dest[0]-=src_b[0];
	dest[1]-=src_b[1];
	dest[2]-=src_b[2];
  dest[3]-=src_b[3];
}
void glmc_vec4f_mul(vec4f dest, vec4f src_a, vec4f src_b) // dest = src_a * src_b;
{
	dest[0]=src_a[0]*src_b[0];
	dest[1]=src_a[1]*src_b[1];
	dest[2]=src_a[2]*src_b[2];
  dest[3]=src_a[3]*src_b[3];
}
void glmc_vec4f_mul_dest(vec4f src_dest, vec4f src_b) // dest *= src_a;
{
	dest[0]*=src_b[0];
	dest[1]*=src_b[1];
	dest[2]*=src_b[2];
  dest[3]*=src_b[3];
}
void glmc_vec4f_mul_s(vec4f dest, vec4f src_a, float src_b) // dest = src_a * scalar
{
	dest[0]=src_a[0]*src_b;
	dest[1]=src_a[1]*src_b;
	dest[2]=src_a[2]*src_b;
  dest[3]=src_a[3]*src_b;
}
void glmc_vec4f_div(vec4f dest, vec4f src_a, vec4f src_b) // dest = src_a / src_b;
{
	dest[0]=src_a[0]/src_b[0];
	dest[1]=src_a[1]/src_b[1];
	dest[2]=src_a[2]/src_b[2];
  dest[3]=src_a[3]/src_b[3];
}
void glmc_vec4f_div_dest(vec4f src_dest, vec4f src_b)// dest /= src_a;
{
	dest[0]/=src_b;
	dest[1]/=src_b;
	dest[2]/=src_b;
  dest[3]/=src_b;
}
void glmc_vec4f_div_s(vec4f dest, vec4f src_a, float src_b) // dest = src_a / scalar
{
	dest[0]=src_a[0]/src_b;
	dest[1]=src_a[1]/src_b;
	dest[2]=src_a[2]/src_b;
  dest[3]=src_a[3]/src_b;
}
void glmc_vec4f_addadd(vec4f dest, vec4f src_a, vec4f src_b) // dest += src_a + src_b;
{
	dest[0]+=src_a[0]+src_b[0];
	dest[1]+=src_a[1]+src_b[1];
	dest[2]+=src_a[2]+src_b[2];
  dest[3]+=src_a[3]+src_b[3];
}
void glmc_vec4f_subadd(vec4f dest, vec4f src_a, vec4f src_b) // dest += src_a - src_b;
{
	dest[0]+=src_a[0]-src_b[0];
	dest[1]+=src_a[1]-src_b[1];
	dest[2]+=src_a[2]-src_b[2];
  dest[3]+=src_a[3]-src_b[3];
}
void glmc_vec4f_madd(vec4f dest, vec4f src_a, vec4f src_b) // dest += src_a * src_b;
{
	dest[0]+=src_a[0]*src_b[0];
	dest[1]+=src_a[1]*src_b[1];
	dest[2]+=src_a[2]*src_b[2];
  dest[3]+=src_a[3]*src_b[3];
}
void glmc_vec4f_msub(vec4f dest, vec4f src_a, vec4f src_b) // dest -= src_a * src_b;
{
	dest[0]-=src_a[0]*src_b[0];
	dest[1]-=src_a[1]*src_b[1];
	dest[2]-=src_a[2]*src_b[2];
  dest[3]-=src_a[3]*src_b[3];
}
float glmc_vec4f_dot(vec4f src_a, vec4f src_b)
{
	float dot = src_a[0]*src_b[0] + src_a[1]*src_b[1] + src_a[2]*src_b[2] + src_a[3]*src_a[3];
	return dot;
}
