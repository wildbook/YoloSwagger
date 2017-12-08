#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class ClashRewardKeyType_t {
    TOKENS_E = 2,
    LOWEST_POSITION_E = 3,
    CUP_E = 1,
    WINS_E = 4,
    THEME_VP_E = 5,
    TIER_E = 0,
    SEASON_VP_E = 6,
    SEASON_FLAG_COUNT_E = 7,
  };

  inline void to_json(nlohmann::json& j, const ClashRewardKeyType_t& v) {
    switch(v) {
      case ClashRewardKeyType_t::TOKENS_E:
        j = "TOKENS";
      break;
      case ClashRewardKeyType_t::LOWEST_POSITION_E:
        j = "LOWEST_POSITION";
      break;
      case ClashRewardKeyType_t::CUP_E:
        j = "CUP";
      break;
      case ClashRewardKeyType_t::WINS_E:
        j = "WINS";
      break;
      case ClashRewardKeyType_t::THEME_VP_E:
        j = "THEME_VP";
      break;
      case ClashRewardKeyType_t::TIER_E:
        j = "TIER";
      break;
      case ClashRewardKeyType_t::SEASON_VP_E:
        j = "SEASON_VP";
      break;
      case ClashRewardKeyType_t::SEASON_FLAG_COUNT_E:
        j = "SEASON_FLAG_COUNT";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, ClashRewardKeyType_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "TOKENS"){
      v = ClashRewardKeyType_t::TOKENS_E;
      return;
    }
    if(s == "LOWEST_POSITION"){
      v = ClashRewardKeyType_t::LOWEST_POSITION_E;
      return;
    }
    if(s == "CUP"){
      v = ClashRewardKeyType_t::CUP_E;
      return;
    }
    if(s == "WINS"){
      v = ClashRewardKeyType_t::WINS_E;
      return;
    }
    if(s == "THEME_VP"){
      v = ClashRewardKeyType_t::THEME_VP_E;
      return;
    }
    if(s == "TIER"){
      v = ClashRewardKeyType_t::TIER_E;
      return;
    }
    if(s == "SEASON_VP"){
      v = ClashRewardKeyType_t::SEASON_VP_E;
      return;
    }
    if(s == "SEASON_FLAG_COUNT"){
      v = ClashRewardKeyType_t::SEASON_FLAG_COUNT_E;
      return;
    }
  }
  inline std::string to_string(const ClashRewardKeyType_t& v) {
    switch(v) {
      case ClashRewardKeyType_t::TOKENS_E:
        return "TOKENS";
      case ClashRewardKeyType_t::LOWEST_POSITION_E:
        return "LOWEST_POSITION";
      case ClashRewardKeyType_t::CUP_E:
        return "CUP";
      case ClashRewardKeyType_t::WINS_E:
        return "WINS";
      case ClashRewardKeyType_t::THEME_VP_E:
        return "THEME_VP";
      case ClashRewardKeyType_t::TIER_E:
        return "TIER";
      case ClashRewardKeyType_t::SEASON_VP_E:
        return "SEASON_VP";
      case ClashRewardKeyType_t::SEASON_FLAG_COUNT_E:
        return "SEASON_FLAG_COUNT";
    }
  }

}
