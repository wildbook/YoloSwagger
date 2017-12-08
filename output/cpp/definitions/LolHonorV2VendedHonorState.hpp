#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolHonorV2VendedHonorState_t {
    bool rewardsLocked;
    int32_t level;
    int32_t checkpoint;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2VendedHonorState_t& v) {
    j["rewardsLocked"] = v.rewardsLocked;
    j["level"] = v.level;
    j["checkpoint"] = v.checkpoint;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2VendedHonorState_t& v) {
    v.rewardsLocked = j.at("rewardsLocked").get<bool>();
    v.level = j.at("level").get<int32_t>();
    v.checkpoint = j.at("checkpoint").get<int32_t>();
  }
  inline std::string to_string(const LolHonorV2VendedHonorState_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
