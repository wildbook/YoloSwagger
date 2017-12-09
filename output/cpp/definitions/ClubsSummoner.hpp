#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ClubsSummoner_t {
    std::string displayName;
    uint64_t summonerId;
    int32_t profileIconId;
  };

  inline void to_json(nlohmann::json& j, const ClubsSummoner_t& v) {
    j["displayName"] = v.displayName;
    j["summonerId"] = v.summonerId;
    j["profileIconId"] = v.profileIconId;
  }

  inline void from_json(const nlohmann::json& j, ClubsSummoner_t& v) {
    v.displayName = j.at("displayName").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.profileIconId = j.at("profileIconId").get<int32_t>();
  }
  inline std::string to_string(const ClubsSummoner_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
