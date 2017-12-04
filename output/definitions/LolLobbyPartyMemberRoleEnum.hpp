#ifndef SWAGGER_TYPES_LolLobbyPartyMemberRoleEnum_HPP
#define SWAGGER_TYPES_LolLobbyPartyMemberRoleEnum_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolLobbyPartyMemberRoleEnum {
    // 
    DECLINED = 5,
    // 
    HOLD = 3,
    // 
    INVITED = 2,
    // 
    KICKED = 4,
    // 
    LEADER = 0,
    // 
    MEMBER = 1,
  };

  inline void to_json(nlohmann::json& j, const LolLobbyPartyMemberRoleEnum& v) {
    switch(v) {
      case LolLobbyPartyMemberRoleEnum::DECLINED:
        j = "DECLINED";
      break;
      case LolLobbyPartyMemberRoleEnum::HOLD:
        j = "HOLD";
      break;
      case LolLobbyPartyMemberRoleEnum::INVITED:
        j = "INVITED";
      break;
      case LolLobbyPartyMemberRoleEnum::KICKED:
        j = "KICKED";
      break;
      case LolLobbyPartyMemberRoleEnum::LEADER:
        j = "LEADER";
      break;
      case LolLobbyPartyMemberRoleEnum::MEMBER:
        j = "MEMBER";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLobbyPartyMemberRoleEnum& v) {
    const auto s& = j.get<std::string>();
    if(s == "DECLINED"){
      v = LolLobbyPartyMemberRoleEnum::DECLINED;
      return;
    }
    if(s == "HOLD"){
      v = LolLobbyPartyMemberRoleEnum::HOLD;
      return;
    }
    if(s == "INVITED"){
      v = LolLobbyPartyMemberRoleEnum::INVITED;
      return;
    }
    if(s == "KICKED"){
      v = LolLobbyPartyMemberRoleEnum::KICKED;
      return;
    }
    if(s == "LEADER"){
      v = LolLobbyPartyMemberRoleEnum::LEADER;
      return;
    }
    if(s == "MEMBER"){
      v = LolLobbyPartyMemberRoleEnum::MEMBER;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLobbyPartyMemberRoleEnum_HPP
