# include "Appliance.h"
# ifndef FRIDGE_H
# define FRIDGE_H

class Fridge : public Appliance {
      private:
      double volume;
      public:
      Fridge();
      Fridge(int powerRating, double volume);
      void setVolume(double volume);
      double getVolume();
    double getPowerConsumption();
};
#endif