#ifndef SWAGGER_TYPES_LolLobbyPartyMemberRoleEnum_HPP
#define SWAGGER_TYPES_LolLobbyPartyMemberRoleEnum_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolLobbyPartyMemberRoleEnum {
    // 
    KICKED = 4,
    // 
    INVITED = 2,
    // 
    MEMBER = 1,
    // 
    HOLD = 3,
    // 
    LEADER = 0,
    // 
    DECLINED = 5,
  };

  inline void to_json(nlohmann::json& j, const LolLobbyPartyMemberRoleEnum& v) {
    switch(v) {
      case LolLobbyPartyMemberRoleEnum::KICKED:
        j = "KICKED";
      break;
      case LolLobbyPartyMemberRoleEnum::INVITED:
        j = "INVITED";
      break;
      case LolLobbyPartyMemberRoleEnum::MEMBER:
        j = "MEMBER";
      break;
      case LolLobbyPartyMemberRoleEnum::HOLD:
        j = "HOLD";
      break;
      case LolLobbyPartyMemberRoleEnum::LEADER:
        j = "LEADER";
      break;
      case LolLobbyPartyMemberRoleEnum::DECLINED:
        j = "DECLINED";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLobbyPartyMemberRoleEnum& v) {
    const auto& s = j.get<std::string>();
    if(s == "KICKED"){
      v = LolLobbyPartyMemberRoleEnum::KICKED;
      return;
    }
    if(s == "INVITED"){
      v = LolLobbyPartyMemberRoleEnum::INVITED;
      return;
    }
    if(s == "MEMBER"){
      v = LolLobbyPartyMemberRoleEnum::MEMBER;
      return;
    }
    if(s == "HOLD"){
      v = LolLobbyPartyMemberRoleEnum::HOLD;
      return;
    }
    if(s == "LEADER"){
      v = LolLobbyPartyMemberRoleEnum::LEADER;
      return;
    }
    if(s == "DECLINED"){
      v = LolLobbyPartyMemberRoleEnum::DECLINED;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLobbyPartyMemberRoleEnum_HPP
