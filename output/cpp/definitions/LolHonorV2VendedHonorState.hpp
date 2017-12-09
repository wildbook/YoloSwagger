#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolHonorV2VendedHonorState_t {
    bool rewardsLocked;
    int32_t checkpoint;
    int32_t level;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2VendedHonorState_t& v) {
    j["rewardsLocked"] = v.rewardsLocked;
    j["checkpoint"] = v.checkpoint;
    j["level"] = v.level;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2VendedHonorState_t& v) {
    v.rewardsLocked = j.at("rewardsLocked").get<bool>();
    v.checkpoint = j.at("checkpoint").get<int32_t>();
    v.level = j.at("level").get<int32_t>();
  }
  inline std::string to_string(const LolHonorV2VendedHonorState_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
