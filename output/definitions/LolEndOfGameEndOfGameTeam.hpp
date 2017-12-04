#ifndef SWAGGER_TYPES_LolEndOfGameEndOfGameTeam_HPP
#define SWAGGER_TYPES_LolEndOfGameEndOfGameTeam_HPP
#include <json.hpp>
#include "LolEndOfGameEndOfGamePlayer.hpp"
namespace test {
  // 
  struct LolEndOfGameEndOfGameTeam {
'    // 
    std::vector<int32_t> championBans;
    // 
    std::string fullId;
    // 
    bool isBottomTeam;
    // 
    bool isPlayerTeam;
    // 
    bool isWinningTeam;
    // 
    std::string memberStatusString;
    // 
    std::string name;
    // 
    std::vector<LolEndOfGameEndOfGamePlayer> players;
    // 
    nlohmann::json stats;
    // 
    std::string tag;
    // 
    int32_t teamId;
  };

  void to_json(nlohmann::json& j, const LolEndOfGameEndOfGameTeam& v) {
    j["championBans"] = v.championBans;
    j["fullId"] = v.fullId;
    j["isBottomTeam"] = v.isBottomTeam;
    j["isPlayerTeam"] = v.isPlayerTeam;
    j["isWinningTeam"] = v.isWinningTeam;
    j["memberStatusString"] = v.memberStatusString;
    j["name"] = v.name;
    j["players"] = v.players;
    j["stats"] = v.stats;
    j["tag"] = v.tag;
    j["teamId"] = v.teamId;
  }

  void from_json(const nlohmann::json& j, LolEndOfGameEndOfGameTeam& v) {
    v.championBans = j.at("championBans").get<std::vector<int32_t>>;
    v.fullId = j.at("fullId").get<std::string>;
    v.isBottomTeam = j.at("isBottomTeam").get<bool>;
    v.isPlayerTeam = j.at("isPlayerTeam").get<bool>;
    v.isWinningTeam = j.at("isWinningTeam").get<bool>;
    v.memberStatusString = j.at("memberStatusString").get<std::string>;
    v.name = j.at("name").get<std::string>;
    v.players = j.at("players").get<std::vector<LolEndOfGameEndOfGamePlayer>>;
    v.stats = j.at("stats").get<nlohmann::json>;
    v.tag = j.at("tag").get<std::string>;
    v.teamId = j.at("teamId").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolEndOfGameEndOfGameTeam_HPP
