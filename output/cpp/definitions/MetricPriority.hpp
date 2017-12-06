#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class MetricPriority_t {
    high_E = 2,
    low_E = 0,
    medium_E = 1,
  };

  inline void to_json(nlohmann::json& j, const MetricPriority_t& v) {
    switch(v) {
      case MetricPriority_t::high_E:
        j = "high";
      break;
      case MetricPriority_t::low_E:
        j = "low";
      break;
      case MetricPriority_t::medium_E:
        j = "medium";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, MetricPriority_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "high"){
      v = MetricPriority_t::high_E;
      return;
    }
    if(s == "low"){
      v = MetricPriority_t::low_E;
      return;
    }
    if(s == "medium"){
      v = MetricPriority_t::medium_E;
      return;
    }
  }
}
