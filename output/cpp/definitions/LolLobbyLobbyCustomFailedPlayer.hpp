#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyLobbyCustomFailedPlayer_t {
    std::string reason;
    uint64_t summonerId;
    std::string summonerName;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyCustomFailedPlayer_t& v) {
    j["reason"] = v.reason;
    j["summonerId"] = v.summonerId;
    j["summonerName"] = v.summonerName;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyCustomFailedPlayer_t& v) {
    v.reason = j.at("reason").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
  }
  inline std::string to_string(const LolLobbyLobbyCustomFailedPlayer_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
