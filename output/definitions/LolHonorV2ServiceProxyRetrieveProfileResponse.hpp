#ifndef SWAGGER_TYPES_LolHonorV2ServiceProxyRetrieveProfileResponse_HPP
#define SWAGGER_TYPES_LolHonorV2ServiceProxyRetrieveProfileResponse_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolHonorV2ServiceProxyRetrieveProfileResponse {
    // 
    int32_t checkpoint;
    // 
    int32_t honorLevel;
    // 
    bool rewardsLocked;
  };

  void to_json(nlohmann::json& j, const LolHonorV2ServiceProxyRetrieveProfileResponse& v) {
    j["checkpoint"] = v.checkpoint;
    j["honorLevel"] = v.honorLevel;
    j["rewardsLocked"] = v.rewardsLocked;
  }

  void from_json(const nlohmann::json& j, LolHonorV2ServiceProxyRetrieveProfileResponse& v) {
    v.checkpoint = j.at("checkpoint").get<int32_t>;
    v.honorLevel = j.at("honorLevel").get<int32_t>;
    v.rewardsLocked = j.at("rewardsLocked").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolHonorV2ServiceProxyRetrieveProfileResponse_HPP
