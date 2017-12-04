#ifndef SWAGGER_TYPES_AggregationType_HPP
#define SWAGGER_TYPES_AggregationType_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class AggregationType {
    // 
    average = 2,
    // 
    none = 0,
    // 
    sum = 1,
  };

  inline void to_json(nlohmann::json& j, const AggregationType& v) {
    switch(v) {
      case AggregationType::average:
        j = "average";
      break;
      case AggregationType::none:
        j = "none";
      break;
      case AggregationType::sum:
        j = "sum";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, AggregationType& v) {
    const auto s& = j.get<std::string>();
    if(s == "average"){
      v = AggregationType::average;
      return;
    }
    if(s == "none"){
      v = AggregationType::none;
      return;
    }
    if(s == "sum"){
      v = AggregationType::sum;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_AggregationType_HPP
