#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderMatchmakingSearchErrorResource_t {
    uint64_t penalizedSummonerId;
    double penaltyTimeRemaining;
    std::string errorType;
    std::string message;
    int32_t id;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderMatchmakingSearchErrorResource_t& v) {
    j["penalizedSummonerId"] = v.penalizedSummonerId;
    j["penaltyTimeRemaining"] = v.penaltyTimeRemaining;
    j["errorType"] = v.errorType;
    j["message"] = v.message;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderMatchmakingSearchErrorResource_t& v) {
    v.penalizedSummonerId = j.at("penalizedSummonerId").get<uint64_t>();
    v.penaltyTimeRemaining = j.at("penaltyTimeRemaining").get<double>();
    v.errorType = j.at("errorType").get<std::string>();
    v.message = j.at("message").get<std::string>();
    v.id = j.at("id").get<int32_t>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderMatchmakingSearchErrorResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
