#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolHonorV2ServiceProxyRetrieveProfileResponse_t {
    int32_t_t checkpoint;
    int32_t_t honorLevel;
    bool_t rewardsLocked;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2ServiceProxyRetrieveProfileResponse_t& v) {
    j["checkpoint"] = v.checkpoint;
    j["honorLevel"] = v.honorLevel;
    j["rewardsLocked"] = v.rewardsLocked;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2ServiceProxyRetrieveProfileResponse_t& v) {
    v.checkpoint = j.at("checkpoint").get<int32_t_t>();
    v.honorLevel = j.at("honorLevel").get<int32_t_t>();
    v.rewardsLocked = j.at("rewardsLocked").get<bool_t>();
  }
  inline std::string to_string(const LolHonorV2ServiceProxyRetrieveProfileResponse_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
