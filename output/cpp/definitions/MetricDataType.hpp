#ifndef SWAGGER_TYPES_MetricDataType_HPP
#define SWAGGER_TYPES_MetricDataType_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class MetricDataType {
    // 
    string = 5,
    // 
    int = 1,
    // 
    unknown = 0,
    // 
    float = 3,
    // 
    uint = 2,
    // 
    bool = 4,
  };

  inline void to_json(nlohmann::json& j, const MetricDataType& v) {
    switch(v) {
      case MetricDataType::string:
        j = "string";
      break;
      case MetricDataType::int:
        j = "int";
      break;
      case MetricDataType::unknown:
        j = "unknown";
      break;
      case MetricDataType::float:
        j = "float";
      break;
      case MetricDataType::uint:
        j = "uint";
      break;
      case MetricDataType::bool:
        j = "bool";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, MetricDataType& v) {
    const auto& s = j.get<std::string>();
    if(s == "string"){
      v = MetricDataType::string;
      return;
    }
    if(s == "int"){
      v = MetricDataType::int;
      return;
    }
    if(s == "unknown"){
      v = MetricDataType::unknown;
      return;
    }
    if(s == "float"){
      v = MetricDataType::float;
      return;
    }
    if(s == "uint"){
      v = MetricDataType::uint;
      return;
    }
    if(s == "bool"){
      v = MetricDataType::bool;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_MetricDataType_HPP
