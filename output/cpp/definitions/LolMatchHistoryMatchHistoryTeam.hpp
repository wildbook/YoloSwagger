#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchHistoryMatchHistoryTeamBan.hpp"
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryTeam_t {
    uint16_t teamId;
    std::vector<LolMatchHistoryMatchHistoryTeamBan_t> bans;
    uint32_t dominionVictoryScore;
    bool firstBlood;
    uint32_t vilemawKills;
    uint32_t baronKills;
    uint32_t dragonKills;
    bool firstTower;
    std::string win;
    uint32_t inhibitorKills;
    bool firstInhibitor;
    uint32_t towerKills;
    bool firstBaron;
    bool firstDargon;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryTeam_t& v) {
    j["teamId"] = v.teamId;
    j["bans"] = v.bans;
    j["dominionVictoryScore"] = v.dominionVictoryScore;
    j["firstBlood"] = v.firstBlood;
    j["vilemawKills"] = v.vilemawKills;
    j["baronKills"] = v.baronKills;
    j["dragonKills"] = v.dragonKills;
    j["firstTower"] = v.firstTower;
    j["win"] = v.win;
    j["inhibitorKills"] = v.inhibitorKills;
    j["firstInhibitor"] = v.firstInhibitor;
    j["towerKills"] = v.towerKills;
    j["firstBaron"] = v.firstBaron;
    j["firstDargon"] = v.firstDargon;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryTeam_t& v) {
    v.teamId = j.at("teamId").get<uint16_t>();
    v.bans = j.at("bans").get<std::vector<LolMatchHistoryMatchHistoryTeamBan_t>>();
    v.dominionVictoryScore = j.at("dominionVictoryScore").get<uint32_t>();
    v.firstBlood = j.at("firstBlood").get<bool>();
    v.vilemawKills = j.at("vilemawKills").get<uint32_t>();
    v.baronKills = j.at("baronKills").get<uint32_t>();
    v.dragonKills = j.at("dragonKills").get<uint32_t>();
    v.firstTower = j.at("firstTower").get<bool>();
    v.win = j.at("win").get<std::string>();
    v.inhibitorKills = j.at("inhibitorKills").get<uint32_t>();
    v.firstInhibitor = j.at("firstInhibitor").get<bool>();
    v.towerKills = j.at("towerKills").get<uint32_t>();
    v.firstBaron = j.at("firstBaron").get<bool>();
    v.firstDargon = j.at("firstDargon").get<bool>();
  }
  inline std::string to_string(const LolMatchHistoryMatchHistoryTeam_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
