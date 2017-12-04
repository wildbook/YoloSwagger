#ifndef SWAGGER_TYPES_LolLobbyQueueGameCategory_HPP
#define SWAGGER_TYPES_LolLobbyQueueGameCategory_HPP
#include <json.hpp>
namespace test {
  // 
  enum class LolLobbyQueueGameCategory {
'    // 
    Custom = 1,
    // 
    None = 0,
    // 
    PvP = 2,
    // 
    VersusAi = 3,
  };

  void to_json(nlohmann::json& j, const LolLobbyQueueGameCategory& v) {
    switch(v) {
      case LolLobbyQueueGameCategory::Custom:
        j = "Custom";
      break;
      case LolLobbyQueueGameCategory::None:
        j = "None";
      break;
      case LolLobbyQueueGameCategory::PvP:
        j = "PvP";
      break;
      case LolLobbyQueueGameCategory::VersusAi:
        j = "VersusAi";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolLobbyQueueGameCategory& v) {
    const auto s& = j.get<std::string>();
    if(s == "Custom"){
      v = LolLobbyQueueGameCategory::Custom;
      return;
    }
    if(s == "None"){
      v = LolLobbyQueueGameCategory::None;
      return;
    }
    if(s == "PvP"){
      v = LolLobbyQueueGameCategory::PvP;
      return;
    }
    if(s == "VersusAi"){
      v = LolLobbyQueueGameCategory::VersusAi;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLobbyQueueGameCategory_HPP
