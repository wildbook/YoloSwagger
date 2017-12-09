#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolClashClubsSummoner_t {
    uint64_t summonerId;
    std::string displayName;
    int32_t profileIconId;
  };

  inline void to_json(nlohmann::json& j, const LolClashClubsSummoner_t& v) {
    j["summonerId"] = v.summonerId;
    j["displayName"] = v.displayName;
    j["profileIconId"] = v.profileIconId;
  }

  inline void from_json(const nlohmann::json& j, LolClashClubsSummoner_t& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.displayName = j.at("displayName").get<std::string>();
    v.profileIconId = j.at("profileIconId").get<int32_t>();
  }
  inline std::string to_string(const LolClashClubsSummoner_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
