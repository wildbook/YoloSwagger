#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LcdsMember_t {
    std::string summonerName;
    bool hasDelegatedInvitePower;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LcdsMember_t& v) {
    j["summonerName"] = v.summonerName;
    j["hasDelegatedInvitePower"] = v.hasDelegatedInvitePower;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LcdsMember_t& v) {
    v.summonerName = j.at("summonerName").get<std::string>();
    v.hasDelegatedInvitePower = j.at("hasDelegatedInvitePower").get<bool>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const LcdsMember_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
