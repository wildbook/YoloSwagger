#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolMatchmakingMatchmakingSearchErrorResource_t {
    std::string errorType;
    uint64_t penalizedSummonerId;
    int32_t id;
    double penaltyTimeRemaining;
    std::string message;
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingMatchmakingSearchErrorResource_t& v) {
    j["errorType"] = v.errorType;
    j["penalizedSummonerId"] = v.penalizedSummonerId;
    j["id"] = v.id;
    j["penaltyTimeRemaining"] = v.penaltyTimeRemaining;
    j["message"] = v.message;
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingMatchmakingSearchErrorResource_t& v) {
    v.errorType = j.at("errorType").get<std::string>();
    v.penalizedSummonerId = j.at("penalizedSummonerId").get<uint64_t>();
    v.id = j.at("id").get<int32_t>();
    v.penaltyTimeRemaining = j.at("penaltyTimeRemaining").get<double>();
    v.message = j.at("message").get<std::string>();
  }
  inline std::string to_string(const LolMatchmakingMatchmakingSearchErrorResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
