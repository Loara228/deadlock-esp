use std::ops::Mul;

use egui::{Pos2, Vec2};

#[derive(Default)]
#[derive(Clone, Copy)]
#[derive(Debug)]
pub struct Vector3
{
    pub x: f32,
    pub y: f32,
    pub z: f32
}

impl Vector3
{
    pub fn to_pos2(self) -> Pos2
    {
        Pos2 { x: self.x, y: self.y }
    }

    pub fn distance(value1: Vector3, value2: Vector3) -> f32 {
        let dx = value1.x - value2.x;
        let dy = value1.y - value2.y;
        let dz = value1.z - value2.z;
        (dx * dx + dy * dy + dz * dz).sqrt()
    }
}

#[derive(Default)]
#[derive(Clone, Copy)]
#[derive(Debug)]
pub struct Matrix
{
    m11: f32,
    m12: f32,
    m13: f32,
    m14: f32,
    m21: f32,
    m22: f32,
    m23: f32,
    m24: f32,
    m31: f32,
    m32: f32,
    m33: f32,
    m34: f32,
    m41: f32,
    m42: f32,
    m43: f32,
    m44: f32,
}

impl Mul for Matrix
{
    type Output = Self;
    fn mul(self, matrix2: Self) -> Self {
        
        let mut result = Matrix::default();
        result.m11 = self.m11 * matrix2.m11 + self.m12 * matrix2.m21 + self.m13 * matrix2.m31 + self.m14 * matrix2.m41;
        result.m12 = self.m11 * matrix2.m12 + self.m12 * matrix2.m22 + self.m13 * matrix2.m32 + self.m14 * matrix2.m42;
        result.m13 = self.m11 * matrix2.m13 + self.m12 * matrix2.m23 + self.m13 * matrix2.m33 + self.m14 * matrix2.m43;
        result.m14 = self.m11 * matrix2.m14 + self.m12 * matrix2.m24 + self.m13 * matrix2.m34 + self.m14 * matrix2.m44;
        result.m21 = self.m21 * matrix2.m11 + self.m22 * matrix2.m21 + self.m23 * matrix2.m31 + self.m24 * matrix2.m41;
        result.m22 = self.m21 * matrix2.m12 + self.m22 * matrix2.m22 + self.m23 * matrix2.m32 + self.m24 * matrix2.m42;
        result.m23 = self.m21 * matrix2.m13 + self.m22 * matrix2.m23 + self.m23 * matrix2.m33 + self.m24 * matrix2.m43;
        result.m24 = self.m21 * matrix2.m14 + self.m22 * matrix2.m24 + self.m23 * matrix2.m34 + self.m24 * matrix2.m44;
        result.m31 = self.m31 * matrix2.m11 + self.m32 * matrix2.m21 + self.m33 * matrix2.m31 + self.m34 * matrix2.m41;
        result.m32 = self.m31 * matrix2.m12 + self.m32 * matrix2.m22 + self.m33 * matrix2.m32 + self.m34 * matrix2.m42;
        result.m33 = self.m31 * matrix2.m13 + self.m32 * matrix2.m23 + self.m33 * matrix2.m33 + self.m34 * matrix2.m43;
        result.m34 = self.m31 * matrix2.m14 + self.m32 * matrix2.m24 + self.m33 * matrix2.m34 + self.m34 * matrix2.m44;
        result.m41 = self.m41 * matrix2.m11 + self.m42 * matrix2.m21 + self.m43 * matrix2.m31 + self.m44 * matrix2.m41;
        result.m42 = self.m41 * matrix2.m12 + self.m42 * matrix2.m22 + self.m43 * matrix2.m32 + self.m44 * matrix2.m42;
        result.m43 = self.m41 * matrix2.m13 + self.m42 * matrix2.m23 + self.m43 * matrix2.m33 + self.m44 * matrix2.m43;
        result.m44 = self.m41 * matrix2.m14 + self.m42 * matrix2.m24 + self.m43 * matrix2.m34 + self.m44 * matrix2.m44;
        result
    }
}

impl Matrix
{
    pub fn transform(self, vec3: &mut Vector3) -> bool
    {
        let w_inv = 1. / (self.m14 * vec3.x + self.m24 * vec3.y + self.m34 * vec3.z + self.m44);
        let result = Vector3 {
            x: (self.m11 * vec3.x + self.m21 * vec3.y + self.m31 * vec3.z + self.m41) * w_inv,
            y: (self.m12 * vec3.x + self.m22 * vec3.y + self.m32 * vec3.z + self.m42) * w_inv,
            z: (self.m13 * vec3.x + self.m23 * vec3.y + self.m33 * vec3.z + self.m43) * w_inv
        };
        vec3.x = result.x;
        vec3.y = result.y;
        vec3.z = result.z;
        result.z < 1.
    }

    pub fn transpose(matrix: Matrix) -> Matrix
    {
        let mut result = Matrix::default();
        result.m11 = matrix.m11;
        result.m12 = matrix.m21;
        result.m13 = matrix.m31;
        result.m14 = matrix.m41;
        result.m21 = matrix.m12;
        result.m22 = matrix.m22;
        result.m23 = matrix.m32;
        result.m24 = matrix.m42;
        result.m31 = matrix.m13;
        result.m32 = matrix.m23;
        result.m33 = matrix.m33;
        result.m34 = matrix.m43;
        result.m41 = matrix.m14;
        result.m42 = matrix.m24;
        result.m43 = matrix.m34;
        result.m44 = matrix.m44;
        result
    }

    pub fn get_viewport(size: Vec2) -> Matrix
    {
        let viewport = Viewport {
            x: 0, y: 0, width: size.x as i32, height: size.y as i32, min_depth: 0f32, max_depth: 1f32
        };
        
        Matrix {
            m11: viewport.width as f32 * 0.5f32,
            m12: 0.,
            m13: 0.,
            m14: 0.,

            m21: 0.,
            m22: -viewport.height as f32 * 0.5f32,
            m23: 0.,
            m24: 0.,

            m31: 0.,
            m32: 0.,
            m33: viewport.max_depth - viewport.min_depth,
            m34: 0.,

            m41:  viewport.x as f32 + viewport.width as f32 * 0.5f32,
            m42:  viewport.y as f32 + viewport.height as f32 * 0.5f32,
            m43:  viewport.min_depth,
            m44: 1.
        }
    }
}

#[derive(Default)]
pub struct Viewport
{
    x: i32,
    y: i32,
    width: i32,
    height: i32,
    min_depth: f32,
    max_depth: f32
}