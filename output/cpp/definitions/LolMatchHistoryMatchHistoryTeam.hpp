#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchHistoryMatchHistoryTeamBan.hpp"
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryTeam_t {
    uint32_t towerKills;
    uint32_t baronKills;
    uint32_t vilemawKills;
    uint32_t inhibitorKills;
    std::string win;
    bool firstDargon;
    bool firstBaron;
    uint32_t dominionVictoryScore;
    bool firstInhibitor;
    bool firstBlood;
    std::vector<LolMatchHistoryMatchHistoryTeamBan_t> bans;
    uint32_t dragonKills;
    uint16_t teamId;
    bool firstTower;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryTeam_t& v) {
    j["towerKills"] = v.towerKills;
    j["baronKills"] = v.baronKills;
    j["vilemawKills"] = v.vilemawKills;
    j["inhibitorKills"] = v.inhibitorKills;
    j["win"] = v.win;
    j["firstDargon"] = v.firstDargon;
    j["firstBaron"] = v.firstBaron;
    j["dominionVictoryScore"] = v.dominionVictoryScore;
    j["firstInhibitor"] = v.firstInhibitor;
    j["firstBlood"] = v.firstBlood;
    j["bans"] = v.bans;
    j["dragonKills"] = v.dragonKills;
    j["teamId"] = v.teamId;
    j["firstTower"] = v.firstTower;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryTeam_t& v) {
    v.towerKills = j.at("towerKills").get<uint32_t>();
    v.baronKills = j.at("baronKills").get<uint32_t>();
    v.vilemawKills = j.at("vilemawKills").get<uint32_t>();
    v.inhibitorKills = j.at("inhibitorKills").get<uint32_t>();
    v.win = j.at("win").get<std::string>();
    v.firstDargon = j.at("firstDargon").get<bool>();
    v.firstBaron = j.at("firstBaron").get<bool>();
    v.dominionVictoryScore = j.at("dominionVictoryScore").get<uint32_t>();
    v.firstInhibitor = j.at("firstInhibitor").get<bool>();
    v.firstBlood = j.at("firstBlood").get<bool>();
    v.bans = j.at("bans").get<std::vector<LolMatchHistoryMatchHistoryTeamBan_t>>();
    v.dragonKills = j.at("dragonKills").get<uint32_t>();
    v.teamId = j.at("teamId").get<uint16_t>();
    v.firstTower = j.at("firstTower").get<bool>();
  }
}
