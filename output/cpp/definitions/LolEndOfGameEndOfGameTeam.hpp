#pragma once
#include <json.hpp>
#include <optional>
#include "LolEndOfGameEndOfGamePlayer.hpp"
namespace leagueapi {
  struct LolEndOfGameEndOfGameTeam_t {
    int32_t teamId;
    std::string memberStatusString;
    bool isPlayerTeam;
    std::string name;
    std::vector<int32_t> championBans;
    std::string fullId;
    std::string tag;
    bool isBottomTeam;
    nlohmann::json stats;
    std::vector<LolEndOfGameEndOfGamePlayer_t> players;
    bool isWinningTeam;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameEndOfGameTeam_t& v) {
    j["teamId"] = v.teamId;
    j["memberStatusString"] = v.memberStatusString;
    j["isPlayerTeam"] = v.isPlayerTeam;
    j["name"] = v.name;
    j["championBans"] = v.championBans;
    j["fullId"] = v.fullId;
    j["tag"] = v.tag;
    j["isBottomTeam"] = v.isBottomTeam;
    j["stats"] = v.stats;
    j["players"] = v.players;
    j["isWinningTeam"] = v.isWinningTeam;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameEndOfGameTeam_t& v) {
    v.teamId = j.at("teamId").get<int32_t>();
    v.memberStatusString = j.at("memberStatusString").get<std::string>();
    v.isPlayerTeam = j.at("isPlayerTeam").get<bool>();
    v.name = j.at("name").get<std::string>();
    v.championBans = j.at("championBans").get<std::vector<int32_t>>();
    v.fullId = j.at("fullId").get<std::string>();
    v.tag = j.at("tag").get<std::string>();
    v.isBottomTeam = j.at("isBottomTeam").get<bool>();
    v.stats = j.at("stats").get<nlohmann::json>();
    v.players = j.at("players").get<std::vector<LolEndOfGameEndOfGamePlayer_t>>();
    v.isWinningTeam = j.at("isWinningTeam").get<bool>();
  }
  inline std::string to_string(const LolEndOfGameEndOfGameTeam_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
