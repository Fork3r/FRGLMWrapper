//
// Created by rsalogub on 27.11.19.
//

#ifndef FRGLM_MATRIX4X4_H
#define FRGLM_MATRIX4X4_H

#include "glm/mat4x4.hpp"

namespace FRGLM
{
    template <typename T>
    class Matrix4x4;

    template<>
    class Matrix4x4<float>
    {
    public:
        Matrix4x4() = default;

        const float* getValues() const { return &matrix_[0][0]; }
    private:
        glm::mat4x4 matrix_;
    };
}

#endif //FRGLM_MATRIX4X4_H
