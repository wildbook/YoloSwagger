#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ClubsSummoner_t {
    int32_t profileIconId;
    std::string displayName;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const ClubsSummoner_t& v) {
    j["profileIconId"] = v.profileIconId;
    j["displayName"] = v.displayName;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, ClubsSummoner_t& v) {
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.displayName = j.at("displayName").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const ClubsSummoner_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
