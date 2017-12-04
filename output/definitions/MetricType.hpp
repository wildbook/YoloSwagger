#ifndef SWAGGER_TYPES_MetricType_HPP
#define SWAGGER_TYPES_MetricType_HPP
#include <json.hpp>
namespace test {
  // 
  enum class MetricType {
'    // 
    count = 2,
    // 
    duration = 3,
    // 
    percentage = 1,
    // 
    rate = 4,
    // 
    unknown = 0,
  };

  void to_json(nlohmann::json& j, const MetricType& v) {
    switch(v) {
      case MetricType::count:
        j = "count";
      break;
      case MetricType::duration:
        j = "duration";
      break;
      case MetricType::percentage:
        j = "percentage";
      break;
      case MetricType::rate:
        j = "rate";
      break;
      case MetricType::unknown:
        j = "unknown";
      break;
    }
  }

  void from_json(const nlohmann::json& j, MetricType& v) {
    const auto s& = j.get<std::string>();
    if(s == "count"){
      v = MetricType::count;
      return;
    }
    if(s == "duration"){
      v = MetricType::duration;
      return;
    }
    if(s == "percentage"){
      v = MetricType::percentage;
      return;
    }
    if(s == "rate"){
      v = MetricType::rate;
      return;
    }
    if(s == "unknown"){
      v = MetricType::unknown;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_MetricType_HPP
