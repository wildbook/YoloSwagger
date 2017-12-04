#ifndef SWAGGER_TYPES_LolHonorV2EndOfGameTeam_HPP
#define SWAGGER_TYPES_LolHonorV2EndOfGameTeam_HPP
#include <json.hpp>
#include "LolHonorV2EndOfGamePlayer.hpp"
namespace leagueapi {
  // 
  struct LolHonorV2EndOfGameTeam {
    // 
    nlohmann::json stats;
    // 
    std::string name;
    // 
    std::string tag;
    // 
    std::string memberStatusString;
    // 
    bool isWinningTeam;
    // 
    bool isPlayerTeam;
    // 
    std::vector<LolHonorV2EndOfGamePlayer> players;
    // 
    int32_t teamId;
    // 
    std::vector<int32_t> championBans;
    // 
    std::string fullId;
    // 
    bool isBottomTeam;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2EndOfGameTeam& v) {
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

  inline void from_json(const nlohmann::json& j, LolHonorV2EndOfGameTeam& v) {
    v.stats = j.at("stats").get<nlohmann::json>;
    v.name = j.at("name").get<std::string>;
    v.tag = j.at("tag").get<std::string>;
    v.memberStatusString = j.at("memberStatusString").get<std::string>;
    v.isWinningTeam = j.at("isWinningTeam").get<bool>;
    v.isPlayerTeam = j.at("isPlayerTeam").get<bool>;
    v.players = j.at("players").get<std::vector<LolHonorV2EndOfGamePlayer>>;
    v.teamId = j.at("teamId").get<int32_t>;
    v.championBans = j.at("championBans").get<std::vector<int32_t>>;
    v.fullId = j.at("fullId").get<std::string>;
    v.isBottomTeam = j.at("isBottomTeam").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolHonorV2EndOfGameTeam_HPP
