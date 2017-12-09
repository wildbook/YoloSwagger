#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolClashKdaClassification_t {
    AVERAGE_E = 1,
    LOW_E = 0,
    HIGH_E = 2,
  };

  inline void to_json(nlohmann::json& j, const LolClashKdaClassification_t& v) {
    switch(v) {
      case LolClashKdaClassification_t::AVERAGE_E:
        j = "AVERAGE";
      break;
      case LolClashKdaClassification_t::LOW_E:
        j = "LOW";
      break;
      case LolClashKdaClassification_t::HIGH_E:
        j = "HIGH";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolClashKdaClassification_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "AVERAGE"){
      v = LolClashKdaClassification_t::AVERAGE_E;
      return;
    }
    if(s == "LOW"){
      v = LolClashKdaClassification_t::LOW_E;
      return;
    }
    if(s == "HIGH"){
      v = LolClashKdaClassification_t::HIGH_E;
      return;
    }
  }
  inline std::string to_string(const LolClashKdaClassification_t& v) {
    switch(v) {
      case LolClashKdaClassification_t::AVERAGE_E:
        return "AVERAGE";
      case LolClashKdaClassification_t::LOW_E:
        return "LOW";
      case LolClashKdaClassification_t::HIGH_E:
        return "HIGH";
    }
  }

}
