#ifndef SWAGGER_TYPES_LolHonorV2ServiceProxyHonorPlayerServerRequest_HPP
#define SWAGGER_TYPES_LolHonorV2ServiceProxyHonorPlayerServerRequest_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolHonorV2ServiceProxyHonorPlayerServerRequest {
    // 
    std::string honorType;
    // 
    uint64_t gameId;
    // 
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2ServiceProxyHonorPlayerServerRequest& v) {
    j["honorType"] = v.honorType;
    j["gameId"] = v.gameId;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2ServiceProxyHonorPlayerServerRequest& v) {
    v.honorType = j.at("honorType").get<std::string>;
    v.gameId = j.at("gameId").get<uint64_t>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolHonorV2ServiceProxyHonorPlayerServerRequest_HPP
