#ifndef SWAGGER_TYPES_LolHonorV2ApiHonorPlayerServerRequest_HPP
#define SWAGGER_TYPES_LolHonorV2ApiHonorPlayerServerRequest_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolHonorV2ApiHonorPlayerServerRequest {
    // 
    uint64_t gameId;
    // 
    std::string honorCategory;
    // 
    uint64_t summonerId;
  };

  void to_json(nlohmann::json& j, const LolHonorV2ApiHonorPlayerServerRequest& v) {
    j["gameId"] = v.gameId;
    j["honorCategory"] = v.honorCategory;
    j["summonerId"] = v.summonerId;
  }

  void from_json(const nlohmann::json& j, LolHonorV2ApiHonorPlayerServerRequest& v) {
    v.gameId = j.at("gameId").get<uint64_t>;
    v.honorCategory = j.at("honorCategory").get<std::string>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolHonorV2ApiHonorPlayerServerRequest_HPP
