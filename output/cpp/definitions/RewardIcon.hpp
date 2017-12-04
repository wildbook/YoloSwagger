#ifndef SWAGGER_TYPES_RewardIcon_HPP
#define SWAGGER_TYPES_RewardIcon_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct RewardIcon {
    // 
    int32_t memberOwnedCount;
    // 
    int32_t icon;
  };

  inline void to_json(nlohmann::json& j, const RewardIcon& v) {
    j["memberOwnedCount"] = v.memberOwnedCount;
    j["icon"] = v.icon;
  }

  inline void from_json(const nlohmann::json& j, RewardIcon& v) {
    v.memberOwnedCount = j.at("memberOwnedCount").get<int32_t>;
    v.icon = j.at("icon").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_RewardIcon_HPP
