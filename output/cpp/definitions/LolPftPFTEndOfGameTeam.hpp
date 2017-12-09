#pragma once
#include <json.hpp>
#include <optional>
#include "LolPftPFTEndOfGamePlayer.hpp"
namespace leagueapi {
  struct LolPftPFTEndOfGameTeam_t {
    int32_t teamId;
    std::string memberStatusString;
    bool isPlayerTeam;
    std::string name;
    std::vector<int32_t> championBans;
    std::string fullId;
    std::string tag;
    bool isBottomTeam;
    nlohmann::json stats;
    std::vector<LolPftPFTEndOfGamePlayer_t> players;
    bool isWinningTeam;
  };

  inline void to_json(nlohmann::json& j, const LolPftPFTEndOfGameTeam_t& v) {
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

  inline void from_json(const nlohmann::json& j, LolPftPFTEndOfGameTeam_t& v) {
    v.teamId = j.at("teamId").get<int32_t>();
    v.memberStatusString = j.at("memberStatusString").get<std::string>();
    v.isPlayerTeam = j.at("isPlayerTeam").get<bool>();
    v.name = j.at("name").get<std::string>();
    v.championBans = j.at("championBans").get<std::vector<int32_t>>();
    v.fullId = j.at("fullId").get<std::string>();
    v.tag = j.at("tag").get<std::string>();
    v.isBottomTeam = j.at("isBottomTeam").get<bool>();
    v.stats = j.at("stats").get<nlohmann::json>();
    v.players = j.at("players").get<std::vector<LolPftPFTEndOfGamePlayer_t>>();
    v.isWinningTeam = j.at("isWinningTeam").get<bool>();
  }
  inline std::string to_string(const LolPftPFTEndOfGameTeam_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
