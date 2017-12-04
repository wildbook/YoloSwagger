#ifndef SWAGGER_TYPES_LolGameQueuesQueueGameCategory_HPP
#define SWAGGER_TYPES_LolGameQueuesQueueGameCategory_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolGameQueuesQueueGameCategory {
    // 
    Custom = 1,
    // 
    None = 0,
    // 
    PvP = 2,
    // 
    VersusAi = 3,
  };

  void to_json(nlohmann::json& j, const LolGameQueuesQueueGameCategory& v) {
    switch(v) {
      case LolGameQueuesQueueGameCategory::Custom:
        j = "Custom";
      break;
      case LolGameQueuesQueueGameCategory::None:
        j = "None";
      break;
      case LolGameQueuesQueueGameCategory::PvP:
        j = "PvP";
      break;
      case LolGameQueuesQueueGameCategory::VersusAi:
        j = "VersusAi";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolGameQueuesQueueGameCategory& v) {
    const auto s& = j.get<std::string>();
    if(s == "Custom"){
      v = LolGameQueuesQueueGameCategory::Custom;
      return;
    }
    if(s == "None"){
      v = LolGameQueuesQueueGameCategory::None;
      return;
    }
    if(s == "PvP"){
      v = LolGameQueuesQueueGameCategory::PvP;
      return;
    }
    if(s == "VersusAi"){
      v = LolGameQueuesQueueGameCategory::VersusAi;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolGameQueuesQueueGameCategory_HPP
