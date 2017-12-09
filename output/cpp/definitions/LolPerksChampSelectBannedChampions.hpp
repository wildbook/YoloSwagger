#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPerksChampSelectBannedChampions_t {
    int32_t numBans;
    std::vector<int32_t> theirTeamBans;
    std::vector<int32_t> myTeamBans;
  };

  inline void to_json(nlohmann::json& j, const LolPerksChampSelectBannedChampions_t& v) {
    j["numBans"] = v.numBans;
    j["theirTeamBans"] = v.theirTeamBans;
    j["myTeamBans"] = v.myTeamBans;
  }

  inline void from_json(const nlohmann::json& j, LolPerksChampSelectBannedChampions_t& v) {
    v.numBans = j.at("numBans").get<int32_t>();
    v.theirTeamBans = j.at("theirTeamBans").get<std::vector<int32_t>>();
    v.myTeamBans = j.at("myTeamBans").get<std::vector<int32_t>>();
  }
  inline std::string to_string(const LolPerksChampSelectBannedChampions_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
