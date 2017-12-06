#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class MetricType_t {
    count_E = 2,
    duration_E = 3,
    percentage_E = 1,
    rate_E = 4,
    unknown_E = 0,
  };

  inline void to_json(nlohmann::json& j, const MetricType_t& v) {
    switch(v) {
      case MetricType_t::count_E:
        j = "count";
      break;
      case MetricType_t::duration_E:
        j = "duration";
      break;
      case MetricType_t::percentage_E:
        j = "percentage";
      break;
      case MetricType_t::rate_E:
        j = "rate";
      break;
      case MetricType_t::unknown_E:
        j = "unknown";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, MetricType_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "count"){
      v = MetricType_t::count_E;
      return;
    }
    if(s == "duration"){
      v = MetricType_t::duration_E;
      return;
    }
    if(s == "percentage"){
      v = MetricType_t::percentage_E;
      return;
    }
    if(s == "rate"){
      v = MetricType_t::rate_E;
      return;
    }
    if(s == "unknown"){
      v = MetricType_t::unknown_E;
      return;
    }
  }
}
