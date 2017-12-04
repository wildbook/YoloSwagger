#ifndef SWAGGER_TYPES_MatchmakingSearchResource_HPP
#define SWAGGER_TYPES_MatchmakingSearchResource_HPP
#include <json.hpp>
#include "MatchmakingSearchErrorResource.hpp"
namespace leagueapi {
  // 
  struct MatchmakingSearchResource {
    // 
    int32_t queueId;
    // 
    std::vector<MatchmakingSearchErrorResource> errors;
  };

  inline void to_json(nlohmann::json& j, const MatchmakingSearchResource& v) {
    j["queueId"] = v.queueId;
    j["errors"] = v.errors;
  }

  inline void from_json(const nlohmann::json& j, MatchmakingSearchResource& v) {
    v.queueId = j.at("queueId").get<int32_t>;
    v.errors = j.at("errors").get<std::vector<MatchmakingSearchErrorResource>>;
  }

}
#endif // SWAGGER_TYPES_MatchmakingSearchResource_HPP
