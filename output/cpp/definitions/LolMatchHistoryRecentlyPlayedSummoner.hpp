#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolMatchHistoryRecentlyPlayedSummoner_t {
    uint64_t teamId;
    uint64_t championId;
    uint64_t gameId;
    std::string summonerName;
    std::string gameCreationDate;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryRecentlyPlayedSummoner_t& v) {
    j["teamId"] = v.teamId;
    j["championId"] = v.championId;
    j["gameId"] = v.gameId;
    j["summonerName"] = v.summonerName;
    j["gameCreationDate"] = v.gameCreationDate;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryRecentlyPlayedSummoner_t& v) {
    v.teamId = j.at("teamId").get<uint64_t>();
    v.championId = j.at("championId").get<uint64_t>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.gameCreationDate = j.at("gameCreationDate").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const LolMatchHistoryRecentlyPlayedSummoner_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
