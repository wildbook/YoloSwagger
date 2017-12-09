#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchHistoryMatchHistoryTeamBan.hpp"
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryTeam_t {
    bool firstInhibitor;
    uint32_t inhibitorKills;
    uint32_t baronKills;
    bool firstTower;
    bool firstBlood;
    std::vector<LolMatchHistoryMatchHistoryTeamBan_t> bans;
    uint16_t teamId;
    uint32_t towerKills;
    bool firstBaron;
    uint32_t vilemawKills;
    uint32_t dominionVictoryScore;
    std::string win;
    bool firstDargon;
    uint32_t dragonKills;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryTeam_t& v) {
    j["firstInhibitor"] = v.firstInhibitor;
    j["inhibitorKills"] = v.inhibitorKills;
    j["baronKills"] = v.baronKills;
    j["firstTower"] = v.firstTower;
    j["firstBlood"] = v.firstBlood;
    j["bans"] = v.bans;
    j["teamId"] = v.teamId;
    j["towerKills"] = v.towerKills;
    j["firstBaron"] = v.firstBaron;
    j["vilemawKills"] = v.vilemawKills;
    j["dominionVictoryScore"] = v.dominionVictoryScore;
    j["win"] = v.win;
    j["firstDargon"] = v.firstDargon;
    j["dragonKills"] = v.dragonKills;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryTeam_t& v) {
    v.firstInhibitor = j.at("firstInhibitor").get<bool>();
    v.inhibitorKills = j.at("inhibitorKills").get<uint32_t>();
    v.baronKills = j.at("baronKills").get<uint32_t>();
    v.firstTower = j.at("firstTower").get<bool>();
    v.firstBlood = j.at("firstBlood").get<bool>();
    v.bans = j.at("bans").get<std::vector<LolMatchHistoryMatchHistoryTeamBan_t>>();
    v.teamId = j.at("teamId").get<uint16_t>();
    v.towerKills = j.at("towerKills").get<uint32_t>();
    v.firstBaron = j.at("firstBaron").get<bool>();
    v.vilemawKills = j.at("vilemawKills").get<uint32_t>();
    v.dominionVictoryScore = j.at("dominionVictoryScore").get<uint32_t>();
    v.win = j.at("win").get<std::string>();
    v.firstDargon = j.at("firstDargon").get<bool>();
    v.dragonKills = j.at("dragonKills").get<uint32_t>();
  }
  inline std::string to_string(const LolMatchHistoryMatchHistoryTeam_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
