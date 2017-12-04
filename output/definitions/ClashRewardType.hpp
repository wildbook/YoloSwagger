#ifndef SWAGGER_TYPES_ClashRewardType_HPP
#define SWAGGER_TYPES_ClashRewardType_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class ClashRewardType {
    // 
    FLAG = 1,
    // 
    FRAME = 2,
    // 
    LOGO = 3,
    // 
    LOOT = 4,
    // 
    TROPHY = 0,
    // 
    VP = 5,
  };

  void to_json(nlohmann::json& j, const ClashRewardType& v) {
    switch(v) {
      case ClashRewardType::FLAG:
        j = "FLAG";
      break;
      case ClashRewardType::FRAME:
        j = "FRAME";
      break;
      case ClashRewardType::LOGO:
        j = "LOGO";
      break;
      case ClashRewardType::LOOT:
        j = "LOOT";
      break;
      case ClashRewardType::TROPHY:
        j = "TROPHY";
      break;
      case ClashRewardType::VP:
        j = "VP";
      break;
    }
  }

  void from_json(const nlohmann::json& j, ClashRewardType& v) {
    const auto s& = j.get<std::string>();
    if(s == "FLAG"){
      v = ClashRewardType::FLAG;
      return;
    }
    if(s == "FRAME"){
      v = ClashRewardType::FRAME;
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
    if(s == "TROPHY"){
      v = ClashRewardType::TROPHY;
      return;
    }
    if(s == "VP"){
      v = ClashRewardType::VP;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_ClashRewardType_HPP
