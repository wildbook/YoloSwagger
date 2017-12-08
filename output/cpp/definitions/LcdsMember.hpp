#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LcdsMember_t {
    bool hasDelegatedInvitePower;
    uint64_t summonerId;
    std::string summonerName;
  };

  inline void to_json(nlohmann::json& j, const LcdsMember_t& v) {
    j["hasDelegatedInvitePower"] = v.hasDelegatedInvitePower;
    j["summonerId"] = v.summonerId;
    j["summonerName"] = v.summonerName;
  }

  inline void from_json(const nlohmann::json& j, LcdsMember_t& v) {
    v.hasDelegatedInvitePower = j.at("hasDelegatedInvitePower").get<bool>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
  }
  inline std::string to_string(const LcdsMember_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
