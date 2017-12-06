#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolClashClubsSummoner_t {
    std::string displayName;
    int32_t profileIconId;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolClashClubsSummoner_t& v) {
    j["displayName"] = v.displayName;
    j["profileIconId"] = v.profileIconId;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolClashClubsSummoner_t& v) {
    v.displayName = j.at("displayName").get<std::string>();
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
}
