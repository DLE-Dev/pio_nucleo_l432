/**
 * @file calculator.h
 * @author David LEVAL (dleval@dle-dev.com)
 * @brief calculation function 
 * @version 1.0
 * @date 2021-05-27
 * 
 * @copyright Copyright (c) 2021
 * 
 * This program is free software: you can redistribute it and/or modify  
 * it under the terms of the GNU General Public License as published by  
 * the Free Software Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but 
 * WITHOUT ANY WARRANTY; without even the implied warranty of 
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU 
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License 
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <stdint.h>

uint32_t addition(uint32_t a, uint32_t b);
uint32_t substraction(uint32_t a, uint32_t b);
uint32_t multiplication(uint32_t a, uint32_t b);
uint32_t division(uint32_t a, uint32_t b);

#endif