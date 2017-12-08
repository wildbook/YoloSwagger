#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolClashClubsSummoner_t {
    int32_t_t profileIconId;
    std::string_t displayName;
    uint64_t_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolClashClubsSummoner_t& v) {
    j["profileIconId"] = v.profileIconId;
    j["displayName"] = v.displayName;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolClashClubsSummoner_t& v) {
    v.profileIconId = j.at("profileIconId").get<int32_t_t>();
    v.displayName = j.at("displayName").get<std::string_t>();
    v.summonerId = j.at("summonerId").get<uint64_t_t>();
  }
  inline std::string to_string(const LolClashClubsSummoner_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
