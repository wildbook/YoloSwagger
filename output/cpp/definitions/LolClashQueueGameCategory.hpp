#ifndef SWAGGER_TYPES_LolClashQueueGameCategory_HPP
#define SWAGGER_TYPES_LolClashQueueGameCategory_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolClashQueueGameCategory {
    // 
    VersusAi = 3,
    // 
    PvP = 2,
    // 
    None = 0,
    // 
    Custom = 1,
  };

  inline void to_json(nlohmann::json& j, const LolClashQueueGameCategory& v) {
    switch(v) {
      case LolClashQueueGameCategory::VersusAi:
        j = "VersusAi";
      break;
      case LolClashQueueGameCategory::PvP:
        j = "PvP";
      break;
      case LolClashQueueGameCategory::None:
        j = "None";
      break;
      case LolClashQueueGameCategory::Custom:
        j = "Custom";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolClashQueueGameCategory& v) {
    const auto& s = j.get<std::string>();
    if(s == "VersusAi"){
      v = LolClashQueueGameCategory::VersusAi;
      return;
    }
    if(s == "PvP"){
      v = LolClashQueueGameCategory::PvP;
      return;
    }
    if(s == "None"){
      v = LolClashQueueGameCategory::None;
      return;
    }
    if(s == "Custom"){
      v = LolClashQueueGameCategory::Custom;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolClashQueueGameCategory_HPP
