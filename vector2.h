//
// Created by rsalogub on 27.11.19.
//

#ifndef FRGLM_VECTOR2_H
#define FRGLM_VECTOR2_H

#include <glm/vec2.hpp>

namespace FRGLM
{
    template <typename T>
    class Vector2;
    
    template <>
    class Vector2<float>
    {
    public:
        Vector2() = default;

        Vector2(float x, float y) : vector2_(x, y)
        {

        }

        float getX() const
        {
            return vector2_.x;
        }

        void setX(float x)
        {
            vector2_.x = x;
        }

        float getY() const
        {
            return vector2_.y;
        }

        void setY(float y)
        {
            vector2_.y = y;
        }

    private:
        glm::vec2 vector2_;
    };
}
#endif //FRGLM_VECTOR2_H
