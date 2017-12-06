#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyLobbyMatchmakingSearchErrorResource_t {
    uint64_t penalizedSummonerId;
    std::string message;
    int32_t id;
    std::string errorType;
    double penaltyTimeRemaining;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyMatchmakingSearchErrorResource_t& v) {
    j["penalizedSummonerId"] = v.penalizedSummonerId;
    j["message"] = v.message;
    j["id"] = v.id;
    j["errorType"] = v.errorType;
    j["penaltyTimeRemaining"] = v.penaltyTimeRemaining;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyMatchmakingSearchErrorResource_t& v) {
    v.penalizedSummonerId = j.at("penalizedSummonerId").get<uint64_t>();
    v.message = j.at("message").get<std::string>();
    v.id = j.at("id").get<int32_t>();
    v.errorType = j.at("errorType").get<std::string>();
    v.penaltyTimeRemaining = j.at("penaltyTimeRemaining").get<double>();
  }
}
