#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolClashClubsSummoner_t {
    std::string displayName;
    uint64_t summonerId;
    int32_t profileIconId;
  };

  inline void to_json(nlohmann::json& j, const LolClashClubsSummoner_t& v) {
    j["displayName"] = v.displayName;
    j["summonerId"] = v.summonerId;
    j["profileIconId"] = v.profileIconId;
  }

  inline void from_json(const nlohmann::json& j, LolClashClubsSummoner_t& v) {
    v.displayName = j.at("displayName").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.profileIconId = j.at("profileIconId").get<int32_t>();
  }
}
