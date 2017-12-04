#ifndef SWAGGER_TYPES_LolLobbyPlayerUpdateType_HPP
#define SWAGGER_TYPES_LolLobbyPlayerUpdateType_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolLobbyPlayerUpdateType {
    // 
    RMS = 3,
    // 
    None = 0,
    // 
    ServiceProxy = 2,
    // 
    Direct = 1,
  };

  inline void to_json(nlohmann::json& j, const LolLobbyPlayerUpdateType& v) {
    switch(v) {
      case LolLobbyPlayerUpdateType::RMS:
        j = "RMS";
      break;
      case LolLobbyPlayerUpdateType::None:
        j = "None";
      break;
      case LolLobbyPlayerUpdateType::ServiceProxy:
        j = "ServiceProxy";
      break;
      case LolLobbyPlayerUpdateType::Direct:
        j = "Direct";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLobbyPlayerUpdateType& v) {
    const auto& s = j.get<std::string>();
    if(s == "RMS"){
      v = LolLobbyPlayerUpdateType::RMS;
      return;
    }
    if(s == "None"){
      v = LolLobbyPlayerUpdateType::None;
      return;
    }
    if(s == "ServiceProxy"){
      v = LolLobbyPlayerUpdateType::ServiceProxy;
      return;
    }
    if(s == "Direct"){
      v = LolLobbyPlayerUpdateType::Direct;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLobbyPlayerUpdateType_HPP
