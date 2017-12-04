#ifndef SWAGGER_TYPES_ClashRewardTime_HPP
#define SWAGGER_TYPES_ClashRewardTime_HPP
#include <json.hpp>
namespace test {
  // 
  enum class ClashRewardTime {
'    // 
    EOB = 2,
    // 
    EOG = 1,
    // 
    EOT = 3,
    // 
    NONE = 0,
  };

  void to_json(nlohmann::json& j, const ClashRewardTime& v) {
    switch(v) {
      case ClashRewardTime::EOB:
        j = "EOB";
      break;
      case ClashRewardTime::EOG:
        j = "EOG";
      break;
      case ClashRewardTime::EOT:
        j = "EOT";
      break;
      case ClashRewardTime::NONE:
        j = "NONE";
      break;
    }
  }

  void from_json(const nlohmann::json& j, ClashRewardTime& v) {
    const auto s& = j.get<std::string>();
    if(s == "EOB"){
      v = ClashRewardTime::EOB;
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
    if(s == "NONE"){
      v = ClashRewardTime::NONE;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_ClashRewardTime_HPP
