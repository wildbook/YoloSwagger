#ifndef SWAGGER_TYPES_MatchmakingSearchErrorResource_HPP
#define SWAGGER_TYPES_MatchmakingSearchErrorResource_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct MatchmakingSearchErrorResource {
    // 
    uint64_t penalizedSummonerId;
    // 
    std::string message;
    // 
    std::string errorType;
    // 
    double penaltyTimeRemaining;
    // 
    int32_t id;
  };

  inline void to_json(nlohmann::json& j, const MatchmakingSearchErrorResource& v) {
    j["penalizedSummonerId"] = v.penalizedSummonerId;
    j["message"] = v.message;
    j["errorType"] = v.errorType;
    j["penaltyTimeRemaining"] = v.penaltyTimeRemaining;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, MatchmakingSearchErrorResource& v) {
    v.penalizedSummonerId = j.at("penalizedSummonerId").get<uint64_t>;
    v.message = j.at("message").get<std::string>;
    v.errorType = j.at("errorType").get<std::string>;
    v.penaltyTimeRemaining = j.at("penaltyTimeRemaining").get<double>;
    v.id = j.at("id").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_MatchmakingSearchErrorResource_HPP
