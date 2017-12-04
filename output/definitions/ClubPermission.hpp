#ifndef SWAGGER_TYPES_ClubPermission_HPP
#define SWAGGER_TYPES_ClubPermission_HPP
#include <json.hpp>
namespace test {
  // 
  enum class ClubPermission {
'    // 
    DEMOTE = 2,
    // 
    INVITE = 0,
    // 
    KICK_MEMBER = 3,
    // 
    KICK_OFFICER = 4,
    // 
    NOMINATE = 6,
    // 
    OWNERSHIP_TRANSFER = 5,
    // 
    PROMOTE = 1,
    // 
    SET_DESCRIPTION = 8,
    // 
    SET_MOTD = 7,
  };

  void to_json(nlohmann::json& j, const ClubPermission& v) {
    switch(v) {
      case ClubPermission::DEMOTE:
        j = "DEMOTE";
      break;
      case ClubPermission::INVITE:
        j = "INVITE";
      break;
      case ClubPermission::KICK_MEMBER:
        j = "KICK_MEMBER";
      break;
      case ClubPermission::KICK_OFFICER:
        j = "KICK_OFFICER";
      break;
      case ClubPermission::NOMINATE:
        j = "NOMINATE";
      break;
      case ClubPermission::OWNERSHIP_TRANSFER:
        j = "OWNERSHIP_TRANSFER";
      break;
      case ClubPermission::PROMOTE:
        j = "PROMOTE";
      break;
      case ClubPermission::SET_DESCRIPTION:
        j = "SET_DESCRIPTION";
      break;
      case ClubPermission::SET_MOTD:
        j = "SET_MOTD";
      break;
    }
  }

  void from_json(const nlohmann::json& j, ClubPermission& v) {
    const auto s& = j.get<std::string>();
    if(s == "DEMOTE"){
      v = ClubPermission::DEMOTE;
      return;
    }
    if(s == "INVITE"){
      v = ClubPermission::INVITE;
      return;
    }
    if(s == "KICK_MEMBER"){
      v = ClubPermission::KICK_MEMBER;
      return;
    }
    if(s == "KICK_OFFICER"){
      v = ClubPermission::KICK_OFFICER;
      return;
    }
    if(s == "NOMINATE"){
      v = ClubPermission::NOMINATE;
      return;
    }
    if(s == "OWNERSHIP_TRANSFER"){
      v = ClubPermission::OWNERSHIP_TRANSFER;
      return;
    }
    if(s == "PROMOTE"){
      v = ClubPermission::PROMOTE;
      return;
    }
    if(s == "SET_DESCRIPTION"){
      v = ClubPermission::SET_DESCRIPTION;
      return;
    }
    if(s == "SET_MOTD"){
      v = ClubPermission::SET_MOTD;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_ClubPermission_HPP
