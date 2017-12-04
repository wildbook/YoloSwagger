#ifndef SWAGGER_TYPES_LolFeaturedModesQueueGameCategory_HPP
#define SWAGGER_TYPES_LolFeaturedModesQueueGameCategory_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolFeaturedModesQueueGameCategory {
    // 
    VersusAi = 3,
    // 
    PvP = 2,
    // 
    None = 0,
    // 
    Custom = 1,
  };

  inline void to_json(nlohmann::json& j, const LolFeaturedModesQueueGameCategory& v) {
    switch(v) {
      case LolFeaturedModesQueueGameCategory::VersusAi:
        j = "VersusAi";
      break;
      case LolFeaturedModesQueueGameCategory::PvP:
        j = "PvP";
      break;
      case LolFeaturedModesQueueGameCategory::None:
        j = "None";
      break;
      case LolFeaturedModesQueueGameCategory::Custom:
        j = "Custom";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolFeaturedModesQueueGameCategory& v) {
    const auto& s = j.get<std::string>();
    if(s == "VersusAi"){
      v = LolFeaturedModesQueueGameCategory::VersusAi;
      return;
    }
    if(s == "PvP"){
      v = LolFeaturedModesQueueGameCategory::PvP;
      return;
    }
    if(s == "None"){
      v = LolFeaturedModesQueueGameCategory::None;
      return;
    }
    if(s == "Custom"){
      v = LolFeaturedModesQueueGameCategory::Custom;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolFeaturedModesQueueGameCategory_HPP
