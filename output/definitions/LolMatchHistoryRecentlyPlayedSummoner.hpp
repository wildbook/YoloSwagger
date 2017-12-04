#ifndef SWAGGER_TYPES_LolMatchHistoryRecentlyPlayedSummoner_HPP
#define SWAGGER_TYPES_LolMatchHistoryRecentlyPlayedSummoner_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolMatchHistoryRecentlyPlayedSummoner {
'    // 
    uint64_t championId;
    // 
    std::string gameCreationDate;
    // 
    uint64_t gameId;
    // 
    uint64_t summonerId;
    // 
    std::string summonerName;
    // 
    uint64_t teamId;
  };

  void to_json(nlohmann::json& j, const LolMatchHistoryRecentlyPlayedSummoner& v) {
    j["championId"] = v.championId;
    j["gameCreationDate"] = v.gameCreationDate;
    j["gameId"] = v.gameId;
    j["summonerId"] = v.summonerId;
    j["summonerName"] = v.summonerName;
    j["teamId"] = v.teamId;
  }

  void from_json(const nlohmann::json& j, LolMatchHistoryRecentlyPlayedSummoner& v) {
    v.championId = j.at("championId").get<uint64_t>;
    v.gameCreationDate = j.at("gameCreationDate").get<std::string>;
    v.gameId = j.at("gameId").get<uint64_t>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.summonerName = j.at("summonerName").get<std::string>;
    v.teamId = j.at("teamId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolMatchHistoryRecentlyPlayedSummoner_HPP
