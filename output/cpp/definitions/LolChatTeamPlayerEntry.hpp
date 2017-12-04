#ifndef SWAGGER_TYPES_LolChatTeamPlayerEntry_HPP
#define SWAGGER_TYPES_LolChatTeamPlayerEntry_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolChatTeamPlayerEntry {
    // 
    std::string summonerInternalName;
    // 
    uint64_t summonerId;
    // 
    std::string summonerName;
  };

  inline void to_json(nlohmann::json& j, const LolChatTeamPlayerEntry& v) {
    j["summonerInternalName"] = v.summonerInternalName;
    j["summonerId"] = v.summonerId;
    j["summonerName"] = v.summonerName;
  }

  inline void from_json(const nlohmann::json& j, LolChatTeamPlayerEntry& v) {
    v.summonerInternalName = j.at("summonerInternalName").get<std::string>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.summonerName = j.at("summonerName").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolChatTeamPlayerEntry_HPP
