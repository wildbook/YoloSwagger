#ifndef SWAGGER_TYPES_LolLobbyLobbyPartyRewardType_HPP
#define SWAGGER_TYPES_LolLobbyLobbyPartyRewardType_HPP
#include <json.hpp>
namespace test {
  // 
  enum class LolLobbyLobbyPartyRewardType {
'    // 
    Icon = 2,
    // 
    Ip = 1,
    // 
    None = 9999,
  };

  void to_json(nlohmann::json& j, const LolLobbyLobbyPartyRewardType& v) {
    switch(v) {
      case LolLobbyLobbyPartyRewardType::Icon:
        j = "Icon";
      break;
      case LolLobbyLobbyPartyRewardType::Ip:
        j = "Ip";
      break;
      case LolLobbyLobbyPartyRewardType::None:
        j = "None";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolLobbyLobbyPartyRewardType& v) {
    const auto s& = j.get<std::string>();
    if(s == "Icon"){
      v = LolLobbyLobbyPartyRewardType::Icon;
      return;
    }
    if(s == "Ip"){
      v = LolLobbyLobbyPartyRewardType::Ip;
      return;
    }
    if(s == "None"){
      v = LolLobbyLobbyPartyRewardType::None;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLobbyLobbyPartyRewardType_HPP
