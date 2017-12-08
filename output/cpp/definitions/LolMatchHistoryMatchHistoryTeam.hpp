#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchHistoryMatchHistoryTeamBan.hpp"
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryTeam_t {
    uint16_t teamId;
    bool firstTower;
    uint32_t baronKills;
    bool firstInhibitor;
    uint32_t towerKills;
    uint32_t inhibitorKills;
    uint32_t dragonKills;
    uint32_t vilemawKills;
    bool firstDargon;
    bool firstBaron;
    uint32_t dominionVictoryScore;
    bool firstBlood;
    std::vector<LolMatchHistoryMatchHistoryTeamBan_t> bans;
    std::string win;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryTeam_t& v) {
    j["teamId"] = v.teamId;
    j["firstTower"] = v.firstTower;
    j["baronKills"] = v.baronKills;
    j["firstInhibitor"] = v.firstInhibitor;
    j["towerKills"] = v.towerKills;
    j["inhibitorKills"] = v.inhibitorKills;
    j["dragonKills"] = v.dragonKills;
    j["vilemawKills"] = v.vilemawKills;
    j["firstDargon"] = v.firstDargon;
    j["firstBaron"] = v.firstBaron;
    j["dominionVictoryScore"] = v.dominionVictoryScore;
    j["firstBlood"] = v.firstBlood;
    j["bans"] = v.bans;
    j["win"] = v.win;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryTeam_t& v) {
    v.teamId = j.at("teamId").get<uint16_t>();
    v.firstTower = j.at("firstTower").get<bool>();
    v.baronKills = j.at("baronKills").get<uint32_t>();
    v.firstInhibitor = j.at("firstInhibitor").get<bool>();
    v.towerKills = j.at("towerKills").get<uint32_t>();
    v.inhibitorKills = j.at("inhibitorKills").get<uint32_t>();
    v.dragonKills = j.at("dragonKills").get<uint32_t>();
    v.vilemawKills = j.at("vilemawKills").get<uint32_t>();
    v.firstDargon = j.at("firstDargon").get<bool>();
    v.firstBaron = j.at("firstBaron").get<bool>();
    v.dominionVictoryScore = j.at("dominionVictoryScore").get<uint32_t>();
    v.firstBlood = j.at("firstBlood").get<bool>();
    v.bans = j.at("bans").get<std::vector<LolMatchHistoryMatchHistoryTeamBan_t>>();
    v.win = j.at("win").get<std::string>();
  }
  inline std::string to_string(const LolMatchHistoryMatchHistoryTeam_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
