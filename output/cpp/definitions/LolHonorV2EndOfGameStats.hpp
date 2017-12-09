#pragma once
#include <json.hpp>
#include <optional>
#include "LolHonorV2EndOfGameTeam.hpp"
namespace leagueapi {
  struct LolHonorV2EndOfGameStats_t {
    bool gameEndedInEarlySurrender;
    uint64_t reportGameId;
    std::string difficulty;
    int32_t championId;
    std::string queueType;
    uint64_t gameId;
    uint64_t summonerId;
    std::vector<LolHonorV2EndOfGameTeam_t> teams;
    std::string gameType;
    std::vector<std::string> gameMutators;
    std::string summonerName;
    uint64_t accountId;
    std::string myTeamStatus;
    bool ranked;
    bool invalid;
    std::string gameMode;
    bool imbalancedTeamsNoPoints;
    int32_t gameLength;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2EndOfGameStats_t& v) {
    j["gameEndedInEarlySurrender"] = v.gameEndedInEarlySurrender;
    j["reportGameId"] = v.reportGameId;
    j["difficulty"] = v.difficulty;
    j["championId"] = v.championId;
    j["queueType"] = v.queueType;
    j["gameId"] = v.gameId;
    j["summonerId"] = v.summonerId;
    j["teams"] = v.teams;
    j["gameType"] = v.gameType;
    j["gameMutators"] = v.gameMutators;
    j["summonerName"] = v.summonerName;
    j["accountId"] = v.accountId;
    j["myTeamStatus"] = v.myTeamStatus;
    j["ranked"] = v.ranked;
    j["invalid"] = v.invalid;
    j["gameMode"] = v.gameMode;
    j["imbalancedTeamsNoPoints"] = v.imbalancedTeamsNoPoints;
    j["gameLength"] = v.gameLength;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2EndOfGameStats_t& v) {
    v.gameEndedInEarlySurrender = j.at("gameEndedInEarlySurrender").get<bool>();
    v.reportGameId = j.at("reportGameId").get<uint64_t>();
    v.difficulty = j.at("difficulty").get<std::string>();
    v.championId = j.at("championId").get<int32_t>();
    v.queueType = j.at("queueType").get<std::string>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.teams = j.at("teams").get<std::vector<LolHonorV2EndOfGameTeam_t>>();
    v.gameType = j.at("gameType").get<std::string>();
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.myTeamStatus = j.at("myTeamStatus").get<std::string>();
    v.ranked = j.at("ranked").get<bool>();
    v.invalid = j.at("invalid").get<bool>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.imbalancedTeamsNoPoints = j.at("imbalancedTeamsNoPoints").get<bool>();
    v.gameLength = j.at("gameLength").get<int32_t>();
  }
  inline std::string to_string(const LolHonorV2EndOfGameStats_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
