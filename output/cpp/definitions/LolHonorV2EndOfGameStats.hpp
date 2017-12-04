#ifndef SWAGGER_TYPES_LolHonorV2EndOfGameStats_HPP
#define SWAGGER_TYPES_LolHonorV2EndOfGameStats_HPP
#include <json.hpp>
#include "LolHonorV2EndOfGameTeam.hpp"
namespace leagueapi {
  // 
  struct LolHonorV2EndOfGameStats {
    // 
    uint64_t gameId;
    // 
    int32_t championId;
    // 
    std::string summonerName;
    // 
    bool ranked;
    // 
    bool gameEndedInEarlySurrender;
    // 
    std::string gameMode;
    // 
    std::string gameType;
    // 
    std::vector<LolHonorV2EndOfGameTeam> teams;
    // 
    std::string difficulty;
    // 
    std::string myTeamStatus;
    // 
    bool invalid;
    // 
    std::vector<std::string> gameMutators;
    // 
    int32_t gameLength;
    // 
    std::string queueType;
    // 
    bool imbalancedTeamsNoPoints;
    // 
    uint64_t reportGameId;
    // 
    uint64_t summonerId;
    // 
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2EndOfGameStats& v) {
    j["gameId"] = v.gameId;
    j["championId"] = v.championId;
    j["summonerName"] = v.summonerName;
    j["ranked"] = v.ranked;
    j["gameEndedInEarlySurrender"] = v.gameEndedInEarlySurrender;
    j["gameMode"] = v.gameMode;
    j["gameType"] = v.gameType;
    j["teams"] = v.teams;
    j["difficulty"] = v.difficulty;
    j["myTeamStatus"] = v.myTeamStatus;
    j["invalid"] = v.invalid;
    j["gameMutators"] = v.gameMutators;
    j["gameLength"] = v.gameLength;
    j["queueType"] = v.queueType;
    j["imbalancedTeamsNoPoints"] = v.imbalancedTeamsNoPoints;
    j["reportGameId"] = v.reportGameId;
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2EndOfGameStats& v) {
    v.gameId = j.at("gameId").get<uint64_t>;
    v.championId = j.at("championId").get<int32_t>;
    v.summonerName = j.at("summonerName").get<std::string>;
    v.ranked = j.at("ranked").get<bool>;
    v.gameEndedInEarlySurrender = j.at("gameEndedInEarlySurrender").get<bool>;
    v.gameMode = j.at("gameMode").get<std::string>;
    v.gameType = j.at("gameType").get<std::string>;
    v.teams = j.at("teams").get<std::vector<LolHonorV2EndOfGameTeam>>;
    v.difficulty = j.at("difficulty").get<std::string>;
    v.myTeamStatus = j.at("myTeamStatus").get<std::string>;
    v.invalid = j.at("invalid").get<bool>;
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>;
    v.gameLength = j.at("gameLength").get<int32_t>;
    v.queueType = j.at("queueType").get<std::string>;
    v.imbalancedTeamsNoPoints = j.at("imbalancedTeamsNoPoints").get<bool>;
    v.reportGameId = j.at("reportGameId").get<uint64_t>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.accountId = j.at("accountId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolHonorV2EndOfGameStats_HPP
