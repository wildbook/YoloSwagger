#ifndef SWAGGER_TYPES_LolChatTeamPlayerEntry_HPP
#define SWAGGER_TYPES_LolChatTeamPlayerEntry_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolChatTeamPlayerEntry {
    // 
    uint64_t summonerId;
    // 
    std::string summonerInternalName;
    // 
    std::string summonerName;
  };

  void to_json(nlohmann::json& j, const LolChatTeamPlayerEntry& v) {
    j["summonerId"] = v.summonerId;
    j["summonerInternalName"] = v.summonerInternalName;
    j["summonerName"] = v.summonerName;
  }

  void from_json(const nlohmann::json& j, LolChatTeamPlayerEntry& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.summonerInternalName = j.at("summonerInternalName").get<std::string>;
    v.summonerName = j.at("summonerName").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolChatTeamPlayerEntry_HPP
