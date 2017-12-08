#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChampSelectChampSelectBannedChampions_t {
    std::vector<int32_t> theirTeamBans;
    int32_t numBans;
    std::vector<int32_t> myTeamBans;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectChampSelectBannedChampions_t& v) {
    j["theirTeamBans"] = v.theirTeamBans;
    j["numBans"] = v.numBans;
    j["myTeamBans"] = v.myTeamBans;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectChampSelectBannedChampions_t& v) {
    v.theirTeamBans = j.at("theirTeamBans").get<std::vector<int32_t>>();
    v.numBans = j.at("numBans").get<int32_t>();
    v.myTeamBans = j.at("myTeamBans").get<std::vector<int32_t>>();
  }
  inline std::string to_string(const LolChampSelectChampSelectBannedChampions_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
