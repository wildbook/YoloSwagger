#ifndef SWAGGER_TYPES_LolHonorV2EndOfGameStats_HPP
#define SWAGGER_TYPES_LolHonorV2EndOfGameStats_HPP
#include <json.hpp>
#include "LolHonorV2EndOfGameTeam.hpp"
namespace leagueapi {
  // 
  struct LolHonorV2EndOfGameStats {
    // 
    uint64_t accountId;
    // 
    int32_t championId;
    // 
    std::string difficulty;
    // 
    bool gameEndedInEarlySurrender;
    // 
    uint64_t gameId;
    // 
    int32_t gameLength;
    // 
    std::string gameMode;
    // 
    std::vector<std::string> gameMutators;
    // 
    std::string gameType;
    // 
    bool imbalancedTeamsNoPoints;
    // 
    bool invalid;
    // 
    std::string myTeamStatus;
    // 
    std::string queueType;
    // 
    bool ranked;
    // 
    uint64_t reportGameId;
    // 
    uint64_t summonerId;
    // 
    std::string summonerName;
    // 
    std::vector<LolHonorV2EndOfGameTeam> teams;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2EndOfGameStats& v) {
    j["accountId"] = v.accountId;
    j["championId"] = v.championId;
    j["difficulty"] = v.difficulty;
    j["gameEndedInEarlySurrender"] = v.gameEndedInEarlySurrender;
    j["gameId"] = v.gameId;
    j["gameLength"] = v.gameLength;
    j["gameMode"] = v.gameMode;
    j["gameMutators"] = v.gameMutators;
    j["gameType"] = v.gameType;
    j["imbalancedTeamsNoPoints"] = v.imbalancedTeamsNoPoints;
    j["invalid"] = v.invalid;
    j["myTeamStatus"] = v.myTeamStatus;
    j["queueType"] = v.queueType;
    j["ranked"] = v.ranked;
    j["reportGameId"] = v.reportGameId;
    j["summonerId"] = v.summonerId;
    j["summonerName"] = v.summonerName;
    j["teams"] = v.teams;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2EndOfGameStats& v) {
    v.accountId = j.at("accountId").get<uint64_t>;
    v.championId = j.at("championId").get<int32_t>;
    v.difficulty = j.at("difficulty").get<std::string>;
    v.gameEndedInEarlySurrender = j.at("gameEndedInEarlySurrender").get<bool>;
    v.gameId = j.at("gameId").get<uint64_t>;
    v.gameLength = j.at("gameLength").get<int32_t>;
    v.gameMode = j.at("gameMode").get<std::string>;
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>;
    v.gameType = j.at("gameType").get<std::string>;
    v.imbalancedTeamsNoPoints = j.at("imbalancedTeamsNoPoints").get<bool>;
    v.invalid = j.at("invalid").get<bool>;
    v.myTeamStatus = j.at("myTeamStatus").get<std::string>;
    v.queueType = j.at("queueType").get<std::string>;
    v.ranked = j.at("ranked").get<bool>;
    v.reportGameId = j.at("reportGameId").get<uint64_t>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.summonerName = j.at("summonerName").get<std::string>;
    v.teams = j.at("teams").get<std::vector<LolHonorV2EndOfGameTeam>>;
  }

}
#endif // SWAGGER_TYPES_LolHonorV2EndOfGameStats_HPP
