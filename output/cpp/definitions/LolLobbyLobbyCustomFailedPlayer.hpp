#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyLobbyCustomFailedPlayer_t {
    std::string summonerName;
    std::string reason;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyCustomFailedPlayer_t& v) {
    j["summonerName"] = v.summonerName;
    j["reason"] = v.reason;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyCustomFailedPlayer_t& v) {
    v.summonerName = j.at("summonerName").get<std::string>();
    v.reason = j.at("reason").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const LolLobbyLobbyCustomFailedPlayer_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
