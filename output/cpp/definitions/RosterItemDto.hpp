#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RosterItemDto_t {
    uint64_t accountId;
    int32_t summonerIconId;
    std::string summonerName;
    std::string clubRole;
  };

  inline void to_json(nlohmann::json& j, const RosterItemDto_t& v) {
    j["accountId"] = v.accountId;
    j["summonerIconId"] = v.summonerIconId;
    j["summonerName"] = v.summonerName;
    j["clubRole"] = v.clubRole;
  }

  inline void from_json(const nlohmann::json& j, RosterItemDto_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.summonerIconId = j.at("summonerIconId").get<int32_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.clubRole = j.at("clubRole").get<std::string>();
  }
  inline std::string to_string(const RosterItemDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
