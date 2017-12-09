#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class ClashRewardTime_t {
    EOG_E = 1,
    EOB_E = 2,
    NONE_E = 0,
    EOT_E = 3,
  };

  inline void to_json(nlohmann::json& j, const ClashRewardTime_t& v) {
    switch(v) {
      case ClashRewardTime_t::EOG_E:
        j = "EOG";
      break;
      case ClashRewardTime_t::EOB_E:
        j = "EOB";
      break;
      case ClashRewardTime_t::NONE_E:
        j = "NONE";
      break;
      case ClashRewardTime_t::EOT_E:
        j = "EOT";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, ClashRewardTime_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "EOG"){
      v = ClashRewardTime_t::EOG_E;
      return;
    }
    if(s == "EOB"){
      v = ClashRewardTime_t::EOB_E;
      return;
    }
    if(s == "NONE"){
      v = ClashRewardTime_t::NONE_E;
      return;
    }
    if(s == "EOT"){
      v = ClashRewardTime_t::EOT_E;
      return;
    }
  }
  inline std::string to_string(const ClashRewardTime_t& v) {
    switch(v) {
      case ClashRewardTime_t::EOG_E:
        return "EOG";
      case ClashRewardTime_t::EOB_E:
        return "EOB";
      case ClashRewardTime_t::NONE_E:
        return "NONE";
      case ClashRewardTime_t::EOT_E:
        return "EOT";
    }
  }

}
