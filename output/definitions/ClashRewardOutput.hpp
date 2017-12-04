#ifndef SWAGGER_TYPES_ClashRewardOutput_HPP
#define SWAGGER_TYPES_ClashRewardOutput_HPP
#include <json.hpp>
#include "ClashRewardTime.hpp"
#include "ClashRewardDefinition.hpp"
namespace test {
  // 
  struct ClashRewardOutput {
'    // 
    ClashRewardDefinition alternative;
    // 
    ClashRewardTime grant;
    // 
    ClashRewardDefinition primary;
    // 
    ClashRewardTime show;
  };

  void to_json(nlohmann::json& j, const ClashRewardOutput& v) {
    j["alternative"] = v.alternative;
    j["grant"] = v.grant;
    j["primary"] = v.primary;
    j["show"] = v.show;
  }

  void from_json(const nlohmann::json& j, ClashRewardOutput& v) {
    v.alternative = j.at("alternative").get<ClashRewardDefinition>;
    v.grant = j.at("grant").get<ClashRewardTime>;
    v.primary = j.at("primary").get<ClashRewardDefinition>;
    v.show = j.at("show").get<ClashRewardTime>;
  }

}
#endif // SWAGGER_TYPES_ClashRewardOutput_HPP
