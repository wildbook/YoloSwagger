#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RewardIcon_t {
    int32_t memberOwnedCount;
    int32_t icon;
  };

  inline void to_json(nlohmann::json& j, const RewardIcon_t& v) {
    j["memberOwnedCount"] = v.memberOwnedCount;
    j["icon"] = v.icon;
  }

  inline void from_json(const nlohmann::json& j, RewardIcon_t& v) {
    v.memberOwnedCount = j.at("memberOwnedCount").get<int32_t>();
    v.icon = j.at("icon").get<int32_t>();
  }
  inline std::string to_string(const RewardIcon_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
