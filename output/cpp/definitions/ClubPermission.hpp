#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class ClubPermission_t {
    KICK_MEMBER_E = 3,
    INVITE_E = 0,
    DEMOTE_E = 2,
    OWNERSHIP_TRANSFER_E = 5,
    KICK_OFFICER_E = 4,
    NOMINATE_E = 6,
    SET_DESCRIPTION_E = 8,
    PROMOTE_E = 1,
    SET_MOTD_E = 7,
  };

  inline void to_json(nlohmann::json& j, const ClubPermission_t& v) {
    switch(v) {
      case ClubPermission_t::KICK_MEMBER_E:
        j = "KICK_MEMBER";
      break;
      case ClubPermission_t::INVITE_E:
        j = "INVITE";
      break;
      case ClubPermission_t::DEMOTE_E:
        j = "DEMOTE";
      break;
      case ClubPermission_t::OWNERSHIP_TRANSFER_E:
        j = "OWNERSHIP_TRANSFER";
      break;
      case ClubPermission_t::KICK_OFFICER_E:
        j = "KICK_OFFICER";
      break;
      case ClubPermission_t::NOMINATE_E:
        j = "NOMINATE";
      break;
      case ClubPermission_t::SET_DESCRIPTION_E:
        j = "SET_DESCRIPTION";
      break;
      case ClubPermission_t::PROMOTE_E:
        j = "PROMOTE";
      break;
      case ClubPermission_t::SET_MOTD_E:
        j = "SET_MOTD";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, ClubPermission_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "KICK_MEMBER"){
      v = ClubPermission_t::KICK_MEMBER_E;
      return;
    }
    if(s == "INVITE"){
      v = ClubPermission_t::INVITE_E;
      return;
    }
    if(s == "DEMOTE"){
      v = ClubPermission_t::DEMOTE_E;
      return;
    }
    if(s == "OWNERSHIP_TRANSFER"){
      v = ClubPermission_t::OWNERSHIP_TRANSFER_E;
      return;
    }
    if(s == "KICK_OFFICER"){
      v = ClubPermission_t::KICK_OFFICER_E;
      return;
    }
    if(s == "NOMINATE"){
      v = ClubPermission_t::NOMINATE_E;
      return;
    }
    if(s == "SET_DESCRIPTION"){
      v = ClubPermission_t::SET_DESCRIPTION_E;
      return;
    }
    if(s == "PROMOTE"){
      v = ClubPermission_t::PROMOTE_E;
      return;
    }
    if(s == "SET_MOTD"){
      v = ClubPermission_t::SET_MOTD_E;
      return;
    }
  }
  inline std::string to_string(const ClubPermission_t& v) {
    switch(v) {
      case ClubPermission_t::KICK_MEMBER_E:
        return "KICK_MEMBER";
      case ClubPermission_t::INVITE_E:
        return "INVITE";
      case ClubPermission_t::DEMOTE_E:
        return "DEMOTE";
      case ClubPermission_t::OWNERSHIP_TRANSFER_E:
        return "OWNERSHIP_TRANSFER";
      case ClubPermission_t::KICK_OFFICER_E:
        return "KICK_OFFICER";
      case ClubPermission_t::NOMINATE_E:
        return "NOMINATE";
      case ClubPermission_t::SET_DESCRIPTION_E:
        return "SET_DESCRIPTION";
      case ClubPermission_t::PROMOTE_E:
        return "PROMOTE";
      case ClubPermission_t::SET_MOTD_E:
        return "SET_MOTD";
    }
  }

}
