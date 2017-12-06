#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLeaguesLeagueTeamMember_t {
    std::string name;
    float winRate;
    uint64_t id;
    uint64_t totalGamePlayed;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesLeagueTeamMember_t& v) {
    j["name"] = v.name;
    j["winRate"] = v.winRate;
    j["id"] = v.id;
    j["totalGamePlayed"] = v.totalGamePlayed;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesLeagueTeamMember_t& v) {
    v.name = j.at("name").get<std::string>();
    v.winRate = j.at("winRate").get<float>();
    v.id = j.at("id").get<uint64_t>();
    v.totalGamePlayed = j.at("totalGamePlayed").get<uint64_t>();
  }
}
