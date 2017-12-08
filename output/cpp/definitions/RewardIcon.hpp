#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RewardIcon_t {
    int32_t icon;
    int32_t memberOwnedCount;
  };

  inline void to_json(nlohmann::json& j, const RewardIcon_t& v) {
    j["icon"] = v.icon;
    j["memberOwnedCount"] = v.memberOwnedCount;
  }

  inline void from_json(const nlohmann::json& j, RewardIcon_t& v) {
    v.icon = j.at("icon").get<int32_t>();
    v.memberOwnedCount = j.at("memberOwnedCount").get<int32_t>();
  }
  inline std::string to_string(const RewardIcon_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
