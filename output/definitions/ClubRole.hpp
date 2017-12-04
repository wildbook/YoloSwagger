#ifndef SWAGGER_TYPES_ClubRole_HPP
#define SWAGGER_TYPES_ClubRole_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class ClubRole {
    // 
    INVITEE = 4,
    // 
    MEMBER = 3,
    // 
    NOMINEE = 5,
    // 
    OFFICER = 2,
    // 
    OWNER = 1,
    // 
    UNKNOWN = 0,
  };

  inline void to_json(nlohmann::json& j, const ClubRole& v) {
    switch(v) {
      case ClubRole::INVITEE:
        j = "INVITEE";
      break;
      case ClubRole::MEMBER:
        j = "MEMBER";
      break;
      case ClubRole::NOMINEE:
        j = "NOMINEE";
      break;
      case ClubRole::OFFICER:
        j = "OFFICER";
      break;
      case ClubRole::OWNER:
        j = "OWNER";
      break;
      case ClubRole::UNKNOWN:
        j = "UNKNOWN";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, ClubRole& v) {
    const auto& s = j.get<std::string>();
    if(s == "INVITEE"){
      v = ClubRole::INVITEE;
      return;
    }
    if(s == "MEMBER"){
      v = ClubRole::MEMBER;
      return;
    }
    if(s == "NOMINEE"){
      v = ClubRole::NOMINEE;
      return;
    }
    if(s == "OFFICER"){
      v = ClubRole::OFFICER;
      return;
    }
    if(s == "OWNER"){
      v = ClubRole::OWNER;
      return;
    }
    if(s == "UNKNOWN"){
      v = ClubRole::UNKNOWN;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_ClubRole_HPP
