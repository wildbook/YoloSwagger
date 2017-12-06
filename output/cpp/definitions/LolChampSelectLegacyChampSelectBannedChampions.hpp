#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChampSelectLegacyChampSelectBannedChampions_t {
    std::vector<int32_t> myTeamBans;
    int32_t numBans;
    std::vector<int32_t> theirTeamBans;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyChampSelectBannedChampions_t& v) {
    j["myTeamBans"] = v.myTeamBans;
    j["numBans"] = v.numBans;
    j["theirTeamBans"] = v.theirTeamBans;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyChampSelectBannedChampions_t& v) {
    v.myTeamBans = j.at("myTeamBans").get<std::vector<int32_t>>();
    v.numBans = j.at("numBans").get<int32_t>();
    v.theirTeamBans = j.at("theirTeamBans").get<std::vector<int32_t>>();
  }
}
