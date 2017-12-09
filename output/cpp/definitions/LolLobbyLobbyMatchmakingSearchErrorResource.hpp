#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyLobbyMatchmakingSearchErrorResource_t {
    double penaltyTimeRemaining;
    int32_t id;
    uint64_t penalizedSummonerId;
    std::string message;
    std::string errorType;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyMatchmakingSearchErrorResource_t& v) {
    j["penaltyTimeRemaining"] = v.penaltyTimeRemaining;
    j["id"] = v.id;
    j["penalizedSummonerId"] = v.penalizedSummonerId;
    j["message"] = v.message;
    j["errorType"] = v.errorType;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyMatchmakingSearchErrorResource_t& v) {
    v.penaltyTimeRemaining = j.at("penaltyTimeRemaining").get<double>();
    v.id = j.at("id").get<int32_t>();
    v.penalizedSummonerId = j.at("penalizedSummonerId").get<uint64_t>();
    v.message = j.at("message").get<std::string>();
    v.errorType = j.at("errorType").get<std::string>();
  }
  inline std::string to_string(const LolLobbyLobbyMatchmakingSearchErrorResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
