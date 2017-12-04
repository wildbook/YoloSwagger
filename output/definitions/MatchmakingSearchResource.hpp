#ifndef SWAGGER_TYPES_MatchmakingSearchResource_HPP
#define SWAGGER_TYPES_MatchmakingSearchResource_HPP
#include <json.hpp>
#include "MatchmakingSearchErrorResource.hpp"
namespace leagueapi {
  // 
  struct MatchmakingSearchResource {
    // 
    std::vector<MatchmakingSearchErrorResource> errors;
    // 
    int32_t queueId;
  };

  void to_json(nlohmann::json& j, const MatchmakingSearchResource& v) {
    j["errors"] = v.errors;
    j["queueId"] = v.queueId;
  }

  void from_json(const nlohmann::json& j, MatchmakingSearchResource& v) {
    v.errors = j.at("errors").get<std::vector<MatchmakingSearchErrorResource>>;
    v.queueId = j.at("queueId").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_MatchmakingSearchResource_HPP
