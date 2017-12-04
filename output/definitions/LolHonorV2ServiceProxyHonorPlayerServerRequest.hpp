#ifndef SWAGGER_TYPES_LolHonorV2ServiceProxyHonorPlayerServerRequest_HPP
#define SWAGGER_TYPES_LolHonorV2ServiceProxyHonorPlayerServerRequest_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolHonorV2ServiceProxyHonorPlayerServerRequest {
    // 
    uint64_t gameId;
    // 
    std::string honorType;
    // 
    uint64_t summonerId;
  };

  void to_json(nlohmann::json& j, const LolHonorV2ServiceProxyHonorPlayerServerRequest& v) {
    j["gameId"] = v.gameId;
    j["honorType"] = v.honorType;
    j["summonerId"] = v.summonerId;
  }

  void from_json(const nlohmann::json& j, LolHonorV2ServiceProxyHonorPlayerServerRequest& v) {
    v.gameId = j.at("gameId").get<uint64_t>;
    v.honorType = j.at("honorType").get<std::string>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolHonorV2ServiceProxyHonorPlayerServerRequest_HPP
