#include<iostream>
#include<cmath>
struct vec3
{
    float x, y, z;
};
struct Ray
{
    vec3 origin;
    vec3 direction;
};
struct Sphere
{
    vec3 center;
    float                                                                            r;
};

struct jopa
{
    float t1;
    float t2;
};

vec3 operator+(vec3 const v1, vec3 const v2)
{
    return
    {
        v1.x + v2.x,
        v1.y + v2.y,
        v1.z + v2.z,
    };
}
vec3 operator-(vec3 const v1, vec3 const v2)
{
    return
    {
        v1.x - v2.x,
        v1.y - v2.y,
        v1.z - v2.z,
    };
}
vec3 operator*(vec3 const v, float const f)
{
    return
    {
        v.x * f,
        v.y * f,
        v.z * f,
    };
}
float dot(vec3 const v1, vec3 const v2)
{
    return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
}
jopa raySphereIntersection(Ray const ray, Sphere const sphere)
{
    float const a = dot(ray.direction,ray.direction);
    vec3 b = ray.origin - sphere.center; 
    float const c = dot(b, b);
    float const d = dot(ray.direction, b);
    float const e = sphere.r * sphere.r;
    float const D = d * d - a * c + e * a;
    float const t1 = (sqrt(D) - d) / a;
    float const t2 = (-sqrt(D) - d) / a;
    return {t1, t2};
}
int main()
{
    Ray ray = {.origin = {1.f, 2.f, 3.f}, .direction = {5.f, 2.f, 7.f}};
    Sphere sphere = {.center = {6.f, 4.f, 1.f}, .r = {99}};
    jopa i = raySphereIntersection(ray, sphere);
    vec3 i1 = ray.origin + ray.direction * i.t1;
    vec3 i2 = ray.origin + ray.direction * i.t2;
    std::cout << i1.x << " " << i1.y << " " << i1.z << std::endl;
    std::cout << i2.x << " " << i2.y << " " << i2.z << std::endl;
}