#pragma once
#include <json.hpp>
#include <optional>
#include "LolHonorV2EndOfGameTeam.hpp"
namespace leagueapi {
  struct LolHonorV2EndOfGameStats_t {
    std::string gameType;
    int32_t championId;
    std::string queueType;
    uint64_t summonerId;
    bool invalid;
    bool ranked;
    uint64_t accountId;
    std::string gameMode;
    uint64_t gameId;
    std::string difficulty;
    std::string myTeamStatus;
    uint64_t reportGameId;
    int32_t gameLength;
    bool imbalancedTeamsNoPoints;
    std::string summonerName;
    std::vector<std::string> gameMutators;
    bool gameEndedInEarlySurrender;
    std::vector<LolHonorV2EndOfGameTeam_t> teams;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2EndOfGameStats_t& v) {
    j["gameType"] = v.gameType;
    j["championId"] = v.championId;
    j["queueType"] = v.queueType;
    j["summonerId"] = v.summonerId;
    j["invalid"] = v.invalid;
    j["ranked"] = v.ranked;
    j["accountId"] = v.accountId;
    j["gameMode"] = v.gameMode;
    j["gameId"] = v.gameId;
    j["difficulty"] = v.difficulty;
    j["myTeamStatus"] = v.myTeamStatus;
    j["reportGameId"] = v.reportGameId;
    j["gameLength"] = v.gameLength;
    j["imbalancedTeamsNoPoints"] = v.imbalancedTeamsNoPoints;
    j["summonerName"] = v.summonerName;
    j["gameMutators"] = v.gameMutators;
    j["gameEndedInEarlySurrender"] = v.gameEndedInEarlySurrender;
    j["teams"] = v.teams;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2EndOfGameStats_t& v) {
    v.gameType = j.at("gameType").get<std::string>();
    v.championId = j.at("championId").get<int32_t>();
    v.queueType = j.at("queueType").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.invalid = j.at("invalid").get<bool>();
    v.ranked = j.at("ranked").get<bool>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.difficulty = j.at("difficulty").get<std::string>();
    v.myTeamStatus = j.at("myTeamStatus").get<std::string>();
    v.reportGameId = j.at("reportGameId").get<uint64_t>();
    v.gameLength = j.at("gameLength").get<int32_t>();
    v.imbalancedTeamsNoPoints = j.at("imbalancedTeamsNoPoints").get<bool>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>();
    v.gameEndedInEarlySurrender = j.at("gameEndedInEarlySurrender").get<bool>();
    v.teams = j.at("teams").get<std::vector<LolHonorV2EndOfGameTeam_t>>();
  }
}
