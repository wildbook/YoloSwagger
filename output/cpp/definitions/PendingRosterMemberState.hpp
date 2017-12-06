#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class PendingRosterMemberState_t {
    FORCED_NOT_READY_E = 1,
    READY_E = 2,
    KICK_E = 4,
    NOT_READY_E = 0,
    LEFT_E = 3,
  };

  inline void to_json(nlohmann::json& j, const PendingRosterMemberState_t& v) {
    switch(v) {
      case PendingRosterMemberState_t::FORCED_NOT_READY_E:
        j = "FORCED_NOT_READY";
      break;
      case PendingRosterMemberState_t::READY_E:
        j = "READY";
      break;
      case PendingRosterMemberState_t::KICK_E:
        j = "KICK";
      break;
      case PendingRosterMemberState_t::NOT_READY_E:
        j = "NOT_READY";
      break;
      case PendingRosterMemberState_t::LEFT_E:
        j = "LEFT";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, PendingRosterMemberState_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "FORCED_NOT_READY"){
      v = PendingRosterMemberState_t::FORCED_NOT_READY_E;
      return;
    }
    if(s == "READY"){
      v = PendingRosterMemberState_t::READY_E;
      return;
    }
    if(s == "KICK"){
      v = PendingRosterMemberState_t::KICK_E;
      return;
    }
    if(s == "NOT_READY"){
      v = PendingRosterMemberState_t::NOT_READY_E;
      return;
    }
    if(s == "LEFT"){
      v = PendingRosterMemberState_t::LEFT_E;
      return;
    }
  }
}
