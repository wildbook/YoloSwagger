#pragma once
#include <json.hpp>
#include <optional>
#include "LolEndOfGameEndOfGamePlayer.hpp"
namespace leagueapi {
  struct LolEndOfGameEndOfGameTeam_t {
    nlohmann::json_t stats;
    std::string_t name;
    std::string_t tag;
    std::string_t memberStatusString;
    bool_t isWinningTeam;
    bool_t isPlayerTeam;
    std::vector<LolEndOfGameEndOfGamePlayer_t> players;
    int32_t_t teamId;
    std::vector<int32_t> championBans;
    std::string_t fullId;
    bool_t isBottomTeam;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameEndOfGameTeam_t& v) {
    j["stats"] = v.stats;
    j["name"] = v.name;
    j["tag"] = v.tag;
    j["memberStatusString"] = v.memberStatusString;
    j["isWinningTeam"] = v.isWinningTeam;
    j["isPlayerTeam"] = v.isPlayerTeam;
    j["players"] = v.players;
    j["teamId"] = v.teamId;
    j["championBans"] = v.championBans;
    j["fullId"] = v.fullId;
    j["isBottomTeam"] = v.isBottomTeam;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameEndOfGameTeam_t& v) {
    v.stats = j.at("stats").get<nlohmann::json_t>();
    v.name = j.at("name").get<std::string_t>();
    v.tag = j.at("tag").get<std::string_t>();
    v.memberStatusString = j.at("memberStatusString").get<std::string_t>();
    v.isWinningTeam = j.at("isWinningTeam").get<bool_t>();
    v.isPlayerTeam = j.at("isPlayerTeam").get<bool_t>();
    v.players = j.at("players").get<std::vector<LolEndOfGameEndOfGamePlayer_t>>();
    v.teamId = j.at("teamId").get<int32_t_t>();
    v.championBans = j.at("championBans").get<std::vector<int32_t>>();
    v.fullId = j.at("fullId").get<std::string_t>();
    v.isBottomTeam = j.at("isBottomTeam").get<bool_t>();
  }
  inline std::string to_string(const LolEndOfGameEndOfGameTeam_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
