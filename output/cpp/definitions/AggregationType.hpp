#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class AggregationType_t {
    average_E = 2,
    sum_E = 1,
    none_E = 0,
  };

  inline void to_json(nlohmann::json& j, const AggregationType_t& v) {
    switch(v) {
      case AggregationType_t::average_E:
        j = "average";
      break;
      case AggregationType_t::sum_E:
        j = "sum";
      break;
      case AggregationType_t::none_E:
        j = "none";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, AggregationType_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "average"){
      v = AggregationType_t::average_E;
      return;
    }
    if(s == "sum"){
      v = AggregationType_t::sum_E;
      return;
    }
    if(s == "none"){
      v = AggregationType_t::none_E;
      return;
    }
  }
  inline std::string to_string(const AggregationType_t& v) {
    switch(v) {
      case AggregationType_t::average_E:
        return "average";
      case AggregationType_t::sum_E:
        return "sum";
      case AggregationType_t::none_E:
        return "none";
    }
  }

}
