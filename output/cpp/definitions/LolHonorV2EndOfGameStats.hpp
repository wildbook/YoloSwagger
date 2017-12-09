#pragma once
#include <json.hpp>
#include <optional>
#include "LolHonorV2EndOfGameTeam.hpp"
namespace leagueapi {
  struct LolHonorV2EndOfGameStats_t {
    uint64_t summonerId;
    std::string gameMode;
    std::string myTeamStatus;
    uint64_t reportGameId;
    bool imbalancedTeamsNoPoints;
    std::string gameType;
    std::string queueType;
    std::string summonerName;
    int32_t gameLength;
    uint64_t gameId;
    uint64_t accountId;
    std::vector<std::string> gameMutators;
    bool gameEndedInEarlySurrender;
    std::vector<LolHonorV2EndOfGameTeam_t> teams;
    bool ranked;
    std::string difficulty;
    bool invalid;
    int32_t championId;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2EndOfGameStats_t& v) {
    j["summonerId"] = v.summonerId;
    j["gameMode"] = v.gameMode;
    j["myTeamStatus"] = v.myTeamStatus;
    j["reportGameId"] = v.reportGameId;
    j["imbalancedTeamsNoPoints"] = v.imbalancedTeamsNoPoints;
    j["gameType"] = v.gameType;
    j["queueType"] = v.queueType;
    j["summonerName"] = v.summonerName;
    j["gameLength"] = v.gameLength;
    j["gameId"] = v.gameId;
    j["accountId"] = v.accountId;
    j["gameMutators"] = v.gameMutators;
    j["gameEndedInEarlySurrender"] = v.gameEndedInEarlySurrender;
    j["teams"] = v.teams;
    j["ranked"] = v.ranked;
    j["difficulty"] = v.difficulty;
    j["invalid"] = v.invalid;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2EndOfGameStats_t& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.myTeamStatus = j.at("myTeamStatus").get<std::string>();
    v.reportGameId = j.at("reportGameId").get<uint64_t>();
    v.imbalancedTeamsNoPoints = j.at("imbalancedTeamsNoPoints").get<bool>();
    v.gameType = j.at("gameType").get<std::string>();
    v.queueType = j.at("queueType").get<std::string>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.gameLength = j.at("gameLength").get<int32_t>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>();
    v.gameEndedInEarlySurrender = j.at("gameEndedInEarlySurrender").get<bool>();
    v.teams = j.at("teams").get<std::vector<LolHonorV2EndOfGameTeam_t>>();
    v.ranked = j.at("ranked").get<bool>();
    v.difficulty = j.at("difficulty").get<std::string>();
    v.invalid = j.at("invalid").get<bool>();
    v.championId = j.at("championId").get<int32_t>();
  }
  inline std::string to_string(const LolHonorV2EndOfGameStats_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
