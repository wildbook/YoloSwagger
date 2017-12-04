#ifndef SWAGGER_TYPES_LolClashQueueGameCategory_HPP
#define SWAGGER_TYPES_LolClashQueueGameCategory_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolClashQueueGameCategory {
    // 
    Custom = 1,
    // 
    None = 0,
    // 
    PvP = 2,
    // 
    VersusAi = 3,
  };

  inline void to_json(nlohmann::json& j, const LolClashQueueGameCategory& v) {
    switch(v) {
      case LolClashQueueGameCategory::Custom:
        j = "Custom";
      break;
      case LolClashQueueGameCategory::None:
        j = "None";
      break;
      case LolClashQueueGameCategory::PvP:
        j = "PvP";
      break;
      case LolClashQueueGameCategory::VersusAi:
        j = "VersusAi";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolClashQueueGameCategory& v) {
    const auto s& = j.get<std::string>();
    if(s == "Custom"){
      v = LolClashQueueGameCategory::Custom;
      return;
    }
    if(s == "None"){
      v = LolClashQueueGameCategory::None;
      return;
    }
    if(s == "PvP"){
      v = LolClashQueueGameCategory::PvP;
      return;
    }
    if(s == "VersusAi"){
      v = LolClashQueueGameCategory::VersusAi;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolClashQueueGameCategory_HPP
