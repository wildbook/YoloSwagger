#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolChatChatRankedQueue_t {
    RANKED_TEAM_3x3_E = 4,
    RANKED_SOLO_5x5_E = 3,
    RANKED_FLEX_SR_E = 2,
    RANKED_TEAM_5x5_E = 5,
    RANKED_FLEX_TT_E = 1,
    INVALID_E = 0,
  };

  inline void to_json(nlohmann::json& j, const LolChatChatRankedQueue_t& v) {
    switch(v) {
      case LolChatChatRankedQueue_t::RANKED_TEAM_3x3_E:
        j = "RANKED_TEAM_3x3";
      break;
      case LolChatChatRankedQueue_t::RANKED_SOLO_5x5_E:
        j = "RANKED_SOLO_5x5";
      break;
      case LolChatChatRankedQueue_t::RANKED_FLEX_SR_E:
        j = "RANKED_FLEX_SR";
      break;
      case LolChatChatRankedQueue_t::RANKED_TEAM_5x5_E:
        j = "RANKED_TEAM_5x5";
      break;
      case LolChatChatRankedQueue_t::RANKED_FLEX_TT_E:
        j = "RANKED_FLEX_TT";
      break;
      case LolChatChatRankedQueue_t::INVALID_E:
        j = "INVALID";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolChatChatRankedQueue_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "RANKED_TEAM_3x3"){
      v = LolChatChatRankedQueue_t::RANKED_TEAM_3x3_E;
      return;
    }
    if(s == "RANKED_SOLO_5x5"){
      v = LolChatChatRankedQueue_t::RANKED_SOLO_5x5_E;
      return;
    }
    if(s == "RANKED_FLEX_SR"){
      v = LolChatChatRankedQueue_t::RANKED_FLEX_SR_E;
      return;
    }
    if(s == "RANKED_TEAM_5x5"){
      v = LolChatChatRankedQueue_t::RANKED_TEAM_5x5_E;
      return;
    }
    if(s == "RANKED_FLEX_TT"){
      v = LolChatChatRankedQueue_t::RANKED_FLEX_TT_E;
      return;
    }
    if(s == "INVALID"){
      v = LolChatChatRankedQueue_t::INVALID_E;
      return;
    }
  }
  inline std::string to_string(const LolChatChatRankedQueue_t& v) {
    switch(v) {
      case LolChatChatRankedQueue_t::RANKED_TEAM_3x3_E:
        return "RANKED_TEAM_3x3";
      case LolChatChatRankedQueue_t::RANKED_SOLO_5x5_E:
        return "RANKED_SOLO_5x5";
      case LolChatChatRankedQueue_t::RANKED_FLEX_SR_E:
        return "RANKED_FLEX_SR";
      case LolChatChatRankedQueue_t::RANKED_TEAM_5x5_E:
        return "RANKED_TEAM_5x5";
      case LolChatChatRankedQueue_t::RANKED_FLEX_TT_E:
        return "RANKED_FLEX_TT";
      case LolChatChatRankedQueue_t::INVALID_E:
        return "INVALID";
    }
  }

}
