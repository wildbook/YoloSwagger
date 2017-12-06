#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolClashRosterMemberState_t {
    FORCED_NOT_READY_E = 2,
    NOT_READY_E = 1,
    PENDING_E = 0,
    READY_E = 3,
  };

  inline void to_json(nlohmann::json& j, const LolClashRosterMemberState_t& v) {
    switch(v) {
      case LolClashRosterMemberState_t::FORCED_NOT_READY_E:
        j = "FORCED_NOT_READY";
      break;
      case LolClashRosterMemberState_t::NOT_READY_E:
        j = "NOT_READY";
      break;
      case LolClashRosterMemberState_t::PENDING_E:
        j = "PENDING";
      break;
      case LolClashRosterMemberState_t::READY_E:
        j = "READY";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolClashRosterMemberState_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "FORCED_NOT_READY"){
      v = LolClashRosterMemberState_t::FORCED_NOT_READY_E;
      return;
    }
    if(s == "NOT_READY"){
      v = LolClashRosterMemberState_t::NOT_READY_E;
      return;
    }
    if(s == "PENDING"){
      v = LolClashRosterMemberState_t::PENDING_E;
      return;
    }
    if(s == "READY"){
      v = LolClashRosterMemberState_t::READY_E;
      return;
    }
  }
}
