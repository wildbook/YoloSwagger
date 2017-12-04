#ifndef SWAGGER_TYPES_ClashRewardOutput_HPP
#define SWAGGER_TYPES_ClashRewardOutput_HPP
#include <json.hpp>
#include "ClashRewardDefinition.hpp"
#include "ClashRewardTime.hpp"
namespace leagueapi {
  // 
  struct ClashRewardOutput {
    // 
    ClashRewardDefinition alternative;
    // 
    ClashRewardTime show;
    // 
    ClashRewardDefinition primary;
    // 
    ClashRewardTime grant;
  };

  inline void to_json(nlohmann::json& j, const ClashRewardOutput& v) {
    j["alternative"] = v.alternative;
    j["show"] = v.show;
    j["primary"] = v.primary;
    j["grant"] = v.grant;
  }

  inline void from_json(const nlohmann::json& j, ClashRewardOutput& v) {
    v.alternative = j.at("alternative").get<ClashRewardDefinition>;
    v.show = j.at("show").get<ClashRewardTime>;
    v.primary = j.at("primary").get<ClashRewardDefinition>;
    v.grant = j.at("grant").get<ClashRewardTime>;
  }

}
#endif // SWAGGER_TYPES_ClashRewardOutput_HPP