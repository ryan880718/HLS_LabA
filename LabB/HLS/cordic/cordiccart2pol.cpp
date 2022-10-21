#define NO_ITER 16

typedef float data_t;

data_t Kvalues[NO_ITER] = {1, 0.500000000000000, 0.250000000000000, 0.125000000000000, 0.0625000000000000, 0.0312500000000000, 0.0156250000000000, 0.00781250000000000, 0.00390625000000000, 0.00195312500000000, 0.000976562500000000, 0.000488281250000000, 0.000244140625000000, 0.000122070312500000, 6.10351562500000e-05, 3.05175781250000e-05};

data_t angles[NO_ITER] = {0.785398163397448, 0.463647609000806, 0.244978663126864, 0.124354994546761, 0.0624188099959574, 0.0312398334302683, 0.0156237286204768, 0.00781234106010111, 0.00390623013196697, 0.00195312251647882, 0.000976562189559320, 0.000488281211194898, 0.000244140620149362, 0.000122070311893670, 6.10351561742088e-05, 3.05175781155261e-05};

const data_t pi = 3.1415926535897932384626;

/**
 * @description:  coordinate to polar axis
 * @param {data_t} x  
 * @param {data_t} y
 * @param {data_t} *r
 * @param {data_t} *theta : radian system
 * @return {*}
 */
void cordiccart2pol(data_t x, data_t y, data_t *r, data_t *theta)
{
	// ratation degree
	data_t angle;
	data_t x_copy;
	data_t y_copy;
	// make the initial vector into I or IV Quadrant
	if (y > 0)
	{
		x_copy = y;
		y_copy = -x;
		angle = 90 * pi / 180;
	}
	else
	{
		x_copy = -y;
		y_copy = x;
		angle = -90 * pi / 180;
	}

	// start rotating
	int sigma;
ROTATE:
	for (int i = 0; i < NO_ITER; i++)
	{
		if (y_copy > 0)
		{
			sigma = -1;
		}
		else
		{
			sigma = 1;
		}
		data_t y_temp = y_copy;
		data_t x_temp = x_copy;
		data_t K_temp = Kvalues[i];
		x_copy -= sigma * y_temp * K_temp;
		y_copy += sigma * x_temp * K_temp;
		angle -= sigma * angles[i];
	}

	*theta = angle;
	*r = x_copy * 0.607253;
}
