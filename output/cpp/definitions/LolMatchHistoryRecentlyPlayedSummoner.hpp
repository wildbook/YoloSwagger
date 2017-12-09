#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolMatchHistoryRecentlyPlayedSummoner_t {
    uint64_t gameId;
    std::string summonerName;
    uint64_t summonerId;
    std::string gameCreationDate;
    uint64_t teamId;
    uint64_t championId;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryRecentlyPlayedSummoner_t& v) {
    j["gameId"] = v.gameId;
    j["summonerName"] = v.summonerName;
    j["summonerId"] = v.summonerId;
    j["gameCreationDate"] = v.gameCreationDate;
    j["teamId"] = v.teamId;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryRecentlyPlayedSummoner_t& v) {
    v.gameId = j.at("gameId").get<uint64_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.gameCreationDate = j.at("gameCreationDate").get<std::string>();
    v.teamId = j.at("teamId").get<uint64_t>();
    v.championId = j.at("championId").get<uint64_t>();
  }
  inline std::string to_string(const LolMatchHistoryRecentlyPlayedSummoner_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
