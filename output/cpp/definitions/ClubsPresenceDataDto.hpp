#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ClubsPresenceDataDto_t {
    std::string summonerName;
    uint64_t summonerId;
    std::string clubTag;
    std::string clubName;
  };

  inline void to_json(nlohmann::json& j, const ClubsPresenceDataDto_t& v) {
    j["summonerName"] = v.summonerName;
    j["summonerId"] = v.summonerId;
    j["clubTag"] = v.clubTag;
    j["clubName"] = v.clubName;
  }

  inline void from_json(const nlohmann::json& j, ClubsPresenceDataDto_t& v) {
    v.summonerName = j.at("summonerName").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.clubTag = j.at("clubTag").get<std::string>();
    v.clubName = j.at("clubName").get<std::string>();
  }
  inline std::string to_string(const ClubsPresenceDataDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
