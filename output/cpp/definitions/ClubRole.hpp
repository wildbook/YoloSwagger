#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class ClubRole_t {
    INVITEE_E = 4,
    MEMBER_E = 3,
    OFFICER_E = 2,
    UNKNOWN_E = 0,
    NOMINEE_E = 5,
    OWNER_E = 1,
  };

  inline void to_json(nlohmann::json& j, const ClubRole_t& v) {
    switch(v) {
      case ClubRole_t::INVITEE_E:
        j = "INVITEE";
      break;
      case ClubRole_t::MEMBER_E:
        j = "MEMBER";
      break;
      case ClubRole_t::OFFICER_E:
        j = "OFFICER";
      break;
      case ClubRole_t::UNKNOWN_E:
        j = "UNKNOWN";
      break;
      case ClubRole_t::NOMINEE_E:
        j = "NOMINEE";
      break;
      case ClubRole_t::OWNER_E:
        j = "OWNER";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, ClubRole_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "INVITEE"){
      v = ClubRole_t::INVITEE_E;
      return;
    }
    if(s == "MEMBER"){
      v = ClubRole_t::MEMBER_E;
      return;
    }
    if(s == "OFFICER"){
      v = ClubRole_t::OFFICER_E;
      return;
    }
    if(s == "UNKNOWN"){
      v = ClubRole_t::UNKNOWN_E;
      return;
    }
    if(s == "NOMINEE"){
      v = ClubRole_t::NOMINEE_E;
      return;
    }
    if(s == "OWNER"){
      v = ClubRole_t::OWNER_E;
      return;
    }
  }
  inline std::string to_string(const ClubRole_t& v) {
    switch(v) {
      case ClubRole_t::INVITEE_E:
        return "INVITEE";
      case ClubRole_t::MEMBER_E:
        return "MEMBER";
      case ClubRole_t::OFFICER_E:
        return "OFFICER";
      case ClubRole_t::UNKNOWN_E:
        return "UNKNOWN";
      case ClubRole_t::NOMINEE_E:
        return "NOMINEE";
      case ClubRole_t::OWNER_E:
        return "OWNER";
    }
  }

}
