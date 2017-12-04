#ifndef SWAGGER_TYPES_LolLobbyQueueGameCategory_HPP
#define SWAGGER_TYPES_LolLobbyQueueGameCategory_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolLobbyQueueGameCategory {
    // 
    VersusAi = 3,
    // 
    PvP = 2,
    // 
    None = 0,
    // 
    Custom = 1,
  };

  inline void to_json(nlohmann::json& j, const LolLobbyQueueGameCategory& v) {
    switch(v) {
      case LolLobbyQueueGameCategory::VersusAi:
        j = "VersusAi";
      break;
      case LolLobbyQueueGameCategory::PvP:
        j = "PvP";
      break;
      case LolLobbyQueueGameCategory::None:
        j = "None";
      break;
      case LolLobbyQueueGameCategory::Custom:
        j = "Custom";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLobbyQueueGameCategory& v) {
    const auto& s = j.get<std::string>();
    if(s == "VersusAi"){
      v = LolLobbyQueueGameCategory::VersusAi;
      return;
    }
    if(s == "PvP"){
      v = LolLobbyQueueGameCategory::PvP;
      return;
    }
    if(s == "None"){
      v = LolLobbyQueueGameCategory::None;
      return;
    }
    if(s == "Custom"){
      v = LolLobbyQueueGameCategory::Custom;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLobbyQueueGameCategory_HPP
