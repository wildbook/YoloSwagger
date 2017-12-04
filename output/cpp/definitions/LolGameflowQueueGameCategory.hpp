#ifndef SWAGGER_TYPES_LolGameflowQueueGameCategory_HPP
#define SWAGGER_TYPES_LolGameflowQueueGameCategory_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolGameflowQueueGameCategory {
    // 
    VersusAi = 3,
    // 
    PvP = 2,
    // 
    None = 0,
    // 
    Custom = 1,
  };

  inline void to_json(nlohmann::json& j, const LolGameflowQueueGameCategory& v) {
    switch(v) {
      case LolGameflowQueueGameCategory::VersusAi:
        j = "VersusAi";
      break;
      case LolGameflowQueueGameCategory::PvP:
        j = "PvP";
      break;
      case LolGameflowQueueGameCategory::None:
        j = "None";
      break;
      case LolGameflowQueueGameCategory::Custom:
        j = "Custom";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolGameflowQueueGameCategory& v) {
    const auto& s = j.get<std::string>();
    if(s == "VersusAi"){
      v = LolGameflowQueueGameCategory::VersusAi;
      return;
    }
    if(s == "PvP"){
      v = LolGameflowQueueGameCategory::PvP;
      return;
    }
    if(s == "None"){
      v = LolGameflowQueueGameCategory::None;
      return;
    }
    if(s == "Custom"){
      v = LolGameflowQueueGameCategory::Custom;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolGameflowQueueGameCategory_HPP
