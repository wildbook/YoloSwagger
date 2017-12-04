#ifndef SWAGGER_TYPES_MetricDataType_HPP
#define SWAGGER_TYPES_MetricDataType_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class MetricDataType {
    // 
    bool = 4,
    // 
    float = 3,
    // 
    int = 1,
    // 
    string = 5,
    // 
    uint = 2,
    // 
    unknown = 0,
  };

  inline void to_json(nlohmann::json& j, const MetricDataType& v) {
    switch(v) {
      case MetricDataType::bool:
        j = "bool";
      break;
      case MetricDataType::float:
        j = "float";
      break;
      case MetricDataType::int:
        j = "int";
      break;
      case MetricDataType::string:
        j = "string";
      break;
      case MetricDataType::uint:
        j = "uint";
      break;
      case MetricDataType::unknown:
        j = "unknown";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, MetricDataType& v) {
    const auto& s = j.get<std::string>();
    if(s == "bool"){
      v = MetricDataType::bool;
      return;
    }
    if(s == "float"){
      v = MetricDataType::float;
      return;
    }
    if(s == "int"){
      v = MetricDataType::int;
      return;
    }
    if(s == "string"){
      v = MetricDataType::string;
      return;
    }
    if(s == "uint"){
      v = MetricDataType::uint;
      return;
    }
    if(s == "unknown"){
      v = MetricDataType::unknown;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_MetricDataType_HPP
