#pragma once
#include "esphome/components/myteleinfo/teleinfo.h"
#include "esphome/components/sensor/sensor.h"

namespace esphome {
namespace myteleinfo {

class TeleInfoSensor : public TeleInfoListener, public sensor::Sensor, public Component {
 public:
  TeleInfoSensor(const char *tag);
  void publish_val(const std::string &val) override;
  void dump_config() override;
};

}  // namespace teleinfo
}  // namespace esphome
