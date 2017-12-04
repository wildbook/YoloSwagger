#ifndef SWAGGER_TYPES_RewardIcon_HPP
#define SWAGGER_TYPES_RewardIcon_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct RewardIcon {
    // 
    int32_t icon;
    // 
    int32_t memberOwnedCount;
  };

  void to_json(nlohmann::json& j, const RewardIcon& v) {
    j["icon"] = v.icon;
    j["memberOwnedCount"] = v.memberOwnedCount;
  }

  void from_json(const nlohmann::json& j, RewardIcon& v) {
    v.icon = j.at("icon").get<int32_t>;
    v.memberOwnedCount = j.at("memberOwnedCount").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_RewardIcon_HPP
