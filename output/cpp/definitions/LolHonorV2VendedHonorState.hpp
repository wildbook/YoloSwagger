#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolHonorV2VendedHonorState_t {
    int32_t_t checkpoint;
    bool_t rewardsLocked;
    int32_t_t level;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2VendedHonorState_t& v) {
    j["checkpoint"] = v.checkpoint;
    j["rewardsLocked"] = v.rewardsLocked;
    j["level"] = v.level;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2VendedHonorState_t& v) {
    v.checkpoint = j.at("checkpoint").get<int32_t_t>();
    v.rewardsLocked = j.at("rewardsLocked").get<bool_t>();
    v.level = j.at("level").get<int32_t_t>();
  }
  inline std::string to_string(const LolHonorV2VendedHonorState_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
