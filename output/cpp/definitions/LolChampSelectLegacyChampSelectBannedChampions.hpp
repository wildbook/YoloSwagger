#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChampSelectLegacyChampSelectBannedChampions_t {
    std::vector<int32_t> theirTeamBans;
    std::vector<int32_t> myTeamBans;
    int32_t_t numBans;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyChampSelectBannedChampions_t& v) {
    j["theirTeamBans"] = v.theirTeamBans;
    j["myTeamBans"] = v.myTeamBans;
    j["numBans"] = v.numBans;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyChampSelectBannedChampions_t& v) {
    v.theirTeamBans = j.at("theirTeamBans").get<std::vector<int32_t>>();
    v.myTeamBans = j.at("myTeamBans").get<std::vector<int32_t>>();
    v.numBans = j.at("numBans").get<int32_t_t>();
  }
  inline std::string to_string(const LolChampSelectLegacyChampSelectBannedChampions_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
