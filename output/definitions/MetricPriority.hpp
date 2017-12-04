#ifndef SWAGGER_TYPES_MetricPriority_HPP
#define SWAGGER_TYPES_MetricPriority_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class MetricPriority {
    // 
    high = 2,
    // 
    low = 0,
    // 
    medium = 1,
  };

  void to_json(nlohmann::json& j, const MetricPriority& v) {
    switch(v) {
      case MetricPriority::high:
        j = "high";
      break;
      case MetricPriority::low:
        j = "low";
      break;
      case MetricPriority::medium:
        j = "medium";
      break;
    }
  }

  void from_json(const nlohmann::json& j, MetricPriority& v) {
    const auto s& = j.get<std::string>();
    if(s == "high"){
      v = MetricPriority::high;
      return;
    }
    if(s == "low"){
      v = MetricPriority::low;
      return;
    }
    if(s == "medium"){
      v = MetricPriority::medium;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_MetricPriority_HPP
