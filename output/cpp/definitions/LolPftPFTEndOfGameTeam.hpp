#pragma once
#include <json.hpp>
#include <optional>
#include "LolPftPFTEndOfGamePlayer.hpp"
namespace leagueapi {
  struct LolPftPFTEndOfGameTeam_t {
    bool isBottomTeam;
    std::string memberStatusString;
    std::string tag;
    std::vector<LolPftPFTEndOfGamePlayer_t> players;
    bool isPlayerTeam;
    bool isWinningTeam;
    std::string fullId;
    nlohmann::json stats;
    int32_t teamId;
    std::vector<int32_t> championBans;
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const LolPftPFTEndOfGameTeam_t& v) {
    j["isBottomTeam"] = v.isBottomTeam;
    j["memberStatusString"] = v.memberStatusString;
    j["tag"] = v.tag;
    j["players"] = v.players;
    j["isPlayerTeam"] = v.isPlayerTeam;
    j["isWinningTeam"] = v.isWinningTeam;
    j["fullId"] = v.fullId;
    j["stats"] = v.stats;
    j["teamId"] = v.teamId;
    j["championBans"] = v.championBans;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LolPftPFTEndOfGameTeam_t& v) {
    v.isBottomTeam = j.at("isBottomTeam").get<bool>();
    v.memberStatusString = j.at("memberStatusString").get<std::string>();
    v.tag = j.at("tag").get<std::string>();
    v.players = j.at("players").get<std::vector<LolPftPFTEndOfGamePlayer_t>>();
    v.isPlayerTeam = j.at("isPlayerTeam").get<bool>();
    v.isWinningTeam = j.at("isWinningTeam").get<bool>();
    v.fullId = j.at("fullId").get<std::string>();
    v.stats = j.at("stats").get<nlohmann::json>();
    v.teamId = j.at("teamId").get<int32_t>();
    v.championBans = j.at("championBans").get<std::vector<int32_t>>();
    v.name = j.at("name").get<std::string>();
  }
  inline std::string to_string(const LolPftPFTEndOfGameTeam_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
