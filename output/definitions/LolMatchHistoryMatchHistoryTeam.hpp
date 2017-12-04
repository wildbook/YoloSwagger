#ifndef SWAGGER_TYPES_LolMatchHistoryMatchHistoryTeam_HPP
#define SWAGGER_TYPES_LolMatchHistoryMatchHistoryTeam_HPP
#include <json.hpp>
#include "LolMatchHistoryMatchHistoryTeamBan.hpp"
namespace leagueapi {
  // 
  struct LolMatchHistoryMatchHistoryTeam {
    // 
    std::vector<LolMatchHistoryMatchHistoryTeamBan> bans;
    // 
    uint32_t baronKills;
    // 
    uint32_t dominionVictoryScore;
    // 
    uint32_t dragonKills;
    // 
    bool firstBaron;
    // 
    bool firstBlood;
    // 
    bool firstDargon;
    // 
    bool firstInhibitor;
    // 
    bool firstTower;
    // 
    uint32_t inhibitorKills;
    // 
    uint16_t teamId;
    // 
    uint32_t towerKills;
    // 
    uint32_t vilemawKills;
    // 
    std::string win;
  };

  void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryTeam& v) {
    j["bans"] = v.bans;
    j["baronKills"] = v.baronKills;
    j["dominionVictoryScore"] = v.dominionVictoryScore;
    j["dragonKills"] = v.dragonKills;
    j["firstBaron"] = v.firstBaron;
    j["firstBlood"] = v.firstBlood;
    j["firstDargon"] = v.firstDargon;
    j["firstInhibitor"] = v.firstInhibitor;
    j["firstTower"] = v.firstTower;
    j["inhibitorKills"] = v.inhibitorKills;
    j["teamId"] = v.teamId;
    j["towerKills"] = v.towerKills;
    j["vilemawKills"] = v.vilemawKills;
    j["win"] = v.win;
  }

  void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryTeam& v) {
    v.bans = j.at("bans").get<std::vector<LolMatchHistoryMatchHistoryTeamBan>>;
    v.baronKills = j.at("baronKills").get<uint32_t>;
    v.dominionVictoryScore = j.at("dominionVictoryScore").get<uint32_t>;
    v.dragonKills = j.at("dragonKills").get<uint32_t>;
    v.firstBaron = j.at("firstBaron").get<bool>;
    v.firstBlood = j.at("firstBlood").get<bool>;
    v.firstDargon = j.at("firstDargon").get<bool>;
    v.firstInhibitor = j.at("firstInhibitor").get<bool>;
    v.firstTower = j.at("firstTower").get<bool>;
    v.inhibitorKills = j.at("inhibitorKills").get<uint32_t>;
    v.teamId = j.at("teamId").get<uint16_t>;
    v.towerKills = j.at("towerKills").get<uint32_t>;
    v.vilemawKills = j.at("vilemawKills").get<uint32_t>;
    v.win = j.at("win").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolMatchHistoryMatchHistoryTeam_HPP
