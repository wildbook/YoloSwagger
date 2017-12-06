#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLeaguesLeagueTeamMember_t {
    uint64_t id;
    std::string name;
    uint64_t totalGamePlayed;
    float winRate;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesLeagueTeamMember_t& v) {
    j["id"] = v.id;
    j["name"] = v.name;
    j["totalGamePlayed"] = v.totalGamePlayed;
    j["winRate"] = v.winRate;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesLeagueTeamMember_t& v) {
    v.id = j.at("id").get<uint64_t>();
    v.name = j.at("name").get<std::string>();
    v.totalGamePlayed = j.at("totalGamePlayed").get<uint64_t>();
    v.winRate = j.at("winRate").get<float>();
  }
}
