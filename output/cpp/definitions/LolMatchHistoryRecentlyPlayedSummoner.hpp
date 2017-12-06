#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolMatchHistoryRecentlyPlayedSummoner_t {
    uint64_t championId;
    uint64_t teamId;
    std::string summonerName;
    uint64_t gameId;
    uint64_t summonerId;
    std::string gameCreationDate;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryRecentlyPlayedSummoner_t& v) {
    j["championId"] = v.championId;
    j["teamId"] = v.teamId;
    j["summonerName"] = v.summonerName;
    j["gameId"] = v.gameId;
    j["summonerId"] = v.summonerId;
    j["gameCreationDate"] = v.gameCreationDate;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryRecentlyPlayedSummoner_t& v) {
    v.championId = j.at("championId").get<uint64_t>();
    v.teamId = j.at("teamId").get<uint64_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.gameCreationDate = j.at("gameCreationDate").get<std::string>();
  }
}
