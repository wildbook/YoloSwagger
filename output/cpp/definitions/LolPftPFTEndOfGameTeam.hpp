#pragma once
#include <json.hpp>
#include <optional>
#include "LolPftPFTEndOfGamePlayer.hpp"
namespace leagueapi {
  struct LolPftPFTEndOfGameTeam_t {
    std::vector<int32_t> championBans;
    std::string memberStatusString;
    std::string tag;
    nlohmann::json stats;
    std::vector<LolPftPFTEndOfGamePlayer_t> players;
    std::string name;
    bool isBottomTeam;
    std::string fullId;
    int32_t teamId;
    bool isPlayerTeam;
    bool isWinningTeam;
  };

  inline void to_json(nlohmann::json& j, const LolPftPFTEndOfGameTeam_t& v) {
    j["championBans"] = v.championBans;
    j["memberStatusString"] = v.memberStatusString;
    j["tag"] = v.tag;
    j["stats"] = v.stats;
    j["players"] = v.players;
    j["name"] = v.name;
    j["isBottomTeam"] = v.isBottomTeam;
    j["fullId"] = v.fullId;
    j["teamId"] = v.teamId;
    j["isPlayerTeam"] = v.isPlayerTeam;
    j["isWinningTeam"] = v.isWinningTeam;
  }

  inline void from_json(const nlohmann::json& j, LolPftPFTEndOfGameTeam_t& v) {
    v.championBans = j.at("championBans").get<std::vector<int32_t>>();
    v.memberStatusString = j.at("memberStatusString").get<std::string>();
    v.tag = j.at("tag").get<std::string>();
    v.stats = j.at("stats").get<nlohmann::json>();
    v.players = j.at("players").get<std::vector<LolPftPFTEndOfGamePlayer_t>>();
    v.name = j.at("name").get<std::string>();
    v.isBottomTeam = j.at("isBottomTeam").get<bool>();
    v.fullId = j.at("fullId").get<std::string>();
    v.teamId = j.at("teamId").get<int32_t>();
    v.isPlayerTeam = j.at("isPlayerTeam").get<bool>();
    v.isWinningTeam = j.at("isWinningTeam").get<bool>();
  }
}
