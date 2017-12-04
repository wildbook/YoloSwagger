#ifndef SWAGGER_TYPES_LolGameQueuesQueueGameCategory_HPP
#define SWAGGER_TYPES_LolGameQueuesQueueGameCategory_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolGameQueuesQueueGameCategory {
    // 
    VersusAi = 3,
    // 
    PvP = 2,
    // 
    None = 0,
    // 
    Custom = 1,
  };

  inline void to_json(nlohmann::json& j, const LolGameQueuesQueueGameCategory& v) {
    switch(v) {
      case LolGameQueuesQueueGameCategory::VersusAi:
        j = "VersusAi";
      break;
      case LolGameQueuesQueueGameCategory::PvP:
        j = "PvP";
      break;
      case LolGameQueuesQueueGameCategory::None:
        j = "None";
      break;
      case LolGameQueuesQueueGameCategory::Custom:
        j = "Custom";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolGameQueuesQueueGameCategory& v) {
    const auto& s = j.get<std::string>();
    if(s == "VersusAi"){
      v = LolGameQueuesQueueGameCategory::VersusAi;
      return;
    }
    if(s == "PvP"){
      v = LolGameQueuesQueueGameCategory::PvP;
      return;
    }
    if(s == "None"){
      v = LolGameQueuesQueueGameCategory::None;
      return;
    }
    if(s == "Custom"){
      v = LolGameQueuesQueueGameCategory::Custom;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolGameQueuesQueueGameCategory_HPP
