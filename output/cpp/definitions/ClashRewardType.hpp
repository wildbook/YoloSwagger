#ifndef SWAGGER_TYPES_ClashRewardType_HPP
#define SWAGGER_TYPES_ClashRewardType_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class ClashRewardType {
    // 
    TROPHY = 0,
    // 
    FRAME = 2,
    // 
    VP = 5,
    // 
    FLAG = 1,
    // 
    LOGO = 3,
    // 
    LOOT = 4,
  };

  inline void to_json(nlohmann::json& j, const ClashRewardType& v) {
    switch(v) {
      case ClashRewardType::TROPHY:
        j = "TROPHY";
      break;
      case ClashRewardType::FRAME:
        j = "FRAME";
      break;
      case ClashRewardType::VP:
        j = "VP";
      break;
      case ClashRewardType::FLAG:
        j = "FLAG";
      break;
      case ClashRewardType::LOGO:
        j = "LOGO";
      break;
      case ClashRewardType::LOOT:
        j = "LOOT";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, ClashRewardType& v) {
    const auto& s = j.get<std::string>();
    if(s == "TROPHY"){
      v = ClashRewardType::TROPHY;
      return;
    }
    if(s == "FRAME"){
      v = ClashRewardType::FRAME;
      return;
    }
    if(s == "VP"){
      v = ClashRewardType::VP;
      return;
    }
    if(s == "FLAG"){
      v = ClashRewardType::FLAG;
      return;
    }
    if(s == "LOGO"){
      v = ClashRewardType::LOGO;
      return;
    }
    if(s == "LOOT"){
      v = ClashRewardType::LOOT;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_ClashRewardType_HPP
