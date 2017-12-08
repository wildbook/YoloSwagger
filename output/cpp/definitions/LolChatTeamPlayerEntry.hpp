#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatTeamPlayerEntry_t {
    std::string_t summonerInternalName;
    uint64_t_t summonerId;
    std::string_t summonerName;
  };

  inline void to_json(nlohmann::json& j, const LolChatTeamPlayerEntry_t& v) {
    j["summonerInternalName"] = v.summonerInternalName;
    j["summonerId"] = v.summonerId;
    j["summonerName"] = v.summonerName;
  }

  inline void from_json(const nlohmann::json& j, LolChatTeamPlayerEntry_t& v) {
    v.summonerInternalName = j.at("summonerInternalName").get<std::string_t>();
    v.summonerId = j.at("summonerId").get<uint64_t_t>();
    v.summonerName = j.at("summonerName").get<std::string_t>();
  }
  inline std::string to_string(const LolChatTeamPlayerEntry_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
