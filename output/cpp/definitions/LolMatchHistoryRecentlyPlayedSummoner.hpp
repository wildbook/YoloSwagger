#ifndef SWAGGER_TYPES_LolMatchHistoryRecentlyPlayedSummoner_HPP
#define SWAGGER_TYPES_LolMatchHistoryRecentlyPlayedSummoner_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolMatchHistoryRecentlyPlayedSummoner {
    // 
    uint64_t gameId;
    // 
    uint64_t championId;
    // 
    std::string summonerName;
    // 
    uint64_t summonerId;
    // 
    uint64_t teamId;
    // 
    std::string gameCreationDate;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryRecentlyPlayedSummoner& v) {
    j["gameId"] = v.gameId;
    j["championId"] = v.championId;
    j["summonerName"] = v.summonerName;
    j["summonerId"] = v.summonerId;
    j["teamId"] = v.teamId;
    j["gameCreationDate"] = v.gameCreationDate;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryRecentlyPlayedSummoner& v) {
    v.gameId = j.at("gameId").get<uint64_t>;
    v.championId = j.at("championId").get<uint64_t>;
    v.summonerName = j.at("summonerName").get<std::string>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.teamId = j.at("teamId").get<uint64_t>;
    v.gameCreationDate = j.at("gameCreationDate").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolMatchHistoryRecentlyPlayedSummoner_HPP
