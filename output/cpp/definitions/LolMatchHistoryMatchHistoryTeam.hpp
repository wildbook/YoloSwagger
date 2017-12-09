#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchHistoryMatchHistoryTeamBan.hpp"
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryTeam_t {
    bool firstBlood;
    uint32_t inhibitorKills;
    uint32_t baronKills;
    uint32_t dominionVictoryScore;
    uint32_t dragonKills;
    uint32_t vilemawKills;
    bool firstTower;
    bool firstInhibitor;
    bool firstDargon;
    std::vector<LolMatchHistoryMatchHistoryTeamBan_t> bans;
    bool firstBaron;
    std::string win;
    uint32_t towerKills;
    uint16_t teamId;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryTeam_t& v) {
    j["firstBlood"] = v.firstBlood;
    j["inhibitorKills"] = v.inhibitorKills;
    j["baronKills"] = v.baronKills;
    j["dominionVictoryScore"] = v.dominionVictoryScore;
    j["dragonKills"] = v.dragonKills;
    j["vilemawKills"] = v.vilemawKills;
    j["firstTower"] = v.firstTower;
    j["firstInhibitor"] = v.firstInhibitor;
    j["firstDargon"] = v.firstDargon;
    j["bans"] = v.bans;
    j["firstBaron"] = v.firstBaron;
    j["win"] = v.win;
    j["towerKills"] = v.towerKills;
    j["teamId"] = v.teamId;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryTeam_t& v) {
    v.firstBlood = j.at("firstBlood").get<bool>();
    v.inhibitorKills = j.at("inhibitorKills").get<uint32_t>();
    v.baronKills = j.at("baronKills").get<uint32_t>();
    v.dominionVictoryScore = j.at("dominionVictoryScore").get<uint32_t>();
    v.dragonKills = j.at("dragonKills").get<uint32_t>();
    v.vilemawKills = j.at("vilemawKills").get<uint32_t>();
    v.firstTower = j.at("firstTower").get<bool>();
    v.firstInhibitor = j.at("firstInhibitor").get<bool>();
    v.firstDargon = j.at("firstDargon").get<bool>();
    v.bans = j.at("bans").get<std::vector<LolMatchHistoryMatchHistoryTeamBan_t>>();
    v.firstBaron = j.at("firstBaron").get<bool>();
    v.win = j.at("win").get<std::string>();
    v.towerKills = j.at("towerKills").get<uint32_t>();
    v.teamId = j.at("teamId").get<uint16_t>();
  }
  inline std::string to_string(const LolMatchHistoryMatchHistoryTeam_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
