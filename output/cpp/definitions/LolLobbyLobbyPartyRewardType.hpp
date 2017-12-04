#ifndef SWAGGER_TYPES_LolLobbyLobbyPartyRewardType_HPP
#define SWAGGER_TYPES_LolLobbyLobbyPartyRewardType_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolLobbyLobbyPartyRewardType {
    // 
    Ip = 1,
    // 
    None = 9999,
    // 
    Icon = 2,
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyPartyRewardType& v) {
    switch(v) {
      case LolLobbyLobbyPartyRewardType::Ip:
        j = "Ip";
      break;
      case LolLobbyLobbyPartyRewardType::None:
        j = "None";
      break;
      case LolLobbyLobbyPartyRewardType::Icon:
        j = "Icon";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyPartyRewardType& v) {
    const auto& s = j.get<std::string>();
    if(s == "Ip"){
      v = LolLobbyLobbyPartyRewardType::Ip;
      return;
    }
    if(s == "None"){
      v = LolLobbyLobbyPartyRewardType::None;
      return;
    }
    if(s == "Icon"){
      v = LolLobbyLobbyPartyRewardType::Icon;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLobbyLobbyPartyRewardType_HPP
