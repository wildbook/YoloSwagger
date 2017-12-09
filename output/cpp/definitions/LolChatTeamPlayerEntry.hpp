#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatTeamPlayerEntry_t {
    std::string summonerInternalName;
    std::string summonerName;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolChatTeamPlayerEntry_t& v) {
    j["summonerInternalName"] = v.summonerInternalName;
    j["summonerName"] = v.summonerName;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolChatTeamPlayerEntry_t& v) {
    v.summonerInternalName = j.at("summonerInternalName").get<std::string>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const LolChatTeamPlayerEntry_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
