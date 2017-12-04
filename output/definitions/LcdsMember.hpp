#ifndef SWAGGER_TYPES_LcdsMember_HPP
#define SWAGGER_TYPES_LcdsMember_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LcdsMember {
    // 
    bool hasDelegatedInvitePower;
    // 
    uint64_t summonerId;
    // 
    std::string summonerName;
  };

  void to_json(nlohmann::json& j, const LcdsMember& v) {
    j["hasDelegatedInvitePower"] = v.hasDelegatedInvitePower;
    j["summonerId"] = v.summonerId;
    j["summonerName"] = v.summonerName;
  }

  void from_json(const nlohmann::json& j, LcdsMember& v) {
    v.hasDelegatedInvitePower = j.at("hasDelegatedInvitePower").get<bool>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.summonerName = j.at("summonerName").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LcdsMember_HPP
