#pragma once
#include <json.hpp>
#include <optional>
#include "LolEndOfGameEndOfGamePlayer.hpp"
namespace leagueapi {
  struct LolEndOfGameEndOfGameTeam_t {
    std::string fullId;
    int32_t teamId;
    std::string tag;
    bool isPlayerTeam;
    std::vector<int32_t> championBans;
    bool isWinningTeam;
    std::vector<LolEndOfGameEndOfGamePlayer_t> players;
    std::string name;
    bool isBottomTeam;
    nlohmann::json stats;
    std::string memberStatusString;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameEndOfGameTeam_t& v) {
    j["fullId"] = v.fullId;
    j["teamId"] = v.teamId;
    j["tag"] = v.tag;
    j["isPlayerTeam"] = v.isPlayerTeam;
    j["championBans"] = v.championBans;
    j["isWinningTeam"] = v.isWinningTeam;
    j["players"] = v.players;
    j["name"] = v.name;
    j["isBottomTeam"] = v.isBottomTeam;
    j["stats"] = v.stats;
    j["memberStatusString"] = v.memberStatusString;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameEndOfGameTeam_t& v) {
    v.fullId = j.at("fullId").get<std::string>();
    v.teamId = j.at("teamId").get<int32_t>();
    v.tag = j.at("tag").get<std::string>();
    v.isPlayerTeam = j.at("isPlayerTeam").get<bool>();
    v.championBans = j.at("championBans").get<std::vector<int32_t>>();
    v.isWinningTeam = j.at("isWinningTeam").get<bool>();
    v.players = j.at("players").get<std::vector<LolEndOfGameEndOfGamePlayer_t>>();
    v.name = j.at("name").get<std::string>();
    v.isBottomTeam = j.at("isBottomTeam").get<bool>();
    v.stats = j.at("stats").get<nlohmann::json>();
    v.memberStatusString = j.at("memberStatusString").get<std::string>();
  }
  inline std::string to_string(const LolEndOfGameEndOfGameTeam_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
