#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolHonorV2VendedHonorState_t {
    int32_t checkpoint;
    int32_t level;
    bool rewardsLocked;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2VendedHonorState_t& v) {
    j["checkpoint"] = v.checkpoint;
    j["level"] = v.level;
    j["rewardsLocked"] = v.rewardsLocked;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2VendedHonorState_t& v) {
    v.checkpoint = j.at("checkpoint").get<int32_t>();
    v.level = j.at("level").get<int32_t>();
    v.rewardsLocked = j.at("rewardsLocked").get<bool>();
  }
}
