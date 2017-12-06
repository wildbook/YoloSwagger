#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LcdsMember_t {
    std::string summonerName;
    uint64_t summonerId;
    bool hasDelegatedInvitePower;
  };

  inline void to_json(nlohmann::json& j, const LcdsMember_t& v) {
    j["summonerName"] = v.summonerName;
    j["summonerId"] = v.summonerId;
    j["hasDelegatedInvitePower"] = v.hasDelegatedInvitePower;
  }

  inline void from_json(const nlohmann::json& j, LcdsMember_t& v) {
    v.summonerName = j.at("summonerName").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.hasDelegatedInvitePower = j.at("hasDelegatedInvitePower").get<bool>();
  }
}
