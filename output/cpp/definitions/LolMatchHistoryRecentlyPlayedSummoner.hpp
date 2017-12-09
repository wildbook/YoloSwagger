#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolMatchHistoryRecentlyPlayedSummoner_t {
    uint64_t gameId;
    uint64_t summonerId;
    uint64_t teamId;
    std::string gameCreationDate;
    std::string summonerName;
    uint64_t championId;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryRecentlyPlayedSummoner_t& v) {
    j["gameId"] = v.gameId;
    j["summonerId"] = v.summonerId;
    j["teamId"] = v.teamId;
    j["gameCreationDate"] = v.gameCreationDate;
    j["summonerName"] = v.summonerName;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryRecentlyPlayedSummoner_t& v) {
    v.gameId = j.at("gameId").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.teamId = j.at("teamId").get<uint64_t>();
    v.gameCreationDate = j.at("gameCreationDate").get<std::string>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.championId = j.at("championId").get<uint64_t>();
  }
  inline std::string to_string(const LolMatchHistoryRecentlyPlayedSummoner_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
