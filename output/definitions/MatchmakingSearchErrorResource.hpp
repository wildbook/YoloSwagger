#ifndef SWAGGER_TYPES_MatchmakingSearchErrorResource_HPP
#define SWAGGER_TYPES_MatchmakingSearchErrorResource_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct MatchmakingSearchErrorResource {
    // 
    std::string errorType;
    // 
    int32_t id;
    // 
    std::string message;
    // 
    uint64_t penalizedSummonerId;
    // 
    double penaltyTimeRemaining;
  };

  inline void to_json(nlohmann::json& j, const MatchmakingSearchErrorResource& v) {
    j["errorType"] = v.errorType;
    j["id"] = v.id;
    j["message"] = v.message;
    j["penalizedSummonerId"] = v.penalizedSummonerId;
    j["penaltyTimeRemaining"] = v.penaltyTimeRemaining;
  }

  inline void from_json(const nlohmann::json& j, MatchmakingSearchErrorResource& v) {
    v.errorType = j.at("errorType").get<std::string>;
    v.id = j.at("id").get<int32_t>;
    v.message = j.at("message").get<std::string>;
    v.penalizedSummonerId = j.at("penalizedSummonerId").get<uint64_t>;
    v.penaltyTimeRemaining = j.at("penaltyTimeRemaining").get<double>;
  }

}
#endif // SWAGGER_TYPES_MatchmakingSearchErrorResource_HPP
