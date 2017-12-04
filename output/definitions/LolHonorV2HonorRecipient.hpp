#ifndef SWAGGER_TYPES_LolHonorV2HonorRecipient_HPP
#define SWAGGER_TYPES_LolHonorV2HonorRecipient_HPP
#include <json.hpp>
#include "LolHonorV2Honor.hpp"
namespace leagueapi {
  // 
  struct LolHonorV2HonorRecipient {
    // 
    uint64_t gameId;
    // 
    std::vector<LolHonorV2Honor> honors;
    // 
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2HonorRecipient& v) {
    j["gameId"] = v.gameId;
    j["honors"] = v.honors;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2HonorRecipient& v) {
    v.gameId = j.at("gameId").get<uint64_t>;
    v.honors = j.at("honors").get<std::vector<LolHonorV2Honor>>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolHonorV2HonorRecipient_HPP
