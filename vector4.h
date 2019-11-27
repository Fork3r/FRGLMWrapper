//
// Created by rsalogub on 27.11.19.
//

#ifndef FRGLM_VECTOR4_H
#define FRGLM_VECTOR4_H

#include "glm/vec4.hpp"


namespace FRGLM
{
    template <typename T>
    class Vector4;

    template <>
    class Vector4<float>
    {
    public:
        Vector4() = default;

        Vector4(float x, float y, float z, float w) : vector4_(x, y, z, w)
        {

        }

        float getX() const
        {
            return vector4_.x;
        }

        void setX(float x)
        {
            vector4_.x = x;
        }

        float getY() const
        {
            return vector4_.y;
        }

        void setY(float y)
        {
            vector4_.y = y;
        }

        float getZ() const
        {
            return vector4_.z;
        }

        void setZ(float z)
        {
            vector4_.z = z;
        }

        float getW() const
        {
            return vector4_.z;
        }

        void setW(float w)
        {
            vector4_.w = w;
        }

    private:
        glm::vec4 vector4_;
    };
}

#endif //FRGLM_VECTOR4_H
