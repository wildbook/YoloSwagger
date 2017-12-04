#ifndef SWAGGER_TYPES_MetricPriority_HPP
#define SWAGGER_TYPES_MetricPriority_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class MetricPriority {
    // 
    high = 2,
    // 
    medium = 1,
    // 
    low = 0,
  };

  inline void to_json(nlohmann::json& j, const MetricPriority& v) {
    switch(v) {
      case MetricPriority::high:
        j = "high";
      break;
      case MetricPriority::medium:
        j = "medium";
      break;
      case MetricPriority::low:
        j = "low";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, MetricPriority& v) {
    const auto& s = j.get<std::string>();
    if(s == "high"){
      v = MetricPriority::high;
      return;
    }
    if(s == "medium"){
      v = MetricPriority::medium;
      return;
    }
    if(s == "low"){
      v = MetricPriority::low;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_MetricPriority_HPP
