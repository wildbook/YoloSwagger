#pragma once
#include <json.hpp>
#include <optional>
#include "LolHonorV2EndOfGameTeam.hpp"
namespace leagueapi {
  struct LolHonorV2EndOfGameStats_t {
    std::string gameMode;
    std::string gameType;
    std::string difficulty;
    int32_t gameLength;
    std::string myTeamStatus;
    std::string queueType;
    uint64_t reportGameId;
    bool imbalancedTeamsNoPoints;
    uint64_t summonerId;
    bool ranked;
    uint64_t accountId;
    uint64_t gameId;
    bool gameEndedInEarlySurrender;
    int32_t championId;
    std::string summonerName;
    std::vector<std::string> gameMutators;
    std::vector<LolHonorV2EndOfGameTeam_t> teams;
    bool invalid;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2EndOfGameStats_t& v) {
    j["gameMode"] = v.gameMode;
    j["gameType"] = v.gameType;
    j["difficulty"] = v.difficulty;
    j["gameLength"] = v.gameLength;
    j["myTeamStatus"] = v.myTeamStatus;
    j["queueType"] = v.queueType;
    j["reportGameId"] = v.reportGameId;
    j["imbalancedTeamsNoPoints"] = v.imbalancedTeamsNoPoints;
    j["summonerId"] = v.summonerId;
    j["ranked"] = v.ranked;
    j["accountId"] = v.accountId;
    j["gameId"] = v.gameId;
    j["gameEndedInEarlySurrender"] = v.gameEndedInEarlySurrender;
    j["championId"] = v.championId;
    j["summonerName"] = v.summonerName;
    j["gameMutators"] = v.gameMutators;
    j["teams"] = v.teams;
    j["invalid"] = v.invalid;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2EndOfGameStats_t& v) {
    v.gameMode = j.at("gameMode").get<std::string>();
    v.gameType = j.at("gameType").get<std::string>();
    v.difficulty = j.at("difficulty").get<std::string>();
    v.gameLength = j.at("gameLength").get<int32_t>();
    v.myTeamStatus = j.at("myTeamStatus").get<std::string>();
    v.queueType = j.at("queueType").get<std::string>();
    v.reportGameId = j.at("reportGameId").get<uint64_t>();
    v.imbalancedTeamsNoPoints = j.at("imbalancedTeamsNoPoints").get<bool>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.ranked = j.at("ranked").get<bool>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.gameEndedInEarlySurrender = j.at("gameEndedInEarlySurrender").get<bool>();
    v.championId = j.at("championId").get<int32_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>();
    v.teams = j.at("teams").get<std::vector<LolHonorV2EndOfGameTeam_t>>();
    v.invalid = j.at("invalid").get<bool>();
  }
  inline std::string to_string(const LolHonorV2EndOfGameStats_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
