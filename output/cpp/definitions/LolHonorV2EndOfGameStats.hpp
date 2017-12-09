#pragma once
#include <json.hpp>
#include <optional>
#include "LolHonorV2EndOfGameTeam.hpp"
namespace leagueapi {
  struct LolHonorV2EndOfGameStats_t {
    bool ranked;
    bool imbalancedTeamsNoPoints;
    uint64_t summonerId;
    uint64_t gameId;
    std::string difficulty;
    std::vector<std::string> gameMutators;
    std::string myTeamStatus;
    bool invalid;
    std::string gameType;
    std::string queueType;
    uint64_t accountId;
    std::string gameMode;
    std::string summonerName;
    uint64_t reportGameId;
    int32_t gameLength;
    bool gameEndedInEarlySurrender;
    std::vector<LolHonorV2EndOfGameTeam_t> teams;
    int32_t championId;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2EndOfGameStats_t& v) {
    j["ranked"] = v.ranked;
    j["imbalancedTeamsNoPoints"] = v.imbalancedTeamsNoPoints;
    j["summonerId"] = v.summonerId;
    j["gameId"] = v.gameId;
    j["difficulty"] = v.difficulty;
    j["gameMutators"] = v.gameMutators;
    j["myTeamStatus"] = v.myTeamStatus;
    j["invalid"] = v.invalid;
    j["gameType"] = v.gameType;
    j["queueType"] = v.queueType;
    j["accountId"] = v.accountId;
    j["gameMode"] = v.gameMode;
    j["summonerName"] = v.summonerName;
    j["reportGameId"] = v.reportGameId;
    j["gameLength"] = v.gameLength;
    j["gameEndedInEarlySurrender"] = v.gameEndedInEarlySurrender;
    j["teams"] = v.teams;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2EndOfGameStats_t& v) {
    v.ranked = j.at("ranked").get<bool>();
    v.imbalancedTeamsNoPoints = j.at("imbalancedTeamsNoPoints").get<bool>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.difficulty = j.at("difficulty").get<std::string>();
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>();
    v.myTeamStatus = j.at("myTeamStatus").get<std::string>();
    v.invalid = j.at("invalid").get<bool>();
    v.gameType = j.at("gameType").get<std::string>();
    v.queueType = j.at("queueType").get<std::string>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.reportGameId = j.at("reportGameId").get<uint64_t>();
    v.gameLength = j.at("gameLength").get<int32_t>();
    v.gameEndedInEarlySurrender = j.at("gameEndedInEarlySurrender").get<bool>();
    v.teams = j.at("teams").get<std::vector<LolHonorV2EndOfGameTeam_t>>();
    v.championId = j.at("championId").get<int32_t>();
  }
  inline std::string to_string(const LolHonorV2EndOfGameStats_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
