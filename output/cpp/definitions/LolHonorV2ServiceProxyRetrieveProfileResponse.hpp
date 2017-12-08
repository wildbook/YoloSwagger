#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolHonorV2ServiceProxyRetrieveProfileResponse_t {
    bool rewardsLocked;
    int32_t honorLevel;
    int32_t checkpoint;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2ServiceProxyRetrieveProfileResponse_t& v) {
    j["rewardsLocked"] = v.rewardsLocked;
    j["honorLevel"] = v.honorLevel;
    j["checkpoint"] = v.checkpoint;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2ServiceProxyRetrieveProfileResponse_t& v) {
    v.rewardsLocked = j.at("rewardsLocked").get<bool>();
    v.honorLevel = j.at("honorLevel").get<int32_t>();
    v.checkpoint = j.at("checkpoint").get<int32_t>();
  }
  inline std::string to_string(const LolHonorV2ServiceProxyRetrieveProfileResponse_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
