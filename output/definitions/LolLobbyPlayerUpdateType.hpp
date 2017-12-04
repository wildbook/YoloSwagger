#ifndef SWAGGER_TYPES_LolLobbyPlayerUpdateType_HPP
#define SWAGGER_TYPES_LolLobbyPlayerUpdateType_HPP
#include <json.hpp>
namespace test {
  // 
  enum class LolLobbyPlayerUpdateType {
'    // 
    Direct = 1,
    // 
    None = 0,
    // 
    RMS = 3,
    // 
    ServiceProxy = 2,
  };

  void to_json(nlohmann::json& j, const LolLobbyPlayerUpdateType& v) {
    switch(v) {
      case LolLobbyPlayerUpdateType::Direct:
        j = "Direct";
      break;
      case LolLobbyPlayerUpdateType::None:
        j = "None";
      break;
      case LolLobbyPlayerUpdateType::RMS:
        j = "RMS";
      break;
      case LolLobbyPlayerUpdateType::ServiceProxy:
        j = "ServiceProxy";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolLobbyPlayerUpdateType& v) {
    const auto s& = j.get<std::string>();
    if(s == "Direct"){
      v = LolLobbyPlayerUpdateType::Direct;
      return;
    }
    if(s == "None"){
      v = LolLobbyPlayerUpdateType::None;
      return;
    }
    if(s == "RMS"){
      v = LolLobbyPlayerUpdateType::RMS;
      return;
    }
    if(s == "ServiceProxy"){
      v = LolLobbyPlayerUpdateType::ServiceProxy;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLobbyPlayerUpdateType_HPP
