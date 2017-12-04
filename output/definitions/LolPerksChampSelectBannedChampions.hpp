#ifndef SWAGGER_TYPES_LolPerksChampSelectBannedChampions_HPP
#define SWAGGER_TYPES_LolPerksChampSelectBannedChampions_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolPerksChampSelectBannedChampions {
    // 
    std::vector<int32_t> myTeamBans;
    // 
    int32_t numBans;
    // 
    std::vector<int32_t> theirTeamBans;
  };

  void to_json(nlohmann::json& j, const LolPerksChampSelectBannedChampions& v) {
    j["myTeamBans"] = v.myTeamBans;
    j["numBans"] = v.numBans;
    j["theirTeamBans"] = v.theirTeamBans;
  }

  void from_json(const nlohmann::json& j, LolPerksChampSelectBannedChampions& v) {
    v.myTeamBans = j.at("myTeamBans").get<std::vector<int32_t>>;
    v.numBans = j.at("numBans").get<int32_t>;
    v.theirTeamBans = j.at("theirTeamBans").get<std::vector<int32_t>>;
  }

}
#endif // SWAGGER_TYPES_LolPerksChampSelectBannedChampions_HPP
