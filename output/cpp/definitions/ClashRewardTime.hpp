#ifndef SWAGGER_TYPES_ClashRewardTime_HPP
#define SWAGGER_TYPES_ClashRewardTime_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class ClashRewardTime {
    // 
    EOB = 2,
    // 
    NONE = 0,
    // 
    EOG = 1,
    // 
    EOT = 3,
  };

  inline void to_json(nlohmann::json& j, const ClashRewardTime& v) {
    switch(v) {
      case ClashRewardTime::EOB:
        j = "EOB";
      break;
      case ClashRewardTime::NONE:
        j = "NONE";
      break;
      case ClashRewardTime::EOG:
        j = "EOG";
      break;
      case ClashRewardTime::EOT:
        j = "EOT";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, ClashRewardTime& v) {
    const auto& s = j.get<std::string>();
    if(s == "EOB"){
      v = ClashRewardTime::EOB;
      return;
    }
    if(s == "NONE"){
      v = ClashRewardTime::NONE;
      return;
    }
    if(s == "EOG"){
      v = ClashRewardTime::EOG;
      return;
    }
    if(s == "EOT"){
      v = ClashRewardTime::EOT;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_ClashRewardTime_HPP
