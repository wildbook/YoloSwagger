#ifndef SWAGGER_TYPES_LolGameflowQueueGameCategory_HPP
#define SWAGGER_TYPES_LolGameflowQueueGameCategory_HPP
#include <json.hpp>
namespace test {
  // 
  enum class LolGameflowQueueGameCategory {
'    // 
    Custom = 1,
    // 
    None = 0,
    // 
    PvP = 2,
    // 
    VersusAi = 3,
  };

  void to_json(nlohmann::json& j, const LolGameflowQueueGameCategory& v) {
    switch(v) {
      case LolGameflowQueueGameCategory::Custom:
        j = "Custom";
      break;
      case LolGameflowQueueGameCategory::None:
        j = "None";
      break;
      case LolGameflowQueueGameCategory::PvP:
        j = "PvP";
      break;
      case LolGameflowQueueGameCategory::VersusAi:
        j = "VersusAi";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolGameflowQueueGameCategory& v) {
    const auto s& = j.get<std::string>();
    if(s == "Custom"){
      v = LolGameflowQueueGameCategory::Custom;
      return;
    }
    if(s == "None"){
      v = LolGameflowQueueGameCategory::None;
      return;
    }
    if(s == "PvP"){
      v = LolGameflowQueueGameCategory::PvP;
      return;
    }
    if(s == "VersusAi"){
      v = LolGameflowQueueGameCategory::VersusAi;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolGameflowQueueGameCategory_HPP
