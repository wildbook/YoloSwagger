#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolLobbyPartyMemberRoleEnum_t {
    INVITED_E = 2,
    DECLINED_E = 5,
    HOLD_E = 3,
    MEMBER_E = 1,
    KICKED_E = 4,
    LEADER_E = 0,
  };

  inline void to_json(nlohmann::json& j, const LolLobbyPartyMemberRoleEnum_t& v) {
    switch(v) {
      case LolLobbyPartyMemberRoleEnum_t::INVITED_E:
        j = "INVITED";
      break;
      case LolLobbyPartyMemberRoleEnum_t::DECLINED_E:
        j = "DECLINED";
      break;
      case LolLobbyPartyMemberRoleEnum_t::HOLD_E:
        j = "HOLD";
      break;
      case LolLobbyPartyMemberRoleEnum_t::MEMBER_E:
        j = "MEMBER";
      break;
      case LolLobbyPartyMemberRoleEnum_t::KICKED_E:
        j = "KICKED";
      break;
      case LolLobbyPartyMemberRoleEnum_t::LEADER_E:
        j = "LEADER";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLobbyPartyMemberRoleEnum_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "INVITED"){
      v = LolLobbyPartyMemberRoleEnum_t::INVITED_E;
      return;
    }
    if(s == "DECLINED"){
      v = LolLobbyPartyMemberRoleEnum_t::DECLINED_E;
      return;
    }
    if(s == "HOLD"){
      v = LolLobbyPartyMemberRoleEnum_t::HOLD_E;
      return;
    }
    if(s == "MEMBER"){
      v = LolLobbyPartyMemberRoleEnum_t::MEMBER_E;
      return;
    }
    if(s == "KICKED"){
      v = LolLobbyPartyMemberRoleEnum_t::KICKED_E;
      return;
    }
    if(s == "LEADER"){
      v = LolLobbyPartyMemberRoleEnum_t::LEADER_E;
      return;
    }
  }
  inline std::string to_string(const LolLobbyPartyMemberRoleEnum_t& v) {
    switch(v) {
      case LolLobbyPartyMemberRoleEnum_t::INVITED_E:
        return "INVITED";
      case LolLobbyPartyMemberRoleEnum_t::DECLINED_E:
        return "DECLINED";
      case LolLobbyPartyMemberRoleEnum_t::HOLD_E:
        return "HOLD";
      case LolLobbyPartyMemberRoleEnum_t::MEMBER_E:
        return "MEMBER";
      case LolLobbyPartyMemberRoleEnum_t::KICKED_E:
        return "KICKED";
      case LolLobbyPartyMemberRoleEnum_t::LEADER_E:
        return "LEADER";
    }
  }

}
