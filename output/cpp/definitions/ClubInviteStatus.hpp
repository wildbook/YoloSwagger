#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class ClubInviteStatus_t {
    ACCEPTED_E = 1,
    BLOCKED_E = 3,
    PENDING_E = 0,
    REJECTED_E = 2,
  };

  inline void to_json(nlohmann::json& j, const ClubInviteStatus_t& v) {
    switch(v) {
      case ClubInviteStatus_t::ACCEPTED_E:
        j = "ACCEPTED";
      break;
      case ClubInviteStatus_t::BLOCKED_E:
        j = "BLOCKED";
      break;
      case ClubInviteStatus_t::PENDING_E:
        j = "PENDING";
      break;
      case ClubInviteStatus_t::REJECTED_E:
        j = "REJECTED";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, ClubInviteStatus_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "ACCEPTED"){
      v = ClubInviteStatus_t::ACCEPTED_E;
      return;
    }
    if(s == "BLOCKED"){
      v = ClubInviteStatus_t::BLOCKED_E;
      return;
    }
    if(s == "PENDING"){
      v = ClubInviteStatus_t::PENDING_E;
      return;
    }
    if(s == "REJECTED"){
      v = ClubInviteStatus_t::REJECTED_E;
      return;
    }
  }
}
