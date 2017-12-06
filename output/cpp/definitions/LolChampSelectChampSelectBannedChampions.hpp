#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChampSelectChampSelectBannedChampions_t {
    std::vector<int32_t> myTeamBans;
    std::vector<int32_t> theirTeamBans;
    int32_t numBans;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectChampSelectBannedChampions_t& v) {
    j["myTeamBans"] = v.myTeamBans;
    j["theirTeamBans"] = v.theirTeamBans;
    j["numBans"] = v.numBans;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectChampSelectBannedChampions_t& v) {
    v.myTeamBans = j.at("myTeamBans").get<std::vector<int32_t>>();
    v.theirTeamBans = j.at("theirTeamBans").get<std::vector<int32_t>>();
    v.numBans = j.at("numBans").get<int32_t>();
  }
}
