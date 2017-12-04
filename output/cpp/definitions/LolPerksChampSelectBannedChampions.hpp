#ifndef SWAGGER_TYPES_LolPerksChampSelectBannedChampions_HPP
#define SWAGGER_TYPES_LolPerksChampSelectBannedChampions_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolPerksChampSelectBannedChampions {
    // 
    std::vector<int32_t> theirTeamBans;
    // 
    std::vector<int32_t> myTeamBans;
    // 
    int32_t numBans;
  };

  inline void to_json(nlohmann::json& j, const LolPerksChampSelectBannedChampions& v) {
    j["theirTeamBans"] = v.theirTeamBans;
    j["myTeamBans"] = v.myTeamBans;
    j["numBans"] = v.numBans;
  }

  inline void from_json(const nlohmann::json& j, LolPerksChampSelectBannedChampions& v) {
    v.theirTeamBans = j.at("theirTeamBans").get<std::vector<int32_t>>;
    v.myTeamBans = j.at("myTeamBans").get<std::vector<int32_t>>;
    v.numBans = j.at("numBans").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolPerksChampSelectBannedChampions_HPP
