#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class ClashRewardTime_t {
    EOB_E = 2,
    EOT_E = 3,
    NONE_E = 0,
    EOG_E = 1,
  };

  inline void to_json(nlohmann::json& j, const ClashRewardTime_t& v) {
    switch(v) {
      case ClashRewardTime_t::EOB_E:
        j = "EOB";
      break;
      case ClashRewardTime_t::EOT_E:
        j = "EOT";
      break;
      case ClashRewardTime_t::NONE_E:
        j = "NONE";
      break;
      case ClashRewardTime_t::EOG_E:
        j = "EOG";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, ClashRewardTime_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "EOB"){
      v = ClashRewardTime_t::EOB_E;
      return;
    }
    if(s == "EOT"){
      v = ClashRewardTime_t::EOT_E;
      return;
    }
    if(s == "NONE"){
      v = ClashRewardTime_t::NONE_E;
      return;
    }
    if(s == "EOG"){
      v = ClashRewardTime_t::EOG_E;
      return;
    }
  }
}
