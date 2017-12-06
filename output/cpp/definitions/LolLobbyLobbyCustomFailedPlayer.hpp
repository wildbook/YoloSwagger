#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyLobbyCustomFailedPlayer_t {
    std::string summonerName;
    uint64_t summonerId;
    std::string reason;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyCustomFailedPlayer_t& v) {
    j["summonerName"] = v.summonerName;
    j["summonerId"] = v.summonerId;
    j["reason"] = v.reason;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyCustomFailedPlayer_t& v) {
    v.summonerName = j.at("summonerName").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.reason = j.at("reason").get<std::string>();
  }
}
