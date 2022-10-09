#include "../include/Acceleration.hpp"

/**
 * This function is the default constructor for the Acceleration class
 */
ECS::Acceleration::Acceleration() noexcept : _x(0), _y(0) {}

/**
 * This function is a copy constructor for the Acceleration class.
 * 
 * @param acc The acceleration to copy.
 */
ECS::Acceleration::Acceleration(const Acceleration& acc) noexcept : _x(acc.getAcceleration_x()), _y(acc.getAcceleration_y()){}

/**
 * It returns the value of the private variable _x.
 * 
 * @return The value of the private member variable _x.
 */
int ECS::Acceleration::getAcceleration_x() const noexcept {return _x;}

/**
 * It returns the y value of the acceleration.
 * 
 * @return The acceleration in the y direction.
 */
int ECS::Acceleration::getAcceleration_y() const noexcept {return _y;}

/**
 * Sets the acceleration in the x direction.
 * 
 * @param x The x-coordinate of the acceleration.
 */
void ECS::Acceleration::setAcceleration_x(int x) noexcept {_x = x;}

/**
 * This function sets the acceleration in the y direction.
 *
 * @param y The y-coordinate of the acceleration.
 */
void ECS::Acceleration::setAcceleration_y(int y) noexcept {_y = y;}