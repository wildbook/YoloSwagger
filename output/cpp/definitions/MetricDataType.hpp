#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class MetricDataType_t {
    uint_E = 2,
    int_E = 1,
    string_E = 5,
    float_E = 3,
    unknown_E = 0,
    bool_E = 4,
  };

  inline void to_json(nlohmann::json& j, const MetricDataType_t& v) {
    switch(v) {
      case MetricDataType_t::uint_E:
        j = "uint";
      break;
      case MetricDataType_t::int_E:
        j = "int";
      break;
      case MetricDataType_t::string_E:
        j = "string";
      break;
      case MetricDataType_t::float_E:
        j = "float";
      break;
      case MetricDataType_t::unknown_E:
        j = "unknown";
      break;
      case MetricDataType_t::bool_E:
        j = "bool";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, MetricDataType_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "uint"){
      v = MetricDataType_t::uint_E;
      return;
    }
    if(s == "int"){
      v = MetricDataType_t::int_E;
      return;
    }
    if(s == "string"){
      v = MetricDataType_t::string_E;
      return;
    }
    if(s == "float"){
      v = MetricDataType_t::float_E;
      return;
    }
    if(s == "unknown"){
      v = MetricDataType_t::unknown_E;
      return;
    }
    if(s == "bool"){
      v = MetricDataType_t::bool_E;
      return;
    }
  }
}
