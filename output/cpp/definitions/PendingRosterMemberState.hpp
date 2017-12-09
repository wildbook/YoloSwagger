#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class PendingRosterMemberState_t {
    READY_E = 2,
    KICK_E = 4,
    LEFT_E = 3,
    NOT_READY_E = 0,
    FORCED_NOT_READY_E = 1,
  };

  inline void to_json(nlohmann::json& j, const PendingRosterMemberState_t& v) {
    switch(v) {
      case PendingRosterMemberState_t::READY_E:
        j = "READY";
      break;
      case PendingRosterMemberState_t::KICK_E:
        j = "KICK";
      break;
      case PendingRosterMemberState_t::LEFT_E:
        j = "LEFT";
      break;
      case PendingRosterMemberState_t::NOT_READY_E:
        j = "NOT_READY";
      break;
      case PendingRosterMemberState_t::FORCED_NOT_READY_E:
        j = "FORCED_NOT_READY";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, PendingRosterMemberState_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "READY"){
      v = PendingRosterMemberState_t::READY_E;
      return;
    }
    if(s == "KICK"){
      v = PendingRosterMemberState_t::KICK_E;
      return;
    }
    if(s == "LEFT"){
      v = PendingRosterMemberState_t::LEFT_E;
      return;
    }
    if(s == "NOT_READY"){
      v = PendingRosterMemberState_t::NOT_READY_E;
      return;
    }
    if(s == "FORCED_NOT_READY"){
      v = PendingRosterMemberState_t::FORCED_NOT_READY_E;
      return;
    }
  }
  inline std::string to_string(const PendingRosterMemberState_t& v) {
    switch(v) {
      case PendingRosterMemberState_t::READY_E:
        return "READY";
      case PendingRosterMemberState_t::KICK_E:
        return "KICK";
      case PendingRosterMemberState_t::LEFT_E:
        return "LEFT";
      case PendingRosterMemberState_t::NOT_READY_E:
        return "NOT_READY";
      case PendingRosterMemberState_t::FORCED_NOT_READY_E:
        return "FORCED_NOT_READY";
    }
  }

}
