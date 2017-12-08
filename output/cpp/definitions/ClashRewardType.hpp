#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class ClashRewardType_t {
    TROPHY_E = 0,
    FRAME_E = 2,
    VP_E = 5,
    FLAG_E = 1,
    LOGO_E = 3,
    LOOT_E = 4,
  };

  inline void to_json(nlohmann::json& j, const ClashRewardType_t& v) {
    switch(v) {
      case ClashRewardType_t::TROPHY_E:
        j = "TROPHY";
      break;
      case ClashRewardType_t::FRAME_E:
        j = "FRAME";
      break;
      case ClashRewardType_t::VP_E:
        j = "VP";
      break;
      case ClashRewardType_t::FLAG_E:
        j = "FLAG";
      break;
      case ClashRewardType_t::LOGO_E:
        j = "LOGO";
      break;
      case ClashRewardType_t::LOOT_E:
        j = "LOOT";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, ClashRewardType_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "TROPHY"){
      v = ClashRewardType_t::TROPHY_E;
      return;
    }
    if(s == "FRAME"){
      v = ClashRewardType_t::FRAME_E;
      return;
    }
    if(s == "VP"){
      v = ClashRewardType_t::VP_E;
      return;
    }
    if(s == "FLAG"){
      v = ClashRewardType_t::FLAG_E;
      return;
    }
    if(s == "LOGO"){
      v = ClashRewardType_t::LOGO_E;
      return;
    }
    if(s == "LOOT"){
      v = ClashRewardType_t::LOOT_E;
      return;
    }
  }
  inline std::string to_string(const ClashRewardType_t& v) {
    switch(v) {
      case ClashRewardType_t::TROPHY_E:
        return "TROPHY";
      case ClashRewardType_t::FRAME_E:
        return "FRAME";
      case ClashRewardType_t::VP_E:
        return "VP";
      case ClashRewardType_t::FLAG_E:
        return "FLAG";
      case ClashRewardType_t::LOGO_E:
        return "LOGO";
      case ClashRewardType_t::LOOT_E:
        return "LOOT";
    }
  }

}
