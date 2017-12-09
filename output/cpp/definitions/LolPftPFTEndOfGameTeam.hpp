#pragma once
#include <json.hpp>
#include <optional>
#include "LolPftPFTEndOfGamePlayer.hpp"
namespace leagueapi {
  struct LolPftPFTEndOfGameTeam_t {
    std::string memberStatusString;
    bool isBottomTeam;
    std::string name;
    std::vector<int32_t> championBans;
    nlohmann::json stats;
    std::vector<LolPftPFTEndOfGamePlayer_t> players;
    std::string tag;
    bool isPlayerTeam;
    int32_t teamId;
    bool isWinningTeam;
    std::string fullId;
  };

  inline void to_json(nlohmann::json& j, const LolPftPFTEndOfGameTeam_t& v) {
    j["memberStatusString"] = v.memberStatusString;
    j["isBottomTeam"] = v.isBottomTeam;
    j["name"] = v.name;
    j["championBans"] = v.championBans;
    j["stats"] = v.stats;
    j["players"] = v.players;
    j["tag"] = v.tag;
    j["isPlayerTeam"] = v.isPlayerTeam;
    j["teamId"] = v.teamId;
    j["isWinningTeam"] = v.isWinningTeam;
    j["fullId"] = v.fullId;
  }

  inline void from_json(const nlohmann::json& j, LolPftPFTEndOfGameTeam_t& v) {
    v.memberStatusString = j.at("memberStatusString").get<std::string>();
    v.isBottomTeam = j.at("isBottomTeam").get<bool>();
    v.name = j.at("name").get<std::string>();
    v.championBans = j.at("championBans").get<std::vector<int32_t>>();
    v.stats = j.at("stats").get<nlohmann::json>();
    v.players = j.at("players").get<std::vector<LolPftPFTEndOfGamePlayer_t>>();
    v.tag = j.at("tag").get<std::string>();
    v.isPlayerTeam = j.at("isPlayerTeam").get<bool>();
    v.teamId = j.at("teamId").get<int32_t>();
    v.isWinningTeam = j.at("isWinningTeam").get<bool>();
    v.fullId = j.at("fullId").get<std::string>();
  }
  inline std::string to_string(const LolPftPFTEndOfGameTeam_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
