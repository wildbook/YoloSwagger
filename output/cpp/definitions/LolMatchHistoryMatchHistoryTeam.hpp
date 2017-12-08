#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchHistoryMatchHistoryTeamBan.hpp"
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryTeam_t {
    bool firstInhibitor;
    std::vector<LolMatchHistoryMatchHistoryTeamBan_t> bans;
    uint32_t baronKills;
    bool firstBaron;
    bool firstBlood;
    bool firstTower;
    uint16_t teamId;
    uint32_t dragonKills;
    bool firstDargon;
    uint32_t inhibitorKills;
    uint32_t towerKills;
    uint32_t dominionVictoryScore;
    std::string win;
    uint32_t vilemawKills;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryTeam_t& v) {
    j["firstInhibitor"] = v.firstInhibitor;
    j["bans"] = v.bans;
    j["baronKills"] = v.baronKills;
    j["firstBaron"] = v.firstBaron;
    j["firstBlood"] = v.firstBlood;
    j["firstTower"] = v.firstTower;
    j["teamId"] = v.teamId;
    j["dragonKills"] = v.dragonKills;
    j["firstDargon"] = v.firstDargon;
    j["inhibitorKills"] = v.inhibitorKills;
    j["towerKills"] = v.towerKills;
    j["dominionVictoryScore"] = v.dominionVictoryScore;
    j["win"] = v.win;
    j["vilemawKills"] = v.vilemawKills;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryTeam_t& v) {
    v.firstInhibitor = j.at("firstInhibitor").get<bool>();
    v.bans = j.at("bans").get<std::vector<LolMatchHistoryMatchHistoryTeamBan_t>>();
    v.baronKills = j.at("baronKills").get<uint32_t>();
    v.firstBaron = j.at("firstBaron").get<bool>();
    v.firstBlood = j.at("firstBlood").get<bool>();
    v.firstTower = j.at("firstTower").get<bool>();
    v.teamId = j.at("teamId").get<uint16_t>();
    v.dragonKills = j.at("dragonKills").get<uint32_t>();
    v.firstDargon = j.at("firstDargon").get<bool>();
    v.inhibitorKills = j.at("inhibitorKills").get<uint32_t>();
    v.towerKills = j.at("towerKills").get<uint32_t>();
    v.dominionVictoryScore = j.at("dominionVictoryScore").get<uint32_t>();
    v.win = j.at("win").get<std::string>();
    v.vilemawKills = j.at("vilemawKills").get<uint32_t>();
  }
  inline std::string to_string(const LolMatchHistoryMatchHistoryTeam_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
