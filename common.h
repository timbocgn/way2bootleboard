/*
  ------------------------------------------------------------------------------------------------------------------------------



  ------------------------------------------------------------------------------------------------------------------------------

*/

// ---- hint: we need to create this header since the code generator of IDE creates prototypes for the defined functions 
//      automatically and typically then before the definition of the types. 
//      See: http://arduino.land/FAQ/content/2/13/en/my-class_reference-won_t-work-in-the-sketch.html

// -----------------------------------------------------------------------------------------------------------------------------

// ---- state of the button function

typedef enum t_pb_state
{
  pb_no_click,
  pb_short_click,
  pb_long_click,
} t_pb_state;

// -----------------------------------------------------------------------------------------------------------------------------

// ---- simple typedef to represent a rgb color

typedef struct t_rgb_triple
{
  uint8_t r;
  uint8_t g;
  uint8_t b;
} t_rgb_triple;

// -----------------------------------------------------------------------------------------------------------------------------

// ---- our statemachine 
