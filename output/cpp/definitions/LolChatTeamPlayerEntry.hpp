#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatTeamPlayerEntry_t {
    uint64_t summonerId;
    std::string summonerInternalName;
    std::string summonerName;
  };

  inline void to_json(nlohmann::json& j, const LolChatTeamPlayerEntry_t& v) {
    j["summonerId"] = v.summonerId;
    j["summonerInternalName"] = v.summonerInternalName;
    j["summonerName"] = v.summonerName;
  }

  inline void from_json(const nlohmann::json& j, LolChatTeamPlayerEntry_t& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.summonerInternalName = j.at("summonerInternalName").get<std::string>();
    v.summonerName = j.at("summonerName").get<std::string>();
  }
}
