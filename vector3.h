//
// Created by rsalogub on 27.11.19.
//

#ifndef FRGLM_VECTOR3_H
#define FRGLM_VECTOR3_H

#include <glm/vec3.hpp>

namespace FRGLM
{
    template <typename T>
    class Vector3;
    
    template <>
    class Vector3<float>
    {
    public:
        Vector3() = default;

        Vector3(float x, float y, float z) : vector3_(x, y, z)
        {

        }

        float getX() const
        {
            return vector3_.x;
        }

        void setX(float x)
        {
            vector3_.x = x;
        }

        float getY() const
        {
            return vector3_.y;
        }

        void setY(float y)
        {
            vector3_.y = y;
        }

        float getZ() const
        {
            return vector3_.z;
        }

        void setZ(float z)
        {
            vector3_.z = z;
        }

    private:
        glm::vec3 vector3_; 
    };
}
#endif //FRGLM_VECTOR3_H
